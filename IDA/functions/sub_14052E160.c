//----- (000000014052E160) ----------------------------------------------------
void __fastcall sub_14052E160(__int64 a1)
{
	unsigned int v2; // eax
	unsigned int v3; // ecx
	__m128 v4; // xmm5
	__m128 v5; // xmm4
	__m128 v6; // xmm5
	__m128 v7; // xmm0
	int v8[4]; // [rsp+20h] [rbp-28h] BYREF
	__m128 v9; // [rsp+30h] [rbp-18h]
	unsigned int v10; // [rsp+50h] [rbp+8h] BYREF
	unsigned int v11; // [rsp+54h] [rbp+Ch]

	if (*(_QWORD*)(a1 + 1152) && *(int*)(a1 + 1264) <= 2)
	{
		sub_14052B440(a1, v8);
		sub_14052AB00(a1, &v10, (float*)(a1 + 1312));
		if (*(_QWORD*)(a1 + 1152))
		{
			v2 = 2048;
			v3 = 2048;
			if (*(_DWORD*)(a1 + 1264) == 1)
			{
				v2 = 4096;
				v3 = 4096;
			}
		}
		else
		{
			v2 = 0;
			v3 = 0;
		}
		v4 = _mm_cvtepi32_ps(
			_mm_unpacklo_epi32(
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v8[2] - v8[0]), _mm_cvtsi32_si128(0)),
				_mm_unpacklo_epi32(_mm_cvtsi32_si128(v8[3] - v8[1]), _mm_cvtsi32_si128(0))));
		v5 = _mm_sub_ps(
			_mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v2), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(0)))),
			v4);
		v6 = _mm_div_ps(v4, (__m128)xmmword_140B7B2F0);
		v9 = v5;
		if (!*(_DWORD*)(a1 + 1224))
		{
			v7 = _mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(0)),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(0))));
			*(__m128*)(a1 + 1248) = v7;
			*(__m128*)(a1 + 1248) = _mm_sub_ps(v7, v6);
		}
		sub_14052E280(a1);
	}
}
// 140B7B2F0: using guessed type __int128 xmmword_140B7B2F0;

