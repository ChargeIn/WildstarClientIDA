#include "../winhttp.h"

//----- (00000001408F73F0) ----------------------------------------------------
__int64 __fastcall sub_1408F73F0(__int64 a1, int* a2)
{
	float v3; // xmm8_4
	float v4; // xmm9_4
	int v5; // eax
	int v6; // ebp
	float v7; // xmm7_4
	float v8; // xmm6_4
	unsigned int v9; // edi
	unsigned int* v10; // rsi
	__int64 v11; // rdx
	_DWORD* v12; // rcx
	float v13; // xmm1_4
	float v14; // xmm8_4
	float v15; // xmm0_4
	unsigned int v16; // eax

	v3 = *(float*)(*(_QWORD*)(a1 + 24) + 96i64);
	v4 = *(float*)(a1 + 104) * (double)*a2;
	if (*(_BYTE*)(a1 + 609))
	{
		*(_WORD*)(a1 + 608) = 1;
		*(_QWORD*)(a1 + 584) = 0i64;
		*(_DWORD*)(a1 + 568) = 0;
	}
	if (*(_DWORD*)(a1 + 560))
	{
		v5 = *(_DWORD*)(a1 + 168);
		v6 = 0;
		v7 = *(float*)(a1 + 72) / *(float*)(a1 + 112);
		v8 = (float)(v3 * v4) / (float)v5;
		if (v5)
		{
			do
			{
				v9 = 0;
				v10 = (unsigned int*)(a1 + 80);
				do
				{
					v11 = *(_QWORD*)(a1 + 24);
					if (*(_BYTE*)(v9 + v11 + 152))
					{
						if (v9)
							v12 = (_DWORD*)(v11 + 16i64 * v9 + 8);
						else
							v12 = (_DWORD*)(a1 + 8);
						*(float*)(*(_QWORD*)(a1 + 56) + 4i64 * (v6 + v9 * *(_DWORD*)(a1 + 168))) = sub_140835CA0(
							v12,
							(float)((float)((float)v6 * v8)
								+ *(float*)(a1 + 108))
							* v7,
							*v10,
							v10);
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(a1 + 56) + 4i64 * (v6 + v9 * *(_DWORD*)(a1 + 168))) = 0;
					}
					++v9;
					++v10;
				} while (v9 < 4);
				++v6;
			} while ((unsigned int)v6 < *(_DWORD*)(a1 + 168));
		}
	}
	v13 = *(float*)(a1 + 112);
	v14 = (float)(v3 * v4) + *(float*)(a1 + 108);
	*(float*)(a1 + 108) = v14;
	if (v14 >= v13)
	{
		v15 = sub_1408FDE98(v14, v13);
		v16 = *(_DWORD*)(a1 + 68);
		++* (_DWORD*)(a1 + 64);
		*(float*)(a1 + 108) = v15;
		if (v16 && *(_DWORD*)(a1 + 64) >= v16)
			return 17i64;
		*(_BYTE*)(a1 + 609) = 1;
		sub_1408F7920(a1);
		if ((unsigned int)sub_1408F79A0(a1) != 1)
			return 2i64;
		sub_1408F81A0(a1);
		*(_QWORD*)(a1 + 80) = 0i64;
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	return 45i64;
}

