#include "../winhttp.h"

//----- (000000014056BA10) ----------------------------------------------------
void __fastcall sub_14056BA10(__int64 a1, __m128* a2)
{
	unsigned int* v4; // rdi
	float v5; // xmm6_4
	__m128 v6; // xmm7
	__int64 v7; // rax
	__m128 v8; // xmm1
	__int64 i; // rcx

	v4 = (unsigned int*)sub_14024B980(*(_DWORD*)(**(_QWORD**)a1 + 8i64));
	if (v4 && sub_1403D7BC0(qword_140C65970, *(_DWORD*)(a1 + 16)))
	{
		v5 = 0.0;
		v6 = _mm_sub_ps(
			*a2,
			_mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v4[3], (__m128)v4[5]), _mm_unpacklo_ps((__m128)v4[4], (__m128)0i64)));
		if ((dword_140DC3408 & 1) != 0)
		{
			v5 = *(float*)&dword_140DC340C;
		}
		else
		{
			dword_140DC3408 |= 1u;
			v7 = sub_140200220(0x431u);
			if (v7)
				v5 = *(float*)(v7 + 24);
			dword_140DC340C = LODWORD(v5);
		}
		v8 = _mm_mul_ps(v6, v6);
		if ((float)((float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0])
			+ _mm_shuffle_ps(v8, v8, 170).m128_f32[0]) > (float)(v5 * v5)
			|| !*(_DWORD*)(a1 + 8)
			|| *(_DWORD*)(a1 + 20))
		{
			for (i = *(_QWORD*)(a1 + 24); i; i = *(_QWORD*)(a1 + 24))
				(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)i + 40i64))(i, 1i64, 1i64);
		}
		else
		{
			sub_14056BB50(a1, 1);
		}
	}
}
// 140C65970: using guessed type __int64 qword_140C65970;
// 140DC3408: using guessed type int dword_140DC3408;
// 140DC340C: using guessed type int dword_140DC340C;

