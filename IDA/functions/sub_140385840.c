//----- (0000000140385840) ----------------------------------------------------
__m128* __fastcall sub_140385840(__int64 a1, __int64 a2, int* a3, __m128* a4, __m128* a5, float* a6, __int64 a7)
{
	__int64 v10; // rax
	int v11; // ebx
	__int16* v13; // rax
	__int64 v15; // r10
	__int64 v16; // rax
	__m128 v17; // xmm13
	float v18; // xmm5_4
	__int64 v19; // r13
	__int64 v20; // r12
	__m128 v21; // xmm14
	__m128 v22; // xmm7
	float v23; // xmm15_4
	float v24; // xmm1_4
	float v25; // xmm2_4
	float v26; // xmm3_4
	float v27; // xmm2_4
	float v28; // xmm3_4
	float v29; // xmm1_4
	__m128 v30; // xmm2
	__m128 v31; // xmm4
	float v32; // xmm11_4
	float v33; // xmm12_4
	__m128 v34; // xmm5
	__m128 v35; // xmm4
	__m128 v36; // xmm3
	__m128 v37; // xmm1
	__m128 v38; // xmm10
	__m128 v39; // xmm3
	__m128 v40; // xmm10
	__m128 v41; // xmm1
	__m128 v42; // xmm3
	__m128 v43; // xmm3
	__m128 v44; // xmm1
	__m128 v45; // xmm2
	int v46; // edi
	unsigned __int8 v47; // r8
	__m128 v48; // xmm4
	int v49; // ecx
	float v50; // xmm5_4
	__m128 v51; // xmm4
	__m128 v52; // xmm1
	__m128 v53; // xmm2
	__m128 v54; // xmm2
	float v55; // xmm2_4
	__m128 v56; // xmm6
	__m128 v57; // xmm0
	float v58; // xmm6_4
	__m128* v59; // rbx
	int v60; // eax
	__m128 v61; // xmm0
	__m128 v62; // xmm6
	__int64 v63; // rax
	int v64; // edi
	int v65; // edi
	__m128 v66; // xmm2
	__m128 v67; // xmm3
	__m128 v68; // xmm1
	__m128 v69; // xmm3
	__m128 v70; // xmm2
	int v71; // r9d
	__m128 v72; // xmm1
	__m128 v73; // xmm4
	int v74; // r9d
	__int64 v75; // [rsp+20h] [rbp-E0h]
	__m128 v76; // [rsp+30h] [rbp-D0h]
	unsigned __int64 v77; // [rsp+30h] [rbp-D0h]
	__m128 v78; // [rsp+50h] [rbp-B0h] BYREF
	__m128 v79; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v80; // [rsp+158h] [rbp+58h]
	__int64 v81; // [rsp+160h] [rbp+60h]
	float v83; // [rsp+180h] [rbp+80h]

	v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
	v11 = *(_DWORD*)(v10 + 40) * *a3 + a3[1] * *(_DWORD*)(v10 + 44);
	v13 = (__int16*)(v11 + (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 24i64))(a2));
	if ((*(_BYTE*)a7 & 2) == 0 && *v13 < 0)
		return 0i64;
	v15 = (unsigned int)(*a3 + 33 * a3[1]);
	v16 = *(_QWORD*)(a1 + 152);
	v75 = 16 * v15;
	v17 = (__m128) * (unsigned int*)(v16 + 16 * v15 + 12);
	v18 = *(float*)(v16 + 16 * v15 + 12);
	v19 = 2i64 * (unsigned int)(v15 + 1);
	v20 = 2i64 * (unsigned int)(v15 + 17);
	v21 = (__m128) * (unsigned int*)(v16 + 16i64 * (unsigned int)(v15 + 1) + 12);
	v22 = (__m128) * (unsigned int*)(v16 + 16i64 * (unsigned int)(v15 + 17) + 12);
	v80 = 16i64 * (unsigned int)(v15 + 33);
	v23 = *(float*)(v80 + v16 + 12);
	v81 = 16i64 * (unsigned int)(v15 + 34);
	v83 = *(float*)(v81 + v16 + 12);
	v24 = a5->m128_f32[1];
	v25 = a4->m128_f32[1];
	v26 = fminf(fminf(v18, v21.m128_f32[0]), fminf(v23, v83)) - 0.5;
	if (v26 <= (float)((float)(v24 * *a6) + v25))
	{
		if (v26 > (float)((float)(a5->m128_f32[1] * a6[1]) + v25))
			a6[1] = (float)(v26 - v25) / v24;
	}
	else
	{
		if (v26 > (float)((float)(a5->m128_f32[1] * a6[1]) + v25))
			return 0i64;
		*a6 = (float)(v26 - v25) / v24;
	}
	v27 = a5->m128_f32[1];
	v28 = a4->m128_f32[1];
	v29 = fmaxf(fmaxf(v18, v21.m128_f32[0]), fmaxf(v23, v83)) + 0.5;
	if ((float)((float)(v27 * *a6) + v28) <= v29)
	{
		if ((float)((float)(a5->m128_f32[1] * a6[1]) + v28) > v29)
			a6[1] = (float)(v29 - v28) / v27;
	}
	else
	{
		if ((float)((float)(a5->m128_f32[1] * a6[1]) + v28) > v29)
			return 0i64;
		*a6 = (float)(v29 - v28) / v27;
	}
	v30 = (__m128)a4->m128_u32[2];
	v31 = (__m128)a4->m128_u32[0];
	v32 = *a6;
	v33 = a6[1];
	v31.m128_f32[0] = a4->m128_f32[0] - (float)*a3;
	v30.m128_f32[0] = a4->m128_f32[2] - (float)a3[1];
	v34 = _mm_unpacklo_ps(_mm_unpacklo_ps(v31, v30), _mm_unpacklo_ps((__m128)a4->m128_u32[1], (__m128)0i64));
	v35 = _mm_add_ps(*a5, v34);
	v36 = v34;
	v37 = _mm_shuffle_ps(v34, v34, 170);
	v36.m128_f32[0] = v34.m128_f32[0] + v37.m128_f32[0];
	v37.m128_f32[0] = v37.m128_f32[0] - v34.m128_f32[0];
	v36.m128_f32[0] = v36.m128_f32[0] - 1.0;
	v38 = v36;
	v39 = v35;
	v40 = _mm_unpacklo_ps(_mm_unpacklo_ps(v38, v37), _mm_unpacklo_ps(_mm_shuffle_ps(v34, v34, 85), (__m128)0i64));
	v41 = _mm_shuffle_ps(v35, v35, 170);
	v39.m128_f32[0] = v35.m128_f32[0] + v41.m128_f32[0];
	v41.m128_f32[0] = v41.m128_f32[0] - v35.m128_f32[0];
	v39.m128_f32[0] = v39.m128_f32[0] - 1.0;
	v42 = _mm_unpacklo_ps(v39, v41);
	v41.m128_f32[0] = *a6;
	v43 = _mm_unpacklo_ps(v42, _mm_unpacklo_ps(_mm_shuffle_ps(v35, v35, 85), (__m128)0i64));
	v76 = v43;
	v79 = _mm_sub_ps(v43, v40);
	v78 = v79;
	v44 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v41, v41, 0), v79), v40);
	v45 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v33), (__m128)LODWORD(v33), 0), v79), v40);
	v46 = (v44.m128_f32[0] >= 0.0) + 2 * (_mm_shuffle_ps(v44, v44, 170).m128_f32[0] >= 0.0);
	v47 = (v45.m128_f32[0] >= 0.0) + 2 * (_mm_shuffle_ps(v45, v45, 170).m128_f32[0] >= 0.0);
	if (v32 >= v33)
		return 0i64;
	v48 = v79;
	while (1)
	{
		v49 = 0;
		v50 = v33;
		if ((((unsigned __int8)v46 ^ v47) & 1) != 0 && v33 > (float)-(float)(v40.m128_f32[0] / v78.m128_f32[0]))
		{
			v50 = -(float)(v40.m128_f32[0] / v78.m128_f32[0]);
			v49 = 1;
		}
		if ((((unsigned __int8)v46 ^ v47) & 2) != 0 && v50 > (float)-(float)(v40.m128_f32[2] / v78.m128_f32[2]))
		{
			v50 = -(float)(v40.m128_f32[2] / v78.m128_f32[2]);
			v49 = 2;
		}
		switch (v46)
		{
		case 0:
			v52 = v21;
			v52.m128_f32[0] = v21.m128_f32[0] - v22.m128_f32[0];
			goto LABEL_31;
		case 1:
			v51 = v22;
			v52 = v21;
			v51.m128_f32[0] = v22.m128_f32[0] - v83;
			v52.m128_f32[0] = v21.m128_f32[0] - v22.m128_f32[0];
			goto LABEL_32;
		case 2:
			v52 = v22;
			v52.m128_f32[0] = v22.m128_f32[0] - v23;
		LABEL_31:
			v51 = v17;
			v51.m128_f32[0] = v17.m128_f32[0] - v22.m128_f32[0];
			goto LABEL_32;
		}
		if (v46 != 3)
			goto LABEL_33;
		v51 = v22;
		v52 = v22;
		v51.m128_f32[0] = v22.m128_f32[0] - v83;
		v52.m128_f32[0] = v22.m128_f32[0] - v23;
	LABEL_32:
		v48 = _mm_unpacklo_ps(
			_mm_unpacklo_ps(v51, v52),
			_mm_unpacklo_ps((__m128)0x3F800000u, _mm_xor_ps(v22, (__m128)0x80000000)));
		v43 = v76;
	LABEL_33:
		if ((*(_DWORD*)a7 & 2) != 0
			|| (v53 = _mm_mul_ps(v48, v40),
				(float)((float)((float)(v53.m128_f32[0] + _mm_shuffle_ps(v53, v53, 85).m128_f32[0])
					+ _mm_shuffle_ps(v53, v53, 170).m128_f32[0])
					+ _mm_shuffle_ps(v48, v48, 255).m128_f32[0]) > 0.0))
		{
			v54 = _mm_mul_ps(_mm_sub_ps(v40, v43), v48);
			v55 = (float)(v54.m128_f32[0] + _mm_shuffle_ps(v54, v54, 85).m128_f32[0])
				+ _mm_shuffle_ps(v54, v54, 170).m128_f32[0];
			if (fabs(v55) >= 0.0000099999997)
			{
				v56 = _mm_mul_ps(v48, v40);
				v57 = 0i64;
				v58 = (float)((float)((float)(v56.m128_f32[0] + _mm_shuffle_ps(v56, v56, 85).m128_f32[0])
					+ _mm_shuffle_ps(v56, v56, 170).m128_f32[0])
					+ _mm_shuffle_ps(v48, v48, 255).m128_f32[0])
					/ v55;
				if (v58 >= 0.0 && v58 <= 1.0 && v58 >= v32 && v58 < v50)
					break;
			}
		}
		v46 ^= v49;
		v32 = v50;
		if (v50 >= v33)
			return 0i64;
	}
	v59 = (__m128*)sub_14018B280(256i64, 0);
	if (v59)
	{
		v59->m128_f32[3] = v58;
		v59->m128_i32[2] = 1;
		v59[1].m128_u64[0] = 0i64;
		v59[1].m128_u64[1] = 0i64;
		v59->m128_u64[0] = (unsigned __int64)off_140B65FC8;
	}
	else
	{
		v59 = 0i64;
	}
	v60 = *(_DWORD*)(a7 + 4);
	if (!v60)
		return v59;
	v57.m128_f32[0] = v58;
	v61 = _mm_shuffle_ps(v57, v57, 0);
	v62 = _mm_add_ps(_mm_mul_ps(*a5, v61), *a4);
	if ((v60 & 1) != 0)
		v59[4].m128_i32[0] = v62.m128_i32[1];
	if ((*(_BYTE*)(a7 + 4) & 2) == 0)
		goto LABEL_59;
	v63 = *(_QWORD*)(a1 + 152);
	v77 = _mm_add_ps(_mm_mul_ps(v79, v61), v40).m128_u64[0];
	if (!v46)
	{
		v66 = *(__m128*)(v63 + 8 * v20);
		v67 = _mm_sub_ps(v66, *(__m128*)(v63 + 8 * v19));
		goto LABEL_57;
	}
	v64 = v46 - 1;
	if (!v64)
	{
		v66 = *(__m128*)(v63 + 8 * v20);
		v67 = _mm_sub_ps(v66, *(__m128*)(v63 + 8 * v19));
		v68 = _mm_sub_ps(*(__m128*)(v63 + v81), v66);
	LABEL_58:
		v69 = _mm_add_ps(
			_mm_mul_ps(v67, _mm_shuffle_ps((__m128)HIDWORD(v77), (__m128)HIDWORD(v77), 0)),
			_mm_add_ps(_mm_mul_ps(v68, _mm_shuffle_ps((__m128)(unsigned int)v77, (__m128)(unsigned int)v77, 0)), v66));
		v70 = _mm_mul_ps(v69, v69);
		v70.m128_f32[0] = 1.0
			/ fsqrt(
				(float)(v70.m128_f32[0] + _mm_shuffle_ps(v70, v70, 85).m128_f32[0])
				+ _mm_shuffle_ps(v70, v70, 170).m128_f32[0]);
		v59[2] = _mm_mul_ps(_mm_shuffle_ps(v70, v70, 0), v69);
		goto LABEL_59;
	}
	v65 = v64 - 1;
	if (!v65)
	{
		v66 = *(__m128*)(v63 + 8 * v20);
		v67 = _mm_sub_ps(*(__m128*)(v63 + v80), v66);
	LABEL_57:
		v68 = _mm_sub_ps(v66, *(__m128*)(v63 + v75));
		goto LABEL_58;
	}
	if (v65 == 1)
	{
		v66 = *(__m128*)(v63 + 8 * v20);
		v67 = _mm_sub_ps(*(__m128*)(v63 + v80), v66);
		v68 = _mm_sub_ps(*(__m128*)(v63 + v81), v66);
		goto LABEL_58;
	}
