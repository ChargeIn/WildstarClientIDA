//----- (00000001407A3FA0) ----------------------------------------------------
__int64 __fastcall sub_1407A3FA0(_QWORD* a1, __m128* a2, __m128* a3, float a4, float* a5, int a6, __m128* a7, float a8)
{
	__int64 result; // rax
	__m128* v13; // rdx
	__int64 v14; // r9
	float v15; // xmm6_4
	__int64 v16; // rax
	__int64 v17; // r12
	unsigned __int64 v18; // rsi
	__int64 v19; // rdi
	__int64 v20; // rbp
	float v21; // xmm12_4
	__m128* v22; // r14
	double v23; // xmm8_8
	__m128 v24; // xmm9
	__m128 v25; // xmm3
	__m128 v26; // xmm7
	float v27; // xmm7_4
	__m128 v28; // xmm4
	__m128 v29; // xmm1
	float v30; // xmm1_4
	__m128 v31; // xmm2
	__m128 v32; // xmm1
	float v33; // xmm1_4
	float v34; // xmm5_4
	__m128 v35; // xmm4
	__m128 v36; // xmm4
	float v37; // xmm11_4
	__m128 v38; // xmm3
	__m128 v39; // xmm1
	__m128 v40; // xmm2
	float v41; // xmm2_4
	float v42; // xmm2_4
	float v43; // xmm1_4
	float v44; // xmm7_4
	double v45; // xmm6_8
	double v46; // xmm7_8
	float v47; // xmm1_4
	double v48; // xmm0_8
	float v49; // xmm0_4
	double v50; // xmm2_8
	unsigned __int64 v51; // [rsp+30h] [rbp-108h]
	__m128 v52; // [rsp+40h] [rbp-F8h] BYREF
	__m128 v53; // [rsp+50h] [rbp-E8h] BYREF
	__m128 v54; // [rsp+60h] [rbp-D8h] BYREF
	__m128* v56; // [rsp+160h] [rbp+28h]

	if (a5)
	{
		result = sub_1407A4CE0(a1, &a8);
		if ((int)result < 0)
			return result;
	}
	else
	{
		result = sub_1407A4700((__int64)a1);
		if ((int)result < 0)
			return result;
	}
	v13 = 0i64;
	v14 = a1[6] - 1i64;
	v15 = *(float*)&dword_140C4E9E8;
	v51 = v14;
	if ((_mm_movemask_ps(_mm_cmpneq_ps(*a7, (__m128)0i64)) & 7) != 0)
		v13 = a7;
	v56 = v13;
	if (a5)
	{
		v16 = sub_1407A45E0((__int64)a1, a8);
		v13 = v56;
		v17 = v16;
	}
	else
	{
		v17 = 0i64;
	}
	v18 = 0i64;
	if (v14)
	{
		v19 = 0i64;
		do
		{
			v20 = a1[5];
			v21 = *(float*)(v19 + v20 + 16);
			v22 = (__m128*)(a1[3] + 112i64 * *(_QWORD*)(v19 + v20 + 8));
			sub_1407A5460(a1, &v53, v22, COERCE_DOUBLE((unsigned __int64)LODWORD(v21)), v13);
			if (*(_QWORD*)(v19 + v20 + 8) == *(_QWORD*)(v19 + v20 + 32))
				*(_QWORD*)&v23 = *(unsigned int*)(v19 + v20 + 40);
			else
				*(_QWORD*)&v23 = 1065353216i64;
			sub_1407A5460(a1, &v52, v22, v23, v56);
			v24 = _mm_sub_ps(v52, v53);
			v25 = _mm_sub_ps(*a2, v53);
			v26 = _mm_mul_ps(v24, v24);
			v27 = (float)(v26.m128_f32[0] + _mm_shuffle_ps(v26, v26, 85).m128_f32[0])
				+ _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
			v28 = _mm_mul_ps(v25, v24);
			v28.m128_f32[0] = (float)(v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 85).m128_f32[0])
				+ _mm_shuffle_ps(v28, v28, 170).m128_f32[0];
			if (v28.m128_f32[0] > 0.0)
			{
				if (v28.m128_f32[0] < (float)(v27 - 0.0000099999997))
				{
					v28.m128_f32[0] = v28.m128_f32[0] / v27;
					v34 = 1.0 / fsqrt(v27);
					v35 = _mm_mul_ps(_mm_shuffle_ps(v28, v28, 0), v24);
					v36 = _mm_mul_ps(v35, v35);
					v37 = fmaxf(
						0.0,
						fminf(
							(float)((float)((float)((float)(v34 * v27) * v34) - 3.0) * (float)(v34 * -0.5))
							* fsqrt(
								(float)(v36.m128_f32[0] + _mm_shuffle_ps(v36, v36, 85).m128_f32[0])
								+ _mm_shuffle_ps(v36, v36, 170).m128_f32[0]),
							1.0));
					*(float*)&v23 = (float)((float)(*(float*)&v23 - v21) * v37) + v21;
					v38 = *sub_1407A5460(a1, &v54, v22, v23, v56);
					v39 = _mm_sub_ps(*a2, v38);
					v40 = _mm_mul_ps(v39, v39);
					v41 = (float)(v40.m128_f32[0] + _mm_shuffle_ps(v40, v40, 85).m128_f32[0])
						+ _mm_shuffle_ps(v40, v40, 170).m128_f32[0];
					if (v15 > v41)
					{
						v15 = v41;
						if (a3)
							*a3 = v38;
						if (a5)
						{
							if (v18 == v51 - 1)
								v42 = *(float*)(v17 + 56) * *(float*)(v19 + v20 + 28);
							else
								v42 = 0.0;
							v43 = (float)(*(float*)(v17 + 56) * *(float*)(v19 + v20 + 4)) + *(float*)(*(_QWORD*)v17 + 4 * v18);
							*a5 = (float)((float)((float)(*(float*)(*(_QWORD*)v17 + 4 * v18 + 4) - v42) - v43) * v37) + v43;
						}
					}
				}
				else
				{
					v31 = _mm_sub_ps(*a2, v52);
					v32 = _mm_mul_ps(v31, v31);
					v33 = (float)(v32.m128_f32[0] + _mm_shuffle_ps(v32, v32, 85).m128_f32[0])
						+ _mm_shuffle_ps(v32, v32, 170).m128_f32[0];
					if (v15 > v33)
					{
						v15 = v33;
						if (a3)
							*a3 = v52;
						if (a5)
							*a5 = *(float*)(*(_QWORD*)v17 + 4 * v18 + 4);
					}
				}
			}
			else
			{
				v29 = _mm_mul_ps(v25, v25);
				v30 = (float)(v29.m128_f32[0] + _mm_shuffle_ps(v29, v29, 85).m128_f32[0])
					+ _mm_shuffle_ps(v29, v29, 170).m128_f32[0];
				if (v15 > v30)
				{
					v15 = v30;
					if (a3)
						*a3 = v53;
					if (a5)
						*a5 = *(float*)(*(_QWORD*)v17 + 4 * v18);
				}
			}
			v13 = v56;
			++v18;
			v19 += 24i64;
		} while (v18 < v51);
	}
	if (a5)
	{
		switch (a6)
		{
		case 1:
		case 6:
			if (sub_1408FDE98(a4, 2.0) >= 1.0)
				*a5 = 2.0 - *a5;
			break;
		case 3:
		case 5:
		case 10:
			*a5 = 1.0 - *a5;
			break;
		case 4:
		case 7:
			v44 = 1.0 - *a5;
			*a5 = v44;
			if (sub_1408FDE98(a4, 2.0) >= 1.0)
				*a5 = 2.0 - v44;
			break;
		case 8:
			v45 = *(double*)(v17 + 48);
			v46 = *(double*)(v17 + 32);
			sub_1409357C8(a4, v45);
			v47 = *a5;
			v48 = *a5;
			if (a4 < v46)
			{
				v50 = *(double*)(v17 + 16);
				if (v48 <= v50)
					*a5 = 0.0;
				else
					*a5 = v47 - v50;
			}
			else
			{
				if (v48 >= *(double*)(v17 + 40))
					v49 = v46;
				else
					v49 = v45 - v47;
				*a5 = v49;
			}
			break;
		default:
			return 0i64;
		}
	}
	return 0i64;
}
// 1407A408D: variable 'v14' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C4E9E8: using guessed type int dword_140C4E9E8;

