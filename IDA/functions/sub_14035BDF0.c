//----- (000000014035BDF0) ----------------------------------------------------
__int64 __fastcall sub_14035BDF0(__m128* a1, __m128* a2)
{
	__m128* v2; // r8
	__m128* v3; // rcx
	unsigned __int64 v4; // rax
	__m128 v5; // xmm2
	unsigned __int64 v6; // rax
	__m128 v7; // xmm2
	__m128 v8; // xmm1

	if (!a1[119].m128_i32[0])
	{
		v2 = a1 + 105;
		v3 = a1 + 105;
		v4 = 0i64;
		while (1)
		{
			v5 = _mm_mul_ps(a2[2], *v3);
			if ((float)((float)((float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0])
				+ _mm_shuffle_ps(v5, v5, 170).m128_f32[0])
				+ v3->m128_f32[3]) > a2[3].m128_f32[0])
				break;
			++v4;
			++v3;
			if (v4 >= 6)
			{
				v6 = 0i64;
				while (1)
				{
					v7 = _mm_cmplt_ps((__m128)0i64, *v2);
					v8 = _mm_mul_ps(_mm_or_ps(_mm_andnot_ps(v7, a2[1]), _mm_and_ps(v7, *a2)), *v2);
					if ((float)((float)((float)(v8.m128_f32[0] + _mm_shuffle_ps(v8, v8, 85).m128_f32[0])
						+ _mm_shuffle_ps(v8, v8, 170).m128_f32[0])
						+ v2->m128_f32[3]) > 0.0)
						break;
					++v6;
					++v2;
					if (v6 >= 6)
						return 1i64;
				}
				return 0i64;
			}
		}
	}
	return 0i64;
}