LABEL_59:
	if ((*(_BYTE*)(a7 + 4) & 0xC) != 0)
	{
		v79 = _mm_mul_ps(_mm_shuffle_ps(v62, v62, 136), (__m128)xmmword_140B7ABC0);
		sub_140387270(a1, &v79, (__int64)&v59[2]);
	}
	if ((*(_BYTE*)(a7 + 4) & 0x10) != 0)
	{
		v79 = _mm_mul_ps(_mm_shuffle_ps(v62, v62, 136), (__m128)xmmword_140B7ABC0);
		sub_140387600((__int64*)a1, &v79, (__int64)&v59[2]);
	}
	if ((*(_BYTE*)(a7 + 4) & 0x20) != 0)
	{
		v79 = _mm_mul_ps(_mm_shuffle_ps(v62, v62, 136), (__m128)xmmword_140B7ABC0);
		sub_140387780((__int64*)a1, &v79, (__int64)&v59[2]);
	}
	v71 = *(_DWORD*)(a7 + 4);
	if ((v71 & 0x1FC0) != 0)
	{
		v72 = (__m128)v62.m128_u32[2];
		v73 = (__m128)v62.m128_u32[0];
		v73.m128_f32[0] = (float)(v62.m128_f32[0] * *(float*)&dword_140C44574) + *(float*)(a1 + 192);
		v72.m128_f32[0] = (float)(v62.m128_f32[2] * *(float*)&dword_140C44574) + *(float*)(a1 + 200);
		v78 = _mm_unpacklo_ps(_mm_unpacklo_ps(v73, v72), _mm_unpacklo_ps((__m128)v62.m128_u32[1], (__m128)0i64));
		sub_140387910(a1, &v78, v59 + 2, v71);
		v74 = *(_DWORD*)(a7 + 4);
		if ((v74 & 0x7E000) != 0)
			sub_140388A30(a1, &v78, (__int64)&v59[2], v74);
	}
	return v59;
}
// 140B65FC8: using guessed type __int64 (__fastcall *off_140B65FC8[10])();
// 140B7ABC0: using guessed type __int128 xmmword_140B7ABC0;
// 140B7B500: using guessed type __int128 xmmword_140B7B500;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C44574: using guessed type int dword_140C44574;

