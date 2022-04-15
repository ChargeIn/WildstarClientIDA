#include "../winhttp.h"

//----- (000000014019D7B0) ----------------------------------------------------
__int64 __fastcall sub_14019D7B0(__int64 a1, int a2, __int128* a3)
{
	bool v3; // zf
	__int128 v4; // xmm0
	unsigned __int64 v5; // rdi
	int* v7; // r8
	__m128 v8; // xmm1
	__int128* v9; // rax
	unsigned __int64 v10; // rcx
	__m128 v11; // xmm0
	__m128* v12; // rcx
	void(__fastcall * v13)(__m128*); // r8
	__int128 v15; // [rsp+20h] [rbp-28h] BYREF
	__m128 v16; // [rsp+30h] [rbp-18h] BYREF

	v3 = *(_DWORD*)(a1 + 168) == 0;
	v4 = *a3;
	v5 = a2;
	v15 = *a3;
	if (!v3)
	{
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)a1 + 48i64))(a1, &v15);
		v4 = v15;
	}
	v7 = (int*)qword_140C63750;
	v8 = *(__m128*)(a1 + 16 * (*(int*)qword_140C63750 + 2i64));
	v16 = v8;
	if (v5 < 5)
	{
		v9 = (__int128*)(a1 + 16 * (v5 + 2));
		v10 = 5 - v5;
		do
		{
			*v9++ = v4;
			--v10;
		} while (v10);
	}
	*(_DWORD*)(a1 + 24) = (1 << v5) | *(_DWORD*)(a1 + 24) & ((1 << v5) - 1);
	v11 = *(__m128*)(a1 + 16 * (*v7 + 2i64));
	if ((_mm_movemask_ps(_mm_cmpneq_ps(v8, v11)) & 3) != 0)
	{
		v12 = *(__m128**)(a1 + 160);
		if (v12)
			*v12 = v11;
		v13 = *(void(__fastcall**)(__m128*))(a1 + 176);
		if (v13)
			v13(&v16);
	}
	return 1i64;
}
// 140C63750: using guessed type __int64 qword_140C63750;
// 14019D7B0: using guessed type __m128 var_18;

