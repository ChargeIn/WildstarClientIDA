#include "../winhttp.h"

//----- (00000001402C3140) ----------------------------------------------------
char __fastcall sub_1402C3140(
	__int64 a1,
	unsigned __int64 a2,
	__int64 a3,
	char* a4,
	unsigned __int64 a5,
	int a6,
	char a7)
{
	__int64 v7; // r10
	char* v8; // rsi
	unsigned __int64 v11; // rdx
	unsigned int v12; // eax
	unsigned int v13; // r8d
	int v14; // r9d
	int v15; // ebx
	unsigned int v16; // eax
	unsigned __int64 i; // rdx
	unsigned int v18; // r8d
	unsigned int v19; // eax
	unsigned int v20; // eax

	v7 = a1;
	v8 = a4;
	if (a6 == 85)
	{
		if (a5)
		{
			do
			{
				if (v7 - a1 >= a2)
					break;
				v20 = *(unsigned __int16*)v8;
				v8 += 2;
				v7 += 4i64;
				*(_DWORD*)(v7 - 4) = (v20 << 19) | (32 * (v20 & 0x7E0 | ((v20 & 0x1C) << 9))) | ((v20 & 0x600 | ((v20 & 0xF800 | (v20 >> 5)) >> 3)) >> 5) | 0xFF000000;
			} while (v8 - a4 < a5);
		}
		return 1;
	}
	else
	{
		if (a6 == 86)
		{
			for (i = 0i64;
				i < a5;
				*(_DWORD*)(v7 - 4) = ((v18 & 0x7C00 | (v18 >> 5) & 0x380) >> 7) | (2 * (v18 & 0x380 | (32 * (v18 & 0x3E0)))) | ((v18 & 0x1C | (32 * (v18 & 0x1F))) << 14) | v19)
			{
				if (v7 - a1 >= a2)
					break;
				v18 = *(unsigned __int16*)v8;
				v8 += 2;
				v19 = (a7 & 1) != 0 ? -16777216 : (v18 & 0x8000u) != 0 ? 0xFF000000 : 0;
				i += 2i64;
				v7 += 4i64;
			}
		}
		else
		{
			if (a6 != 115)
				return 0;
			v11 = 0i64;
			if (a5)
			{
				while (v7 - a1 < a2)
				{
					v12 = *(unsigned __int16*)v8;
					v8 += 2;
					v13 = (v12 & 0xF00 | (v12 >> 4) & 0xF0) >> 4;
					v14 = 16 * (v12 & 0xF0 | (16 * (v12 & 0xF0)));
					v15 = (v12 & 0xF | (16 * (v12 & 0xF))) << 16;
					if ((a7 & 1) != 0)
						v16 = -16777216;
					else
						v16 = ((v12 & 0xF000) << 12) | (v12 << 16) & 0xF0000000;
					v11 += 2i64;
					v7 += 4i64;
					*(_DWORD*)(v7 - 4) = v13 | v14 | v15 | v16;
					if (v11 >= a5)
						return 1;
				}
			}
		}
		return 1;
	}
}

