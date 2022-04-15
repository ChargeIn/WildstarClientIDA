#include "../winhttp.h"

//----- (0000000140117C00) ----------------------------------------------------
__int64 __fastcall sub_140117C00(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	_DWORD* v4; // rax
	int v5; // eax
	__int64 v6; // rcx
	__m128i v7; // xmm0
	__int64 v8; // rcx
	unsigned int v9; // [rsp+38h] [rbp+10h] BYREF
	int v10; // [rsp+3Ch] [rbp+14h]

	result = sub_140117A50(a1);
	v3 = result;
	if (result)
	{
		v4 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v5 = 0;
		else
			v5 = sub_140056D60(a1, 2u);
		sub_140116830(v3, &v9, v5);
		v6 = a1[2];
		result = 2i64;
		v7 = _mm_cvtsi32_si128(v9);
		*(_DWORD*)(v6 + 8) = 3;
		*(_QWORD*)v6 = *(_OWORD*)&_mm_cvtepi32_pd(v7);
		a1[2] += 16i64;
		v8 = a1[2];
		*(double*)v7.m128i_i64 = (double)v10;
		*(_DWORD*)(v8 + 8) = 3;
		*(_QWORD*)v8 = v7.m128i_i64[0];
		a1[2] += 16i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

