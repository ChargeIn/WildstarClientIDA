//----- (00000001407A37C0) ----------------------------------------------------
__int64 __fastcall sub_1407A37C0(
	__int64 a1,
	double a2,
	__m128* a3,
	__m128* a4,
	__m128* a5,
	__int64 a6,
	__m128* a7,
	_QWORD* a8,
	float* a9,
	float* a10,
	int a11,
	__m128* a12,
	float a13)
{
	__int64 result; // rax
	__int64 v16; // rdx
	__int64 v17; // rax
	__int64 v18; // rcx
	bool v19; // cf
	__m128* v20; // r15
	__int64 v21; // rbx
	__int64 v22; // r8
	__m128 v23; // xmm5
	float v24; // xmm7_4
	__int64 v25; // r14
	float v26; // xmm8_4
	__int64 v27; // r12
	__m128 v28; // xmm3
	float v29; // xmm4_4
	float v30; // xmm2_4
	float v31; // xmm15_4
	float v32; // xmm13_4
	__m128 v33; // xmm0
	float v34; // xmm5_4
	float v35; // xmm4_4
	float v36; // xmm6_4
	__m128 v37; // xmm10
	float v38; // xmm8_4
	__m128* v39; // rbx
	__m128* v40; // rax
	__m128 v41; // xmm4
	__m128 v42; // xmm2
	__m128 v43; // xmm5
	__m128 v44; // xmm1
	__m128 v45; // xmm0
	__m128 v46; // xmm3
	__m128 v47; // xmm2
	__m128 v48; // xmm0
	__m128 v49; // xmm2
	__m128 v50; // xmm2
	__m128 v51; // xmm1
	__m128 v52; // xmm0
	__m128 v53; // xmm2
	__m128 v54; // xmm5
	__m128 v55; // xmm1
	__m128 v56; // xmm4
	__m128 v57; // xmm0
	__m128 v58; // xmm3
	__m128* v59; // r9
	__m128 v60; // xmm2
	__m128 v61; // xmm1
	__m128 v62; // xmm4
	__m128 v63; // xmm6
	__m128 v64; // xmm3
	__m128 v65; // xmm0
	__m128 v66; // xmm1
	__m128 v67; // xmm7
	__m128 v68; // xmm0
	__m128 v69; // xmm7
	__m128 v70; // xmm3
	__m128 v71; // xmm0
	__m128 v72; // xmm5
	__m128 v73; // xmm2
	__m128 v74; // xmm4
	float v75; // xmm10_4
	__m128 v76; // xmm0
	__m128 v77; // xmm9
	__m128 v78; // xmm3
	float v79; // [rsp+50h] [rbp-B0h] BYREF
	float v80; // [rsp+54h] [rbp-ACh] BYREF
	__int64 v81; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v82; // [rsp+60h] [rbp-A0h] BYREF
	__m128 v83; // [rsp+70h] [rbp-90h] BYREF

	result = sub_1407A4CE0((_QWORD*)a1, &a13);
	if ((int)result >= 0)
	{
		v16 = *(_QWORD*)(a1 + 64);
		v17 = *(_QWORD*)(v16 + 8);
		v18 = v16;
		while (v17)
		{
			if (a13 > *(float*)(v17 + 32))
			{
				v17 = *(_QWORD*)(v17 + 24);
			}
			else
			{
				v18 = v17;
				v17 = *(_QWORD*)(v17 + 16);
			}
		}
		if (v18 == v16 || (v19 = a13 < *(float*)(v18 + 32), v81 = v18, v19))
			v81 = v16;
		v20 = 0i64;
		v21 = 0i64;
		if (v81 != v16)
			v21 = *(_QWORD*)(v81 + 40);
		result = sub_1407A3400(v18, a2, &v79, a11, v21, (int*)&v80, &v82, (unsigned __int64*)&v83, (int*)&v81);
		if ((int)result >= 0)
		{
			v22 = *(_QWORD*)(a1 + 40);
			v23 = (__m128) * (unsigned int*)(*(_QWORD*)v21 + 4 * v83.m128_u64[0]);
			v24 = *(float*)(v21 + 56);
			v25 = *(_QWORD*)(v22 + 24 * v82 + 8);
			v26 = *(float*)(v22 + 24 * v82 + 16);
			v27 = v25 + 1;
			if (v25 == *(_QWORD*)(v22 + 24 * v83.m128_u64[0] + 8))
				v28 = (__m128) * (unsigned int*)(v22 + 24 * v83.m128_u64[0] + 16);
			else
				v28 = (__m128)0x3F800000u;
			if (v83.m128_u64[0] == *(_QWORD*)(v21 + 8) - 1i64)
				v29 = v24 * *(float*)(v22 + 24 * v83.m128_u64[0] + 4);
			else
				v29 = 0.0;
			v30 = (float)(v24 * *(float*)(v22 + 24 * v82 + 4)) + *(float*)(*(_QWORD*)v21 + 4 * v82);
			v31 = v79;
			v32 = v80;
			v33 = (__m128)0x3F800000u;
			v28.m128_f32[0] = v28.m128_f32[0] - v26;
			v37 = v28;
			v34 = (float)(v23.m128_f32[0] - v29) - v30;
			v35 = (float)(v79 - v30) * (float)(1.0 / v34);
			v36 = (float)(1.0 / v34) * (float)((float)(v28.m128_f32[0] * v80) * v24);
			v37.m128_f32[0] = (float)(v28.m128_f32[0] * fmaxf(0.0, fminf(v35, 1.0))) + v26;
			if (v35 < 0.0 || v35 > 1.0 || (_DWORD)v81)
				v36 = 0.0;
			v38 = v80;
			v39 = (__m128*)(*(_QWORD*)(a1 + 24) + 112 * v25);
			switch (a11)
			{
			case 6:
				goto LABEL_27;
			case 7:
			case 9:
				v38 = -1.0;
				break;
			case 10:
			LABEL_27:
				v38 = 1.0;
				break;
			}
			if (a3)
			{
				if ((_mm_movemask_ps(_mm_cmpneq_ps((__m128)0i64, *a12)) & 7) != 0)
					v20 = a12;
				v40 = sub_1407A5460(
					(_DWORD*)a1,
					&v83,
					(__m128*)(*(_QWORD*)(a1 + 24) + 112 * v25),
					*(double*)v28.m128_u64,
					v20);
				v33 = *v40;
				*a3 = *v40;
			}
			if (a4)
			{
				if (*(_DWORD*)(a1 + 12))
				{
					v41 = v28;
					v41.m128_f32[0] = v37.m128_f32[0] * v37.m128_f32[0];
					v42 = v41;
					v42.m128_f32[0] = (float)(v37.m128_f32[0] * v37.m128_f32[0]) * 3.0;
					v41.m128_f32[0] = (float)(v37.m128_f32[0] * v37.m128_f32[0]) * 6.0;
					v43 = v42;
					v43.m128_f32[0] = v42.m128_f32[0] - (float)(v37.m128_f32[0] * 2.0);
					v42.m128_f32[0] = (float)(v42.m128_f32[0] - (float)(v37.m128_f32[0] * 4.0)) + 1.0;
					v44 = v28;
					v44.m128_f32[0] = v37.m128_f32[0] * 6.0;
					v45 = v44;
					v46 = _mm_shuffle_ps(v42, v42, 0);
					v45.m128_f32[0] = (float)(v37.m128_f32[0] * 6.0) - v41.m128_f32[0];
					v41.m128_f32[0] = v41.m128_f32[0] - (float)(v37.m128_f32[0] * 6.0);
					v47 = v45;
					v48 = _mm_mul_ps(_mm_shuffle_ps(v41, v41, 0), *v39);
					v49 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), v39[7]), v48);
					v48.m128_f32[0] = v36;
					v33 = _mm_shuffle_ps(v48, v48, 0);
					v23 = _mm_mul_ps(
						_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v39[9]), _mm_add_ps(_mm_mul_ps(v46, v39[1]), v49)),
						v33);
					*a4 = v23;
				}
				else
				{
					v33.m128_f32[0] = v36;
					v33 = _mm_shuffle_ps(v33, v33, 0);
					*a4 = _mm_mul_ps(_mm_sub_ps(v39[7], *v39), v33);
				}
			}
			if (a5)
			{
				if (*(_DWORD*)(a1 + 12))
				{
					v50 = v37;
					v50.m128_f32[0] = v37.m128_f32[0] * 6.0;
					v51 = v50;
					v50.m128_f32[0] = (float)(v37.m128_f32[0] * 6.0) - 4.0;
					v51.m128_f32[0] = v51.m128_f32[0] - 2.0;
					v52 = v50;
					v53 = v37;
					v54 = _mm_mul_ps(v39[9], _mm_shuffle_ps(v51, v51, 0));
					v55 = (__m128)0x40C00000u;
					v55.m128_f32[0] = 6.0 - (float)(v37.m128_f32[0] * 12.0);
					v53.m128_f32[0] = (float)(v37.m128_f32[0] * 12.0) - 6.0;
					v56 = _mm_mul_ps(v39[1], _mm_shuffle_ps(v52, v52, 0));
					v57 = _mm_mul_ps(_mm_shuffle_ps(v53, v53, 0), *v39);
					v58 = _mm_add_ps(_mm_mul_ps(v39[7], _mm_shuffle_ps(v55, v55, 0)), v57);
					v57.m128_f32[0] = v36;
					v33 = _mm_shuffle_ps(v57, v57, 0);
					v23 = _mm_mul_ps(_mm_add_ps(v54, _mm_add_ps(v56, v58)), v33);
					*a5 = v23;
				}
				else
				{
					*a5 = 0i64;
				}
			}
			if (a6)
			{
				sub_1401B1EE0(&v83, v39 + 4, v39 + 11, *(double*)v37.m128_u64);
				if (v38 < 0.0)
					v33 = _mm_unpacklo_ps(
						_mm_unpacklo_ps(
							_mm_xor_ps((__m128)v83.m128_u32[2], (__m128)xmmword_140B7B530),
							(__m128)v83.m128_u32[0]),
						_mm_unpacklo_ps(
							(__m128)v83.m128_u32[3],
							_mm_xor_ps((__m128)v83.m128_u32[1], (__m128)xmmword_140B7B530)));
				else
					v33 = v83;
				*v59 = v33;
			}
			if (a7)
			{
				if (*(_DWORD*)(a1 + 12)
					&& (v60 = _mm_sub_ps(*v39, v39[7]),
						v61 = _mm_mul_ps(v60, v60),
						v33 = _mm_shuffle_ps(v61, v61, 85),
						(float)((float)(v61.m128_f32[0] + v33.m128_f32[0]) + _mm_shuffle_ps(v61, v61, 170).m128_f32[0]) >= *(float*)&dword_140C4E988))
				{
					v62 = (__m128)0x40400000u;
					v63 = v37;
					v63.m128_f32[0] = v37.m128_f32[0] * v37.m128_f32[0];
					v64 = v63;
					v64.m128_f32[0] = (float)(v37.m128_f32[0] * v37.m128_f32[0]) * 3.0;
					v63.m128_f32[0] = (float)(v37.m128_f32[0] * v37.m128_f32[0]) * 6.0;
					v65 = v64;
					v65.m128_f32[0] = v64.m128_f32[0] - (float)(v37.m128_f32[0] * 2.0);
					v66 = v37;
					v66.m128_f32[0] = v37.m128_f32[0] * 6.0;
					v67 = _mm_shuffle_ps(v65, v65, 0);
					v68 = v66;
					v68.m128_f32[0] = (float)(v37.m128_f32[0] * 6.0) - v63.m128_f32[0];
					v23.m128_f32[0] = (float)(v64.m128_f32[0] - (float)(v37.m128_f32[0] * 4.0)) + 1.0;
					v63.m128_f32[0] = v63.m128_f32[0] - (float)(v37.m128_f32[0] * 6.0);
					v69 = _mm_add_ps(
						_mm_mul_ps(v67, v39[9]),
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v39[1]),
							_mm_add_ps(
								_mm_mul_ps(_mm_shuffle_ps(v68, v68, 0), v39[7]),
								_mm_mul_ps(_mm_shuffle_ps(v63, v63, 0), *v39))));
					v70 = _mm_mul_ps(v69, v69);
					v70.m128_f32[0] = (float)(v70.m128_f32[0] + _mm_shuffle_ps(v70, v70, 85).m128_f32[0])
						+ _mm_shuffle_ps(v70, v70, 170).m128_f32[0];
					v71 = v70;
					v71.m128_f32[0] = 1.0 / fsqrt(v70.m128_f32[0]);
					v62.m128_f32[0] = (float)((float)(3.0 - (float)((float)(v70.m128_f32[0] * v71.m128_f32[0]) * v71.m128_f32[0]))
						* 0.5)
						* v71.m128_f32[0];
					v71.m128_f32[0] = v38;
					v62.m128_f32[0] = fmaxf(v62.m128_f32[0], 0.0);
					*a7 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v62, v62, 0), v69), _mm_shuffle_ps(v71, v71, 0));
				}
				else
				{
					v33.m128_f32[0] = v38;
					*a7 = _mm_mul_ps(v39[3], _mm_shuffle_ps(v33, v33, 0));
				}
			}
			if (a10)
			{
				if (*(_DWORD*)(a1 + 12))
				{
					v72 = v37;
					v72.m128_f32[0] = v37.m128_f32[0] * v37.m128_f32[0];
					v73 = v72;
					v73.m128_f32[0] = (float)(v37.m128_f32[0] * v37.m128_f32[0]) * v37.m128_f32[0];
					v74 = v73;
					v73.m128_f32[0] = v73.m128_f32[0] * 1.5;
					v75 = v37.m128_f32[0] * 0.5;
					v74.m128_f32[0] = v74.m128_f32[0] * 0.5;
					v76 = v74;
					v76.m128_f32[0] = v74.m128_f32[0] - (float)(v72.m128_f32[0] * 0.5);
					v77 = v76;
					v76.m128_f32[0] = v72.m128_f32[0] * 2.5;
					v78 = v72;
					v72.m128_f32[0] = (float)(v72.m128_f32[0] - v74.m128_f32[0]) - v75;
					v78.m128_f32[0] = (float)((float)(v78.m128_f32[0] * 2.0) - v73.m128_f32[0]) + v75;
					v73.m128_f32[0] = (float)(v73.m128_f32[0] - v76.m128_f32[0]) + 1.0;
					*a10 = (float)(_mm_shuffle_ps(v77, v77, 0).m128_f32[0]
						* _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v39[19].m128_u32[1], (__m128)0i64), (__m128)0i64).m128_f32[0])
						+ (float)((float)(_mm_shuffle_ps(v78, v78, 0).m128_f32[0]
							* _mm_unpacklo_ps(
								_mm_unpacklo_ps((__m128)v39[12].m128_u32[1], (__m128)0i64),
								(__m128)0i64).m128_f32[0])
							+ (float)((float)(_mm_shuffle_ps(v73, v73, 0).m128_f32[0]
								* _mm_unpacklo_ps(
									_mm_unpacklo_ps((__m128)v39[5].m128_u32[1], (__m128)0i64),
									(__m128)0i64).m128_f32[0])
								+ (float)(_mm_shuffle_ps(v72, v72, 0).m128_f32[0]
									* _mm_unpacklo_ps(
										_mm_unpacklo_ps((__m128)v39[-2].m128_u32[1], (__m128)0i64),
										(__m128)0i64).m128_f32[0])));
				}
				else
				{
					*a10 = (float)((float)(v39[12].m128_f32[1] - v39[5].m128_f32[1]) * v37.m128_f32[0]) + v39[5].m128_f32[1];
				}
			}
			if (a8)
			{
				if (v32 < 0.0)
				{
					if (v31 > 0.0)
						++v25;
					*a8 = v25;
				}
				else
				{
					if (v31 < 1.0)
						v27 = v25;
					*a8 = v27;
				}
			}
			if (a9)
				*a9 = v32;
			return 0i64;
		}
	}
	return result;
}
// 1407A3C65: variable 'v59' is possibly undefined
// 1407A3D2B: variable 'v23' is possibly undefined
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C4E988: using guessed type int dword_140C4E988;

