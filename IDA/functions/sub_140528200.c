#include "../winhttp.h"

//----- (0000000140528200) ----------------------------------------------------
__int64 __fastcall sub_140528200(_DWORD* a1, __int64 a2, _DWORD* a3, _DWORD* a4)
{
	__m128i v7; // xmm2
	float v8; // xmm5_4
	__int64 result; // rax
	__m128 v10; // xmm0
	int v11[4]; // [rsp+20h] [rbp-38h] BYREF
	__int128 v12; // [rsp+30h] [rbp-28h] BYREF
	__int128 v13; // [rsp+40h] [rbp-18h]
	int v14; // [rsp+60h] [rbp+8h] BYREF

	sub_140528300((__int64)a1, v11, a4);
	*(_OWORD*)a2 = 0i64;
	sub_140528400(a1, &v14);
	sub_14044A2D0(a1 + 9, &v12);
	*(_OWORD*)a2 = v12;
	sub_14044A2D0(a1 + 11, &v12);
	v7 = _mm_cvtsi32_si128(0);
	v8 = (float)((float)(*(float*)&v13 - *(float*)a2) * (float)(1.0 / (float)v14))
		/ (float)((float)(v11[2] - v11[0]) * (float)(1.0 / (float)v14));
	result = a2;
	v10 = _mm_cvtepi32_ps(
		_mm_unpacklo_epi32(
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a3 - v11[0]), v7),
			_mm_unpacklo_epi32(_mm_cvtsi32_si128(a3[1] - v11[1]), v7)));
	*(float*)v7.m128i_i32 = (float)(_mm_shuffle_ps(v10, v10, 85).m128_f32[0] * v8) + *(float*)(a2 + 8);
	v10.m128_f32[0] = (float)(v10.m128_f32[0] * v8) + *(float*)a2;
	*(_DWORD*)(a2 + 8) = v7.m128i_i32[0];
	*(_DWORD*)a2 = v10.m128_i32[0];
	return result;
}

