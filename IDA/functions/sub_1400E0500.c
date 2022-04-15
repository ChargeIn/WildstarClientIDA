//----- (00000001400E0500) ----------------------------------------------------
__m128* __fastcall sub_1400E0500(__m128* a1, __m128* a2, __m128* a3, float a4)
{
	__m128 v4; // xmm0
	__m128 v5; // xmm7
	__m128 v7; // xmm6
	__m128* result; // rax

	v4 = (__m128)0x40000000u;
	v5 = *a2;
	v7 = _mm_sub_ps(*a3, *a2);
	*(double*)v4.m128_u64 = sub_1408FBFC0(COERCE_DOUBLE(0x40000000i64), (float)(a4 - 1.0) * 10.0);
	result = a1;
	*a1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), v7), v5);
	return result;
}

