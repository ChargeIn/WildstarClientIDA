#include "../winhttp.h"

//----- (0000000140300DD0) ----------------------------------------------------
__int64 __fastcall sub_140300DD0(__int64 a1, unsigned int a2)
{
	unsigned int v2; // ebx
	__m128* v4; // rcx
	__int64 result; // rax
	__m128* v6; // rdx
	__int64 v7; // rcx
	int v8; // ecx

	v2 = a2;
	if ((dword_140DC0CE0 & 1) == 0)
	{
		dword_140DC0CE0 |= 1u;
		dword_140DC0D20 = 0;
		qword_140DC0D24 = 1i64;
		dword_140DC0D2C = 0;
		dword_140DC0D40 = 0;
		xmmword_140DC0D30 = 0i64;
		xmmword_140DC0CF0 = (__int128)_mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128)xmmword_140B7B240,
				_mm_shuffle_ps((__m128)xmmword_140B7B240, (__m128)xmmword_140B7B240, 170)),
			_mm_unpacklo_ps(
				_mm_shuffle_ps((__m128)xmmword_140B7B240, (__m128)xmmword_140B7B240, 85),
				(__m128)0x3F800000u));
		xmmword_140DC0D00 = (__int128)_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)0i64, _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 170)),
			_mm_unpacklo_ps(_mm_shuffle_ps((__m128)0i64, (__m128)0i64, 85), (__m128)0x3F800000u));
		xmmword_140DC0D10 = xmmword_140B7B1D0;
	}
	if ((a2 & 0xFFFEFFFF) != 0)
		v2 = a2 | 1;
	if ((v2 & 2) != 0)
		v2 |= 0x10000u;
	if ((v2 & 0x6800) != 0)
		v2 |= 8u;
	v4 = *(__m128**)(a1 + 16);
	if (*(_DWORD*)(a1 + 1396) == v4[13].m128_i32[3] && (~*(_DWORD*)(a1 + 1408) & v2) == 0)
		return 0i64;
	if ((v2 & 0x602) != 0)
	{
		v6 = v4 + 15;
		v7 = *(_QWORD*)(a1 + 1224);
		if ((*(_BYTE*)(v7 + 48) & 1) == 0)
			return 2147483658i64;
		v8 = sub_140300FD0(v7, v6, (__int64)&xmmword_140DC0CF0, v2);
		if (v8 < 0)
			return (unsigned int)v8;
		v8 = sub_140305C20(*(__m128**)(a1 + 1224), v2);
		if (v8 < 0)
			return (unsigned int)v8;
		return (v2 & ~*(_DWORD*)(a1 + 1408) & 0xFFFEFFFF) != 0 ? 0x8000000A : 0;
	}
	if (*(_QWORD*)(a1 + 1216))
	{
		if ((v2 & 8) == 0 || (result = sub_140300DD0(*(_QWORD*)(a1 + 1216), 8i64), (int)result >= 0))
		{
			result = sub_140305B60(*(_QWORD*)(a1 + 1216), a1, v2);
			if ((int)result >= 0)
				return (v2 & ~*(_DWORD*)(a1 + 1408) & 0xFFFEFFFF) != 0 ? 0x8000000A : 0;
		}
	}
	else
	{
		if ((*(_BYTE*)(a1 + 48) & 1) == 0)
			return 2147483658i64;
		result = sub_140300FD0(a1, v4 + 15, (__int64)&xmmword_140DC0CF0, v2);
		if ((int)result >= 0)
			return (v2 & ~*(_DWORD*)(a1 + 1408) & 0xFFFEFFFF) != 0 ? 0x8000000A : 0;
	}
	return result;
}
// 140B7B1D0: using guessed type __int128 xmmword_140B7B1D0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140DC0CE0: using guessed type int dword_140DC0CE0;
// 140DC0CF0: using guessed type __int128 xmmword_140DC0CF0;
// 140DC0D00: using guessed type __int128 xmmword_140DC0D00;
// 140DC0D10: using guessed type __int128 xmmword_140DC0D10;
// 140DC0D20: using guessed type int dword_140DC0D20;
// 140DC0D24: using guessed type __int64 qword_140DC0D24;
// 140DC0D2C: using guessed type int dword_140DC0D2C;
// 140DC0D30: using guessed type __int128 xmmword_140DC0D30;
// 140DC0D40: using guessed type int dword_140DC0D40;

