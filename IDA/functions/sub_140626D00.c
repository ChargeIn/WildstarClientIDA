#include "../winhttp.h"

//----- (0000000140626D00) ----------------------------------------------------
__int64 __fastcall sub_140626D00(__int64 a1, int* a2, int* a3, __m128* a4, __m128* a5, __m128* a6)
{
	__int64 v9; // rax
	__m128* v10; // r8
	__m128 v11; // xmm4
	__m128 v12; // xmm6
	__m128* v13; // rdx
	float v14; // xmm12_4
	float v15; // xmm13_4
	__m128 v16; // xmm3
	float v17; // xmm14_4
	float v18; // xmm9_4
	float v19; // xmm10_4
	float v20; // xmm11_4
	__m128 v21; // xmm2
	__m128 v22; // xmm1
	__m128 v23; // xmm2
	__m128 v24; // xmm7
	__m128* v25; // rdx
	__m128* v26; // rax
	__m128 v27; // xmm15
	__m128 v28; // xmm3
	__m128 v29; // xmm2
	__m128* v30; // rdx
	__m128 v31; // xmm1
	__m128 v32; // xmm2
	__m128 v33; // xmm6
	__m128* v34; // rax
	__m128 v35; // xmm3
	__m128 v36; // xmm2
	__m128* v37; // rdx
	__m128 v38; // xmm1
	__m128 v39; // xmm2
	__m128 v40; // xmm4
	__m128* v41; // rax
	__m128 v42; // xmm6
	__m128 v43; // xmm3
	float v44; // xmm1_4
	__m128 v45; // xmm10
	__m128 v46; // xmm2
	__m128 v47; // xmm1
	__m128 v48; // xmm2
	__m128 v49; // xmm3
	__m128 v50; // xmm8
	__m128 v51; // xmm5
	__m128 v52; // xmm2
	__m128 v53; // xmm6
	__m128 v54; // xmm9
	float v55; // xmm9_4
	__m128 v56; // xmm2
	float v57; // xmm2_4
	__m128 v58; // xmm3
	float v59; // xmm9_4
	__m128 v60; // xmm2
	__m128 v61; // xmm3
	__m128 v62; // xmm2
	float v63; // xmm2_4
	__m128 v64; // xmm1
	__m128 v65; // xmm0
	float v66; // xmm2_4
	__m128 v68; // [rsp+20h] [rbp-B8h]

	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
	v10 = *(__m128**)(qword_140C65898 + 29096);
	v11 = (__m128)COERCE_UNSIGNED_INT((float)*a2);
	v12 = (__m128)COERCE_UNSIGNED_INT((float)a2[1]);
	if (!v10)
		v10 = *(__m128**)(qword_140C65898 + 29088);
	v13 = *(__m128**)(qword_140C65898 + 29096);
	if (!v13)
		v13 = *(__m128**)(qword_140C65898 + 29088);
	v14 = *(float*)(v9 + 16);
	v15 = (float)*(int*)v9;
	v16 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, (__m128)0i64), _mm_unpacklo_ps(v12, (__m128)0i64));
	v17 = (float)*(int*)(v9 + 4);
	v18 = 1.0 / (float)*(int*)(v9 + 8);
	v68.m128_f32[0] = (float)((float)((float)(v16.m128_f32[0] - v15) * v18) * 2.0) - 1.0;
	v19 = 1.0 / (float)*(int*)(v9 + 12);
	v68.m128_f32[1] = 1.0 - (float)((float)((float)(_mm_shuffle_ps(v16, v16, 85).m128_f32[0] - v17) * v19) * 2.0);
	v20 = 1.0 / (float)(*(float*)(v9 + 20) - v14);
	v68.m128_f32[2] = (float)(_mm_shuffle_ps(v16, v16, 170).m128_f32[0] - v14) * v20;
	v21 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v68, v68, 85), v10[19]),
				_mm_mul_ps(_mm_shuffle_ps(v68, v68, 0), v10[18])),
			_mm_mul_ps(_mm_shuffle_ps(v68, v68, 170), v10[20])),
		v10[21]);
	v22 = _mm_shuffle_ps(v21, v21, 255);
	v23 = _mm_div_ps(v21, _mm_shuffle_ps(v22, v22, 0));
	v24 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v23, v23, 85), v13[11]),
				_mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v13[10])),
			_mm_mul_ps(_mm_shuffle_ps(v23, v23, 170), v13[12])),
		v13[13]);
	v25 = *(__m128**)(qword_140C65898 + 29096);
	if (!v25)
		v25 = *(__m128**)(qword_140C65898 + 29088);
	v26 = *(__m128**)(qword_140C65898 + 29096);
	if (!v26)
		v26 = *(__m128**)(qword_140C65898 + 29088);
	v27 = (__m128)COERCE_UNSIGNED_INT((float)*a3);
	v28 = _mm_unpacklo_ps(_mm_unpacklo_ps(v11, (__m128)0x3F800000u), _mm_unpacklo_ps(v12, (__m128)0i64));
	v68.m128_f32[2] = (float)(_mm_shuffle_ps(v28, v28, 170).m128_f32[0] - v14) * v20;
	v68.m128_f32[0] = (float)((float)((float)(v28.m128_f32[0] - v15) * v18) * 2.0) - 1.0;
	v68.m128_f32[1] = 1.0 - (float)((float)((float)(_mm_shuffle_ps(v28, v28, 85).m128_f32[0] - v17) * v19) * 2.0);
	v29 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v68, v68, 85), v25[19]),
				_mm_mul_ps(_mm_shuffle_ps(v68, v68, 0), v25[18])),
			_mm_mul_ps(_mm_shuffle_ps(v68, v68, 170), v25[20])),
		v25[21]);
	v30 = *(__m128**)(qword_140C65898 + 29096);
	v31 = _mm_shuffle_ps(v29, v29, 255);
	v32 = _mm_div_ps(v29, _mm_shuffle_ps(v31, v31, 0));
	v33 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v32, v32, 85), v26[11]),
				_mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v26[10])),
			_mm_mul_ps(_mm_shuffle_ps(v32, v32, 170), v26[12])),
		v26[13]);
	if (!v30)
		v30 = *(__m128**)(qword_140C65898 + 29088);
	v34 = *(__m128**)(qword_140C65898 + 29096);
	if (!v34)
		v34 = *(__m128**)(qword_140C65898 + 29088);
	v35 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v27, (__m128)0i64),
		_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)a3[1]), (__m128)0i64));
	v68.m128_f32[2] = (float)(_mm_shuffle_ps(v35, v35, 170).m128_f32[0] - v14) * v20;
	v68.m128_f32[0] = (float)((float)((float)(v35.m128_f32[0] - v15) * v18) * 2.0) - 1.0;
	v68.m128_f32[1] = 1.0 - (float)((float)((float)(_mm_shuffle_ps(v35, v35, 85).m128_f32[0] - v17) * v19) * 2.0);
	v36 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v68, v68, 85), v30[19]),
				_mm_mul_ps(_mm_shuffle_ps(v68, v68, 0), v30[18])),
			_mm_mul_ps(_mm_shuffle_ps(v68, v68, 170), v30[20])),
		v30[21]);
	v37 = *(__m128**)(qword_140C65898 + 29096);
	v38 = _mm_shuffle_ps(v36, v36, 255);
	v39 = _mm_div_ps(v36, _mm_shuffle_ps(v38, v38, 0));
	v40 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v39, v39, 85), v34[11]),
				_mm_mul_ps(_mm_shuffle_ps(v39, v39, 0), v34[10])),
			_mm_mul_ps(_mm_shuffle_ps(v39, v39, 170), v34[12])),
		v34[13]);
	if (!v37)
		v37 = *(__m128**)(qword_140C65898 + 29088);
	v41 = *(__m128**)(qword_140C65898 + 29096);
	if (!v41)
		v41 = *(__m128**)(qword_140C65898 + 29088);
	v42 = _mm_sub_ps(v33, v24);
	v43 = _mm_unpacklo_ps(
		_mm_unpacklo_ps(v27, (__m128)0x3F800000u),
		_mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)a3[1]), (__m128)0i64));
	v44 = (float)(_mm_shuffle_ps(v43, v43, 85).m128_f32[0] - v17) * v19;
	v45 = *a4;
	v68.m128_f32[2] = (float)(_mm_shuffle_ps(v43, v43, 170).m128_f32[0] - v14) * v20;
	v68.m128_f32[0] = (float)((float)((float)(v43.m128_f32[0] - v15) * v18) * 2.0) - 1.0;
	v68.m128_f32[1] = 1.0 - (float)(v44 * 2.0);
	v46 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v68, v68, 85), v37[19]),
				_mm_mul_ps(_mm_shuffle_ps(v68, v68, 0), v37[18])),
			_mm_mul_ps(_mm_shuffle_ps(v68, v68, 170), v37[20])),
		v37[21]);
	v47 = _mm_shuffle_ps(v46, v46, 255);
	v48 = _mm_div_ps(v46, _mm_shuffle_ps(v47, v47, 0));
	v49 = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(v48, v48, 85), v41[11]),
				_mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v41[10])),
			_mm_mul_ps(_mm_shuffle_ps(v48, v48, 170), v41[12])),
		v41[13]);
	v50 = *a5;
	v51 = _mm_add_ps(*a5, *a4);
	v52 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(*a5, *a5, 210), _mm_shuffle_ps(v42, v42, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v50, v50, 201), _mm_shuffle_ps(v42, v42, 210)));
	v53 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v42, v42, 210), _mm_shuffle_ps(v52, v52, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v42, v42, 201), _mm_shuffle_ps(v52, v52, 210)));
	v54 = _mm_mul_ps(_mm_sub_ps(*a4, v24), v53);
	v55 = (float)(v54.m128_f32[0] + _mm_shuffle_ps(v54, v54, 85).m128_f32[0]) + _mm_shuffle_ps(v54, v54, 170).m128_f32[0];
	v56 = _mm_mul_ps(_mm_sub_ps(v51, v24), v53);
	v57 = (float)((float)(v56.m128_f32[0] + _mm_shuffle_ps(v56, v56, 85).m128_f32[0])
		+ _mm_shuffle_ps(v56, v56, 170).m128_f32[0])
		- v55;
	if (fabs(v57) < 0.0000099999997)
		return 0i64;
	v58 = _mm_sub_ps(v49, v40);
	v59 = -(float)(v55 / v57);
	v60 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v50, v50, 210), _mm_shuffle_ps(v58, v58, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v50, v50, 201), _mm_shuffle_ps(v58, v58, 210)));
	v61 = _mm_sub_ps(
		_mm_mul_ps(_mm_shuffle_ps(v58, v58, 210), _mm_shuffle_ps(v60, v60, 201)),
		_mm_mul_ps(_mm_shuffle_ps(v58, v58, 201), _mm_shuffle_ps(v60, v60, 210)));
	v62 = _mm_mul_ps(_mm_sub_ps(v45, v40), v61);
	v63 = (float)(v62.m128_f32[0] + _mm_shuffle_ps(v62, v62, 85).m128_f32[0]) + _mm_shuffle_ps(v62, v62, 170).m128_f32[0];
	v64 = _mm_mul_ps(_mm_sub_ps(v51, v40), v61);
	v64.m128_f32[0] = (float)((float)(v64.m128_f32[0] + _mm_shuffle_ps(v64, v64, 85).m128_f32[0])
		+ _mm_shuffle_ps(v64, v64, 170).m128_f32[0])
		- v63;
	v65 = _mm_and_ps(v64, (__m128)0x7FFFFFFFu);
	if (v65.m128_f32[0] < 0.0000099999997)
		return 0i64;
	v66 = v63 / v64.m128_f32[0];
	v64.m128_f32[0] = v59;
	v65.m128_f32[0] = -v66;
	*a6 = _mm_sub_ps(
		_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), v50), v45),
		_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v64, v64, 0), v50), v45));
	return 1i64;
}
// 140626E82: variable 'v68' is possibly undefined
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;

