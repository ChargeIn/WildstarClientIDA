//----- (00000001408D5260) ----------------------------------------------------
void __fastcall sub_1408D5260(double a1, char a2, __int64 a3, int a4)
{
	double v6; // xmm7_8
	double v8; // xmm10_8
	double v9; // xmm12_8
	signed int v10; // edi
	__m128d v11; // xmm9
	__m128i si128; // xmm14
	__m128d v13; // xmm11
	__m128d v14; // xmm0
	__int64 v15; // rbx
	__m128d v16; // xmm0
	__int64 v17; // rbx
	double v18; // xmm0_8
	__int64 v19; // [rsp+28h] [rbp-B0h]

	v19 = 0x3FF0000000000000i64;
	v6 = 1.0;
	v8 = 1.0 / (double)a4;
	v9 = 1.0;
	if (!a2)
	{
		v19 = sub_1408FFA00(10.0, -2.4);
		v9 = *(double*)&v19;
		v6 = a1 * 0.01 * 9.0 + 1.0;
	}
	v10 = 0;
	if (a4 >= 4)
	{
		v11 = _mm_unpacklo_pd((__m128d) * (unsigned __int64*)&v8, (__m128d) * (unsigned __int64*)&v8);
		si128 = _mm_load_si128((const __m128i*) & xmmword_1409A4790);
		v13 = _mm_unpacklo_pd((__m128d)(unsigned __int64)v19, (__m128d)(unsigned __int64)v19);
		do
		{
			v14 = _mm_add_pd(
				_mm_div_pd(
					_mm_mul_pd(_mm_cvtepi32_pd(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v10), 0), si128)), v11),
					v13),
				(__m128d)xmmword_1409B1970);
			v14.m128d_f64[0] = sub_1409005C0();
			*(__m128d*)(a3 + 8i64 * v10) = v14;
			v15 = v10 + 2;
			v16 = _mm_add_pd(
				_mm_div_pd(
					_mm_mul_pd(_mm_cvtepi32_pd(_mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v10 + 2), 0), si128)), v11),
					v13),
				(__m128d)xmmword_1409B1970);
			v16.m128d_f64[0] = sub_1409005C0();
			v10 += 4;
			*(__m128d*)(a3 + 8 * v15) = v16;
		} while (v10 < (int)(a4 - (a4 & 0x80000003)));
	}
	if (v10 < a4)
	{
		v17 = a3 + 8i64 * v10;
		do
		{
			v18 = sub_1408FFA00((double)v10++ * v8 * (1.0 / v9) + 1.0, 1.0 / v6 - 1.0);
			v17 += 8i64;
			*(double*)(v17 - 8) = v18;
		} while (v10 < a4);
	}
}
// 1408D5379: conditional instruction was optimized away because esi.4>=4
// 1409005C0: using guessed type double sub_1409005C0(void);
// 1409A4790: using guessed type __int128 xmmword_1409A4790;
// 1409B1970: using guessed type __int128 xmmword_1409B1970;

