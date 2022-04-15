//----- (000000014086E020) ----------------------------------------------------
__m128 __fastcall sub_14086E020(__int64 a1, unsigned __int64 a2)
{
	float v2; // xmm0_4
	__int128 v4; // xmm6
	float v5; // xmm7_4
	float v6; // xmm8_4
	__m128 result; // xmm0
	float v8; // xmm8_4
	__m128d v9; // xmm1
	float v10; // xmm7_4
	__m128d v11; // xmm1

	if ((*(_BYTE*)(a1 + 96) & 0x20) != 0)
	{
		sub_140836340(qword_140C61BB0, a1, 5, a2);
		v4 = 0i64;
		v5 = *(float*)(a1 + 472) - *(float*)(a1 + 468);
		v6 = v2;
		result = 0i64;
		v8 = v6 * 1000.0;
		if (v5 != 0.0)
		{
			v9 = (__m128d)COERCE_UNSIGNED_INT64((double)(int)sub_1407DDB28());
			v9.m128d_f64[0] = v9.m128d_f64[0] * 0.00003051850947599719 * v5;
			result = _mm_cvtpd_ps(v9);
		}
		result.m128_f32[0] = (float)((float)(result.m128_f32[0] + *(float*)(a1 + 468)) + *(float*)(a1 + 464)) + v8;
	}
	else
	{
		v4 = 0i64;
		v10 = *(float*)(a1 + 472) - *(float*)(a1 + 468);
		result = 0i64;
		if (v10 != 0.0)
		{
			v11 = (__m128d)COERCE_UNSIGNED_INT64((double)(int)sub_1407DDB28());
			v11.m128d_f64[0] = v11.m128d_f64[0] * 0.00003051850947599719 * v10;
			result = _mm_cvtpd_ps(v11);
		}
		result.m128_f32[0] = (float)(result.m128_f32[0] + *(float*)(a1 + 468)) + *(float*)(a1 + 464);
	}
	if (result.m128_f32[0] < *(float*)&v4)
		return (__m128)v4;
	return result;
}
// 14086E076: variable 'v2' is possibly undefined
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

