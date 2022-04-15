#include "../winhttp.h"

//----- (00000001400CF1A0) ----------------------------------------------------
__int64 __fastcall sub_1400CF1A0(__m128* a1, double a2, double a3, __m128* a4)
{
	unsigned int v6; // esi
	int v7; // eax
	__int64 v8; // rdx
	__int64 v9; // rbp
	__int64 v10; // rbx
	int v11; // edi
	__m128* v12; // rax
	__int64 v13; // rcx
	__m128 v14; // xmm0
	__int64 result; // rax
	__m128 v16; // [rsp+20h] [rbp-B8h] BYREF
	__int128 v17[4]; // [rsp+30h] [rbp-A8h]

	v6 = 3;
	*a4 = _mm_mul_ps(_mm_add_ps(a1[1], *a1), (__m128)xmmword_140B7AC50);
	a4[1] = *sub_1400CED30(&v16, a1, a2);
	sub_1400CF130(a2);
	v7 = sub_1400CF130(a3);
	if (v7 < (int)v8)
		v7 += 8;
	v9 = v7;
	v10 = v8;
	v17[0] = xmmword_140B7B350;
	v17[1] = xmmword_140B7A800;
	v17[2] = xmmword_140B7B350;
	v17[3] = xmmword_140B7A800;
	if (v8 < v7)
	{
		v11 = 2;
		v6 = v7 - v8 + 3;
		do
		{
			v12 = sub_1400CED30(&v16, a1, COERCE_DOUBLE((unsigned __int64)*((_DWORD*)v17 + v10++)));
			v13 = v11++;
			a4[v13] = *v12;
		} while (v10 < v9);
	}
	v14 = *sub_1400CED30(&v16, a1, a3);
	result = v6;
	a4[v6 - 1] = v14;
	return result;
}
// 1400CF226: variable 'v8' is possibly undefined
// 140B7A800: using guessed type __int128 xmmword_140B7A800;
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B350: using guessed type __int128 xmmword_140B7B350;

