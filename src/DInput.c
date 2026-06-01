// SPDX-License-Identifier: MIT

#include "DInput.h"

#ifdef NFS_CPP
	void Release_wrap(void *);
	void CreateDevice_wrap(void *);
	void EnumDevices_wrap(void *);
	void QueryInterface_wrap(void *);

	void GetCapabilities_wrap(void *);
	void SetProperty_wrap(void *);
	void Acquire_wrap(void *);
	void Unacquire_wrap(void *);
	void GetDeviceState_wrap(void *);
	void GetDeviceData_wrap(void *);
	void SetDataFormat_wrap(void *);
	void SetEventNotification_wrap(void *);
	void SetCooperativeLevel_wrap(void *);
	void GetObjectInfo_wrap(void *);
	void CreateEffect_wrap(void *);
	void SendForceFeedbackCommand_wrap(void *);
	void Poll_wrap(void *);

	void SetParameters_wrap(void *);
	void Start_wrap(void *);
	void Stop_wrap(void *);
	void Download_wrap(void *);
	void Unload_wrap(void *);

	int32_t wrap_stdcall2_ret(void *this, void *func, int32_t arg0, int32_t arg1);

	static void *dinput_game_thread;

	#define WRAP_NAME(name) name##_wrap
	#define MAYBE_STATIC
#else
	#define WRAP_NAME(name) name
	#define MAYBE_STATIC static
#endif

#include <SDL3/SDL_events.h>
#include <SDL3/SDL.h>

#define MOUSE        0x6F1D2B60
#define JOYSTICK     0x6F1D2B70
#define FORCE_CONST  0x13541C20
#define FORCE_SQUARE 0x13541C22
#define FORCE_SPRING 0x13541C27

#define USE_ORIGINAL_SPRING_VALUES 0

static const char *g_joyPaths[2];
static SDL_ThreadID g_mainThread;
static uint8_t g_buttonsPressedCount[2][32];

extern SDL_Window *sdlWin;
extern int32_t winWidth, winHeight;
extern float dpr;

extern SDL_TouchID touchId;
extern float touchDX, touchDY;

extern int32_t joystickAxes[2][12];
extern BOOL joystickApplyDeadzone, joystickDisableAxesInMenu;
extern int32_t joystickEscButton[2], joystickResetButton[2], joystickDPadButtons[2][4];

#ifdef NFS_CPP
	extern uint32_t *dword_557540;
	extern uint32_t *mousePositionX, *mousePositionY;
	extern uint8_t *inControlAssignMode;

	#define dword_557540 (*&dword_557540)
	#define mousePositionX (*mousePositionX)
	#define mousePositionY (*mousePositionY)
	#define inControlAssignMode (*inControlAssignMode)
#else
	extern uint32_t dword_557540;
	extern uint32_t mousePositionX, mousePositionY;
	extern uint8_t inControlAssignMode;

	#define dword_557540 (&dword_557540)
#endif

static void simulateKey(int32_t keycode, int32_t scancode, uint8_t pressed, uint8_t *lastPressed)
{
	SDL_Event event = {0};
	event.key.key = keycode;
	event.key.scancode = scancode;
	if (pressed && !*lastPressed)
	{
		event.type = SDL_EVENT_KEY_DOWN;
		SDL_PushEvent(&event);
		*lastPressed = pressed;
	}
	else if (!pressed && *lastPressed)
	{
		event.type = SDL_EVENT_KEY_UP;
		SDL_PushEvent(&event);
		*lastPressed = pressed;
	}
}

static inline int16_t convertDiToS16(int32_t magniture)
{
	return (SDL_min(magniture, 10000) * 0x7FFF) / 10000;
}
#if USE_ORIGINAL_SPRING_VALUES
static inline uint16_t convertDiToU16(uint32_t magniture)
{
	return (SDL_min(magniture, 10000u) * 0xFFFF) / 10000;
}
#endif
static inline uint32_t convertDiLength(uint32_t diLen)
{
	if (diLen == SDL_HAPTIC_INFINITY)
		return SDL_HAPTIC_INFINITY;
	return diLen / 1000;
}

static void maybeInitEffect(DirectInputDevice *dev, DirectInputEffect *eff)
{
	if (eff->joy || eff->haptic)
		return;

	if (dev->rumble)
	{
		/* Use only square force for rumble, because this API is too simple to use two forces smoothly */
		switch (eff->guid.a)
		{
			case FORCE_SQUARE:
				eff->effect.type = SDL_HAPTIC_LEFTRIGHT;
				break;
			default:
				return;
		}
		eff->joy = dev->joy;
	}
	else if (dev->haptic)
	{
		const char *effName = NULL;
		int32_t query = SDL_GetHapticFeatures(dev->haptic);
		switch (eff->guid.a)
		{
			case FORCE_CONST:
			{
				/* Use Sine effect instead of Constant effect if it doesn't exists */
				if (query & SDL_HAPTIC_CONSTANT)
					eff->effect.type = SDL_HAPTIC_CONSTANT;
				else if (query & SDL_HAPTIC_SINE)
					eff->effect.type = SDL_HAPTIC_SINE;
				effName = "Constant";
				break;
			}
			case FORCE_SQUARE:
				/* Use Sine effect instead of Square (SDL2 doesn't have Square effect) */
				if (query & SDL_HAPTIC_SINE)
					eff->effect.type = SDL_HAPTIC_SINE;
				effName = "Sine";
				break;
			case FORCE_SPRING:
				if (query & SDL_HAPTIC_SPRING)
					eff->effect.type = SDL_HAPTIC_SPRING;
				effName = "Spring";
				break;
		}

		int32_t joyIdx = dev->guid.b;
		if (eff->effect.type != 0)
		{
			eff->haptic = dev->haptic;
			eff->useCartesian = dev->useCartesian;
			if (eff->guid.a == FORCE_CONST && eff->effect.type == SDL_HAPTIC_SINE)
			{
				printf("Effect: \"%s\" will be converted to effect: \"Sine\"\n", effName); fflush(stdout);
			}
		}
		else
		{
			printf("Effect: \"%s\" not found for joystick: %d\n", effName, joyIdx); fflush(stdout);
		}
	}
}

