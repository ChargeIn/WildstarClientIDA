//----- (0000000140385390) ----------------------------------------------------
__m128* __fastcall sub_140385390(__int64 a1, float* a2, float* a3, float* a4, __int64 a5)
{
	float v5; // xmm2_4
	float v6; // xmm3_4
	float v9; // xmm1_4
	float v11; // xmm2_4
	float v12; // xmm3_4
	float v13; // xmm1_4
	__m128 v14; // xmm3
	__m128 v15; // xmm2
	__m128 v16; // xmm4
	__m128 v17; // xmm7
	__m128 v18; // xmm6
	__m128 v19; // xmm3
	__m128 v20; // xmm0
	float v21; // xmm1_4
	__m128 v22; // xmm3
	__m128 v23; // xmm5
	__m128 v24; // xmm0
	int v25; // r14d
	__m128 v26; // xmm3
	int v27; // r15d
	float v28; // xmm4_4
	int v29; // esi
	int v30; // ebx
	float v31; // xmm9_4
	float v32; // xmm6_4
	float v33; // xmm8_4
	int v34; // xmm3_4
	__m128* v35; // r12
	float v36; // xmm2_4
	int v37[2]; // [rsp+40h] [rbp-61h] BYREF
	int v38[2]; // [rsp+48h] [rbp-59h] BYREF
	__m128 v39; // [rsp+50h] [rbp-51h] BYREF
	__m128 v40; // [rsp+60h] [rbp-41h] BYREF
	int v41; // [rsp+100h] [rbp+5Fh]
	int v42; // [rsp+108h] [rbp+67h]
	int v43; // [rsp+110h] [rbp+6Fh] BYREF
	int v44; // [rsp+114h] [rbp+73h]
	__int64 v45; // [rsp+118h] [rbp+77h] BYREF

	v5 = a3[1];
	v6 = a2[1];
	v9 = *(float*)(a1 + 196) - 0.5;
	if (v9 <= (float)((float)(v5 * *a4) + v6))
	{
		if (v9 > (float)((float)(a3[1] * a4[1]) + v6))
			a4[1] = (float)(v9 - v6) / v5;
	}
	else
	{
		if (v9 > (float)((float)(a3[1] * a4[1]) + v6))
			return 0i64;
		*a4 = (float)(v9 - v6) / v5;
	}
	v11 = a3[1];
	v12 = a2[1];
	v13 = *(float*)(a1 + 212) + 0.5;
	if ((float)((float)(v11 * *a4) + v12) <= v13)
	{
		if ((float)((float)(a3[1] * a4[1]) + v12) > v13)
			a4[1] = (float)(v13 - v12) / v11;
	}
	else
	{
		if ((float)((float)(a3[1] * a4[1]) + v12) > v13)
			return 0i64;
		*a4 = (float)(v13 - v12) / v11;
	}
	v14 = (__m128) * (unsigned int*)a2;
	v15 = (__m128) * ((unsigned int*)a2 + 2);
	v16 = (__m128) * (unsigned int*)a3;
	v16.m128_f32[0] = v16.m128_f32[0] * 16.0;
	v17 = (__m128) * ((unsigned int*)a4 + 1);
	v14.m128_f32[0] = (float)(*a2 - (float)*(int*)(a1 + 8)) * 16.0;
	v18 = v14;
	v19 = (__m128) * ((unsigned int*)a3 + 1);
	v15.m128_f32[0] = (float)(v15.m128_f32[0] - (float)*(int*)(a1 + 12)) * 16.0;
	v20 = (__m128) * ((unsigned int*)a3 + 2);
	v20.m128_f32[0] = v20.m128_f32[0] * 16.0;
	v40 = _mm_unpacklo_ps(_mm_unpacklo_ps(v18, v15), _mm_unpacklo_ps((__m128) * ((unsigned int*)a2 + 1), (__m128)0i64));
	v21 = *a4;
	v22 = _mm_unpacklo_ps(v19, (__m128)0i64);
	v23 = _mm_unpacklo_ps(_mm_unpacklo_ps(v16, v20), v22);
	v22.m128_f32[0] = *a4;
	v39 = v23;
	v24 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v23), v40);
	v25 = (int)v24.m128_f32[0];
	v26 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v23), v40);
	v27 = (int)_mm_shuffle_ps(v24, v24, 170).m128_f32[0];
	v28 = _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
	v29 = (int)v26.m128_f32[0];
	v30 = (int)v28;
	if ((int)v26.m128_f32[0] >= 0)
	{
		if ((unsigned int)v29 >= 0x10)
			v29 = 15;
	}
	else
	{
		v29 = 0;
	}
	v43 = v29;
	if (v30 >= 0)
	{
		if ((unsigned int)v30 >= 0x10)
			v30 = 15;
	}
	else
	{
		v30 = 0;
	}
	v44 = v30;
	if (v25 >= 0)
	{
		if ((unsigned int)v25 >= 0x10)
			v25 = 15;
	}
	else
	{
		v25 = 0;
	}
	if (v27 >= 0)
	{
		if ((unsigned int)v27 >= 0x10)
			v27 = 15;
	}
	else
	{
		v27 = 0;
	}
	v42 = -1;
	if (v29 >= v25)
	{
		if (v29 <= v25)
		{
			v41 = 0;
			v32 = v17.m128_f32[0];
			v31 = 0.0;
		}
		else
		{
			v41 = -1;
			v31 = -1.0 / v39.m128_f32[0];
			v32 = (float)((float)(v26.m128_f32[0] - (float)v29) * (float)(-1.0 / v39.m128_f32[0])) + v21;
		}
	}
	else
	{
		v41 = 1;
		v31 = 1.0 / v39.m128_f32[0];
		v32 = (float)((float)((float)(v29 + 1) - v26.m128_f32[0]) * (float)(1.0 / v39.m128_f32[0])) + v21;
	}
	if (v30 >= v27)
	{
		if (v30 <= v27)
		{
			v33 = 0.0;
			v42 = 0;
		}
		else
		{
			v33 = -1.0 / v39.m128_f32[2];
			v17.m128_f32[0] = (float)((float)(v28 - (float)v30) * (float)(-1.0 / v39.m128_f32[2])) + v21;
		}
	}
	else
	{
		v33 = 1.0 / v39.m128_f32[2];
		v42 = 1;
		v17.m128_f32[0] = (float)((float)((float)(v30 + 1) - v28) * (float)(1.0 / v39.m128_f32[2])) + v21;
	}
	if ((*(int(__fastcall**)(_QWORD, _QWORD, __int64*, __int64))(**(_QWORD**)(a1 + 16) + 72i64))(
		*(_QWORD*)(a1 + 16),
		0i64,
		&v45,
		1i64) >= 0)
	{
		v34 = *(int*)a4;
		if (*a4 < a4[1])
		{
			do
			{
				if (v32 >= v17.m128_f32[0])
				{
					v38[0] = v34;
					v38[1] = v17.m128_i32[0];
					v35 = sub_140385840(a1, v45, &v43, &v40, &v39, (float*)v38, a5);
					if (v35)
					{
					LABEL_53:
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v45 + 8i64))(v45);
						return v35;
					}
					v30 += v42;
					v36 = a4[1];
					v34 = v17.m128_i32[0];
					v44 = v30;
					if (v30 == v27)
						v17.m128_f32[0] = v36;
					else
						v17.m128_f32[0] = fminf(v17.m128_f32[0] + v33, v36);
				}
				else
				{
					v37[0] = v34;
					*(float*)&v37[1] = v32;
					v35 = sub_140385840(a1, v45, &v43, &v40, &v39, (float*)v37, a5);
					if (v35)
						goto LABEL_53;
					v29 += v41;
					v36 = a4[1];
					*(float*)&v34 = v32;
					v43 = v29;
					if (v29 == v25)
						v32 = v36;
					else
						v32 = fminf(v32 + v31, v36);
				}
			} while (*(float*)&v34 < v36);
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v45 + 8i64))(v45);
	}
	return 0i64;
}

