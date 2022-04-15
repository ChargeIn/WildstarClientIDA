//----- (000000014056B7B0) ----------------------------------------------------
float __fastcall sub_14056B7B0(__int64 a1)
{
	__m128* v2; // rax
	__m128 v3; // xmm1
	float v4; // xmm3_4
	__m128 v5; // xmm2
	float v6; // xmm2_4

	if (!qword_140C65898)
		return 1.0;
	if (!*(_QWORD*)(qword_140C65898 + 25744))
		return 1.0;
	v2 = (__m128*)sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 24));
	if (!v2)
		return 1.0;
	v3 = _mm_sub_ps(v2[286], *(__m128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4576i64));
	v4 = (float)*(int*)(*(_QWORD*)(a1 + 16) + 4i64);
	v5 = _mm_mul_ps(v3, v3);
	v6 = (float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0]) + _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
	if (v6 >= (float)(v4 * v4))
		return 1.0;
	if (v6 >= 0.0000099999997)
		return fsqrt(v6) / v4;
	return 0.0;
}
// 140C65898: using guessed type __int64 qword_140C65898;

