#include "../winhttp.h"

//----- (0000000140116A00) ----------------------------------------------------
void __fastcall sub_140116A00(__int64 a1)
{
	float* v2; // rax
	int v3; // r11d
	int v4; // esi
	__int64 v5; // rax
	int v6; // r10d
	__int64 v7; // rax
	int v8; // r9d
	int v9; // eax
	int v10; // ecx
	float v11; // xmm2_4
	__int128 v12[2]; // [rsp+20h] [rbp-28h] BYREF

	v2 = sub_140141910(a1 + 1024, (float*)v12);
	v3 = (int)*v2;
	v4 = (int)v2[1];
	v5 = *(_QWORD*)(a1 + 472);
	if (v5)
		v6 = *(_DWORD*)(v5 + 1300);
	else
		v6 = 0;
	v7 = *(_QWORD*)(a1 + 464);
	if (v7)
		v8 = *(_DWORD*)(v7 + 1300);
	else
		v8 = 0;
	v9 = *(_DWORD*)(a1 + 716);
	v10 = *(_DWORD*)(a1 + 720);
	v12[0] = (__int128)_mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v9 + (int)qword_140C77760 - v8), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(
				_mm_cvtsi32_si128(v10 + HIDWORD(qword_140C77760) - v6),
				_mm_cvtsi32_si128(0))));
	v12[1] = (__int128)_mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v9 + v3 - v8), _mm_cvtsi32_si128(0)),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(v10 + v4 - v6), _mm_cvtsi32_si128(0))));
	if (*(_BYTE*)(a1 + 1888))
		v11 = *(float*)(a1 + 1892);
	else
		v11 = *(float*)(a1 + 1852) + 1.0;
	sub_140141820(a1 + 1024, v12, v11);
}
// 140C77760: using guessed type __int64 qword_140C77760;

