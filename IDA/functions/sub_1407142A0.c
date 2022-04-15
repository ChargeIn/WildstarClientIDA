//----- (00000001407142A0) ----------------------------------------------------
void __fastcall sub_1407142A0(__m128* a1, __int64 a2, __int64 a3, int a4)
{
	__int32 v5; // r12d
	int v8; // xmm1_4
	__m128 v9; // xmm0
	unsigned __int64 v10; // rcx
	__m128 v11; // xmm12
	float v12; // xmm0_4
	__m128 v13; // xmm1
	float v14; // xmm3_4
	float v15; // xmm13_4
	__m128 v16; // xmm11
	__m128 v17; // xmm2
	__m128 v18; // xmm2
	float v19; // xmm2_4
	__m128 v20; // xmm0
	__m128 v21; // xmm9
	float v22; // xmm10_4
	double v23; // xmm15_8
	double v24; // xmm14_8
	double v25; // xmm7_8
	double v26; // xmm0_8
	__m128 v27; // xmm6
	__m128 v28; // xmm10
	__m128 v29; // xmm1
	float v30; // xmm10_4
	__m128 v31; // xmm6
	double v32; // xmm0_8
	float* v33; // rax
	double v34; // xmm6_8
	float v35; // xmm11_4
	float v36; // xmm10_4
	float v37; // xmm8_4
	float v38; // xmm7_4
	float v39; // xmm9_4
	float v40; // xmm11_4
	float v41; // xmm7_4
	float v42; // xmm9_4
	float v43; // xmm2_4
	float v44; // xmm4_4
	float v45; // xmm8_4
	float v46; // xmm10_4
	float v47; // xmm9_4
	float v48; // xmm3_4
	float v49; // xmm7_4
	float v50; // xmm11_4
	__m128 v51; // xmm2
	__m128 v52; // xmm0
	__m128 v53; // [rsp+68h] [rbp-A0h] BYREF
	__m128 v54; // [rsp+78h] [rbp-90h] BYREF
	int v55; // [rsp+88h] [rbp-80h] BYREF
	int v56; // [rsp+8Ch] [rbp-7Ch]
	int v57; // [rsp+90h] [rbp-78h]
	__m128 v58; // [rsp+98h] [rbp-70h] BYREF
	float v59; // [rsp+A8h] [rbp-60h]
	float v60; // [rsp+ACh] [rbp-5Ch]
	float v61; // [rsp+B0h] [rbp-58h]
	int v62; // [rsp+B4h] [rbp-54h]
	float v63; // [rsp+B8h] [rbp-50h]
	float v64; // [rsp+BCh] [rbp-4Ch]
	float v65; // [rsp+C0h] [rbp-48h]
	int v66; // [rsp+C4h] [rbp-44h]
	__m128 v67; // [rsp+C8h] [rbp-40h]
	__int128 v68; // [rsp+D8h] [rbp-30h]
	__m128 v69; // [rsp+E8h] [rbp-20h]
	__m128 v70; // [rsp+F8h] [rbp-10h]
	float v71[30]; // [rsp+108h] [rbp+0h] BYREF

	v5 = a3;
	if (a4)
	{
		a1[3] = *(__m128*)(a2 + 4080);
		a1[4] = *(__m128*)(a2 + 4144);
		a1[6].m128_i32[0] = *(_DWORD*)(a2 + 4352);
		a1[6].m128_i32[1] = *(_DWORD*)(a2 + 4356);
		a1[6].m128_i32[2] = *(_DWORD*)(a2 + 4360);
		a1[5] = *(__m128*)(a2 + 4368);
	}
	v8 = a1[6].m128_i32[1];
	v53 = *a1;
	v9 = a1[3];
	v56 = v8;
	v58 = v9;
	v70 = a1[4];
	v54 = a1[5];
	v55 = a1[6].m128_i32[0];
	v9.m128_i32[0] = a1[6].m128_i32[2];
	v10 = a1[8].m128_u64[0];
	v57 = v9.m128_i32[0];
	(*(void(__fastcall**)(unsigned __int64, __int64, __int64, __m128*, __m128*, __m128*))(*(_QWORD*)v10 + 16i64))(
		v10,
		a2,
		a3,
		&v53,
		&v58,
		&v54);
	v11 = v58;
	v69 = v58;
	if (a4)
	{
		if (!*(_DWORD*)(a1[8].m128_u64[0] + 12) || *(_DWORD*)(a2 + 3412))
		{
			a1[2] = 0i64;
			*(unsigned __int64*)((char*)a1[7].m128_u64 + 4) = 0i64;
			a1[7].m128_i32[3] = v5;
		}
		else
		{
			v12 = sub_1405B45E0(a2, *(_DWORD*)(a2 + 4232), 3u);
			v11 = v58;
			a1[2] = _mm_sub_ps(*a1, v53);
			a1[7].m128_i32[1] = 1065353216;
			v13 = _mm_mul_ps(a1[2], a1[2]);
			a1[7].m128_f32[2] = 1.0
				/ fmaxf(
					fsqrt(
						(float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0])
						+ _mm_shuffle_ps(v13, v13, 170).m128_f32[0])
					/ fmaxf(v12, 1.0),
					0.5);
		}
	}
	v14 = a1[7].m128_f32[1];
	v16 = 0i64;
	v15 = 0.0;
	v16.m128_f32[0] = (float)(v5 - a1[7].m128_i32[3]) * 0.001;
	if (v14 > 0.0)
	{
		v17 = 0i64;
		v17.m128_f32[0] = fmaxf(0.0, v14 - (float)(v16.m128_f32[0] * a1[7].m128_f32[2]));
		a1[7].m128_i32[1] = v17.m128_i32[0];
		v53 = _mm_add_ps(_mm_mul_ps(a1[2], _mm_shuffle_ps(v17, v17, 0)), v53);
	}
	v18 = _mm_mul_ps(v54, v54);
	v19 = (float)(v18.m128_f32[0] + _mm_shuffle_ps(v18, v18, 85).m128_f32[0]) + _mm_shuffle_ps(v18, v18, 170).m128_f32[0];
	if (v19 <= *(float*)&dword_140C4B188)
	{
		v21 = a1[5];
	}
	else
	{
		v20 = 0i64;
		v20.m128_f32[0] = fsqrt(v19);
		v21 = _mm_div_ps(v54, _mm_shuffle_ps(v20, v20, 0));
	}
	v54 = v21;
	v22 = _mm_shuffle_ps(v21, v21, 85).m128_f32[0];
	if (v22 <= 0.99998999)
	{
		if (v22 >= -0.99998999)
		{
			HIDWORD(v25) = 0;
			LODWORD(v24) = sub_1408FD190(-v21.m128_f32[0], -_mm_shuffle_ps(v21, v21, 170).m128_f32[0]);
			*(float*)&v25 = fmaxf(-1.0, fminf(v22, 1.0));
			v26 = sub_1408FCF3C(v25);
			LODWORD(v23) = LODWORD(v26);
		}
		else
		{
			LODWORD(v23) = -1077342245;
			LODWORD(v24) = 0;
		}
	}
	else
	{
		LODWORD(v23) = 1070141403;
		LODWORD(v24) = 0;
	}
	v55 = LODWORD(v24);
	v56 = LODWORD(v23);
	v57 = 0;
	if (!a4 || *(_DWORD*)(a1[8].m128_u64[0] + 12))
	{
		if (v16.m128_f32[0] <= 0.0)
		{
			v11 = a1[3];
			v21 = a1[5];
			LODWORD(v24) = a1[6].m128_i32[0];
			LODWORD(v23) = a1[6].m128_i32[1];
			v15 = a1[6].m128_f32[2];
			v69 = a1[4];
		}
		else
		{
			v27 = _mm_sub_ps(v53, *a1);
			v28 = _mm_mul_ps(v27, v27);
			v29 = _mm_shuffle_ps(v28, v28, 170);
			v30 = fsqrt((float)(v28.m128_f32[0] + _mm_shuffle_ps(v28, v28, 85).m128_f32[0]) + v29.m128_f32[0]);
			if (v30 <= 0.001)
			{
				v31 = 0i64;
			}
			else if (v30 > (float)(v16.m128_f32[0] * 1000.0))
			{
				if ((*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[8].m128_u64[0] + 8i64))(a1[8].m128_u64[0]) == 4
					|| (*(unsigned int(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[8].m128_u64[0] + 8i64))(a1[8].m128_u64[0]) == 5)
				{
					v31 = v58;
				}
				else
				{
					v29.m128_f32[0] = 1000.0 / v30;
					v29 = _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v27);
					v31 = v29;
					v58 = v29;
					if (a2)
					{
						(*(void(__fastcall**)(unsigned __int64))(*(_QWORD*)a1[8].m128_u64[0] + 8i64))(a1[8].m128_u64[0]);
						sub_1400035B0();
						v31 = v58;
					}
				}
			}
			else
			{
				v31 = _mm_div_ps(v27, _mm_shuffle_ps(v16, v16, 0));
			}
			v16.m128_f32[0] = v16.m128_f32[0] * -0.69314718;
			HIDWORD(v32) = v16.m128_i32[1];
			*(float*)&v32 = v16.m128_f32[0] * 10.0;
			v16.m128_f32[0] = v16.m128_f32[0] * 4.0;
			v29.m128_f32[0] = sub_1408FC7F0(v32);
			v70 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(a1[3], v31), _mm_shuffle_ps(v29, v29, 0)), v31);
			v58 = v70;
			*(float*)&v32 = sub_1408FC7F0(*(double*)v16.m128_u64);
			v33 = sub_1401B3250(v71, (float*)&v55, a1[6].m128_f32, *(float*)&v32);
			v15 = v33[2];
			*(_QWORD*)&v24 = *(unsigned int*)v33;
			*(_QWORD*)&v23 = *((unsigned int*)v33 + 1);
			*(_QWORD*)&v34 = LODWORD(v15);
			*(float*)&v34 = v15 * 0.5;
			v35 = sub_1408FE3D0(v34);
			*(float*)&v32 = sub_1408FC950(v34);
			HIDWORD(v34) = HIDWORD(v23);
			v36 = *(float*)&v32;
			*(float*)&v34 = *(float*)&v23 * 0.5;
			v37 = sub_1408FE3D0(v34);
			HIDWORD(v34) = HIDWORD(v24);
			v38 = sub_1408FC950(v23);
			*(float*)&v34 = *(float*)&v24 * 0.5;
			v39 = sub_1408FE3D0(v34);
			*(float*)&v32 = sub_1408FC950(v24);
			v54.m128_f32[0] = (float)(v35 * (float)(v39 * v38)) + (float)((float)(*(float*)&v32 * v37) * v36);
			v54.m128_f32[1] = (float)((float)(v39 * v38) * v36) - (float)(v35 * (float)(*(float*)&v32 * v37));
			v54.m128_f32[2] = (float)(v35 * (float)(*(float*)&v32 * v38)) - (float)((float)(v39 * v37) * v36);
			v54.m128_f32[3] = (float)(v35 * (float)(v39 * v37)) + (float)((float)(*(float*)&v32 * v38) * v36);
			v40 = _mm_shuffle_ps(v54, v54, 85).m128_f32[0];
			v62 = 0;
			v66 = 0;
			v41 = _mm_shuffle_ps(v54, v54, 255).m128_f32[0];
			v42 = _mm_shuffle_ps(v54, v54, 170).m128_f32[0];
			v43 = v54.m128_f32[0] * (float)(v40 * 2.0);
			v44 = v42 * 2.0;
			v45 = v41 * (float)(v40 * 2.0);
			v46 = v41 * (float)(v54.m128_f32[0] * 2.0);
			*(float*)&v34 = v40 * (float)(v40 * 2.0);
			v47 = v42 * (float)(v42 * 2.0);
			v48 = 1.0 - (float)(v54.m128_f32[0] * (float)(v54.m128_f32[0] * 2.0));
			v49 = v41 * v44;
			v50 = v40 * v44;
			v67.m128_f32[0] = (float)(v54.m128_f32[0] * v44) + v45;
			v11 = v70;
			v59 = (float)(1.0 - *(float*)&v34) - v47;
			v61 = (float)(v54.m128_f32[0] * v44) - v45;
			v60 = v43 + v49;
			v67.m128_f32[1] = v50 - v46;
			v63 = v43 - v49;
			v64 = v48 - v47;
			v67.m128_u64[1] = COERCE_UNSIGNED_INT(v48 - *(float*)&v34);
			v21 = _mm_sub_ps((__m128)0i64, v67);
			v68 = xmmword_140B7AD00;
			v65 = v50 + v46;
		}
	}
	v51 = v53;
	a1[1] = _mm_add_ps(a1[1], _mm_sub_ps(v53, *a1));
	v52 = v69;
	*a1 = v51;
	a1[3] = v11;
	a1[4] = v52;
	a1[5] = v21;
	a1[6].m128_i32[0] = LODWORD(v24);
	a1[6].m128_i32[1] = LODWORD(v23);
	a1[6].m128_f32[2] = v15;
	a1[7].m128_i32[3] = v5;
	a1[7].m128_i32[0] = 1;
}
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C4B188: using guessed type int dword_140C4B188;
// 1407142A0: using guessed type float var_E0[30];

