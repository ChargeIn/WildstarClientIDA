#include "../winhttp.h"

//----- (0000000140867C00) ----------------------------------------------------
__int64 __fastcall sub_140867C00(__int64 a1, int a2)
{
	int* v2; // r8
	_DWORD* v5; // rcx
	int v6; // eax
	int v7; // ecx
	float v8; // xmm8_4
	float v9; // xmm7_4
	float v10; // xmm9_4
	float v11; // xmm8_4
	float v12; // xmm7_4
	float v13; // xmm9_4
	float v14; // xmm7_4
	__int64 i; // rax
	__int64 v16; // rdx
	int v17; // ecx
	__int64 result; // rax
	float v19; // xmm10_4

	v2 = *(int**)(a1 + 24);
	if (!v2)
		return 2i64;
	*(_BYTE*)(a1 + 44) = 1;
	if (v2[2] <= 0)
		return 37i64;
	*(_WORD*)(a1 + 36) = 0;
	v5 = *(_DWORD**)v2;
	*(_WORD*)(a1 + 36) = 1;
	*(_DWORD*)(a1 + 100) = *v5;
	*(_DWORD*)(a1 + 104) = v5[1];
	*(_DWORD*)(a1 + 108) = v5[2];
	v6 = (dword_140C110B8 + v5[3] - 1) / dword_140C110B8;
	if (!v6)
		v6 = 1;
	*(_DWORD*)(a1 + 84) = v6;
	v7 = v2[2];
	if (v7 <= 1)
	{
		*(_QWORD*)(a1 + 112) = 0i64;
		*(_DWORD*)(a1 + 120) = 0;
	}
	else
	{
		v8 = *(float*)(*(_QWORD*)v2 + 16i64);
		v9 = *(float*)(*(_QWORD*)v2 + 24i64);
		v10 = *(float*)(*(_QWORD*)v2 + 20i64);
		if (v8 == *(float*)(a1 + 100) && v10 == *(float*)(a1 + 104) && v9 == *(float*)(a1 + 108) && v7 <= 2)
		{
			sub_140867A50(a1, (float*)(a1 + 100));
			v11 = *(float*)(a1 + 100);
			v10 = *(float*)(a1 + 104);
			v12 = *(float*)(a1 + 108);
		}
		else
		{
			sub_140867A50(a1, (float*)(a1 + 100));
			v11 = v8
				+ (float)((float)((float)((float)(int)sub_1407DDB28() * 0.000061038882) - 1.0)
					* *(float*)(*(_QWORD*)(a1 + 24) + 12i64));
			v12 = v9
				+ (float)((float)((float)((float)(int)sub_1407DDB28() * 0.000061038882) - 1.0)
					* *(float*)(*(_QWORD*)(a1 + 24) + 16i64));
		}
		v13 = v10 - *(float*)(a1 + 104);
		v14 = v12 - *(float*)(a1 + 108);
		*(float*)(a1 + 112) = v11 - *(float*)(a1 + 100);
		*(float*)(a1 + 116) = v13;
		*(float*)(a1 + 120) = v14;
	}
	for (i = *(_QWORD*)(a1 + 48); i != *(_QWORD*)(a1 + 56); i += 8i64)
	{
		v16 = *(_QWORD*)(*(_QWORD*)i + 88i64);
		if ((*(_BYTE*)(v16 + 76) & 4) == 0)
		{
			*(_DWORD*)(v16 + 24) = *(_DWORD*)(a1 + 100);
			*(_DWORD*)(v16 + 28) = *(_DWORD*)(a1 + 104);
			*(_DWORD*)(v16 + 32) = *(_DWORD*)(a1 + 108);
		}
	}
	v17 = *(_DWORD*)(a1 + 84);
	*(_DWORD*)a1 = 1;
	*(_DWORD*)(a1 + 76) = a2;
	*(_DWORD*)(a1 + 80) = v17 + a2;
	result = 1i64;
	v19 = 1.0 / (float)v17;
	*(float*)(a1 + 88) = v19;
	*(float*)(a1 + 92) = -(float)((float)a2 * v19);
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C110B8: using guessed type int dword_140C110B8;

