#include <cstdint>
#include <cstdio>
#include <cstring>
#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "SwapInit.h"
#include "MemoryTranslate.h"

extern "C" void pool_preallocate(void);
extern "C" uint32_t wrapper_get_stack_top(void);

void *main_game_thread, *audio_game_thread;

extern "C" void nfs2seEntrypoint()
{
	swap_initial_data();

#if defined(__powerpc64__) || defined(__PPC64__) || defined(__aarch64__)
	/* Initialise the x86-to-host address translator with the
	   BSS/DATA section bounds. */
	init_translation(
		(uintptr_t)&_bss,  sizeof(_bss),
		(uintptr_t)&_data, sizeof(_data));
#endif

#if defined(__powerpc64__) || defined(__PPC64__) || defined(__aarch64__) || defined(__arm__)
	/* Initialize BSS pointer fields that were never written by game code
	   (the original x86 binary had these in initialized data, not BSS).
	   dword_5134D8 is a wchar string pointer used in _sub_4242F0 (wcscpy).
	   Without initialization, it stays NULL and causes SIGSEGV. */
	{
		uint16_t *empty = (uint16_t *)malloc32(4);
		if (empty) {
			empty[0] = 0; /* null wchar L"" */
			/* Direct write: use raw struct member (SwapInit.h may #undef the macro) */
			*(volatile uint32_t *)_bss.dword_5134D8 = (uint32_t)(intptr_t)empty;
		}
	}
#endif

#if defined(__powerpc64__) || defined(__PPC64__) || defined(__aarch64__) || defined(__arm__)
	/* Zero DATA variables that store relative x86 addresses instead of
	   absolute ones, forcing the runtime initialisation path. */
	#undef dword_4DB6A8
	memset(&_data.dword_4DB6A8, 0, sizeof(_data.dword_4DB6A8));
	#define dword_4DB6A8 ((int8_t *)&_data.dword_4DB6A8)
#endif

	Game *game = (Game *)malloc32(sizeof(Game));
	Game *audio = (Game *)malloc32(sizeof(Game));
	new (game) Game();
	new (audio) Game();
	main_game_thread = game;
	audio_game_thread = audio;

	game->esp = wrapper_get_stack_top();
	game->_start();
}

/* External functions */

#undef sub_41B250
extern "C" void sub_41B250(Game &game, int32_t arg1, int32_t arg2)
{
	game.eax = arg1;
	game.edx = arg2;
	game._sub_41B250();
}

extern "C" void wrap_regparm2(Game &game, void (*func)(Game &), int32_t arg0, int32_t arg1)
{
	game.eax = arg0;
	game.edx = arg1;
	func(game);
}

extern "C" int32_t wrap_stdcall2_ret(Game &game, void (*func)(Game &), int32_t arg0, int32_t arg1)
{
	game.push32(arg1);
	game.push32(arg0);
	game.esp -= 4;
	func(game);
	game.esp += 4;
	return game.eax;
}
extern "C" void wrap_stdcall4(Game &game, void (*func)(Game &), int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3)
{
	game.push32(arg3);
	game.push32(arg2);
	game.push32(arg1);
	game.push32(arg0);
	game.esp -= 4;
	func(game);
	game.esp += 4;
}

/* DInput */

#define WrapFunction1Arg(func_name) \
	extern "C" int32_t func_name(int32_t arg0); \
	extern "C" void func_name##_wrap(Game &game) \
	{ \
		game.eax = func_name(*(int32_t *)(game.esp + 4)); \
		game.esp += 4; \
	}
#define WrapFunction2Arg(func_name) \
	extern "C" int32_t func_name(int32_t arg0, int32_t arg1); \
	extern "C" void func_name##_wrap(Game &game) \
	{ \
		game.eax = func_name(*(int32_t *)(game.esp + 4), *(int32_t *)(game.esp + 8)); \
		game.esp += 8; \
	}
#define WrapFunction3Arg(func_name) \
	extern "C" int32_t func_name(int32_t arg0, int32_t arg1, int32_t arg2); \
	extern "C" void func_name##_wrap(Game &game) \
	{ \
		game.eax = func_name(*(int32_t *)(game.esp + 4), *(int32_t *)(game.esp + 8), *(int32_t *)(game.esp + 12)); \
		game.esp += 12; \
	}
#define WrapFunction4Arg(func_name) \
	extern "C" int32_t func_name(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3); \
	extern "C" void func_name##_wrap(Game &game) \
	{ \
		game.eax = func_name(*(int32_t *)(game.esp + 4), *(int32_t *)(game.esp + 8), *(int32_t *)(game.esp + 12), *(int32_t *)(game.esp + 16)); \
		game.esp += 16; \
	}
#define WrapFunction5Arg(func_name) \
	extern "C" int32_t func_name(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4); \
	extern "C" void func_name##_wrap(Game &game) \
	{ \
		game.eax = func_name(*(int32_t *)(game.esp + 4), *(int32_t *)(game.esp + 8), *(int32_t *)(game.esp + 12), *(int32_t *)(game.esp + 16), *(int32_t *)(game.esp + 20)); \
		game.esp += 20; \
	}

WrapFunction5Arg(EnumDevices)
WrapFunction4Arg(CreateDevice)
WrapFunction1Arg(Release)

WrapFunction3Arg(QueryInterface)

WrapFunction2Arg(GetCapabilities)
WrapFunction3Arg(SetProperty)
WrapFunction1Arg(Acquire)
WrapFunction1Arg(Unacquire)
WrapFunction3Arg(GetDeviceState)
WrapFunction5Arg(GetDeviceData)
WrapFunction2Arg(SetDataFormat)
WrapFunction2Arg(SetEventNotification)
WrapFunction3Arg(SetCooperativeLevel)
WrapFunction4Arg(GetObjectInfo)
WrapFunction5Arg(CreateEffect)
WrapFunction2Arg(SendForceFeedbackCommand)
WrapFunction1Arg(Poll)

WrapFunction3Arg(SetParameters)
WrapFunction3Arg(Start)
WrapFunction1Arg(Stop)
WrapFunction1Arg(Download)
WrapFunction1Arg(Unload)

/* External variables (as pointers) */

#undef dword_4DDA70
#undef dword_5637CC
#undef dword_5637D8
#undef dword_4DB1B0
#undef dword_5637A0
void **dword_4DDA70 = (void **)&_data.dword_4DDA70, **dword_5637CC = (void **)&_bss.dword_5637CC, **dword_5637D8 = (void **)&_bss.dword_5637D8;
void *dword_4DB1B0 = (void *)&_data.dword_4DB1B0, *dword_5637A0 = (void *)&_bss.dword_5637A0;

#undef dword_557540
void *dword_557540 = (void *)&_bss.dword_557540;

#undef mousePositionX
#undef mousePositionY
void *mousePositionX = (void *)&_bss.mousePositionX;
void *mousePositionY = (void *)&_bss.mousePositionY;

#undef inControlAssignMode
void *inControlAssignMode = (void *)&_data.inControlAssignMode;

#undef binaryGameVersion
void *binaryGameVersion = (void *)&_data.binaryGameVersion;
