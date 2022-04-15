//----- (00000001402E36B0) ----------------------------------------------------
__m128* __fastcall sub_1402E36B0(__int64 a1, __m128* a2)
{
	unsigned int* v2; // rax
	__m128 v3; // xmm0
	__m128 v4; // xmm2
	__m128 v5; // xmm3
	__m128* result; // rax

	v2 = *(unsigned int**)(a1 + 32);
	v3 = (__m128)v2[10];
	v4 = _mm_unpacklo_ps((__m128)v2[9], (__m128)v2[11]);
	v5 = (__m128)v2[8];
	result = a2;
	*a2 = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, v3), v4);
	return result;
}

