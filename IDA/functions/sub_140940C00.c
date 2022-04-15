//----- (0000000140940C00) ----------------------------------------------------
__int64 sub_140940C00()
{
	__m128 v0; // xmm3
	__m128 v1; // xmm2
	__m128 v2; // xmm5
	__m128 v3; // xmm2
	int v4; // ecx
	__m128 v5; // xmm1
	__m128 v6; // xmm4
	int v7; // ecx
	__m128 v8; // xmm3
	int v9; // ecx
	int v10; // ecx
	int v11; // ecx
	float v12; // xmm3_4
	int v13; // ecx
	int v14; // edx
	__m128 v15; // xmm3
	int v16; // r9d
	__m128 v17; // xmm2
	int v18; // r9d
	__m128 v19; // xmm5
	__m128 v20; // xmm2
	int v21; // ecx
	__m128 v22; // xmm1
	__m128 v23; // xmm4
	int v24; // ecx
	__m128 v25; // xmm3
	int v26; // ecx
	int v27; // ecx
	int v28; // ecx
	float v29; // xmm3_4
	int v30; // ecx
	__int64 result; // rax
	__m128 v32; // [rsp+0h] [rbp-A8h]
	__m128 v33; // [rsp+0h] [rbp-A8h]

	v0 = (__m128)(unsigned int)xmmword_140C7CE30;
	v1 = (__m128)DWORD2(xmmword_140C7CE30);
	v1.m128_f32[0] = (float)((float)(*((float*)&xmmword_140C7CE30 + 2) + *(float*)&dword_140C3B738)
		* (float)(1.0 / *(float*)&dword_140C66F48))
		+ 1.0;
	v0.m128_f32[0] = (float)((float)(*(float*)&xmmword_140C7CE30 + *(float*)&dword_140C3B738)
		* (float)(1.0 / *(float*)&dword_140C66F1C))
		+ 0.5;
	v32 = _mm_unpacklo_ps(_mm_unpacklo_ps(v0, (__m128)0i64), _mm_unpacklo_ps(v1, (__m128)0i64));
	v2 = _mm_shuffle_ps(v32, v32, 85);
	v3 = v2;
	v4 = (int)v2.m128_f32[0];
	if ((int)v2.m128_f32[0] != 0x80000000 && (float)v4 != v2.m128_f32[0])
		v3 = (__m128)COERCE_UNSIGNED_INT((float)(v4 - (_mm_movemask_ps(_mm_unpacklo_ps(v2, v2)) & 1)));
	v5 = (__m128)v32.m128_u32[0];
	v2.m128_f32[0] = v2.m128_f32[0] * 0.5;
	v6 = v2;
	v6.m128_f32[0] = v2.m128_f32[0] + v32.m128_f32[0];
	v7 = (int)(float)(v2.m128_f32[0] + v32.m128_f32[0]);
	if (v7 != 0x80000000 && (float)v7 != v6.m128_f32[0])
		v6 = (__m128)COERCE_UNSIGNED_INT((float)(v7 - (_mm_movemask_ps(_mm_unpacklo_ps(v6, v6)) & 1)));
	v6.m128_f32[0] = v6.m128_f32[0] - (float)(v3.m128_f32[0] * 2.0);
	v8 = v6;
	v8.m128_f32[0] = (float)(v6.m128_f32[0] * 0.33333334) + 0.0000099999997;
	v9 = (int)v8.m128_f32[0];
	if ((int)v8.m128_f32[0] != 0x80000000 && (float)v9 != v8.m128_f32[0])
		v8.m128_f32[0] = (float)(v9 - (_mm_movemask_ps(_mm_unpacklo_ps(v8, v8)) & 1));
	v5.m128_f32[0] = v32.m128_f32[0] - v2.m128_f32[0];
	v10 = (int)(float)(v32.m128_f32[0] - v2.m128_f32[0]);
	if (v10 != 0x80000000 && (float)v10 != v5.m128_f32[0])
		v5 = (__m128)COERCE_UNSIGNED_INT((float)(v10 - (_mm_movemask_ps(_mm_unpacklo_ps(v5, v5)) & 1)));
	v5.m128_f32[0] = (float)((float)((float)((float)((float)(v5.m128_f32[0] - v3.m128_f32[0])
		- (float)(v8.m128_f32[0] * 3.0))
		+ 1.0)
		+ (float)(v6.m128_f32[0] - (float)(v8.m128_f32[0] * 3.0)))
		* 0.33333334)
		+ 0.0000099999997;
	v11 = (int)v5.m128_f32[0];
	if ((int)v5.m128_f32[0] != 0x80000000 && (float)v11 != v5.m128_f32[0])
		v5.m128_f32[0] = (float)(v11 - (_mm_movemask_ps(_mm_unpacklo_ps(v5, v5)) & 1));
	v12 = (float)(v8.m128_f32[0] * 2.0) + v3.m128_f32[0];
	v3.m128_f32[0] = (float)(v3.m128_f32[0] - v5.m128_f32[0]) * 0.5;
	v13 = (int)v3.m128_f32[0];
	v14 = (int)(float)(v12 + v5.m128_f32[0]);
	if ((int)v3.m128_f32[0] != 0x80000000 && (float)v13 != v3.m128_f32[0])
		v3.m128_f32[0] = (float)(v13 - (_mm_movemask_ps(_mm_unpacklo_ps(v3, v3)) & 1));
	v15 = (__m128)(unsigned int)xmmword_140C7CE20;
	v16 = (int)v3.m128_f32[0];
	v17 = (__m128)DWORD2(xmmword_140C7CE20);
	v18 = v16 + 2;
	v17.m128_f32[0] = (float)((float)(*((float*)&xmmword_140C7CE20 + 2) + *(float*)&dword_140C3B738)
		* (float)(1.0 / *(float*)&dword_140C66F48))
		+ 1.0;
	v15.m128_f32[0] = (float)((float)(*(float*)&xmmword_140C7CE20 + *(float*)&dword_140C3B738)
		* (float)(1.0 / *(float*)&dword_140C66F1C))
		+ 0.5;
	v33 = _mm_unpacklo_ps(_mm_unpacklo_ps(v15, (__m128)0i64), _mm_unpacklo_ps(v17, (__m128)0i64));
	v19 = _mm_shuffle_ps(v33, v33, 85);
	v20 = v19;
	v21 = (int)v19.m128_f32[0];
	if ((int)v19.m128_f32[0] != 0x80000000 && (float)v21 != v19.m128_f32[0])
		v20 = (__m128)COERCE_UNSIGNED_INT((float)(v21 - (_mm_movemask_ps(_mm_unpacklo_ps(v19, v19)) & 1)));
	v22 = (__m128)v33.m128_u32[0];
	v19.m128_f32[0] = v19.m128_f32[0] * 0.5;
	v23 = v19;
	v23.m128_f32[0] = v19.m128_f32[0] + v33.m128_f32[0];
	v24 = (int)(float)(v19.m128_f32[0] + v33.m128_f32[0]);
	if (v24 != 0x80000000 && (float)v24 != v23.m128_f32[0])
		v23 = (__m128)COERCE_UNSIGNED_INT((float)(v24 - (_mm_movemask_ps(_mm_unpacklo_ps(v23, v23)) & 1)));
	v23.m128_f32[0] = v23.m128_f32[0] - (float)(v20.m128_f32[0] * 2.0);
	v25 = v23;
	v25.m128_f32[0] = (float)(v23.m128_f32[0] * 0.33333334) + 0.0000099999997;
	v26 = (int)v25.m128_f32[0];
	if ((int)v25.m128_f32[0] != 0x80000000 && (float)v26 != v25.m128_f32[0])
		v25.m128_f32[0] = (float)(v26 - (_mm_movemask_ps(_mm_unpacklo_ps(v25, v25)) & 1));
	v22.m128_f32[0] = v33.m128_f32[0] - v19.m128_f32[0];
	v27 = (int)(float)(v33.m128_f32[0] - v19.m128_f32[0]);
	if (v27 != 0x80000000 && (float)v27 != v22.m128_f32[0])
		v22 = (__m128)COERCE_UNSIGNED_INT((float)(v27 - (_mm_movemask_ps(_mm_unpacklo_ps(v22, v22)) & 1)));
	v22.m128_f32[0] = (float)((float)((float)((float)((float)(v22.m128_f32[0] - v20.m128_f32[0])
		- (float)(v25.m128_f32[0] * 3.0))
		+ 1.0)
		+ (float)(v23.m128_f32[0] - (float)(v25.m128_f32[0] * 3.0)))
		* 0.33333334)
		+ 0.0000099999997;
	v28 = (int)v22.m128_f32[0];
	if ((int)v22.m128_f32[0] != 0x80000000 && (float)v28 != v22.m128_f32[0])
		v22.m128_f32[0] = (float)(v28 - (_mm_movemask_ps(_mm_unpacklo_ps(v22, v22)) & 1));
	v29 = (float)(v25.m128_f32[0] * 2.0) + v20.m128_f32[0];
	v20.m128_f32[0] = (float)(v20.m128_f32[0] - v22.m128_f32[0]) * 0.5;
	v30 = (int)v20.m128_f32[0];
	if ((int)v20.m128_f32[0] != 0x80000000 && (float)v30 != v20.m128_f32[0])
		v20.m128_f32[0] = (float)(v30 - (_mm_movemask_ps(_mm_unpacklo_ps(v20, v20)) & 1));
	dword_140C7CE18 = v14 + 2;
	result = (unsigned int)((int)v20.m128_f32[0] - 1);
	dword_140C7CE10 = (int)(float)(v29 + v22.m128_f32[0]) - 1;
	dword_140C7CE1C = v18;
	dword_140C7CE14 = (int)v20.m128_f32[0] - 1;
	return result;
}
// 140C3B738: using guessed type int dword_140C3B738;
// 140C66F1C: using guessed type int dword_140C66F1C;
// 140C66F48: using guessed type int dword_140C66F48;
// 140C7CE10: using guessed type int dword_140C7CE10;
// 140C7CE14: using guessed type int dword_140C7CE14;
// 140C7CE18: using guessed type int dword_140C7CE18;
// 140C7CE1C: using guessed type int dword_140C7CE1C;
// 140C7CE20: using guessed type __int128 xmmword_140C7CE20;
// 140C7CE30: using guessed type __int128 xmmword_140C7CE30;

