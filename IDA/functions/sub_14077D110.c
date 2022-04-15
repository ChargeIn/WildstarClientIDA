//----- (000000014077D110) ----------------------------------------------------
_BOOL8 __fastcall sub_14077D110(__int64 a1, __int64 a2)
{
	__m128* v3; // rsi
	__int64 v4; // rcx
	unsigned int* v5; // rdi
	float v7; // xmm7_4
	__m128 v8; // xmm6
	__int64 v9; // rax
	__m128 v10; // xmm6
	__m128 v11; // xmm1

	if (!qword_140C65970 || *(_DWORD*)(qword_140C65970 + 8) != 3)
		return 0i64;
	v3 = *(__m128**)(qword_140C65898 + 120);
	if (!v3 || !a2 || !*(_QWORD*)a2)
		return 0i64;
	v5 = (unsigned int*)sub_14024B980(*(_DWORD*)(*(_QWORD*)a2 + 8i64));
	if (!v5 || (int)sub_140633CB0(v4, *(_DWORD*)(*(_QWORD*)a2 + 12i64), 0i64) < 0)
		return 0i64;
	v7 = 0.0;
	v8 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v5[3], (__m128)v5[5]), _mm_unpacklo_ps((__m128)v5[4], (__m128)0i64));
	v9 = sub_140200220(0x1DAu);
	if (v9)
		v7 = *(float*)(v9 + 24);
	v10 = _mm_sub_ps(v8, v3[286]);
	v11 = _mm_mul_ps(v10, v10);
	return (float)((float)(v11.m128_f32[0] + _mm_shuffle_ps(v11, v11, 85).m128_f32[0])
		+ _mm_shuffle_ps(v11, v11, 170).m128_f32[0]) < (float)(v7 * v7);
}
// 14077D17F: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

