#include "../winhttp.h"

//----- (00000001408F1E20) ----------------------------------------------------
void __fastcall sub_1408F1E20(__int64 a1, float a2)
{
	__int64 v2; // rdi
	float v4; // xmm7_4
	float v5; // xmm1_4
	unsigned int i; // r9d
	__int64 v7; // r8
	float v8; // xmm0_4
	unsigned int v9; // eax
	float v10; // xmm1_4
	double v11; // xmm0_8
	unsigned int j; // edx
	__int64 v13; // rcx
	int v14; // eax
	__int64 v15; // rsi
	float v16; // xmm1_4

	v2 = 0i64;
	v4 = a2 * 0.5;
	if (*(_BYTE*)(a1 + 48) && (*(float*)(a1 + 24) != 0.0 || *(float*)(a1 + 28) != 0.0))
	{
		v5 = (double)(int)sub_1407DDB28() * 0.00003051850947599719;
		sub_1408FBFC0(
			COERCE_DOUBLE(0x40000000i64),
			(float)((float)((float)((float)(v5 * 2.0) - 1.0) * *(float*)(a1 + 28)) + *(float*)(a1 + 24)) * 0.0099999998);
		for (i = 0; i < *(_DWORD*)(a1 + 64); ++i)
		{
			v7 = *(_QWORD*)(a1 + 56);
			v8 = 2.0 * *(float*)(v7 + 16i64 * i);
			if (v8 < v4)
			{
				if (v8 >= 20.0)
					*(float*)(v7 + 16i64 * i) = v8;
				else
					*(_DWORD*)(v7 + 16i64 * i) = 1101004800;
			}
			else
			{
				v9 = -- * (_DWORD*)(a1 + 64);
				if (i < v9)
				{
					*(_DWORD*)(v7 + 16i64 * i) = *(_DWORD*)(v7 + 16i64 * v9);
					*(_DWORD*)(v7 + 16i64 * i + 4) = *(_DWORD*)(v7 + 16i64 * v9 + 4);
					*(_DWORD*)(v7 + 16i64 * i + 8) = *(_DWORD*)(v7 + 16i64 * v9 + 8);
					*(_DWORD*)(v7 + 16i64 * i + 12) = *(_DWORD*)(v7 + 16i64 * v9 + 12);
				}
			}
		}
	}
	if (*(_BYTE*)(a1 + 49) && (*(float*)(a1 + 32) != 0.0 || *(float*)(a1 + 36) != 0.0))
	{
		v10 = (double)(int)sub_1407DDB28() * 0.00003051850947599719;
		v11 = sub_1408FBFC0(
			COERCE_DOUBLE(0x40000000i64),
			(float)((float)((float)((float)(v10 * 2.0) - 1.0) * *(float*)(a1 + 36)) + *(float*)(a1 + 32))
			* 0.0099999998);
		for (j = 0;
			j < *(_DWORD*)(a1 + 64);
			*(float*)(*(_QWORD*)(a1 + 56) + 8 * v13 + 8) = *(float*)&v11
			* *(float*)(*(_QWORD*)(a1 + 56) + 8 * v13 + 8))
		{
			v13 = 2i64 * j++;
		}
	}
	if (*(_BYTE*)(a1 + 50))
	{
		if (*(float*)(a1 + 40) != 0.0)
		{
			v14 = *(_DWORD*)(a1 + 64) >> 1;
			if (v14)
			{
				v15 = ((unsigned int)(v14 - 1) >> 1) + 1;
				do
				{
					v2 += 32i64;
					v16 = (float)((float)((float)((double)(int)sub_1407DDB28() * 0.00003051850947599719) * 2.0) - 1.0)
						* *(float*)(a1 + 40);
					*(float*)(v2 + *(_QWORD*)(a1 + 56) - 20) = -v16;
					*(float*)(v2 + *(_QWORD*)(a1 + 56) - 4) = v16;
					--v15;
				} while (v15);
			}
		}
	}
}
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

