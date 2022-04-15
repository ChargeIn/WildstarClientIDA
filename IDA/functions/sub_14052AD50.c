//----- (000000014052AD50) ----------------------------------------------------
_DWORD* __fastcall sub_14052AD50(__int64 a1, _DWORD* a2, _DWORD* a3)
{
	__m128 v4; // xmm2
	__m128 v5; // xmm3
	__m128 v6; // xmm5
	__m128 v7; // xmm2
	int v8; // ecx
	__m128 v9; // xmm1
	__m128 v10; // xmm4
	int v11; // ecx
	__m128 v12; // xmm3
	int v13; // ecx
	int v14; // ecx
	int v15; // ecx
	float v16; // xmm3_4
	int v17; // ecx
	__m128 v19; // [rsp+20h] [rbp-28h] BYREF

	sub_14052AF60(a1, (__int128*)&v19, a3);
	v4 = (__m128)(unsigned int)dword_140C3B738;
	v5 = (__m128)(unsigned int)dword_140C3B738;
	v4.m128_f32[0] = (float)((float)(*(float*)&dword_140C3B738 + v19.m128_f32[2]) / *(float*)&dword_140C66F48) + 1.0;
	v5.m128_f32[0] = (float)((float)(*(float*)&dword_140C3B738 + v19.m128_f32[0]) / *(float*)&dword_140C66F1C) + 0.5;
	v19 = _mm_unpacklo_ps(_mm_unpacklo_ps(v5, (__m128)0i64), _mm_unpacklo_ps(v4, (__m128)0i64));
	v6 = _mm_shuffle_ps(v19, v19, 85);
	v7 = v6;
	v8 = (int)v6.m128_f32[0];
	if ((int)v6.m128_f32[0] != 0x80000000 && (float)v8 != v6.m128_f32[0])
		v7 = (__m128)COERCE_UNSIGNED_INT((float)(v8 - (_mm_movemask_ps(_mm_unpacklo_ps(v6, v6)) & 1)));
	v6.m128_f32[0] = v6.m128_f32[0] * 0.5;
	v9 = (__m128)v19.m128_u32[0];
	v10 = v6;
	v10.m128_f32[0] = v6.m128_f32[0] + v19.m128_f32[0];
	v11 = (int)(float)(v6.m128_f32[0] + v19.m128_f32[0]);
	if (v11 != 0x80000000 && (float)v11 != v10.m128_f32[0])
		v10 = (__m128)COERCE_UNSIGNED_INT((float)(v11 - (_mm_movemask_ps(_mm_unpacklo_ps(v10, v10)) & 1)));
	v10.m128_f32[0] = v10.m128_f32[0] - (float)(v7.m128_f32[0] * 2.0);
	v12 = v10;
	v12.m128_f32[0] = (float)(v10.m128_f32[0] * 0.33333334) + 0.0000099999997;
	v13 = (int)v12.m128_f32[0];
	if ((int)v12.m128_f32[0] != 0x80000000 && (float)v13 != v12.m128_f32[0])
		v12.m128_f32[0] = (float)(v13 - (_mm_movemask_ps(_mm_unpacklo_ps(v12, v12)) & 1));
	v9.m128_f32[0] = v19.m128_f32[0] - v6.m128_f32[0];
	v14 = (int)(float)(v19.m128_f32[0] - v6.m128_f32[0]);
	if (v14 != 0x80000000 && (float)v14 != v9.m128_f32[0])
		v9 = (__m128)COERCE_UNSIGNED_INT((float)(v14 - (_mm_movemask_ps(_mm_unpacklo_ps(v9, v9)) & 1)));
	v9.m128_f32[0] = (float)((float)((float)((float)((float)(v9.m128_f32[0] - v7.m128_f32[0])
		- (float)(v12.m128_f32[0] * 3.0))
		+ 1.0)
		+ (float)(v10.m128_f32[0] - (float)(v12.m128_f32[0] * 3.0)))
		* 0.33333334)
		+ 0.0000099999997;
	v15 = (int)v9.m128_f32[0];
	if ((int)v9.m128_f32[0] != 0x80000000 && (float)v15 != v9.m128_f32[0])
		v9.m128_f32[0] = (float)(v15 - (_mm_movemask_ps(_mm_unpacklo_ps(v9, v9)) & 1));
	v16 = (float)(v12.m128_f32[0] * 2.0) + v7.m128_f32[0];
	v7.m128_f32[0] = (float)(v7.m128_f32[0] - v9.m128_f32[0]) * 0.5;
	v17 = (int)v7.m128_f32[0];
	*a2 = (int)(float)(v16 + v9.m128_f32[0]);
	if ((int)v7.m128_f32[0] != 0x80000000 && (float)v17 != v7.m128_f32[0])
		v7.m128_f32[0] = (float)(v17 - (_mm_movemask_ps(_mm_unpacklo_ps(v7, v7)) & 1));
	a2[1] = (int)v7.m128_f32[0];
	return a2;
}
// 140C3B738: using guessed type int dword_140C3B738;
// 140C66F1C: using guessed type int dword_140C66F1C;
// 140C66F48: using guessed type int dword_140C66F48;

