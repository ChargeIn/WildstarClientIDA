//----- (000000014010BCA0) ----------------------------------------------------
void __fastcall sub_14010BCA0(float* a1, unsigned int* a2, __int64 a3)
{
	__int64 v4; // rcx
	__int64 v5; // r9
	__int64 v6; // rax
	_QWORD* v7; // rcx
	__int64 v8; // rcx
	__m128i v9; // xmm2
	__m128i v10; // xmm3
	__m128i v11; // xmm1
	__int128 v12; // [rsp+30h] [rbp-38h] BYREF
	__int128 v13[2]; // [rsp+40h] [rbp-28h] BYREF

	v4 = *(_QWORD*)a1;
	if (v4)
	{
		v5 = *(_QWORD*)(v4 + 8);
		if (!v5 || (a3 & v5) == v5)
		{
			v6 = *(_QWORD*)(v4 + 16);
			if (!v6 || (v6 & a3) == 0)
			{
				sub_14014E8D0(v4 + 32, v13, a2);
				v7 = (_QWORD*)*((_QWORD*)a1 + 3);
				v12 = xmmword_140B7B240;
				if (v7)
					sub_140103CF0(
						v7,
						(unsigned int*)v13,
						(__m128*) & v12,
						0,
						COERCE_INT((float)(*(float*)&dword_140C63664 - a1[8]) * a1[9]));
			}
		}
	}
	else
	{
		v8 = *((_QWORD*)a1 + 1);
		if (v8)
		{
			v9 = _mm_cvtsi32_si128(0);
			v10 = _mm_cvtsi32_si128(*a2);
			v11 = _mm_cvtsi32_si128(a2[1]);
			v13[1] = (__int128)_mm_cvtepi32_ps(
				_mm_unpacklo_epi32(
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[2]), v9),
					_mm_unpacklo_epi32(_mm_cvtsi32_si128(a2[3]), v9)));
			v13[0] = (__int128)_mm_cvtepi32_ps(_mm_unpacklo_epi32(_mm_unpacklo_epi32(v10, v9), _mm_unpacklo_epi32(v11, v9)));
			sub_1401502E0(v8, (float*)v13);
		}
	}
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;

