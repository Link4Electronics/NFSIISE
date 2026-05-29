// SPDX-License-Identifier: MIT

#include "Wrapper.h"

#if defined(__linux__)
#include <endian.h>
#endif
#include <string.h>

REGPARM void sub_41B250(MAYBE_THIS uint32_t arg1, void *arg2);

#ifdef NFS_CPP
	#define sub_41B250(a, b) \
		sub_41B250(this, a, b)
#endif

typedef struct
{
	char name[10];
	int16_t car;
	int32_t time;
	int32_t mode;
} StfEntry;
typedef struct
{
	StfEntry bestLap;
	StfEntry laps[3][10];
} Stf;

REALIGN REGPARM FILE *fopen_wrap(const char *fileName, const char *p)
{
	char *tmpFileName = convertFilePath(fileName, true);
	FILE *f = fopen(tmpFileName, p);
	free(tmpFileName);
	return f;
}

static void readEntry(FILE *f, StfEntry *stfEntry)
{
	uint32_t i;
	fgets(stfEntry->name, sizeof stfEntry->name, f);
	for (i = 0; i < sizeof stfEntry->name; ++i)
		if (stfEntry->name[i] == '\t' || stfEntry->name[i] == '\n' || stfEntry->name[i] == '\r')
			stfEntry->name[i] = '\0';
	fscanf(f, "%hi\n%d\n%d\n", &stfEntry->car, &stfEntry->time, &stfEntry->mode);
}

REALIGN REGPARM void fetchTrackRecords(MAYBE_THIS uint32_t trackNo, BOOL clear)
{
#if defined(HOST_64BIT)
	/* buffer and stf must live in the game's 32-bit address space,
	   not on the host stack (which is above 4 GB). */
	char *buffer = (char *)malloc32(MAX_PATH);
	Stf *stf = (Stf *)malloc32(sizeof(Stf));
	memset(stf, 0, sizeof(Stf));
#else
	char buffer[MAX_PATH];
	Stf stf;
	memset(&stf, 0, sizeof stf);
#endif
	FILE *f;

	if (!clear)
	{
		sub_41B250(trackNo + 20, buffer);
		if ((f = fopen_wrap(buffer, "r")))
		{
			fgets(buffer, 80, f);
			fscanf(f, "%d\n", (int32_t *)buffer);
			fgets(buffer, 80, f);

			uint32_t i, j;
#if defined(HOST_64BIT)
			readEntry(f, &stf->bestLap);
			for (j = 0; j < 3; ++j)
			{
				fgets(buffer, 80, f);
				for (i = 0; i < 10; ++i)
					readEntry(f, &stf->laps[j][i]);
			}
#else
			readEntry(f, &stf.bestLap);
			for (j = 0; j < 3; ++j)
			{
				fgets(buffer, 80, f);
				for (i = 0; i < 10; ++i)
					readEntry(f, &stf.laps[j][i]);
			}
#endif
			fclose(f);
		}
	}

	sub_41B250(trackNo, buffer);
	if ((f = fopen_wrap(buffer, "wb")))
	{
#if defined(HOST_64BIT)
		{
#if defined(HOST_BIG_ENDIAN)
			{
				StfEntry *e = &stf->bestLap;
				e->car  = htole16(e->car);
				e->time = htole32(e->time);
				e->mode = htole32(e->mode);
			}
			for (int j = 0; j < 3; j++)
				for (int i = 0; i < 10; i++) {
					StfEntry *e = &stf->laps[j][i];
					e->car  = htole16(e->car);
					e->time = htole32(e->time);
					e->mode = htole32(e->mode);
				}
#endif
			fwrite(stf, 1, sizeof(Stf), f);
		}
#else
		fwrite(&stf, 1, sizeof stf, f);
#endif
		fclose(f);
	}
#if defined(HOST_64BIT)
	free32(buffer);
	free32(stf);
#endif
}
