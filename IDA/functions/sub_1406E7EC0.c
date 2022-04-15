#include "../winhttp.h"

//----- (00000001406E7EC0) ----------------------------------------------------
__int64 __fastcall sub_1406E7EC0(__int64 a1, int* a2, int a3)
{
	int v3; // edx
	int v4; // eax
	float v5; // xmm4_4
	int v6; // eax
	float v7; // xmm3_4
	int v8; // eax
	float v9; // xmm3_4
	float v10; // xmm2_4
	__int64 result; // rax

	if (*(char*)(a1 + 28) >= 0)
		return sub_1400D2660(a1, a2, a3);
	v3 = *(_DWORD*)qword_140C63750;
	v4 = dword_140C53B20;
	if (a3 <= 0)
	{
		if (v3 < dword_140C53B20)
			v4 = *(_DWORD*)qword_140C63750;
		v5 = *(float*)(a1 + 1140) - dword_140C53B30[v4];
	}
	else
	{
		if (v3 < dword_140C53B20)
			v4 = *(_DWORD*)qword_140C63750;
		v5 = dword_140C53B30[v4] + *(float*)(a1 + 1140);
	}
	v6 = dword_140C53B80;
	if (v3 < dword_140C53B80)
		v6 = *(_DWORD*)qword_140C63750;
	v7 = dword_140C53B90[v6];
	v8 = dword_140C53BE0;
	v9 = fmaxf(v7, v5);
	if (v3 < dword_140C53BE0)
		v8 = *(_DWORD*)qword_140C63750;
	v10 = dword_140C53BF0[v8];
	result = 0i64;
	*(float*)(a1 + 1140) = fminf(v10, v9);
	return result;
}
// 140C53B20: using guessed type int dword_140C53B20;
// 140C53B30: using guessed type float dword_140C53B30[16];
// 140C53B80: using guessed type int dword_140C53B80;
// 140C53B90: using guessed type float dword_140C53B90[16];
// 140C53BE0: using guessed type int dword_140C53BE0;
// 140C53BF0: using guessed type float dword_140C53BF0[16];
// 140C63750: using guessed type __int64 qword_140C63750;

