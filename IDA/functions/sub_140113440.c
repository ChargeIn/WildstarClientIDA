#include "../winhttp.h"

//----- (0000000140113440) ----------------------------------------------------
void __fastcall sub_140113440(__m128* a1)
{
	unsigned __int64 v1; // rdx
	unsigned __int64 v2; // r8
	int v3; // eax
	__m128i v4; // xmm2
	__m128 v5; // xmm5
	__m128 v6; // xmm4
	unsigned __int64 v7; // r8
	__m128 v8; // xmm2
	unsigned __int64 v9; // r8
	__m128* v10; // r8
	__m128 v11[2]; // [rsp+30h] [rbp-28h] BYREF

	v1 = a1[81].m128_u64[1];
	if (v1)
	{
		if ((a1[41].m128_i8[8] & 1) != 0)
		{
			v2 = a1[29].m128_u64[1];
			v3 = 0;
			v4 = _mm_cvtsi32_si128(0);
			v5 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[45].m128_u32[1]), v4),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[45].m128_u32[2]), v4)));
			v6 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[44].m128_u32[3]), v4),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[45].m128_u32[0]), v4)));
			if (v2)
				v3 = *(_DWORD*)(v2 + 1300);
			v7 = a1[65].m128_u64[1];
			v8 = _mm_unpacklo_ps((__m128)0i64, _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v3), (__m128)0i64));
			v11[0] = _mm_sub_ps(v6, v8);
			v11[1] = _mm_sub_ps(v5, v8);
			sub_140110150((__int64)a1, v11, v7, v7 + v1, (unsigned int*)&a1[73], 0);
		}
		else
		{
			v9 = a1[73].m128_u32[0];
			if (v9 >= *(_QWORD*)(qword_140C63678 + 48))
				v10 = *(__m128**)(qword_140C63678 + 40);
			else
				v10 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32 * v9);
			if (*(_QWORD*)(qword_140C63650 + 1848))
				sub_140103E60(
					*(_QWORD**)(qword_140C63650 + 1848),
					a1 + 82,
					v10,
					0,
					COERCE_INT(
						(float)(*(float*)&dword_140C63664 - *(float*)(qword_140C63650 + 1856))
						* *(float*)(qword_140C63650 + 1860)));
		}
	}
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;

