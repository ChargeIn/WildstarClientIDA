//----- (00000001401AFC20) ----------------------------------------------------
__int64 __fastcall sub_1401AFC20(__int64* a1, double* a2)
{
	__int64 result; // rax
	__m128 v3; // xmm0
	__m128 v4; // xmm9
	__m128 v5; // xmm8
	__m128 v6; // xmm9
	__m128 v7; // xmm0
	__m128 v8; // xmm7
	__m128 v9; // xmm15
	__m128 v10; // xmm7
	__m128 v11; // xmm1
	__m128 v12; // xmm1
	__m128 v13; // xmm0
	__m128 v14; // xmm5
	__m128 v15; // xmm1
	__m128 v16; // xmm2
	__m128 v17; // xmm6
	__m128 v18; // xmm1
	__m128 v19; // xmm15
	__m128 v20; // xmm1
	__m128 v21; // xmm0
	__m128 v22; // xmm4
	__m128 v23; // xmm1
	__m128 v24; // xmm6
	__m128 v25; // xmm3
	__m128 v26; // xmm3
	__m128 v27; // xmm0
	__m128 v28; // xmm1
	__m128 v29; // xmm3
	__m128 v30; // xmm13
	__m128 v31; // xmm1
	__m128 v32; // xmm0
	__m128 v33; // xmm0
	__m128 v34; // xmm12
	__m128 v35; // xmm6
	__m128 v36; // xmm4
	__m128 v37; // xmm14
	__m128 v38; // xmm15
	__m128 v39; // xmm10
	__m128 v40; // xmm0
	__m128 v41; // xmm15
	__m128 v42; // xmm12
	__m128 v43; // xmm11
	__m128 v44; // xmm0
	__m128 v45; // xmm8
	__m128 v46; // xmm7
	__m128 v47; // xmm0
	__m128 v48; // xmm9
	__m128 v49; // xmm6
	__m128 v50; // xmm0
	__m128 v51; // xmm3
	__m128 v52; // xmm15
	__m128 v53; // xmm1
	__m128 v54; // xmm1
	__m128 v55; // xmm2
	__m128 v56; // xmm5
	__m128 v57; // xmm5
	__m128 v58; // xmm15
	__m128 v59; // xmm11
	__m128 v60; // xmm0
	__m128 v61; // xmm14
	__m128 v62; // [rsp+0h] [rbp-108h]
	__m128 v63; // [rsp+0h] [rbp-108h]
	__m128 v64; // [rsp+10h] [rbp-F8h]
	__m128 v65; // [rsp+20h] [rbp-E8h]
	__m128 v66; // [rsp+30h] [rbp-D8h]
	__m128 v67; // [rsp+40h] [rbp-C8h]
	__m128 v68; // [rsp+50h] [rbp-B8h]

	result = *a1;
	v3 = _mm_loadh_ps((const double*)(*a1 + 16));
	v4 = _mm_loadh_ps((const double*)(*a1 + 48));
	v5 = _mm_shuffle_ps(v3, v4, 136);
	v6 = _mm_shuffle_ps(v4, v3, 221);
	v7 = _mm_loadh_ps((const double*)(*a1 + 24));
	v8 = _mm_loadh_ps((const double*)(*a1 + 56));
	v9 = _mm_shuffle_ps(v7, v8, 136);
	v10 = _mm_shuffle_ps(v8, v7, 221);
	v11 = _mm_mul_ps(v9, v10);
	v12 = _mm_shuffle_ps(v11, v11, 177);
	v13 = _mm_mul_ps(v5, v12);
	v14 = _mm_mul_ps(v6, v12);
	v15 = _mm_shuffle_ps(v12, v12, 78);
	v66 = v5;
	v62 = v10;
	v16 = _mm_sub_ps(_mm_mul_ps(v5, v15), v13);
	v17 = _mm_sub_ps(_mm_mul_ps(v6, v15), v14);
	v18 = _mm_mul_ps(v9, v6);
	v19 = _mm_shuffle_ps(v9, v9, 78);
	v67 = v16;
	v20 = _mm_shuffle_ps(v18, v18, 177);
	v21 = _mm_mul_ps(v5, v20);
	v22 = _mm_mul_ps(v10, v20);
	v23 = _mm_shuffle_ps(v20, v20, 78);
	v24 = _mm_sub_ps(_mm_add_ps(v17, v22), _mm_mul_ps(v10, v23));
	v68 = _mm_sub_ps(_mm_mul_ps(v5, v23), v21);
	v25 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 78), v10);
	v26 = _mm_shuffle_ps(v25, v25, 177);
	v27 = _mm_mul_ps(v19, v26);
	v28 = _mm_mul_ps(v5, v26);
	v29 = _mm_shuffle_ps(v26, v26, 78);
	v30 = _mm_sub_ps(_mm_mul_ps(v5, v29), v28);
	v65 = _mm_sub_ps(_mm_add_ps(v24, v27), _mm_mul_ps(v19, v29));
	v31 = v6;
	v32 = _mm_mul_ps(v5, v6);
	v33 = _mm_shuffle_ps(v32, v32, 177);
	v34 = v19;
	v35 = v19;
	v36 = v19;
	v37 = _mm_mul_ps(v19, v33);
	v38 = _mm_mul_ps(v19, v5);
	v39 = _mm_mul_ps(v10, v33);
	v40 = _mm_shuffle_ps(v33, v33, 78);
	v41 = _mm_shuffle_ps(v38, v38, 177);
	v42 = _mm_mul_ps(v34, v40);
	v43 = _mm_sub_ps(_mm_mul_ps(v10, v40), _mm_add_ps(_mm_shuffle_ps(v30, v30, 78), v39));
	v44 = _mm_mul_ps(v5, v10);
	v45 = _mm_mul_ps(v6, v41);
	v46 = v6;
	v47 = _mm_shuffle_ps(v44, v44, 177);
	v48 = _mm_mul_ps(v6, v47);
	v49 = _mm_mul_ps(v35, v47);
	v50 = _mm_shuffle_ps(v47, v47, 78);
	v51 = _mm_mul_ps(v62, v41);
	v52 = _mm_shuffle_ps(v41, v41, 78);
	v63 = _mm_mul_ps(v62, v52);
	v64 = _mm_mul_ps(v31, v52);
	v53 = _mm_mul_ps(v65, v66);
	v54 = _mm_add_ps(v53, _mm_shuffle_ps(v53, v53, 78));
	v55 = _mm_shuffle_ps(v54, v54, 177);
	v55.m128_f32[0] = v55.m128_f32[0] + v54.m128_f32[0];
	v56 = v55;
	v56.m128_f32[0] = (float)((float)(1.0 / v55.m128_f32[0]) + (float)(1.0 / v55.m128_f32[0]))
		- (float)(v55.m128_f32[0] * (float)((float)(1.0 / v55.m128_f32[0]) * (float)(1.0 / v55.m128_f32[0])));
	v57 = _mm_shuffle_ps(v56, v56, 0);
	v58 = _mm_mul_ps(v65, v57);
	v59 = _mm_mul_ps(_mm_sub_ps(_mm_add_ps(v43, v48), _mm_mul_ps(v46, v50)), v57);
	_mm_storel_ps(a2, v58);
	_mm_storeh_ps(a2 + 1, v58);
	v60 = _mm_mul_ps(
		_mm_sub_ps(
			_mm_add_ps(_mm_add_ps(_mm_sub_ps(_mm_shuffle_ps(v67, v67, 78), v49), _mm_mul_ps(v36, v50)), v51),
			v63),
		v57);
	_mm_storel_ps(a2 + 2, v60);
	_mm_storeh_ps(a2 + 3, v60);
	_mm_storel_ps(a2 + 4, v59);
	_mm_storeh_ps(a2 + 5, v59);
	v61 = _mm_mul_ps(
		_mm_add_ps(_mm_sub_ps(_mm_sub_ps(_mm_sub_ps(v37, _mm_shuffle_ps(v68, v68, 78)), v42), v45), v64),
		v57);
	_mm_storel_ps(a2 + 6, v61);
	_mm_storeh_ps(a2 + 7, v61);
	return result;
}

