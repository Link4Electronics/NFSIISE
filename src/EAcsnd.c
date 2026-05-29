// SPDX-License-Identifier: MIT

#include "Wrapper.h"
#include <stdlib.h>
#include <string.h>

#ifdef HOST_64BIT
extern void *malloc32(size_t);
extern void free32(void *);
#endif

extern BOOL linearSoundInterpolation;

static void (REGPARM *getSamples)(void *samples, uint32_t num_samples_per_chn);

#ifdef NFS_CPP
	void wrap_regparm2(void *this, void *func, int32_t arg0, int32_t arg1);
	extern void *audio_game_thread;

	#define getSamplesFunc(a,b) \
		wrap_regparm2(audio_game_thread, getSamples, a, b)

	static void *audio_stack;
	static const unsigned long audio_stack_size = 0x10000;
#endif

typedef void (*FadeInOut)(MAYBE_THIS_SINGLE);
static FadeInOut fadeInOut;

#include <SDL2/SDL_audio.h>

#define CHN_CNT 2

static SDL_AudioDeviceID audioDevice;
static BOOL unPaused, canGetSamples;
static uint32_t buffer_pos;
static uint8_t *buffer;

static void audioCallback(void *userdata, uint8_t *stream, int32_t len)
{
	if (!buffer)
	{
		int32_t i;
		for (i = 0; i < len; i += 256 * CHN_CNT * sizeof(int16_t))
			getSamplesFunc(stream + i, 256);
	}
	else
	{
		while (buffer_pos < len)
		{
			getSamplesFunc(buffer + buffer_pos, 256);
			buffer_pos += 256 * CHN_CNT * sizeof(int16_t);
		}
		memcpy(stream, buffer, len);
		memcpy(buffer, buffer + len, buffer_pos -= len);
	}
}
static void audioCallbackInterp(void *userdata, uint8_t *stream, int32_t len)
{
	int16_t samples[256 * CHN_CNT];
	int16_t *buffer_16b;
	uint32_t i, c;
	while (buffer_pos < len)
	{
		buffer_16b = (int16_t *)(buffer + buffer_pos);
		getSamplesFunc(samples, 256);
		for (i = 0; i < (256 - 1) * CHN_CNT; i += CHN_CNT)
		{
			for (c = 0; c < CHN_CNT; ++c)
			{
				buffer_16b[c] = samples[i + c];
				buffer_16b[c + CHN_CNT] = (samples[i + c] + samples[i + c + CHN_CNT]) >> 1;
			}
			buffer_16b += CHN_CNT << 1;
		}
		for (c = 0; c < CHN_CNT; ++c)
			buffer_16b[c] = buffer_16b[c + CHN_CNT] = samples[i + c];
		buffer_pos += 512 * CHN_CNT * sizeof(int16_t);
	}
	memcpy(stream, buffer, len);
	memcpy(buffer, buffer + len, buffer_pos -= len);
}

/**/

REALIGN uint32_t iSNDdllversion_(void)
{
	return 0x60002;
}

REALIGN STDCALL uint32_t iSNDdirectsetfunctions_wrap(void (REGPARM *arg1)(), void (*arg2)(), void (*arg3)(), FadeInOut arg4, void (*arg5)())
{
	getSamples = arg1;
	fadeInOut  = arg4;
	return 0;
}
REALIGN REGPARM uint32_t iSNDdirectcaps_(void *hWnd)
{
	return 0x23E0F; //?
}
REALIGN REGPARM uint32_t iSNDdirectstart_(uint32_t arg1, void *hWnd)
{
	if (canGetSamples)
		return 0;

#ifdef NFS_CPP
	if (!audio_stack && audio_game_thread)
	{
		audio_stack = malloc32(audio_stack_size);
		if (audio_stack)
		{
			memset(audio_stack, 0, audio_stack_size);
			uint32_t esp_val = (uint32_t)(uintptr_t)audio_stack + 0x100;
			*(uint32_t *)((uint8_t *)audio_game_thread + 24) = esp_val;
		}
	}
#endif

	SDL_AudioSpec audioSpecIn =
	{
		linearSoundInterpolation ? 44100 : 22050,
		AUDIO_S16,
		CHN_CNT,
		0,
		1024,
		0,
		0,
		linearSoundInterpolation ? audioCallbackInterp : audioCallback,
		NULL
	};
	SDL_AudioSpec audioSpecOut;
	audioDevice = SDL_OpenAudioDevice(NULL, 0, &audioSpecIn, &audioSpecOut, 0);
	if (!audioDevice)
#if defined(HOST_64BIT)
		buffer = (uint8_t *)malloc32(256 * CHN_CNT * sizeof(int16_t));
#else
		buffer = (uint8_t *)malloc(256 * CHN_CNT * sizeof(int16_t));
#endif
	else
	{
		uint32_t bufferSize = (audioSpecOut.samples + 255) & ~255; //Aligned to 256
#if defined(HOST_64BIT)
		bufferSize += 256;
		buffer = (uint8_t *)malloc32(bufferSize * CHN_CNT * sizeof(int16_t));
#else
		if (linearSoundInterpolation || bufferSize != audioSpecOut.samples)
		{
			bufferSize += linearSoundInterpolation ? 512 : 256;
			buffer = (uint8_t *)malloc(bufferSize * CHN_CNT * sizeof(int16_t));
		}
#endif
	}
	canGetSamples = true;
	return 0;
}
REALIGN void iSNDdirectserve_(MAYBE_THIS_SINGLE)
{
	if (canGetSamples)
	{
		if (!unPaused && audioDevice)
		{
			SDL_PauseAudioDevice(audioDevice, 0);
			unPaused = true;
		}
#ifdef NFS_CPP
		fadeInOut(this);
#else
		fadeInOut();
#endif
		if (!audioDevice)
			getSamplesFunc(buffer, 256);
	}
}
REALIGN uint32_t iSNDdirectstop_(void)
{
	canGetSamples = false;
	if (audioDevice)
	{
		SDL_CloseAudioDevice(audioDevice);
		unPaused = false;
		audioDevice = 0;
	}
	buffer_pos = 0;
#if defined(HOST_64BIT)
	free32(buffer);
#else
	free(buffer);
#endif
	buffer = NULL;
#ifdef NFS_CPP
	if (audio_stack)
	{
		free32(audio_stack);
		audio_stack = NULL;
	}
#endif
	return 0;
}
