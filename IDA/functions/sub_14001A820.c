#include "../winhttp.h"

//----- (000000014001A820) ----------------------------------------------------
__int64 __fastcall sub_14001A820(__int64 a1, int a2, float a3)
{
	unsigned __int64 v4; // rsi
	int* v5; // r8
	float v6; // xmm0_4
	float v7; // eax
	float* v8; // rdi
	unsigned __int64 i; // rcx
	float v10; // xmm1_4
	float* v11; // rcx
	void (*v12)(void); // rcx
	float v14; // [rsp+40h] [rbp+18h] BYREF

	v14 = a3;
	v4 = a2;
	if (*(_DWORD*)(a1 + 72))
		(*(void(__fastcall**)(__int64, float*))(*(_QWORD*)a1 + 48i64))(a1, &v14);
	v5 = (int*)qword_140C63750;
	v6 = *(float*)(a1 + 4i64 * *(int*)qword_140C63750 + 32);
	if (v4 < 5)
	{
		v7 = v14;
		v8 = (float*)(a1 + 32 + 4 * v4);
		for (i = 5 - v4; i; --i)
			*v8++ = v7;
	}
	*(_DWORD*)(a1 + 24) = (1 << v4) | *(_DWORD*)(a1 + 24) & ((1 << v4) - 1);
	v10 = *(float*)(a1 + 4i64 * *v5 + 32);
	if (v6 != v10)
	{
		v11 = *(float**)(a1 + 64);
		if (v11)
			*v11 = v10;
		v12 = *(void (**)(void))(a1 + 80);
		if (v12)
			v12();
	}
	return 1i64;
}
// 140C63750: using guessed type __int64 qword_140C63750;

