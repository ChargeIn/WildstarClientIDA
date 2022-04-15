//----- (00000001407999E0) ----------------------------------------------------
bool __fastcall sub_1407999E0(int a1, __int64 a2, int a3, _DWORD* a4, int a5, __int64 a6)
{
	__m128 v6; // xmm6
	int v7; // ebx
	int v12; // r15d
	__int64 v13; // r11
	int v14; // eax
	int v15; // r10d
	unsigned int* v16; // r11
	__m128 v17; // xmm5
	__int64 v18; // r11
	float v19; // xmm3_4
	float v20; // xmm0_4
	int v21; // r10d
	float v22; // xmm4_4
	float* v24; // r11
	float v25; // xmm3_4
	__m128 v26; // xmm1
	float v27; // xmm2_4
	int v28; // ecx
	__m128 v29; // xmm1
	float v30; // xmm2_4
	int v31; // ecx
	__m128 v32; // xmm1
	float v33; // xmm2_4
	int v34; // ecx
	__int64 v35; // r11
	int v36; // r10d
	__m128 v37; // xmm6
	__m128 v38; // xmm6
	__m128 v39; // xmm1
	int v40; // r10d
	__m128 v41; // xmm3
	__m128 v42; // xmm5
	__m128 v43; // xmm1
	__m128 v44; // [rsp+20h] [rbp-48h] BYREF
	__m128 v45; // [rsp+30h] [rbp-38h] BYREF

	v7 = *(_DWORD*)a2;
	if (*(_DWORD*)a2 != *a4 || *a4 != *(_DWORD*)a6)
		return 0;
	if (a1 == a5)
		return 1;
	v12 = sub_140799880(a2, (__int64)a4);
	v14 = sub_140799880(v13, a6);
	if (v12 != v14)
		return 0;
	if (v12 && v14)
		return 1;
	switch (v7)
	{
	case 2:
		if (v16[5])
		{
			v41 = _mm_unpacklo_ps(
				_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 8), (__m128) * (unsigned int*)(a2 + 16)),
				_mm_unpacklo_ps((__m128) * (unsigned int*)(a2 + 12), (__m128)0i64));
			v17.m128_f32[0] = (float)(a3 - a1) / (float)(v15 - a1);
			v42 = _mm_sub_ps(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_shuffle_ps(v17, v17, 0),
						_mm_sub_ps(
							_mm_unpacklo_ps(
								_mm_unpacklo_ps((__m128) * (unsigned int*)(a6 + 8), (__m128) * (unsigned int*)(a6 + 16)),
								_mm_unpacklo_ps((__m128) * (unsigned int*)(a6 + 12), (__m128)0i64)),
							v41)),
					v41),
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v16[2], (__m128)v16[4]),
					_mm_unpacklo_ps((__m128)v16[3], (__m128)0i64)));
			v43 = _mm_mul_ps(v42, v42);
			return (float)((float)(v43.m128_f32[0] + _mm_shuffle_ps(v43, v43, 85).m128_f32[0])
				+ _mm_shuffle_ps(v43, v43, 170).m128_f32[0]) < 0.0099999998;
		}
		return 0;
	case 8:
		if (!v16[4])
			return 0;
		sub_1401ADB90((__m128i*) & v44, (unsigned __int16*)(a6 + 8));
		sub_1401ADB90((__m128i*) & v45, (unsigned __int16*)(a2 + 8));
		v6.m128_f32[0] = (float)(a3 - a1) / (float)(v40 - a1);
		v37 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), _mm_sub_ps(v44, v45)), v45);
		goto LABEL_32;
	case 11:
		if (!v16[4])
			return 0;
		sub_1401ADB90((__m128i*) & v45, (unsigned __int16*)(a6 + 8));
		sub_1401ADB90((__m128i*) & v44, (unsigned __int16*)(a2 + 8));
		v6.m128_f32[0] = (float)(a3 - a1) / (float)(v36 - a1);
		v37 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), _mm_sub_ps(v45, v44)), v44);
	LABEL_32:
		sub_1401ADB90((__m128i*) & v45, (unsigned __int16*)(v35 + 8));
		v38 = _mm_sub_ps(v37, v45);
		v39 = _mm_mul_ps(v38, v38);
		return (float)((float)(v39.m128_f32[0] + _mm_shuffle_ps(v39, v39, 85).m128_f32[0])
			+ _mm_shuffle_ps(v39, v39, 170).m128_f32[0]) < 1.0;
	case 14:
		if (v16[5])
		{
			sub_1401B3250(v44.m128_f32, (float*)(a2 + 8), (float*)(a6 + 8), (float)(a3 - a1) / (float)(v15 - a1));
			v26 = (__m128)v44.m128_u32[0];
			v25 = (float)(*(float*)&dword_140C3B438 * 0.0055555557) * 10.0;
			v26.m128_f32[0] = (float)((float)(v44.m128_f32[0] - v24[2]) + 3.1415927) * 0.15915494;
			v27 = v26.m128_f32[0];
			v28 = (int)v26.m128_f32[0];
			if ((int)v26.m128_f32[0] != 0x80000000 && (float)v28 != v26.m128_f32[0])
				v27 = (float)(v28 - (_mm_movemask_ps(_mm_unpacklo_ps(v26, v26)) & 1));
			if (fabs((float)((float)(v26.m128_f32[0] - v27) * 6.2831855) - 3.1415927) < v25)
			{
				v29 = (__m128)v44.m128_u32[1];
				v29.m128_f32[0] = (float)((float)(v44.m128_f32[1] - v24[3]) + 3.1415927) * 0.15915494;
				v30 = v29.m128_f32[0];
				v31 = (int)v29.m128_f32[0];
				if ((int)v29.m128_f32[0] != 0x80000000 && (float)v31 != v29.m128_f32[0])
					v30 = (float)(v31 - (_mm_movemask_ps(_mm_unpacklo_ps(v29, v29)) & 1));
				if (fabs((float)((float)(v29.m128_f32[0] - v30) * 6.2831855) - 3.1415927) < v25)
				{
					v32 = (__m128)v44.m128_u32[2];
					v32.m128_f32[0] = (float)((float)(v44.m128_f32[2] - v24[4]) + 3.1415927) * 0.15915494;
					v33 = v32.m128_f32[0];
					v34 = (int)v32.m128_f32[0];
					if ((int)v32.m128_f32[0] != 0x80000000 && (float)v34 != v32.m128_f32[0])
						v33 = (float)(v34 - (_mm_movemask_ps(_mm_unpacklo_ps(v32, v32)) & 1));
					if (fabs((float)((float)(v32.m128_f32[0] - v33) * 6.2831855) - 3.1415927) < v25)
						return 1;
				}
			}
		}
		return 0;
	}
	if (v7 != 22 || !v16[3])
		return 0;
	v19 = sub_1401C9770((unsigned __int16*)(a2 + 8));
	sub_1401C9770((unsigned __int16*)(v18 + 8));
	v20 = sub_1401C9770((unsigned __int16*)(a6 + 8));
	return fabs(v22 - (float)((float)((float)(v20 - v19) * (float)((float)(a3 - a1) / (float)(v21 - a1))) + v19)) < 0.1;
}
// 140799A4B: variable 'v13' is possibly undefined
// 140799A9A: variable 'v16' is possibly undefined
// 140799AAE: variable 'v18' is possibly undefined
// 140799AF2: variable 'v22' is possibly undefined
// 140799ACA: variable 'v21' is possibly undefined
// 140799B17: variable 'v15' is possibly undefined
// 140799B52: variable 'v24' is possibly undefined
// 140799CBE: variable 'v36' is possibly undefined
// 140799CE8: variable 'v6' is possibly undefined
// 140799CF4: variable 'v35' is possibly undefined
// 140799D75: variable 'v40' is possibly undefined
// 140799E2A: variable 'v17' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140C3B438: using guessed type int dword_140C3B438;

