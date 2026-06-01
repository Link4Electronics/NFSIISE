// SPDX-License-Identifier: MIT

#ifndef DINPUT_H
#define DINPUT_H

#include "Wrapper.h"
#include "Cpp/ByteUtils.h"

#include <SDL3/SDL_joystick.h>
#include <SDL3/SDL_haptic.h>

#include <stdint.h>

#define DIRECTINPUT_VERSION 0x0500

#if defined(HOST_64BIT)
	/* On x64 the game reads vtable entries as 4-byte values (to32i).
	   Store only the low 32 bits of each wrapper address here. */
	typedef uint32_t DInputVFunc;
#else
	/* On x86 native function pointers are already 4 bytes. */
	typedef uint32_t (STDCALL *DInputVFunc)();
#endif

/* Store a function pointer into a DInputVFunc slot.
   On x64 this truncates to 32 bits (safe: wrappers are in low 4GB). */
#if defined(HOST_64BIT)
#define DINPUT_SET_VTABLE(slot, func)  \
    do { write32le(&(slot), (uint32_t)(uintptr_t)(func)); } while(0)
#else
#define DINPUT_SET_VTABLE(slot, func)  ((slot) = (func))
#endif

/* Convert a 32-bit stored game pointer to a 64-bit host pointer. */
#if defined(HOST_64BIT)
#define DINPUT_ADDR(type, val)  ((type *)(uintptr_t)(val))
#else
#define DINPUT_ADDR(type, val)  ((type *)(val))
#endif

/* Dereference an intermediate buffer pointer.
   On BE hosts: native *(void **) reads 8 bytes but only 4 LE bytes are
   stored — use read32le to get the correct 32-bit truncated pointer.
   On LE hosts: *(void **) matches the 4 stored LE bytes (zero-extended
   to 64 bits by the uintptr_t cast), so native read works fine. */
#if defined(__powerpc64__) || defined(__PPC64__)
#define DTHIS_PTR(this_ptr)  ((void *)(uintptr_t)read32le(this_ptr))
#define DTHIS(type, this_ptr)  DINPUT_ADDR(type, read32le(this_ptr))
#else
#define DTHIS_PTR(this_ptr)  (*(void **)(this_ptr))
#define DTHIS(type, this_ptr)  (*((type **)(this_ptr)))
#endif

typedef struct
{
	uint32_t a, b, c, d;
} GUID;
typedef uint32_t IID[4];

typedef struct
{
	uint32_t size;
	GUID guidInstance;
	GUID guidProduct;
	uint32_t devType;
	char tszInstanceName[MAX_PATH];
	char tszProductName[MAX_PATH];
#if (DIRECTINPUT_VERSION >= 0x0500)
	GUID guidFFDriver;
	uint16_t usagePage;
	uint16_t usage;
#endif
} DIDEVICEINSTANCEA;

typedef struct
{
	uint32_t dwSize;
	GUID guidType;
	uint32_t dwOfs;
	uint32_t dwType;
	uint32_t dwFlags;
	char tszName[MAX_PATH];
#if (DIRECTINPUT_VERSION >= 0x0500)
	uint32_t dwFFMaxForce;
	uint32_t dwFFForceResolution;
	uint16_t wCollectionNumber;
	uint16_t wDesignatorIndex;
	uint16_t wUsagePage;
	uint16_t wUsage;
	uint32_t dwDimension;
	uint16_t wExponent;
	uint16_t wReserved;
#endif
} DIDEVICEOBJECTINSTANCEA;

typedef struct
{
	const GUID *pguid;
	uint32_t dwOfs;
	uint32_t dwType;
	uint32_t dwFlags;
} DIOBJECTDATAFORMAT;

typedef struct
{
	uint32_t dwSize;
	uint32_t dwObjSize;
	uint32_t dwFlags;
	uint32_t dwDataSize;
	uint32_t dwNumObjs;
	DIOBJECTDATAFORMAT *rgodf;
} DIDATAFORMAT;

typedef struct
{
	uint32_t dwSize;
	uint32_t dwHeaderSize;
	uint32_t dwObj;
	uint32_t dwHow;
} DIPROPHEADER;
typedef struct
{
	DIPROPHEADER diph;
	uint32_t dwData;
} DIPROPDWORD;

typedef struct
{
	uint32_t size;
	uint32_t flags;
	uint32_t devType;
	uint32_t axes;
	uint32_t buttons;
	uint32_t nPOVs;
	uint32_t FFSamplePeriod;
	uint32_t FFMinTimeResolution;
	uint32_t firmwareRevision;
	uint32_t hardwareRevision;
	uint32_t FFDriverVersion;
} DIDEVCAPS;

typedef struct
{
	uint32_t dwOfs;
	uint32_t dwData;
	uint32_t dwTimeStamp;
	uint32_t dwSequence;
#if (DIRECTINPUT_VERSION >= 0x0800)
	uintptr_t uAppData;
#endif
} DIDEVICEOBJECTDATA;

