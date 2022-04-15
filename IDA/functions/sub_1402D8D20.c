#include "../winhttp.h"

//----- (00000001402D8D20) ----------------------------------------------------
__m128* __fastcall sub_1402D8D20(__m128* a1, unsigned __int8* a2)
{
	__m128 v2; // xmm4
	__m128 v4; // xmm4
	__m128 v5; // xmm1
	__m128 v6; // xmm6
	__m128 v7; // xmm2
	__m128 v8; // xmm5
	__m128 v9; // xmm3
	float v10; // xmm7_4
	int v11; // ecx
	int v12; // ecx
	float v13; // xmm7_4
	int v14; // ecx
	int v15; // ecx
	float v16; // xmm5_4
	float v17; // xmm4_4
	int v18; // ecx
	int v19; // ecx
	float v20; // xmm4_4
	int v21; // ecx
	int v22; // ecx
	float v23; // xmm4_4
	int v24; // ecx
	int v25; // ecx
	float v26; // xmm4_4
	int v27; // ecx
	int v28; // ecx
	__m128 v29; // xmm0
	__m128* result; // rax

	v2 = 0i64;
	v2.m128_f32[0] = (float)a2[4];
	v4 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v2, (__m128)0i64),
		_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)a2[7]), (__m128)0i64));
	v5 = v4;
	v6 = v4;
	v5.m128_f32[0] = v4.m128_f32[0] * 0.03125;
	v6.m128_f32[0] = v4.m128_f32[0] * 0.00390625;
	v7 = _mm_shuffle_ps(v4, v4, 85);
	v8 = v7;
	v9 = v7;
	v8.m128_f32[0] = v7.m128_f32[0] * 0.0078125;
	v9.m128_f32[0] = v7.m128_f32[0] * 0.25;
	v10 = v7.m128_f32[0] * 0.0078125;
	v11 = (int)(float)(v7.m128_f32[0] * 0.0078125);
	if (v11 != 0x80000000 && (float)v11 != v8.m128_f32[0])
		v10 = (float)(v11 - (_mm_movemask_ps(_mm_unpacklo_ps(v8, v8)) & 1));
	v8.m128_f32[0] = (float)(v8.m128_f32[0] - v10) * 32.0;
	v12 = (int)v8.m128_f32[0];
	if ((int)v8.m128_f32[0] != 0x80000000 && (float)v12 != v8.m128_f32[0])
		v8 = (__m128)COERCE_UNSIGNED_INT((float)(v12 - (_mm_movemask_ps(_mm_unpacklo_ps(v8, v8)) & 1)));
	v13 = v4.m128_f32[0];
	v14 = (int)v4.m128_f32[0];
	if ((int)v4.m128_f32[0] != 0x80000000 && (float)v14 != v4.m128_f32[0])
		v13 = (float)(v14 - (_mm_movemask_ps(_mm_unpacklo_ps(v4, v4)) & 1));
	v4.m128_f32[0] = (float)(v4.m128_f32[0] - v13) * 0.0;
	v15 = (int)v4.m128_f32[0];
	if ((int)v4.m128_f32[0] != 0x80000000 && (float)v15 != v4.m128_f32[0])
		v4.m128_f32[0] = (float)(v15 - (_mm_movemask_ps(_mm_unpacklo_ps(v4, v4)) & 1));
	v16 = v8.m128_f32[0] + v4.m128_f32[0];
	v17 = v7.m128_f32[0] * 0.25;
	v18 = (int)v9.m128_f32[0];
	v8.m128_f32[0] = v16 * 0.032258064;
	if ((int)v9.m128_f32[0] != 0x80000000 && (float)v18 != v9.m128_f32[0])
		v17 = (float)(v18 - (_mm_movemask_ps(_mm_unpacklo_ps(v9, v9)) & 1));
	v9.m128_f32[0] = (float)(v9.m128_f32[0] - v17) * 32.0;
	v19 = (int)v9.m128_f32[0];
	if ((int)v9.m128_f32[0] != 0x80000000 && (float)v19 != v9.m128_f32[0])
		v9 = (__m128)COERCE_UNSIGNED_INT((float)(v19 - (_mm_movemask_ps(_mm_unpacklo_ps(v9, v9)) & 1)));
	v20 = v6.m128_f32[0];
	v21 = (int)v6.m128_f32[0];
	if ((int)v6.m128_f32[0] != 0x80000000 && (float)v21 != v6.m128_f32[0])
		v20 = (float)(v21 - (_mm_movemask_ps(_mm_unpacklo_ps(v6, v6)) & 1));
	v6.m128_f32[0] = (float)(v6.m128_f32[0] - v20) * 8.0;
	v22 = (int)v6.m128_f32[0];
	if ((int)v6.m128_f32[0] != 0x80000000 && (float)v22 != v6.m128_f32[0])
		v6.m128_f32[0] = (float)(v22 - (_mm_movemask_ps(_mm_unpacklo_ps(v6, v6)) & 1));
	v23 = v5.m128_f32[0];
	v24 = (int)v5.m128_f32[0];
	v9.m128_f32[0] = (float)(v9.m128_f32[0] + v6.m128_f32[0]) * 0.032258064;
	if ((int)v5.m128_f32[0] != 0x80000000 && (float)v24 != v5.m128_f32[0])
		v23 = (float)(v24 - (_mm_movemask_ps(_mm_unpacklo_ps(v5, v5)) & 1));
	v5.m128_f32[0] = (float)(v5.m128_f32[0] - v23) * 32.0;
	v25 = (int)v5.m128_f32[0];
	if ((int)v5.m128_f32[0] != 0x80000000 && (float)v25 != v5.m128_f32[0])
		v5 = (__m128)COERCE_UNSIGNED_INT((float)(v25 - (_mm_movemask_ps(_mm_unpacklo_ps(v5, v5)) & 1)));
	v26 = v7.m128_f32[0];
	v27 = (int)v7.m128_f32[0];
	if ((int)v7.m128_f32[0] != 0x80000000 && (float)v27 != v7.m128_f32[0])
		v26 = (float)(v27 - (_mm_movemask_ps(_mm_unpacklo_ps(v7, v7)) & 1));
	v7.m128_f32[0] = (float)(v7.m128_f32[0] - v26) * 0.0;
	v28 = (int)v7.m128_f32[0];
	if ((int)v7.m128_f32[0] != 0x80000000 && (float)v28 != v7.m128_f32[0])
		v7.m128_f32[0] = (float)(v28 - (_mm_movemask_ps(_mm_unpacklo_ps(v7, v7)) & 1));
	v29 = 0i64;
	v5.m128_f32[0] = (float)(v5.m128_f32[0] + v7.m128_f32[0]) * 0.032258064;
	result = a1;
	v29.m128_f32[0] = (float)a2[16] * 0.0039215689;
	*a1 = _mm_unpacklo_ps(_mm_unpacklo_ps(v8, v5), _mm_unpacklo_ps(v9, v29));
	return result;
}

