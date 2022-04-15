//----- (000000014049E490) ----------------------------------------------------
_BOOL8 __fastcall sub_14049E490(__int64 a1, __m128* a2, int a3, unsigned int a4, float a5)
{
	unsigned int* v7; // rbx
	__int64 v9; // rcx
	__m128 v10; // xmm2
	__m128 v11; // xmm1

	v7 = (unsigned int*)sub_14024B980(a4);
	if (!v7
		|| v7[10] != (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72))
	{
		return 0i64;
	}
	v10 = _mm_sub_ps(
		a2[286],
		_mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v7[3], (__m128)v7[5]), _mm_unpacklo_ps((__m128)v7[4], (__m128)0i64)));
	v11 = _mm_mul_ps(v10, v10);
	return sub_1404A2010(
		v9,
		a3,
		fsqrt(
			(float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
			+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0]),
		a5);
}
// 14049E53A: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