typedef struct
{
	int32_t axes[8];
// 	uint32_t lX;
// 	uint32_t lY;
// 	uint32_t lZ;
// 	uint32_t lRx; //unsupported
// 	uint32_t lRy; //unsupported
// 	uint32_t lRz;
//	uint32_t rglSlider[2];
	uint32_t rgdwPOV[4]; //unsupported
	uint8_t  buttons[32]; //only 15 buttons
} DIJOYSTATE;

typedef struct
{
	uint32_t sSize;
	uint32_t attackLevel;
	uint32_t attackTime;
	uint32_t fadeLevel;
	uint32_t fadeTime;
} DIENVELOPE;

typedef struct
{
	int32_t magnitude;
} DICONSTANTFORCE;
typedef struct
{
	uint32_t magnitude;
	int32_t offset;
	uint32_t phase;
	uint32_t period;
} DIPERIODIC;
typedef struct
{
	int32_t offset;
	int32_t positiveCoefficient;
	int32_t negativeCoefficient;
	uint32_t positiveSaturation;
	uint32_t negativeSaturation;
	uint32_t deadBand;
} DICONDITION;

typedef struct
{
	uint32_t size;
	uint32_t flags;
	uint32_t duration;
	uint32_t samplePeriod;
	uint32_t gain;
	uint32_t triggerButton;
	uint32_t triggerRepeatInterval;
	uint32_t cAxes;
#if defined(HOST_64BIT)
	uint32_t rgdwAxes;
	uint32_t rglDirection;
	uint32_t envelope;
	uint32_t cbTypeSpecificParams;
	uint32_t typeSpecificParams;
#else
	uint32_t *rgdwAxes;
	uint32_t *rglDirection;
	DIENVELOPE *envelope;
	uint32_t cbTypeSpecificParams;
	void *typeSpecificParams;
#endif
} DIEFFECT;

typedef void DIEFFESCAPE;
typedef void DIEFFECTINFOA;

typedef BOOL (STDCALL *DIENUMDEVICESCALLBACKA)(const DIDEVICEINSTANCEA *, void *);

typedef struct
{
	uint32_t ref;
	BOOL is_device;
} DirectInputObject;

typedef struct DirectInputEffect
{
	/*** IUnknown methods ***/
	DInputVFunc QueryInterface;
	DInputVFunc AddRef;
	DInputVFunc Release;
	/*** IDirectInputEffect methods ***/
	DInputVFunc Initialize;
	DInputVFunc GetEffectGuid;
	DInputVFunc GetParameters;
	DInputVFunc SetParameters;
	DInputVFunc Start;
	DInputVFunc Stop;
	DInputVFunc GetEffectStatus;
	DInputVFunc Download;
	DInputVFunc Unload;
	DInputVFunc Escape;
	/* My variables */
	GUID guid;

	SDL_HapticEffect effect;
	BOOL playing;
	uint8_t gain;

	// Rumble
	SDL_Joystick *joy;

	// Haptic
	SDL_Haptic *haptic;
	int32_t effect_idx;
	BOOL useCartesian;
	int16_t constantToSineDivider;
} DirectInputEffect;

typedef struct DirectInputDevice
{
	/*** IUnknown methods ***/
	DInputVFunc QueryInterface;
	DInputVFunc AddRef;
	DInputVFunc Release;
	/*** IDirectInputDeviceA methods ***/
	DInputVFunc GetCapabilities;
	DInputVFunc EnumObjects;
	DInputVFunc GetProperty;
	DInputVFunc SetProperty;
	DInputVFunc Acquire;
	DInputVFunc Unacquire;
	DInputVFunc GetDeviceState;
	DInputVFunc GetDeviceData;
	DInputVFunc SetDataFormat;
	DInputVFunc SetEventNotification;
	DInputVFunc SetCooperativeLevel;
	DInputVFunc GetObjectInfo;
	DInputVFunc GetDeviceInfo;
	DInputVFunc RunControlPanel;
	DInputVFunc Initialize;
	/*** IDirectInputDevice2A methods ***/
	DInputVFunc CreateEffect;
	DInputVFunc EnumEffects;
	DInputVFunc GetEffectInfo;
	DInputVFunc GetForceFeedbackState;
	DInputVFunc SendForceFeedbackCommand;
	DInputVFunc EnumCreatedEffectObjects;
	DInputVFunc Escape;
	DInputVFunc Poll;
	DInputVFunc SendDeviceData;
	/* My variables */
	GUID guid;
	uint32_t lastX, lastY;
	uint8_t escPressed, resetPressed, dpadPressed[4];
	SDL_Joystick *joy;
	BOOL rumble;
	BOOL useCartesian;
	uint8_t gain;
	SDL_Haptic *haptic;
	int32_t num_effects;
	DirectInputEffect **effects;
} DirectInputDevice;

typedef struct
{
	/*** IUnknown methods ***/
	DInputVFunc QueryInterface;
	DInputVFunc AddRef;
	DInputVFunc Release;
	/*** IDirectInputA methods ***/
	DInputVFunc CreateDevice;
	DInputVFunc EnumDevices;
	DInputVFunc GetDeviceStatus;
	DInputVFunc RunControlPanel;
	DInputVFunc Initialize;
} DirectInput;

#endif // DINPUT_H
