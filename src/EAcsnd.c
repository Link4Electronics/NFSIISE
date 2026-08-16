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

#include <SDL3/SDL_audio.h>

#define CHN_CNT 2

static SDL_AudioStream *audioStream;
static BOOL unPaused, canGetSamples;
static uint32_t buffer_pos;
static uint8_t *buffer;
static uint8_t residual[2048];
static int residual_len;

static void SDLCALL sdl3_audio_callback(void *userdata, SDL_AudioStream *stream, int additional_amount, int total_amount)
{
	while (residual_len > 0 && additional_amount > 0)
	{
		int n = residual_len;
		if (n > additional_amount) n = additional_amount;
		SDL_PutAudioStreamData(stream, residual, n);
		additional_amount -= n;
		if (n < residual_len)
		{
			memmove(residual, residual + n, residual_len - n);
			residual_len -= n;
		}
		else
			residual_len = 0;
	}

	if (!linearSoundInterpolation)
	{
		int frame = 256 * CHN_CNT * (int)sizeof(int16_t);
		while (additional_amount > 0)
		{
			int chunk = frame;
			if (chunk > additional_amount) chunk = additional_amount;
			getSamplesFunc(buffer, 256);
			SDL_PutAudioStreamData(stream, buffer, chunk);
			if (chunk < frame)
			{
				residual_len = frame - chunk;
				memcpy(residual, buffer + chunk, residual_len);
			}
			additional_amount -= chunk;
		}
	}
	else
	{
		int frame = 512 * CHN_CNT * (int)sizeof(int16_t);
		int raw_sz = 256 * CHN_CNT * (int)sizeof(int16_t);
		while (additional_amount > 0)
		{
			int16_t *raw = (int16_t *)buffer;
			int16_t *out = (int16_t *)(buffer + raw_sz);
			uint32_t i, c;
			int chunk = frame;
			if (chunk > additional_amount) chunk = additional_amount;
			getSamplesFunc(raw, 256);
			for (i = 0; i < (256 - 1) * CHN_CNT; i += CHN_CNT)
			{
				for (c = 0; c < CHN_CNT; ++c)
				{
					out[i + c] = raw[i + c];
					out[i + c + CHN_CNT] = (raw[i + c] + raw[i + c + CHN_CNT]) >> 1;
				}
			}
			for (c = 0; c < CHN_CNT; ++c)
				out[i + c] = out[i + c + CHN_CNT] = raw[i + c];
			SDL_PutAudioStreamData(stream, out, chunk);
			if (chunk < frame)
			{
				residual_len = frame - chunk;
				memcpy(residual, (uint8_t *)out + chunk, residual_len);
			}
			additional_amount -= chunk;
		}
	}
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
		.format = SDL_AUDIO_S16,
		.channels = CHN_CNT,
		.freq = linearSoundInterpolation ? 44100 : 22050
	};
	audioStream = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &audioSpecIn, sdl3_audio_callback, NULL);
	if (!audioStream)
	{
#if defined(HOST_64BIT)
		buffer = (uint8_t *)malloc32(256 * CHN_CNT * sizeof(int16_t));
#else
		buffer = (uint8_t *)malloc(256 * CHN_CNT * sizeof(int16_t));
#endif
	}
	else
	{
		uint32_t buf_elements = linearSoundInterpolation ? 1024 : 512;
#if defined(HOST_64BIT)
		buffer = (uint8_t *)malloc32(buf_elements * CHN_CNT * sizeof(int16_t));
#else
		buffer = (uint8_t *)malloc(buf_elements * CHN_CNT * sizeof(int16_t));
#endif
	}
	canGetSamples = true;
	return 0;
}
REALIGN void iSNDdirectserve_(MAYBE_THIS_SINGLE)
{
	if (canGetSamples)
	{
		if (!unPaused && audioStream)
		{
			SDL_ResumeAudioStreamDevice(audioStream);
			unPaused = true;
		}
#ifdef NFS_CPP
		fadeInOut(this);
#else
		fadeInOut();
#endif
		if (!audioStream)
			getSamplesFunc(buffer, 256);
	}
}
REALIGN uint32_t iSNDdirectstop_(void)
{
	canGetSamples = false;
	if (audioStream)
	{
		SDL_DestroyAudioStream(audioStream);
		unPaused = false;
		audioStream = NULL;
	}
	buffer_pos = 0;
	residual_len = 0;
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
