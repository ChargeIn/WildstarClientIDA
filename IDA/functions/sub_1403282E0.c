#include "../winhttp.h"

//----- (00000001403282E0) ----------------------------------------------------
__m128* __fastcall sub_1403282E0(__int64 a1, __m128** a2, __int64 a3, unsigned int* a4)
{
	_DWORD* v4; // rcx
	__int64 v5; // r8
	__int64 v6; // rax
	__int128 v7; // xmm0
	__m128* result; // rax
	__m128 v9; // xmm1

	if ((dword_140DC0E14 & 1) == 0)
	{
		dword_140DC0E14 |= 1u;
		xmmword_140DC0E20[0] = xmmword_140B7AD00;
		xmmword_140DC0E30 = xmmword_140B7A330;
		xmmword_140DC0E40 = xmmword_140B7AD60;
		xmmword_140DC0E60 = xmmword_140B7AF20;
		xmmword_140DC0E50 = xmmword_140B7A4B0;
		xmmword_140DC0E80 = xmmword_140B7B290;
		xmmword_140DC0E70 = xmmword_140B7A700;
	}
	v4 = (_DWORD*)(a3 + 144);
	v5 = 5i64;
	do
	{
		v6 = (int)*(v4 - 35);
		if (!(_DWORD)v6 || *v4)
		{
			v9 = (__m128)xmmword_140DC0E20[v6];
			result = *a2;
			**a2 = _mm_mul_ps(v9, _mm_shuffle_ps((__m128) * a4, (__m128) * a4, 0));
		}
		else
		{
			v7 = xmmword_140DC0E20[v6];
			result = *a2;
			**a2 = (__m128)v7;
		}
		++v4;
		a4 += 5;
		++a2;
		--v5;
	} while (v5);
	return result;
}
// 140B7A330: using guessed type __int128 xmmword_140B7A330;
// 140B7A4B0: using guessed type __int128 xmmword_140B7A4B0;
// 140B7A700: using guessed type __int128 xmmword_140B7A700;
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7AD60: using guessed type __int128 xmmword_140B7AD60;
// 140B7AF20: using guessed type __int128 xmmword_140B7AF20;
// 140B7B290: using guessed type __int128 xmmword_140B7B290;
// 140DC0E14: using guessed type int dword_140DC0E14;
// 140DC0E20: using guessed type __int128 xmmword_140DC0E20[];
// 140DC0E30: using guessed type __int128 xmmword_140DC0E30;
// 140DC0E40: using guessed type __int128 xmmword_140DC0E40;
// 140DC0E50: using guessed type __int128 xmmword_140DC0E50;
// 140DC0E60: using guessed type __int128 xmmword_140DC0E60;
// 140DC0E70: using guessed type __int128 xmmword_140DC0E70;
// 140DC0E80: using guessed type __int128 xmmword_140DC0E80;

