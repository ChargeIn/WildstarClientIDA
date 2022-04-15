#include "../winhttp.h"

//----- (00000001404C4D00) ----------------------------------------------------
void __fastcall sub_1404C4D00(unsigned int* a1, __int64 a2)
{
	unsigned int* v2; // rbx
	unsigned int v3; // xmm0_4
	__m128* v4; // r9
	__m128 v5; // xmm12
	float v6; // xmm11_4
	float v7; // xmm9_4
	float v8; // xmm4_4
	float v9; // xmm7_4
	float v10; // xmm9_4
	float v11; // xmm6_4
	float v12; // xmm10_4
	float v13; // xmm8_4
	float v14; // xmm7_4
	float v15; // xmm5_4
	float v16; // xmm2_4
	float v17; // xmm11_4
	__m128 v18; // xmm3
	__m128 v19; // xmm2
	__m128 v20; // xmm0
	__int64 v21; // rax
	__m128 v22; // [rsp+28h] [rbp-E0h] BYREF
	unsigned __int64 v23; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v24; // [rsp+40h] [rbp-C8h]
	__int128 v25; // [rsp+48h] [rbp-C0h]
	float v26; // [rsp+58h] [rbp-B0h]
	float v27; // [rsp+5Ch] [rbp-ACh]
	float v28; // [rsp+60h] [rbp-A8h]
	int v29; // [rsp+64h] [rbp-A4h]
	__int128 v30; // [rsp+68h] [rbp-A0h]
	__m128 v31[4]; // [rsp+78h] [rbp-90h] BYREF
	char v32[48]; // [rsp+B8h] [rbp-50h] BYREF
	__m128 v33; // [rsp+E8h] [rbp-20h]
	__m128 v34[4]; // [rsp+F8h] [rbp-10h] BYREF
	int v35; // [rsp+138h] [rbp+30h]
	int v36; // [rsp+13Ch] [rbp+34h]
	int v37; // [rsp+140h] [rbp+38h]
	__m256 v38; // [rsp+148h] [rbp+40h] BYREF
	__int128 v39; // [rsp+168h] [rbp+60h]
	__m128 v40; // [rsp+178h] [rbp+70h]
	__int128 v41[6]; // [rsp+188h] [rbp+80h] BYREF
	__m128* v42[2]; // [rsp+1E8h] [rbp+E0h] BYREF
	__m128 v43[4]; // [rsp+1F8h] [rbp+F0h] BYREF

	if (a2)
	{
		v2 = a1 + 128;
		*((_QWORD*)&v25 + 1) = &v22;
		v24 = 0i64;
		*(_QWORD*)&v25 = a1 + 128;
		v3 = a1[135];
		v22 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)a1[132], (__m128)a1[134]),
			_mm_unpacklo_ps((__m128)a1[133], (__m128)0i64));
		LODWORD(v23) = v3;
		v41[0] = v23;
		v41[1] = v25;
		sub_1401B0590((int*)v41, (__int64)v32);
		v5 = *v4;
		v31[0] = *(__m128*)ymmword_140C78410.m256_f32;
		v6 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
		v7 = _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
		v8 = v7 * 2.0;
		v31[3] = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)v33.m128_u32[0], (__m128)v33.m128_u32[2]),
			_mm_unpacklo_ps((__m128)v33.m128_u32[1], (__m128)0x3F800000u));
		v31[1] = *(__m128*) & ymmword_140C78410.m256_f32[4];
		v9 = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
		v10 = v7 * (float)(v7 * 2.0);
		v11 = v6 * (float)(v6 * 2.0);
		v12 = v9 * (float)(v5.m128_f32[0] * 2.0);
		v13 = v9 * (float)(v6 * 2.0);
		v31[2] = (__m128)xmmword_140C78430;
		v14 = v9 * v8;
		v15 = v5.m128_f32[0] * (float)(v5.m128_f32[0] * 2.0);
		v16 = v5.m128_f32[0] * (float)(v6 * 2.0);
		*(float*)&v23 = (float)(1.0 - v11) - v10;
		v5.m128_f32[0] = v5.m128_f32[0] * v8;
		v17 = v6 * v8;
		*(float*)&v25 = v16 - v14;
		v22.m128_u64[0] = (unsigned __int64)&v38;
		v38 = ymmword_140C78410;
		v39 = xmmword_140C78430;
		v22.m128_u64[1] = (unsigned __int64)&v23;
		HIDWORD(v24) = 0;
		v18 = _mm_sub_ps((__m128)0i64, v33);
		*((float*)&v23 + 1) = v16 + v14;
		HIDWORD(v25) = 0;
		v29 = 0;
		*(float*)&v24 = v5.m128_f32[0] - v13;
		*((float*)&v25 + 1) = (float)(1.0 - v15) - v10;
		v28 = (float)(1.0 - v15) - v11;
		v19 = _mm_shuffle_ps(v18, v18, 85);
		v30 = xmmword_140B7AD00;
		*((float*)&v25 + 2) = v17 + v12;
		v35 = v18.m128_i32[0];
		v36 = v19.m128_i32[0];
		v20 = _mm_shuffle_ps(v18, v18, 170);
		v37 = v20.m128_i32[0];
		v40 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, v20), _mm_unpacklo_ps(v19, (__m128)0x3F800000u));
		v26 = v5.m128_f32[0] + v13;
		v27 = v17 - v12;
		v42[0] = (__m128*) & v38;
		v42[1] = (__m128*) & v23;
		sub_1401AFB10(v42, v43);
		v22.m128_u64[0] = (unsigned __int64)v43;
		v22.m128_u64[1] = (unsigned __int64)v31;
		*(_QWORD*)&v41[0] = v43;
		*((_QWORD*)&v41[0] + 1) = v31;
		sub_1401AFB10((__m128**)v41, v34);
		v22.m128_u64[0] = (unsigned __int64)v32;
		v22.m128_u64[1] = (unsigned __int64)v34;
		*(_QWORD*)&v41[0] = v32;
		*((_QWORD*)&v41[0] + 1) = v34;
		sub_1401AFB10((__m128**)v41, v31);
		v21 = sub_1404BD000((__int64)&v23, v31);
		*(_OWORD*)v2 = *(_OWORD*)v21;
		v2[4] = *(_DWORD*)(v21 + 16);
		v2[5] = *(_DWORD*)(v21 + 20);
		v2[6] = *(_DWORD*)(v21 + 24);
		v2[7] = *(_DWORD*)(v21 + 28);
	}
}
// 1404C4DEE: variable 'v4' is possibly undefined
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140C78410: using guessed type __m256 ymmword_140C78410;
// 140C78430: using guessed type __int128 xmmword_140C78430;
// 1404C4D00: using guessed type __m128 var_F0[4];
// 1404C4D00: using guessed type __m128 var_1F0[4];

