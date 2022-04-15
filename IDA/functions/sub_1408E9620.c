//----- (00000001408E9620) ----------------------------------------------------
__m128* __fastcall sub_1408E9620(__m128* a1, __m128* a2, __int64 a3)
{
	__m128 v3; // xmm6
	char v5; // r8
	__m128 v6; // xmm14
	__m128 v7; // xmm0
	__m128 v8; // xmm1
	__m128 v9; // xmm7
	__m128 v10; // xmm8
	__m128 v11; // xmm4
	__m128 v12; // xmm2
	__m128 v13; // xmm5
	__m128 v14; // xmm3
	__m128 v15; // xmm4
	__m128 v16; // xmm2
	__m128 v17; // xmm5
	__m128 v18; // xmm3
	__m128 v19; // xmm7
	__m128 v20; // xmm8
	__m128 v21; // xmm12
	__m128 v22; // xmm11
	__m128 v23; // xmm15
	__m128 v24; // xmm13
	__m128 v25; // xmm0
	__m128 v26; // xmm12
	__m128 v27; // xmm15
	__m128 v28; // xmm11
	__m128 v29; // xmm4
	__m128 v30; // xmm2
	__m128 v31; // xmm12
	__m128 v32; // xmm15
	__m128 v33; // xmm13
	__m128 v34; // xmm5
	__m128 v35; // xmm3
	__m128 v36; // xmm12
	__m128 v37; // xmm11
	__m128 v38; // xmm0
	__m128 v39; // xmm1
	__m128 v40; // xmm4
	__m128 v41; // xmm2
	__m128 v42; // xmm8
	__m128 v43; // xmm3
	__m128* result; // rax
	__m128 v45; // xmm1
	__m128 v46; // xmm5
	__m128 v47; // xmm7
	__m128 v48; // xmm10
	__m128 v49; // xmm7
	__m128 v50; // xmm10
	__m128 v51; // xmm2
	__m128 v52; // xmm15
	__m128 v53; // xmm7
	__m128 v54; // xmm9
	__m128 v55; // xmm5
	__m128 v56; // xmm6
	__m128 v57; // xmm2
	__m128 v58; // xmm7
	__m128 v59; // xmm3
	__m128 v60; // xmm4
	__m128 v61; // xmm6
	__m128 v62; // xmm6
	__m128 v63; // xmm2
	__m128 v64; // xmm1
	__m128 v65; // xmm15
	__m128 v66; // xmm1
	__m128 v67; // xmm2
	__m128 v68; // xmm0
	__m128 v69; // xmm5
	__m128 v70; // xmm2
	__m128 v71; // xmm1
	__m128 v72; // xmm5
	__m128 v73; // xmm0
	__m128 v74; // xmm5
	__m128 v75; // xmm2
	__m128 v76; // xmm10
	__m128 v77; // xmm3
	__m128 v78; // xmm2
	__m128 v79; // xmm1
	__m128 v80; // xmm3
	__m128 v81; // xmm0
	__m128 v82; // xmm3
	__m128 v83; // xmm2
	__m128 v84; // xmm4
	__m128 v85; // xmm5
	__m128 v86; // xmm10
	__m128 v87; // xmm1
	__m128 v88; // xmm5
	__m128 v89; // xmm2
	__m128 v90; // xmm13
	__m128 v91; // xmm0

	v3 = (__m128)xmmword_1409B44B0;
	if (*(_DWORD*)(a3 + 4))
		v3 = _mm_xor_ps((__m128)xmmword_1409B44B0, (__m128)xmmword_140B7B530);
	v5 = 0;
	v6 = _mm_xor_ps((__m128)xmmword_140B7B530, v3);
	if (((unsigned __int8)a2 & 0xF) != 0)
	{
		a2 = (__m128*)((char*)a2 - 8);
		v5 = 1;
	}
	v7 = *a2;
	v8 = a2[128];
	v9 = a2[256];
	v10 = a2[384];
	v11 = a2[32];
	v12 = a2[160];
	v13 = a2[288];
	v14 = a2[416];
	if (v5)
	{
		v15 = _mm_movehl_ps(v11, v7);
		v16 = _mm_movehl_ps(v12, v8);
		v17 = _mm_movehl_ps(v13, v9);
		v18 = _mm_movehl_ps(v14, v10);
	}
	else
	{
		v15 = _mm_movelh_ps(v7, v11);
		v16 = _mm_movelh_ps(v8, v12);
		v17 = _mm_movelh_ps(v9, v13);
		v18 = _mm_movelh_ps(v10, v14);
	}
	v19 = a2[448];
	v20 = a2[352];
	v21 = _mm_shuffle_ps(v16, v16, 177);
	v22 = _mm_mul_ps(v21, v3);
	v23 = _mm_add_ps(v17, v15);
	v24 = _mm_sub_ps(v23, v16);
	v25 = _mm_shuffle_ps(v18, v18, 177);
	v26 = _mm_add_ps(_mm_mul_ps(v21, v6), v15);
	v27 = _mm_add_ps(v23, v16);
	v28 = _mm_sub_ps(_mm_add_ps(v22, v15), v17);
	v29 = a2[96];
	v30 = a2[224];
	v31 = _mm_sub_ps(v26, v17);
	v32 = _mm_add_ps(v27, v18);
	v33 = _mm_sub_ps(v24, v18);
	v34 = a2[320];
	v35 = a2[480];
	v36 = _mm_add_ps(v31, _mm_mul_ps(v25, v3));
	v37 = _mm_add_ps(v28, _mm_mul_ps(v25, v6));
	v38 = a2[64];
	v39 = a2[192];
	if (v5)
	{
		v40 = _mm_movehl_ps(v29, v38);
		v41 = _mm_movehl_ps(v30, v39);
		v42 = _mm_movehl_ps(v20, v34);
		v43 = _mm_movehl_ps(v35, v19);
	}
	else
	{
		v40 = _mm_movelh_ps(v38, v29);
		v41 = _mm_movelh_ps(v39, v30);
		v42 = _mm_movelh_ps(v34, v20);
		v43 = _mm_movelh_ps(v19, v35);
	}
	result = *(__m128**)(a3 + 80);
	v45 = _mm_shuffle_ps(v43, v43, 177);
	v46 = _mm_shuffle_ps(v41, v41, 177);
	v47 = _mm_add_ps(v42, v40);
	v48 = _mm_sub_ps(v47, v41);
	v49 = _mm_add_ps(v47, v41);
	v50 = _mm_sub_ps(v48, v43);
	v51 = _mm_movehl_ps(v36, v32);
	v52 = _mm_movelh_ps(v32, v36);
	v53 = _mm_add_ps(v49, v43);
	v54 = _mm_add_ps(_mm_sub_ps(_mm_add_ps(_mm_mul_ps(v46, v3), v40), v42), _mm_mul_ps(v45, v6));
	v55 = _mm_add_ps(_mm_sub_ps(_mm_add_ps(_mm_mul_ps(v46, v6), v40), v42), _mm_mul_ps(v45, v3));
	v56 = _mm_add_ps(
		_mm_mul_ps(
			_mm_mul_ps(_mm_shuffle_ps(v51, v51, 245), (__m128)xmmword_1409B44B0),
			_mm_shuffle_ps(*result, *result, 177)),
		_mm_mul_ps(_mm_shuffle_ps(v51, v51, 160), *result));
	v57 = _mm_movehl_ps(v55, v53);
	v58 = _mm_movelh_ps(v53, v55);
	v59 = _mm_add_ps(
		_mm_mul_ps(
			_mm_mul_ps(_mm_shuffle_ps(v57, v57, 245), (__m128)xmmword_1409B44B0),
			_mm_shuffle_ps(result[2], result[2], 177)),
		_mm_mul_ps(_mm_shuffle_ps(v57, v57, 160), result[2]));
	v60 = _mm_add_ps(v59, v56);
	v61 = _mm_sub_ps(v56, v59);
	v62 = _mm_mul_ps(_mm_shuffle_ps(v61, v61, 177), v6);
	v63 = _mm_add_ps(
		_mm_mul_ps(
			_mm_mul_ps(_mm_shuffle_ps(v58, v58, 245), (__m128)xmmword_1409B44B0),
			_mm_shuffle_ps(result[1], result[1], 177)),
		_mm_mul_ps(_mm_shuffle_ps(v58, v58, 160), result[1]));
	v64 = _mm_sub_ps(v52, v63);
	v65 = _mm_add_ps(v52, v63);
	a1[4] = _mm_sub_ps(v65, v60);
	*a1 = _mm_add_ps(v65, v60);
	a1[2] = _mm_add_ps(v64, v62);
	a1[6] = _mm_sub_ps(v64, v62);
	v66 = result[3];
	v67 = _mm_movehl_ps(v37, v33);
	v68 = _mm_shuffle_ps(v66, v66, 177);
	v69 = _mm_shuffle_ps(v67, v67, 245);
	v70 = _mm_mul_ps(_mm_shuffle_ps(v67, v67, 160), v66);
	v71 = result[5];
	v72 = _mm_mul_ps(_mm_mul_ps(v69, (__m128)xmmword_1409B44B0), v68);
	v73 = _mm_shuffle_ps(v71, v71, 177);
	v74 = _mm_add_ps(v72, v70);
	v75 = _mm_movehl_ps(v54, v50);
	v76 = _mm_movelh_ps(v50, v54);
	v77 = _mm_shuffle_ps(v75, v75, 245);
	v78 = _mm_mul_ps(_mm_shuffle_ps(v75, v75, 160), v71);
	v79 = result[4];
	v80 = _mm_mul_ps(_mm_mul_ps(v77, (__m128)xmmword_1409B44B0), v73);
	v81 = _mm_shuffle_ps(v79, v79, 177);
	v82 = _mm_add_ps(v80, v78);
	v83 = _mm_shuffle_ps(v76, v76, 245);
	v84 = _mm_add_ps(v82, v74);
	v85 = _mm_sub_ps(v74, v82);
	v86 = _mm_mul_ps(_mm_shuffle_ps(v76, v76, 160), v79);
	v87 = _mm_movelh_ps(v33, v37);
	v88 = _mm_mul_ps(_mm_shuffle_ps(v85, v85, 177), v6);
	v89 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v83, (__m128)xmmword_1409B44B0), v81), v86);
	v90 = _mm_add_ps(v87, v89);
	a1[5] = _mm_sub_ps(v90, v84);
	a1[1] = _mm_add_ps(v90, v84);
	v91 = _mm_sub_ps(v87, v89);
	a1[3] = _mm_add_ps(v91, v88);
	a1[7] = _mm_sub_ps(v91, v88);
	return result;
}
// 1409B44B0: using guessed type __int128 xmmword_1409B44B0;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;

