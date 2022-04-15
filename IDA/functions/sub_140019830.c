#include "../winhttp.h"

//----- (0000000140019830) ----------------------------------------------------
__int64 __fastcall sub_140019830(__int64 a1, float a2)
{
	int* v3; // r8
	unsigned __int64 v4; // rcx
	float* v5; // rdx
	float v6; // xmm0_4
	int v7; // eax
	float v8; // xmm1_4
	float* v9; // rcx
	void(__fastcall * v10)(_QWORD, float*); // rcx
	float v12; // [rsp+38h] [rbp+10h] BYREF

	v12 = a2;
	if (*(_DWORD*)(a1 + 72))
	{
		(*(void(__fastcall**)(__int64, float*))(*(_QWORD*)a1 + 48i64))(a1, &v12);
		a2 = v12;
	}
	v3 = (int*)qword_140C63750;
	v4 = 0i64;
	v5 = (float*)(a1 + 32);
	v6 = *(float*)(a1 + 4i64 * *(int*)qword_140C63750 + 32);
	*(float*)(a1 + 60) = a2;
	v7 = 1;
	do
	{
		if ((v7 & *(_DWORD*)(a1 + 24)) != 0)
			break;
		v7 = __ROL4__(v7, 1);
		++v4;
		*v5++ = a2;
	} while (v4 < 5);
	v8 = *(float*)(a1 + 4i64 * *v3 + 32);
	if (v6 != v8)
	{
		v9 = *(float**)(a1 + 64);
		if (v9)
			*v9 = v8;
		v10 = *(void(__fastcall**)(_QWORD, float*))(a1 + 80);
		if (v10)
			v10(v10, v5);
	}
	return 1i64;
}
// 140C63750: using guessed type __int64 qword_140C63750;