static void ensureJoyOpen(DirectInputDevice *dev)
{
	int32_t joyIdx = dev->guid.b;
	SDL_Joystick *joy = dev->joy;

	int32_t i;

	if (joy && !SDL_JoystickConnected(joy))
	{
		if (dev->haptic)
		{
			printf("Closed haptic for joystick index: %d\n", joyIdx); fflush(stdout);
			SDL_CloseHaptic(dev->haptic);
			dev->haptic = NULL;
		}

		for (i = 0; i < dev->num_effects; ++i)
		{
			memset(&dev->effects[i]->effect, 0, sizeof(SDL_HapticEffect));
			dev->effects[i]->playing = false;
			dev->effects[i]->joy = NULL;
			dev->effects[i]->haptic = NULL;
			dev->effects[i]->effect_idx = -1;
		}

		SDL_CloseJoystick(joy);
		dev->joy = joy = NULL;

		g_joyPaths[joyIdx] = NULL;

		dev->rumble = false;

		printf("Closed joystick at index: %d\n", joyIdx); fflush(stdout);
	}

	if (!joy)
	{
		if (joyIdx == 1 && !g_joyPaths[0])
			return; // First joystick not open - don't open second joystick

		int32_t n;
		SDL_JoystickID *ids = SDL_GetJoysticks(&n);
		for (i = 0; i < n; ++i)
		{
			SDL_JoystickID id = ids[i];
			const char *name = SDL_GetJoystickNameForID(id);
#ifdef __ANDROID__
			if (n > 1 && name && strcmp(name, "Android Accelerometer") == 0)
				continue;
#else
			if (name && strstr(name, "SynPS/2"))
				continue;
#endif

			const char *anotherPath = g_joyPaths[1 - joyIdx];
			const char *path = SDL_GetJoystickPathForID(id);
			if (anotherPath && path && strcmp(path, anotherPath) == 0)
				continue; //Joystick already open at another index

			dev->joy = joy = SDL_OpenJoystick(id);
			if (dev->joy)
			{
				g_joyPaths[joyIdx] = path;
				printf("Joystick \"%s\" opened at system index: %d at index: %d at: %s\n", SDL_GetJoystickName(joy), i, joyIdx, path); fflush(stdout);
			}

			break;
		}
		SDL_free(ids);
		if (!joy)
			return;

		dev->haptic = SDL_OpenHapticFromJoystick(joy);
		if (dev->haptic)
		{
			printf("Haptic opened for joystick index: %d", joyIdx);
		}
		else
		{
			/* Try to open haptic by matching the name with joystick name */
			const char *joyName = SDL_GetJoystickName(joy);
			int32_t hn;
			SDL_HapticID *hids = SDL_GetHaptics(&hn);
			for (i = 0; i < hn; ++i)
			{
				SDL_HapticID hid = hids[i];
				const char *name = SDL_GetHapticNameForID(hid);
				if (name && strcmp(name, joyName) == 0)
				{
					dev->haptic = SDL_OpenHaptic(hid);
					if (dev->haptic)
					{
						printf("Haptic \"%s\" opened at system index: %d for joystick index: %d", name, i, joyIdx);
					}
					break;
				}
			}
			SDL_free(hids);
		}

		if (dev->haptic)
		{
			int32_t hapticNumAxes = SDL_GetNumHapticAxes(dev->haptic);

			if (hapticNumAxes == 1)
				dev->useCartesian = true;
#ifdef linux
			else if (hapticNumAxes == 2 && SDL_GetJoystickType(joy) == SDL_JOYSTICK_TYPE_WHEEL)
				dev->useCartesian = true; //Linux detects Logitech G29 as 2-axis haptic device
#endif
			else
				dev->useCartesian = false;

			printf(", num axes: %d, %s coordinates\n", hapticNumAxes, dev->useCartesian ? "cartesian" : "polar");
			fflush(stdout);

			/* Re-apply gain */
			if (dev->gain < 100)
				SDL_SetHapticGain(dev->haptic, dev->gain);
		}
		else if (SDL_GetJoystickType(joy) == SDL_JOYSTICK_TYPE_GAMEPAD)
		{
			/* Use rumble as a fallback */
			dev->rumble = true;
			if (dev->rumble)
			{
				printf("Using rumble for joystick index: %d\n", joyIdx); fflush(stdout);
			}
		}

		/* Re-open effects */
		for (i = 0; i < dev->num_effects; ++i)
			maybeInitEffect(dev, dev->effects[i]);
	}
}

