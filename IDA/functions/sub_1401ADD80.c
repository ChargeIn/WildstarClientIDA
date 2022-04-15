//----- (00000001401ADD80) ----------------------------------------------------
__int64 __fastcall sub_1401ADD80(__m128* a1, __int64 a2)
{
	__int64 v2; // r9
	float v3; // xmm1_4
	__int64 v4; // r8
	__int64 result; // rax
	__m128 v6; // xmm0
	float v7; // xmm2_4
	__m128 v8; // [rsp+0h] [rbp-18h]

	v2 = 0i64;
	v8 = _mm_mul_ps(*a1, *a1);
	LODWORD(v3) = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
	if (_mm_shuffle_ps(v8, v8, 85).m128_f32[0] > v8.m128_f32[0])
		v2 = 1i64;
	v4 = 1 - v2;
	if (v3 > v8.m128_f32[v2])
		v2 = 2i64;
	v6 = (__m128)v8.m128_u32[-v4 + 3 - v2];
	result = a2;
	v6.m128_f32[0] = (float)(v6.m128_f32[0] + v8.m128_f32[v4]) + v8.m128_f32[v2];
	if (v6.m128_f32[0] <= *(float*)&dword_140C3D7D8)
	{
		*(_OWORD*)a2 = 0i64;
	}
	else
	{
		v7 = 1.0 / _mm_sqrt_ps(v6).m128_f32[0];
		*(float*)a2 = v7 * a1->m128_f32[0];
		*(float*)(a2 + 4) = v7 * a1->m128_f32[1];
		*(float*)(a2 + 8) = v7 * a1->m128_f32[2];
	}
	return result;
}
// 140C3D7D8: using guessed type int dword_140C3D7D8;
// 1401ADD80: using guessed type __m128 var_18;

