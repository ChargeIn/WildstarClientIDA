//----- (000000014077CF00) ----------------------------------------------------
const wchar_t* __fastcall sub_14077CF00(__int64 a1, __int64 a2)
{
	__m128* v2; // rcx
	const wchar_t* result; // rax
	__m128 v4; // xmm3
	__m128 v5; // xmm1
	float v6; // xmm0_4

	v2 = *(__m128**)(qword_140C65898 + 120);
	if (!v2)
		return L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3";
	v4 = _mm_sub_ps(
		_mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 12), (__m128) * (unsigned int*)(a2 + 20)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 16), (__m128)0i64)),
		v2[286]);
	v5 = _mm_mul_ps(v4, v4);
	v6 = 1.0
		- (float)(fsqrt(
			(float)(v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0])
			+ _mm_shuffle_ps(v5, v5, 170).m128_f32[0])
			/ *(float*)(a2 + 4));
	if (v6 <= 0.0)
		return L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_RED\\Explorer_Arrow_01_RED.m3";
	if (v6 < 0.25)
		return L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_YLW\\Explorer_Arrow_01_YLW.m3";
	if (v6 < 0.5)
		return L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_YLW\\Explorer_Arrow_01_YLW.m3";
	result = L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3";
	if (v6 < 0.75)
		return L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_GRN\\Explorer_Arrow_01_GRN.m3";
	return result;
}
// 140B4F660: using guessed type wchar_t aArtFxModelProp_35[66];
// 140B4F6F0: using guessed type wchar_t aArtFxModelProp_34[66];
// 140B4F780: using guessed type wchar_t aArtFxModelProp_33[66];
// 140B4F810: using guessed type wchar_t aArtFxModelProp_32[66];
// 140B4F8A0: using guessed type wchar_t aArtFxModelProp_31[66];
// 140C65898: using guessed type __int64 qword_140C65898;