static void maybeRestartEffect(DirectInputEffect *eff)
{
	if (!eff->playing)
		return;

//	fprintf(stderr, "[%p] Start effect 0x%.2X\n", eff, eff->effect.type);

	if (eff->joy)
	{
		const SDL_HapticLeftRight *lr = &eff->effect.leftright;
		uint32_t gain = SDL_min(eff->gain, 100u);
		if (gain > 0)
		{
			SDL_RumbleJoystick(eff->joy, lr->large_magnitude * gain / 100, lr->small_magnitude * gain / 100, lr->length);
		}
	}
	else if (eff->haptic && eff->effect_idx >= 0)
	{
		SDL_RunHapticEffect(eff->haptic, eff->effect_idx, 1);
	}
}
static void maybeStopEffect(DirectInputEffect *eff, BOOL pause)
{
	if (!eff->playing)
		return;

//	fprintf(stderr, "[%p] Stop effect 0x%.2X\n", eff, eff->effect.type);

	if (eff->joy)
	{
		SDL_RumbleJoystick(eff->joy, 0, 0, 0);
	}
	else if (eff->haptic && eff->effect_idx >= -1)
	{
		SDL_StopHapticEffect(eff->haptic, eff->effect_idx);
	}

	if (!pause)
		eff->playing = false;
}

static void setEffect(DirectInputEffect *dinputEffect, const DIEFFECT *di_eff)
{
	uint32_t length = convertDiLength(di_eff->duration);
	switch (dinputEffect->guid.a)
	{
		case FORCE_CONST:
		{
			const DICONSTANTFORCE *di_constant = DINPUT_ADDR(const DICONSTANTFORCE, di_eff->typeSpecificParams);
			switch (dinputEffect->effect.type)
			{
				case SDL_HAPTIC_CONSTANT:
				{
					SDL_HapticConstant *sdl_constant = &dinputEffect->effect.constant;
					sdl_constant->length = length;
					sdl_constant->level = convertDiToS16(di_constant->magnitude);
					if (dinputEffect->useCartesian)
					{
						sdl_constant->direction.type = SDL_HAPTIC_CARTESIAN;
						int32_t direction = DINPUT_ADDR(const uint32_t, di_eff->rglDirection)[0] / 100;
	//					fprintf(stderr, "Constant: %d\n", direction);
						if (direction > 0 && direction < 180)
						{
							int32_t tmp = direction;
							if (tmp > 90)
								tmp = 180 - tmp;
							sdl_constant->level = sdl_constant->level * tmp / 90; //Reduce level if not 90 degrees
							sdl_constant->direction.dir[0] = 1;
						}
						else if (direction > 180 && direction < 360)
						{
							int32_t tmp = direction - 180;
							if (tmp > 90)
								tmp = 180 - tmp;
							sdl_constant->level = sdl_constant->level * tmp / 90; //Reduce level if not 270 degrees
							sdl_constant->direction.dir[0] = -1;
						}
						else if (SDL_GetHapticFeatures(dinputEffect->haptic) & SDL_HAPTIC_SINE)
						{
							/* Use sine force for 0 or 180 (can't determine the direction) */
							SDL_HapticEffect backup = dinputEffect->effect;
							memset(&dinputEffect->effect, 0, sizeof(SDL_HapticEffect));
							dinputEffect->effect.type = SDL_HAPTIC_SINE;
							dinputEffect->constantToSineDivider = 2;
							setEffect(dinputEffect, di_eff);
							dinputEffect->constantToSineDivider = 0;
							dinputEffect->effect = backup;
							return;
						}
						else
						{
							/* Disable effect if sine force is not supported for 0 or 180 */
							sdl_constant->level = 0;
						}
					}
					else
					{
						sdl_constant->direction.type = SDL_HAPTIC_POLAR;
						sdl_constant->direction.dir[0] = DINPUT_ADDR(const uint32_t, di_eff->rglDirection)[0];
					}
					break;
				}
				case SDL_HAPTIC_SINE:
				{
					/* Convert constant force to sine force */
					SDL_HapticPeriodic *sdl_periodic = &dinputEffect->effect.periodic;
					sdl_periodic->length = length;
					sdl_periodic->period = 75;
					sdl_periodic->magnitude = convertDiToS16(di_constant->magnitude);
					if (dinputEffect->constantToSineDivider > 0)
						sdl_periodic->magnitude /= dinputEffect->constantToSineDivider;
					sdl_periodic->direction.type = SDL_HAPTIC_CARTESIAN;
					break;
				}
			}
			break;
		}
		case FORCE_SQUARE:
		{
			const DIPERIODIC *di_periodic = DINPUT_ADDR(const DIPERIODIC, di_eff->typeSpecificParams);
			switch (dinputEffect->effect.type)
			{
				case SDL_HAPTIC_SINE:
				{
					SDL_HapticPeriodic *sdl_periodic = &dinputEffect->effect.periodic;
					sdl_periodic->length = length;
					sdl_periodic->period = convertDiLength(di_periodic->period);
					sdl_periodic->magnitude = convertDiToS16(di_periodic->magnitude);
					sdl_periodic->offset = convertDiToS16(di_periodic->offset);
					sdl_periodic->phase = di_periodic->phase;
					sdl_periodic->direction.type = SDL_HAPTIC_CARTESIAN;
					break;
				}
				case SDL_HAPTIC_LEFTRIGHT:
				{
					/* Rumble */
					SDL_HapticLeftRight *sdl_lr = &dinputEffect->effect.leftright;
					sdl_lr->length = length;
					sdl_lr->large_magnitude = convertDiToS16(di_periodic->magnitude);
					sdl_lr->small_magnitude = sdl_lr->large_magnitude;
					break;
				}
			}
			break;
		}
		case FORCE_SPRING:
		{
			const DICONDITION *di_condition = DINPUT_ADDR(const DICONDITION, di_eff->typeSpecificParams);
			SDL_HapticCondition *sdl_condition = &dinputEffect->effect.condition;
			sdl_condition->length = length;
			sdl_condition->center[0] = convertDiToS16(di_condition[0].offset);
#if USE_ORIGINAL_SPRING_VALUES // When center is negative, other values are almost binary (max/off, game bug?)
			/* Deadband always 0, saturation and coeff always the same */
			sdl_condition->right_sat[0] = convertDiToU16(di_condition[0].positiveSaturation);
			sdl_condition->left_sat[0] = convertDiToU16(di_condition[0].negativeSaturation);
			sdl_condition->right_coeff[0] = convertDiToS16(di_condition[0].positiveCoefficient);
			sdl_condition->left_coeff[0] = convertDiToS16(di_condition[0].negativeCoefficient);
			sdl_condition->deadband[0] = convertDiToU16(di_condition[0].deadBand);
#else // Set saturation and coeff from center value
			int32_t val = SDL_abs(sdl_condition->center[0]);
			sdl_condition->right_sat[0]   = sdl_condition->left_sat[0]   = val * 2;
			sdl_condition->right_coeff[0] = sdl_condition->left_coeff[0] = val;
#endif
			if (dinputEffect->useCartesian)
				sdl_condition->direction.type = SDL_HAPTIC_CARTESIAN;
			else
				sdl_condition->direction.type = SDL_HAPTIC_POLAR;

//			fprintf(stderr, "Spring: %6d %6d\n",
//				sdl_condition->right_coeff[0],
//				sdl_condition->center[0]
//			);

			break;
		}
	}

	if (dinputEffect->haptic)
	{
		if (dinputEffect->effect_idx >= 0 && SDL_UpdateHapticEffect(dinputEffect->haptic, dinputEffect->effect_idx, &dinputEffect->effect) != 0)
		{
			/* Usually happens when we changed effect type */
			SDL_DestroyHapticEffect(dinputEffect->haptic, dinputEffect->effect_idx);
			dinputEffect->effect_idx = -1;
		}
		if (dinputEffect->effect_idx < 0)
		{
			dinputEffect->effect_idx = SDL_CreateHapticEffect(dinputEffect->haptic, &dinputEffect->effect);
			if (dinputEffect->effect_idx < 0)
			{
				printf("%s (effect type: 0x%.2X)\n", SDL_GetError(), dinputEffect->effect.type); fflush(stdout);
			}
		}
	}
}

