//----- (0000000140486C10) ----------------------------------------------------
__int64 __fastcall sub_140486C10(_DWORD* a1, __int64 a2, _DWORD* a3)
{
	unsigned int* v7; // rcx
	__m128 v8; // xmm0
	__m128 v9; // xmm4
	__m128 v10; // xmm2
	__m128 v11; // xmm4
	__m256 v12; // [rsp+20h] [rbp-48h] BYREF
	__int128 v13; // [rsp+40h] [rbp-28h]
	__m128 v14; // [rsp+50h] [rbp-18h]

	if (!sub_1403F8270(qword_140C65898, a3[2], 0))
		return 2147500037i64;
	v7 = (unsigned int*)sub_14024B980(a3[2]);
	if (!v7)
		return 2147500037i64;
	a1[14] = *a3;
	a1[15] = a3[1];
	a1[16] = a3[2];
	v8 = (__m128)v7[5];
	v9 = (__m128)v7[3];
	v10 = (__m128)v7[4];
	v12 = ymmword_140C78410;
	v11 = _mm_unpacklo_ps(_mm_unpacklo_ps(v9, v8), _mm_unpacklo_ps(v10, (__m128)0i64));
	v13 = xmmword_140C78430;
	v14 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v11, _mm_shuffle_ps(v11, v11, 170)),
		_mm_unpacklo_ps(_mm_shuffle_ps(v11, v11, 85), (__m128)0x3F800000u));
	return sub_140485D20((__int64)a1, a2, (__int128*)&v12);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;

