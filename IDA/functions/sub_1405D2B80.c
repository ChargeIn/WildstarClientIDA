//----- (00000001405D2B80) ----------------------------------------------------
__int64 __fastcall sub_1405D2B80(__int64 a1, __m128* a2, __m128* a3)
{
	__m128 v3; // xmm4
	__m128 v5; // xmm5
	__m128 v6; // xmm6
	__m128 v7; // xmm3
	float v8; // xmm1_4
	__m128 v9; // xmm4
	float v10; // xmm5_4
	__m128 v11; // xmm2
	float v12; // xmm0_4
	double v13; // xmm0_8
	int v14; // ecx
	__int64 result; // rax
	__int32 v16; // [rsp+34h] [rbp-34h]

	v3 = (__m128)0x40400000u;
	v5 = _mm_sub_ps(*a3, *a2);
	*(_DWORD*)(a1 + 720) = 1;
	v6 = (__m128)v5.m128_u32[0];
	v7 = _mm_mul_ps(v5, v5);
	v7.m128_f32[0] = (float)(v7.m128_f32[0] + _mm_shuffle_ps(v7, v7, 85).m128_f32[0])
		+ _mm_shuffle_ps(v7, v7, 170).m128_f32[0];
	v8 = 1.0 / fsqrt(v7.m128_f32[0]);
	v3.m128_f32[0] = fmaxf((float)((float)(3.0 - (float)((float)(v7.m128_f32[0] * v8) * v8)) * 0.5) * v8, 0.0);
	v9 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), v5);
	v10 = _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
	v16 = v9.m128_i32[1];
	if (v10 != 0.0 || v6.m128_f32[0] != 0.0)
	{
		v11 = v6;
		v11.m128_f32[0] = (float)(v6.m128_f32[0] * v6.m128_f32[0]) + (float)(v10 * v10);
		LODWORD(v12) = sub_1408FCCB0(-(float)(v10 / _mm_sqrt_ps(v11).m128_f32[0])).m128_u32[0];
		if (v6.m128_f32[0] > 0.0)
			v12 = -v12;
		*(float*)(a1 + 592) = v12;
	}
	v13 = sub_1408FCF3C(COERCE_DOUBLE((unsigned __int64)v16));
	result = qword_140C63750;
	*(_DWORD*)(a1 + 596) = LODWORD(v13);
	v14 = *(_DWORD*)result;
	LODWORD(result) = dword_140C53730;
	if (v14 < dword_140C53730)
		LODWORD(result) = v14;
	result = (int)result;
	if (byte_140C53740[(int)result])
	{
		*(_DWORD*)(a1 + 52) = *(_DWORD*)(a1 + 592);
		*(_DWORD*)(a1 + 56) = *(_DWORD*)(a1 + 596);
		result = *(unsigned int*)(a1 + 600);
		*(_DWORD*)(a1 + 60) = result;
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C53730: using guessed type int dword_140C53730;
// 140C53740: using guessed type _BYTE byte_140C53740[24];
// 140C63750: using guessed type __int64 qword_140C63750;