/// DirectInputObject

MAYBE_STATIC REALIGN STDCALL uint32_t QueryInterface(void **this, const IID *const riid, void **object)
{
	/* Joystick only */
	++((DirectInputObject *)((char *)DTHIS_PTR(this) - sizeof(DirectInputObject)))->ref;
	write32le(object, (uint32_t)(uintptr_t)this);
	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t Release(void **this)
{
	void *obj = DTHIS_PTR(this);
	DirectInputObject *dinputObj = (DirectInputObject *)((char *)obj - sizeof(DirectInputObject));
	if (--dinputObj->ref)
		return 0;

	if (dinputObj->is_device)
	{
		DirectInputDevice *dinputDev = DTHIS(DirectInputDevice, this);
		if (dinputDev->guid.a == JOYSTICK)
		{
			int32_t joyIdx = dinputDev->guid.b;

			int32_t i;
			for (i = 0; i != dinputDev->num_effects; ++i)
#if defined(HOST_64BIT)
				free32((void *)dinputDev->effects[i] - sizeof(DirectInputObject));
#else
				free((void *)dinputDev->effects[i] - sizeof(DirectInputObject));
#endif
			free(dinputDev->effects);

			if (dinputDev->haptic)
				SDL_CloseHaptic(dinputDev->haptic);

			if (dinputDev->joy)
				SDL_CloseJoystick(dinputDev->joy);

			g_joyPaths[joyIdx] = NULL;
		}
	}

#if defined(HOST_64BIT)
	free32(dinputObj);
	free32(this);
#else
	free(dinputObj);
	free(this);
#endif

	return 0;
}

/// DirectInputEffect

MAYBE_STATIC REALIGN STDCALL uint32_t SetParameters(DirectInputEffect **this, const DIEFFECT *eff, uint32_t flags)
{
	DirectInputEffect *eff_obj = DTHIS(DirectInputEffect, this);
	setEffect(eff_obj, eff);
	maybeRestartEffect(eff_obj);
	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t Start(DirectInputEffect **this, uint32_t iterations, uint32_t flags)
{
	DirectInputEffect *eff_obj = DTHIS(DirectInputEffect, this);
	eff_obj->playing = true;
	maybeRestartEffect(eff_obj);
	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t Stop(DirectInputEffect **this)
{
	maybeStopEffect(DTHIS(DirectInputEffect, this), false);
	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t Download(DirectInputEffect **this)
{
	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t Unload(DirectInputEffect **this)
{
	maybeStopEffect(DTHIS(DirectInputEffect, this), false);
	return 0;
}

/// DirectInputDevice

MAYBE_STATIC REALIGN STDCALL uint32_t GetCapabilities(DirectInputDevice **this, DIDEVCAPS *devCaps)
{
	/* Joystick only */
	DirectInputDevice *dev = DTHIS(DirectInputDevice, this);
	if (dev->guid.a == JOYSTICK)
	{
		memset(&devCaps->flags, 0, sizeof(DIDEVCAPS) - sizeof(uint32_t));
		devCaps->flags = 0x100; //DIDC_FORCEFEEDBACK
		devCaps->buttons = 32;
		devCaps->axes = 6;
	}
	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t SetProperty(DirectInputDevice **this, const GUID *const rguidProp, const DIPROPHEADER *pdiph)
{
	DirectInputDevice *dev = DTHIS(DirectInputDevice, this);
	if (rguidProp == (void *)0x7 /*DIPROP_FFGAIN*/)
	{
		dev->gain = ((const DIPROPDWORD *)pdiph)->dwData / 100;
		if (dev->haptic)
			SDL_SetHapticGain(dev->haptic, dev->gain);
	}
	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t Acquire(DirectInputDevice **this)
{
	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t Unacquire(DirectInputDevice **this)
{
	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t GetDeviceState(DirectInputDevice **this, uint32_t cbData, void *data)
{
	/* Joystick only */
	DirectInputDevice *dev = DTHIS(DirectInputDevice, this);
	if (!data || cbData != sizeof(DIJOYSTATE) || dev->guid.a != JOYSTICK)
		return 0;

	DIJOYSTATE *joyState = (DIJOYSTATE *)data;
	SDL_memset4(joyState->axes, 0x8000, 8);
	memset(joyState->buttons, 0, sizeof joyState->buttons);

	SDL_Joystick *joy = dev->joy;
	if (!joy)
		return 0;

	int32_t joyIdx = dev->guid.b;

	int32_t numButtons = SDL_min(SDL_GetNumJoystickButtons(joy), 32);
	int32_t numAxes = SDL_min(SDL_GetNumJoystickAxes(joy), 6);
	int32_t numHats = SDL_GetNumJoystickHats(joy);

	int32_t i;

	if (joystickEscButton[joyIdx] >= 0 && joystickEscButton[joyIdx] < numButtons)
	{
		simulateKey(SDLK_ESCAPE, SDL_SCANCODE_ESCAPE, SDL_GetJoystickButton(joy, joystickEscButton[joyIdx]), &dev->escPressed);
	}
	if (joystickResetButton[joyIdx] >= 0 && joystickResetButton[joyIdx] < numButtons)
	{
		simulateKey(SDLK_F11 + joyIdx, SDL_SCANCODE_F11 + joyIdx, SDL_GetJoystickButton(joy, joystickResetButton[joyIdx]), &dev->resetPressed);
	}
	if (numHats > 0)
	{
		uint8_t pressed[4] = {0};
		switch (SDL_GetJoystickHat(joy, 0))
		{
			case SDL_HAT_CENTERED:
				break;
			case SDL_HAT_UP:
				pressed[3] = 1;
				numButtons = 0;
				break;
			case SDL_HAT_RIGHT:
				pressed[0] = 1;
				numButtons = 0;
				break;
			case SDL_HAT_DOWN:
				pressed[2] = 1;
				numButtons = 0;
				break;
			case SDL_HAT_LEFT:
				pressed[1] = 1;
				numButtons = 0;
				break;
			default:
				numButtons = 0;
				break;
		}
		for (i = 0; i < 4; ++i)
		{
			simulateKey(SDLK_RIGHT + i, SDL_SCANCODE_RIGHT + i, pressed[i], &dev->dpadPressed[i]);
		}
	}
	else for (i = 0; i < 4; ++i)
	{
		if (joystickDPadButtons[joyIdx][i] >= 0 && joystickDPadButtons[joyIdx][i] < numButtons)
		{
			simulateKey(SDLK_RIGHT + i, SDL_SCANCODE_RIGHT + i, SDL_GetJoystickButton(joy, joystickDPadButtons[joyIdx][i]), &dev->dpadPressed[i]);
		}
	}

	//Delay the button pressed information in control assign mode to allow axis detection
	//when we have axis which works also like a button
	const BOOL delayButtons = inControlAssignMode;
	for (i = 0; i < numButtons; ++i)
	{
		BOOL ignore = false;
		int32_t j;
		if (i == joystickEscButton[joyIdx] || i == joystickResetButton[joyIdx])
		{
			ignore = true;
		}
		else for (j = 0; j < 4; ++j)
		{
			if (i == joystickDPadButtons[joyIdx][j])
				ignore = true;
		}
		if (!ignore) //Skip joystick button assigned as keyboard keys
		{
			const uint8_t maxPressedCount = 50;
			uint8_t pressed = SDL_GetJoystickButton(joy, i);
			uint8_t *pressedCount = &g_buttonsPressedCount[joyIdx][i];
			if (pressed)
			{
				if (delayButtons && *pressedCount < maxPressedCount)
					*pressedCount += 1;
			}
			else if (*pressedCount > 0)
			{
				*pressedCount -= 1;
			}
			if ((!delayButtons && *pressedCount == 0) || *pressedCount == maxPressedCount)
			{
				joyState->buttons[i] = pressed << 7;
			}
		}
	}

	const BOOL isGameThread = (g_mainThread != SDL_GetCurrentThreadID());
	if (isGameThread || delayButtons || (numHats <= 0 && !joystickDisableAxesInMenu))
	{
		for (i = 0; i < numAxes; ++i)
		{
			if (joystickAxes[joyIdx][i] < 0)
				continue;

			int32_t *axis = &joyState->axes[i < 3 ? i : i + 2];
			*axis = (uint16_t)SDL_GetJoystickAxis(joy, joystickAxes[joyIdx][i]) ^ 0x8000;
			if (joystickAxes[joyIdx][i + 6] > 0)
				*axis = (*axis >> 1) + 32768;
			else if (joystickAxes[joyIdx][i + 6] < 0)
				*axis = 65535 - (*axis >> 1);
		}
	}

	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t GetDeviceData(DirectInputDevice **this, uint32_t cbObjectData, DIDEVICEOBJECTDATA *rgdod, uint32_t *pdwInOut, uint32_t dwFlags)
{
	/* Mouse only. This implementation forces the absolute position of the mouse cursor. */
	DirectInputDevice *dev = DTHIS(DirectInputDevice, this);
	if (!rgdod || !pdwInOut || dev->guid.a != MOUSE || *pdwInOut < 3)
		return 0;

	uint32_t i;
	memset(rgdod, 0, *pdwInOut * sizeof(DIDEVICEOBJECTDATA));
	rgdod[0].dwOfs = 0; //Mouse X
	rgdod[1].dwOfs = 4; //Mouse Y
	rgdod[2].dwOfs = 12; //Mouse Click
	for (i = 3; i < *pdwInOut; ++i)
		rgdod[i].dwOfs = 8; //Nothing

	if (mousePositionX != dev->lastX || mousePositionY != dev->lastY)
	{
		/* Move the mouse cursor if game changes cursor position */
		SDL_WarpMouseInWindow(NULL, (mousePositionX / dpr * winWidth / 640.0f) + 0.5f, (mousePositionY / dpr * winHeight / 480.0f) + 0.5f);
		dev->lastX = mousePositionX;
		dev->lastY = mousePositionY;
	}
	else
	{
		if (touchId != 0)
		{
			dev->lastX += touchDX * dpr * 640.0f + 0.5f;
			dev->lastY += touchDY * dpr * 480.0f + 0.5f;
			touchDX = touchDY = 0.0f;
			rgdod[0].dwData = dev->lastX - mousePositionX;
			rgdod[1].dwData = dev->lastY - mousePositionY;
		}
		else
		{
			static int32_t lastMouseButton;
			float x = 0.0f, y = 0.0f;
			Uint32 mouseButton = SDL_GetRelativeMouseState(&x, &y) & SDL_BUTTON_LMASK;
			if (x || y) /* Only when mouse moved */
			{
				SDL_GetMouseState(&x, &y);
				dev->lastX = (x * dpr * 640.0f / winWidth)  + 0.5f;
				dev->lastY = (y * dpr * 480.0f / winHeight) + 0.5f;
				rgdod[0].dwData = dev->lastX - mousePositionX;
				rgdod[1].dwData = dev->lastY - mousePositionY;
			}
			if (!lastMouseButton)
				rgdod[2].dwData = -mouseButton;
			lastMouseButton = mouseButton;
		}
	}

	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t SetDataFormat(DirectInputDevice **this, const DIDATAFORMAT *df)
{
	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t SetEventNotification(DirectInputDevice **this, void *hEvent)
{
	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t SetCooperativeLevel(DirectInputDevice **this, void *hwnd, uint32_t dwFlags)
{
	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t CreateEffect(DirectInputDevice **this, const GUID *const rguid, const DIEFFECT *di_eff, DirectInputEffect ***deff, void *punkOuter)
{
	/* Joystick only */
	DirectInputDevice *dev = DTHIS(DirectInputDevice, this);
#if defined(HOST_64BIT)
	DirectInputEffect *dinput_eff = (DirectInputEffect *)malloc32(sizeof(DirectInputObject) + sizeof(DirectInputEffect));
	memset(dinput_eff, 0, sizeof(DirectInputObject) + sizeof(DirectInputEffect));
#else
	DirectInputEffect *dinput_eff = (DirectInputEffect *)calloc(1, sizeof(DirectInputObject) + sizeof(DirectInputEffect));
#endif
	((DirectInputObject *)dinput_eff)->ref = 1;
	dinput_eff = (void *)dinput_eff + sizeof(DirectInputObject);
	dinput_eff->gain = dev->gain;
	dinput_eff->effect_idx = -1;

	DINPUT_SET_VTABLE(dinput_eff->SetParameters, WRAP_NAME(SetParameters));
	DINPUT_SET_VTABLE(dinput_eff->Start, WRAP_NAME(Start));
	DINPUT_SET_VTABLE(dinput_eff->Stop, WRAP_NAME(Stop));
	DINPUT_SET_VTABLE(dinput_eff->Download, WRAP_NAME(Download));
	DINPUT_SET_VTABLE(dinput_eff->Unload, WRAP_NAME(Unload));

	if (rguid)
		memcpy(&dinput_eff->guid, rguid, sizeof(GUID));

	maybeInitEffect(dev, dinput_eff);
	setEffect(dinput_eff, di_eff);

#if defined(HOST_64BIT)
	{
		void *buf = malloc32(sizeof(void *));
		write32le(deff, (uint32_t)(uintptr_t)buf);
		write32le(buf, (uint32_t)(uintptr_t)dinput_eff);
	}
#else
	*deff = malloc(sizeof(void *));
	**deff = dinput_eff;
#endif

	dev->num_effects += 1;

	dev->effects = (DirectInputEffect **)realloc(dev->effects, dev->num_effects * sizeof(DirectInputEffect *));
	dev->effects[dev->num_effects - 1] = dinput_eff;

	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t GetObjectInfo(DirectInputDevice **this, DIDEVICEOBJECTINSTANCEA *pdidoi, uint32_t dwObj, uint32_t dwHow)
{
	/* Joystick only */
	memset(&pdidoi->guidType, 0, sizeof(DIDEVICEOBJECTINSTANCEA) - sizeof(uint32_t));
	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t SendForceFeedbackCommand(DirectInputDevice **this, uint32_t flags)
{
	/* Joystick only */
	DirectInputDevice *dev = DTHIS(DirectInputDevice, this);
	int32_t i;
	switch (flags)
	{
		case 0x01: //DISFFC_RESET
		case 0x02: //DISFFC_STOPALL
			for (i = 0; i < dev->num_effects; ++i)
				maybeStopEffect(dev->effects[i], false);
			break;
		case 0x04: //DISFFC_PAUSE
		case 0x20: //DISFFC_SETACTUATORSOFF
			for (i = 0; i < dev->num_effects; ++i)
				maybeStopEffect(dev->effects[i], true);
			break;
		case 0x08: //DISFFC_CONTINUE
		case 0x10: //DISFFC_SETACTUATORSON
			for (i = 0; i < dev->num_effects; ++i)
			{
				if (dev->effects[i]->guid.a == FORCE_SQUARE)
					maybeRestartEffect(dev->effects[i]);
			}
			break;
	}
	return 0;
}
MAYBE_STATIC REALIGN STDCALL uint32_t Poll(DirectInputDevice **this)
{
	/* Joystick only */

	SDL_UpdateJoysticks();

	ensureJoyOpen(DTHIS(DirectInputDevice, this));

	return 0;
}

/// DirectInput

MAYBE_STATIC REALIGN STDCALL uint32_t CreateDevice(void **this, const GUID *const rguid, DirectInputDevice ***directInputDevice, void *unkOuter)
{
#if defined(HOST_64BIT)
	DirectInputDevice *dinputDev = (DirectInputDevice *)malloc32(sizeof(DirectInputObject) + sizeof(DirectInputDevice));
	memset(dinputDev, 0, sizeof(DirectInputObject) + sizeof(DirectInputDevice));
#else
	DirectInputDevice *dinputDev = (DirectInputDevice *)calloc(1, sizeof(DirectInputObject) + sizeof(DirectInputDevice));
#endif
	((DirectInputObject *)dinputDev)->ref = 1;
	((DirectInputObject *)dinputDev)->is_device = true;
	dinputDev = (void *)dinputDev + sizeof(DirectInputObject);

	DINPUT_SET_VTABLE(dinputDev->QueryInterface, WRAP_NAME(QueryInterface));
	DINPUT_SET_VTABLE(dinputDev->Release, WRAP_NAME(Release));

	DINPUT_SET_VTABLE(dinputDev->GetCapabilities, WRAP_NAME(GetCapabilities));
	DINPUT_SET_VTABLE(dinputDev->SetProperty, WRAP_NAME(SetProperty));
	DINPUT_SET_VTABLE(dinputDev->Acquire, WRAP_NAME(Acquire));
	DINPUT_SET_VTABLE(dinputDev->Unacquire, WRAP_NAME(Unacquire));
	DINPUT_SET_VTABLE(dinputDev->GetDeviceState, WRAP_NAME(GetDeviceState));
	DINPUT_SET_VTABLE(dinputDev->GetDeviceData, WRAP_NAME(GetDeviceData));
	DINPUT_SET_VTABLE(dinputDev->SetDataFormat, WRAP_NAME(SetDataFormat));
	DINPUT_SET_VTABLE(dinputDev->SetEventNotification, WRAP_NAME(SetEventNotification));
	DINPUT_SET_VTABLE(dinputDev->SetCooperativeLevel, WRAP_NAME(SetCooperativeLevel));
	DINPUT_SET_VTABLE(dinputDev->GetObjectInfo, WRAP_NAME(GetObjectInfo));

	DINPUT_SET_VTABLE(dinputDev->CreateEffect, WRAP_NAME(CreateEffect));
	DINPUT_SET_VTABLE(dinputDev->SendForceFeedbackCommand, WRAP_NAME(SendForceFeedbackCommand));
	DINPUT_SET_VTABLE(dinputDev->Poll, WRAP_NAME(Poll));

	memcpy(&dinputDev->guid, rguid, sizeof(GUID));

	dinputDev->gain = 255;

	if (dinputDev->guid.a == MOUSE || dinputDev->guid.a == JOYSTICK)
	{
#if defined(HOST_64BIT)
		void *buf = malloc32(sizeof(void *));
		write32le(directInputDevice, (uint32_t)(uintptr_t)buf);
		write32le(buf, (uint32_t)(uintptr_t)dinputDev);
#else
		*directInputDevice = malloc(sizeof(void *));
		**directInputDevice = dinputDev;
#endif
		return 0;
	}

//	fprintf(stderr, "CreateDevice: error 0x%.8X\n", dinputDev->guid.a);
#if defined(HOST_64BIT)
	free32((void *)dinputDev - sizeof(DirectInputObject));
#else
	free((void *)dinputDev - sizeof(DirectInputObject));
#endif
	return -1;
}
MAYBE_STATIC REALIGN STDCALL uint32_t EnumDevices(void **this, uint32_t devType, DIENUMDEVICESCALLBACKA callback, void *ref, uint32_t dwFlags)
{
	if (devType != 4 /* DIDEVTYPE_JOYSTICK */)
		return 0;

	uint32_t i;
	for (i = 0; i < 2; ++i)
	{
#if defined(HOST_64BIT)
		DIDEVICEINSTANCEA *deviceInstance = (DIDEVICEINSTANCEA *)malloc32(sizeof(DIDEVICEINSTANCEA));
		memset(deviceInstance, 0, sizeof(DIDEVICEINSTANCEA));
		deviceInstance->guidInstance.a = JOYSTICK;
		deviceInstance->guidInstance.b = i;
		if (!wrap_stdcall2_ret(dinput_game_thread, callback, deviceInstance, ref))
		{
			free32(deviceInstance);
			break;
		}
		free32(deviceInstance);
#else
		DIDEVICEINSTANCEA deviceInstance = {0};
		deviceInstance.guidInstance.a = JOYSTICK;
		deviceInstance.guidInstance.b = i;
#ifdef NFS_CPP
		if (!wrap_stdcall2_ret(dinput_game_thread, callback, &deviceInstance, ref))
#else
		if (!callback(&deviceInstance, ref))
#endif
		{
			break;
		}
#endif
	}
	return 0;
}

/// Entrypoint

REALIGN STDCALL uint32_t DirectInputCreateA_wrap(MAYBE_THIS void *hInstance, uint32_t version, DirectInput ***directInputA, void *unkOuter)
{
#if defined(HOST_64BIT)
	DirectInput *dinput = (DirectInput *)malloc32(sizeof(DirectInputObject) + sizeof(DirectInput));
	memset(dinput, 0, sizeof(DirectInputObject) + sizeof(DirectInput));
#else
	DirectInput *dinput = (DirectInput *)calloc(1, sizeof(DirectInputObject) + sizeof(DirectInput));
#endif
	((DirectInputObject *)dinput)->ref = 1;
	dinput = (void *)dinput + sizeof(DirectInputObject);

	DINPUT_SET_VTABLE(dinput->Release, WRAP_NAME(Release));
	DINPUT_SET_VTABLE(dinput->CreateDevice, WRAP_NAME(CreateDevice));
	DINPUT_SET_VTABLE(dinput->EnumDevices, WRAP_NAME(EnumDevices));

#if defined(HOST_64BIT)
	/* Write only 4 bytes (not 8) so we don't overflow into _data.lpEventAttributes.
	   dinput and the intermediate buffer both live in the low 4 GB so their
	   lower 32 bits are the entire usable address from the game's perspective. */
	{
		void *buf = malloc32(sizeof(void *));
		write32le(directInputA, (uint32_t)(uintptr_t)buf);
		write32le(buf, (uint32_t)(uintptr_t)dinput);
	}
#else
	*directInputA = malloc(sizeof(void *));
	**directInputA = dinput;
#endif

#ifdef NFS_CPP
	dinput_game_thread = this;
#endif

	if (!SDL_Init(SDL_INIT_JOYSTICK | SDL_INIT_HAPTIC))
		fprintf(stderr, "SDL joystick and haptic init failed: %s\n", SDL_GetError());

	g_mainThread = SDL_GetCurrentThreadID();

	return 0;
}

/// Reimplemented game functions

REALIGN REGPARM int32_t processAxes(uint32_t inputValue)
{
	int32_t ret = 0;

	int32_t axis = dword_557540[((inputValue >> 20) << 4) + ((inputValue >> 16) & 7)];

	int32_t vh = inputValue & 0xFF00;
	int32_t vl = (inputValue & 0xFF) << 8;

	if (vh == 0x6800)
	{
		// 0 in the middle of the axis value, left direction

		int32_t threshold = 0x8000;
		if (joystickApplyDeadzone)
			threshold = vh;

		// Swap values for one-quarter and three-quarter
		if (vl == 0x4E00)
			vl = 0x1A00;
		else if (vl == 0x1A00)
			vl = 0x4E00;

		if (axis < threshold)
			ret = (threshold - axis) / ((threshold - vl) >> 8);
	}
	else if (vh == 0x9800)
	{
		// 0 in the middle of the axis value, right direction

		int32_t threshold = 0x8000;
		if (joystickApplyDeadzone)
			threshold = vh;

		// Swap values for one-quarter and three-quarter
		if (vl == 0xB200)
			vl = 0xE600;
		else if (vl == 0xE600)
			vl = 0xB200;

		vl += 0x100;

		if (axis > threshold)
			ret = (axis - threshold) / ((vl - threshold) >> 8);
	}
	else if (vh == 0x1400 || vl == 0x1400)
	{
		// Full axis

		int32_t threshold = 0x0000;

		if (vl == 0x1400)
		{
			// Axis is reversed - swap axis value and swap vl<=>vh
			axis = 0xffff - axis;
			vl = vl ^ vh;
			vh = vl ^ vh;
			vl = vl ^ vh;
		}

		// Swap values for one-quarter and three-quarter
		if (vl == 0xB600)
			vl = 0x4A00;
		else if (vl == 0x4A00)
			vl = 0xB600;

		if (joystickApplyDeadzone)
			threshold = vh;

		ret = (axis - threshold) / ((vl - threshold) >> 8);
	}

	ret = SDL_clamp(ret, 0, 255);

	return ret;
}
