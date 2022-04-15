//----- (0000000140377640) ----------------------------------------------------
unsigned __int64 __fastcall sub_140377640(__m128* a1)
{
	__m128* v2; // rcx
	__int64 v3; // r8
	__m128* v4; // rdx
	__int8* v5; // rax
	float v6; // xmm4_4
	float v7; // xmm5_4
	float v8; // xmm6_4
	float v9; // xmm0_4
	float v10; // xmm4_4
	float v11; // xmm3_4
	float v12; // xmm7_4
	float v13; // xmm2_4
	float v14; // xmm4_4
	float v15; // xmm1_4
	float v16; // xmm0_4
	float v17; // xmm3_4
	float v18; // xmm8_4
	float v19; // xmm9_4
	float v20; // xmm2_4
	float v21; // xmm3_4
	float v22; // xmm1_4
	float v23; // xmm0_4
	float v24; // xmm3_4
	float v25; // xmm2_4
	float v26; // xmm3_4
	float v27; // xmm0_4
	float v28; // xmm3_4
	float v29; // xmm2_4
	float v30; // xmm3_4
	float v31; // xmm1_4
	float v32; // xmm0_4
	float v33; // xmm3_4
	float v34; // xmm2_4
	float v35; // xmm3_4
	float v36; // xmm1_4
	float v37; // xmm0_4
	float v38; // xmm3_4
	float v39; // xmm2_4
	float v40; // xmm3_4
	float v41; // xmm0_4
	float v42; // xmm3_4
	float v43; // xmm2_4
	float v44; // xmm3_4
	float v45; // xmm1_4
	float v46; // xmm0_4
	float v47; // xmm3_4
	float v48; // xmm2_4
	float v49; // xmm3_4
	float v50; // xmm1_4
	float v51; // xmm0_4
	float v52; // xmm3_4
	__m128 v53; // xmm8
	__int128 v54; // xmm4
	__m128 v55; // xmm10
	__m128 v56; // xmm9
	__m128 v57; // xmm7
	__m128 v58; // xmm2
	__m128 v59; // xmm5
	__m128 v60; // xmm4
	__m128 v61; // xmm3
	float v62; // xmm0_4
	__m128 v63; // xmm10
	__m128 v64; // xmm7
	__m128 v65; // xmm9
	__m128 v66; // xmm8
	__m128 v67; // xmm5
	__m128 v68; // xmm2
	__m128 v69; // xmm4
	__m128 v70; // xmm3
	float v71; // xmm0_4
	unsigned __int64 v72; // r8
	__int32* v73; // rax
	__m128 v74; // xmm1
	unsigned __int64 result; // rax
	__m128 v76; // xmm0
	__m128 v77; // xmm1
	__int64 v78; // rax
	__m128 v79; // xmm2
	int v80; // ecx
	int v81; // r9d
	__m128 v82; // xmm3
	int v83; // ecx
	__m128 v84; // xmm2
	int v85; // ecx
	int v86; // edx
	int v87; // edx
	__m128 v88; // xmm2
	int v89; // ecx
	int v90; // r8d
	int v91; // r9d
	int v92; // ecx
	int v93; // edx
	__m128 v94; // xmm2
	int v95; // ecx
	int v96; // r9d
	__m128 v97; // xmm3
	int v98; // ecx
	__m128 v99; // xmm2
	int v100; // ecx
	int v101; // ecx
	int v102; // edx
	int v103; // edx
	int v104; // r9d
	int v105; // r8d
	__m128** v106; // rcx
	__m128** v107; // rcx
	__m128 v108; // [rsp+28h] [rbp-49h]
	__int128 v109; // [rsp+38h] [rbp-39h] BYREF
	__m128 v110; // [rsp+48h] [rbp-29h]

	v2 = a1 + 39;
	v3 = 4i64;
	v4 = v2;
	v5 = &a1[24].m128_i8[4];
	do
	{
		v6 = a1[11].m128_f32[0];
		v7 = *((float*)v5 - 5);
		v8 = *((float*)v5 - 1);
		v108 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)a1[14].m128_u32[0], (__m128)a1[14].m128_u32[2]),
			_mm_unpacklo_ps((__m128)a1[14].m128_u32[1], (__m128)0i64));
		v109 = (__int128)v108;
		if (v6 <= 0.0)
		{
			v9 = v6 * v8;
			v10 = v6 * v7;
		}
		else
		{
			v9 = v6 * v7;
			v10 = v6 * v8;
		}
		v11 = a1[12].m128_f32[0];
		v12 = *(float*)v5;
		v13 = v108.m128_f32[0] + v10;
		v14 = *((float*)v5 - 4);
		v15 = v108.m128_f32[0] + v9;
		if (v11 <= 0.0)
		{
			v16 = v11 * v12;
			v17 = v11 * v14;
		}
		else
		{
			v16 = v11 * v14;
			v17 = v11 * v12;
		}
		v18 = *((float*)v5 - 3);
		v19 = *((float*)v5 + 1);
		v20 = v13 + v17;
		v21 = a1[13].m128_f32[0];
		v22 = v15 + v16;
		if (v21 <= 0.0)
		{
			v23 = v21 * v19;
			v24 = v21 * v18;
		}
		else
		{
			v23 = v21 * v18;
			v24 = v21 * v19;
		}
		v25 = v20 + v24;
		v26 = a1[11].m128_f32[1];
		*(float*)&v109 = v25;
		v108.m128_f32[0] = v22 + v23;
		if (v26 <= 0.0)
		{
			v27 = v26 * v8;
			v28 = v26 * v7;
		}
		else
		{
			v27 = v26 * v7;
			v28 = v26 * v8;
		}
		v29 = *((float*)&v109 + 1) + v28;
		v30 = a1[12].m128_f32[1];
		v31 = v108.m128_f32[1] + v27;
		if (v30 <= 0.0)
		{
			v32 = v30 * v12;
			v33 = v30 * v14;
		}
		else
		{
			v32 = v30 * v14;
			v33 = v30 * v12;
		}
		v34 = v29 + v33;
		v35 = a1[13].m128_f32[1];
		v36 = v31 + v32;
		if (v35 <= 0.0)
		{
			v37 = v35 * v19;
			v38 = v35 * v18;
		}
		else
		{
			v37 = v35 * v18;
			v38 = v35 * v19;
		}
		v39 = v34 + v38;
		v40 = a1[11].m128_f32[2];
		*((float*)&v109 + 1) = v39;
		v108.m128_f32[1] = v36 + v37;
		if (v40 <= 0.0)
		{
			v41 = v40 * v8;
			v42 = v40 * v7;
		}
		else
		{
			v41 = v40 * v7;
			v42 = v40 * v8;
		}
		v43 = *((float*)&v109 + 2) + v42;
		v44 = a1[12].m128_f32[2];
		v45 = v108.m128_f32[2] + v41;
		if (v44 <= 0.0)
		{
			v46 = v44 * v12;
			v47 = v44 * v14;
		}
		else
		{
			v46 = v44 * v14;
			v47 = v44 * v12;
		}
		v48 = v43 + v47;
		v49 = a1[13].m128_f32[2];
		v50 = v45 + v46;
		if (v49 <= 0.0)
		{
			v51 = v49 * v19;
			v52 = v49 * v18;
		}
		else
		{
			v51 = v49 * v18;
			v52 = v49 * v19;
		}
		v53 = 0i64;
		v5 += 64;
		v4 += 4;
		v108.m128_f32[2] = v50 + v51;
		*((float*)&v109 + 2) = v48 + v52;
		v54 = v109;
		v4[-4] = v108;
		v4[-3] = (__m128)v54;
		v55 = a1[13];
		v56 = a1[12];
		v57 = a1[11];
		v58 = _mm_mul_ps(v55, v55);
		v59 = _mm_mul_ps(v57, v57);
		v60 = _mm_mul_ps(v56, v56);
		v53.m128_f32[0] = fmaxf(
			(float)(v59.m128_f32[0] + _mm_shuffle_ps(v59, v59, 85).m128_f32[0])
			+ _mm_shuffle_ps(v59, v59, 170).m128_f32[0],
			(float)(v60.m128_f32[0] + _mm_shuffle_ps(v60, v60, 85).m128_f32[0])
			+ _mm_shuffle_ps(v60, v60, 170).m128_f32[0]);
		v61 = v53;
		v61.m128_f32[0] = fmaxf(
			v53.m128_f32[0],
			(float)(v58.m128_f32[0] + _mm_shuffle_ps(v58, v58, 85).m128_f32[0])
			+ _mm_shuffle_ps(v58, v58, 170).m128_f32[0]);
		v62 = _mm_sqrt_ps(v61).m128_f32[0] * *((float*)v5 - 9);
		*(__m128*)(v5 + 204) = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(v5 - 52), *(__m128*)(v5 - 52), 0), v57),
					_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(v5 - 52), *(__m128*)(v5 - 52), 85), v56)),
				_mm_mul_ps(_mm_shuffle_ps(*(__m128*)(v5 - 52), *(__m128*)(v5 - 52), 170), v55)),
			a1[14]);
		*((float*)v5 + 55) = v62;
		--v3;
	} while (v3);
	v63 = a1[13];
	v64 = a1[11];
	v65 = a1[12];
	v66 = 0i64;
	v67 = _mm_mul_ps(v64, v64);
	v68 = _mm_mul_ps(v63, v63);
	v69 = _mm_mul_ps(v65, v65);
	v66.m128_f32[0] = fmaxf(
		(float)(v67.m128_f32[0] + _mm_shuffle_ps(v67, v67, 85).m128_f32[0])
		+ _mm_shuffle_ps(v67, v67, 170).m128_f32[0],
		(float)(v69.m128_f32[0] + _mm_shuffle_ps(v69, v69, 85).m128_f32[0])
		+ _mm_shuffle_ps(v69, v69, 170).m128_f32[0]);
	v70 = v66;
	v70.m128_f32[0] = fmaxf(
		v66.m128_f32[0],
		(float)(v68.m128_f32[0] + _mm_shuffle_ps(v68, v68, 85).m128_f32[0])
		+ _mm_shuffle_ps(v68, v68, 170).m128_f32[0]);
	v71 = _mm_sqrt_ps(v70).m128_f32[0] * a1[56].m128_f32[0];
	a1[57] = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(a1[55], a1[55], 0), v64),
				_mm_mul_ps(_mm_shuffle_ps(a1[55], a1[55], 85), v65)),
			_mm_mul_ps(_mm_shuffle_ps(a1[55], a1[55], 170), v63)),
		a1[14]);
	a1[58].m128_f32[0] = v71;
	if (a1 == (__m128*)a1[2].m128_u64[0] && (v72 = a1[1].m128_u64[1]) != 0)
	{
		v73 = (__int32*)(*(__int64(__fastcall**)(unsigned __int64, __int128*))(*(_QWORD*)v72 + 192i64))(
			a1[1].m128_u64[1],
			&v109);
		v74 = (__m128)(unsigned int)dword_140C43FB8;
		a1[59].m128_i32[0] = *v73;
		a1[59].m128_i32[1] = v73[1];
		a1[59].m128_i32[2] = v73[2];
		result = (unsigned int)v73[3];
	}
	else
	{
		v76 = (__m128)xmmword_140C798C0;
		v77 = (__m128)xmmword_140C798D0;
		v78 = 3i64;
		do
		{
			v77 = _mm_max_ps(v77, v2[1]);
			v76 = _mm_min_ps(v76, *v2);
			v2 += 4;
			v110 = v77;
			--v78;
		} while (v78);
		v74 = (__m128)(unsigned int)dword_140C43FB8;
		v109 = (__int128)v76;
		v79 = (__m128)v76.m128_u32[0];
		v79.m128_f32[0] = (float)((float)(v76.m128_f32[0] * *(float*)&dword_140C43FB8) + 0.5) * 2048.0;
		v80 = (int)v79.m128_f32[0];
		if ((int)v79.m128_f32[0] != 0x80000000 && (float)v80 != v79.m128_f32[0])
			v79.m128_f32[0] = (float)(v80 - (_mm_movemask_ps(_mm_unpacklo_ps(v79, v79)) & 1));
		v82 = (__m128)DWORD2(v109);
		v81 = (int)v79.m128_f32[0];
		v82.m128_f32[0] = (float)((float)(*((float*)&v109 + 2) * *(float*)&dword_140C43FB8) + 0.5) * 2048.0;
		v83 = (int)v82.m128_f32[0];
		if ((int)v82.m128_f32[0] != 0x80000000 && (float)v83 != v82.m128_f32[0])
			v82.m128_f32[0] = (float)(v83 - (_mm_movemask_ps(_mm_unpacklo_ps(v82, v82)) & 1));
		v84 = (__m128)v110.m128_u32[0];
		v84.m128_f32[0] = (float)((float)(v110.m128_f32[0] * *(float*)&dword_140C43FB8) + 0.5) * 2048.0;
		v85 = (int)v84.m128_f32[0];
		if ((int)v84.m128_f32[0] != 0x80000000 && (float)v85 != v84.m128_f32[0])
			v84.m128_f32[0] = (float)(v85 - (_mm_movemask_ps(_mm_unpacklo_ps(v84, v84)) & 1));
		v86 = (int)v84.m128_f32[0];
		v88 = (__m128)v110.m128_u32[2];
		v87 = v86 + 1;
		v88.m128_f32[0] = (float)((float)(v110.m128_f32[2] * *(float*)&dword_140C43FB8) + 0.5) * 2048.0;
		v89 = (int)v88.m128_f32[0];
		if ((int)v88.m128_f32[0] != 0x80000000 && (float)v89 != v88.m128_f32[0])
			v88.m128_f32[0] = (float)(v89 - (_mm_movemask_ps(_mm_unpacklo_ps(v88, v88)) & 1));
		a1[59].m128_i32[0] = v81;
		a1[59].m128_i32[1] = (int)v82.m128_f32[0];
		a1[59].m128_i32[2] = v87;
		result = (unsigned int)((int)v88.m128_f32[0] + 1);
	}
	a1[59].m128_i32[3] = result;
	v90 = a1[59].m128_i32[2];
	v91 = a1[59].m128_i32[0];
	v92 = a1[59].m128_i32[1];
	v93 = result;
	if (dword_140C44548 < v90)
		v90 = dword_140C44548;
	if (dword_140C4454C < (int)result)
		v93 = dword_140C4454C;
	if (v91 < dword_140C44540)
		v91 = dword_140C44540;
	if (v92 < dword_140C44544)
		v92 = dword_140C44544;
	if (v91 >= v90 || v92 >= v93)
	{
		a1[59].m128_u64[0] = qword_140C784C0;
		a1[59].m128_i32[2] = qword_140C784C8;
		result = HIDWORD(qword_140C784C8);
		a1[59].m128_i32[3] = HIDWORD(qword_140C784C8);
	}
	else
	{
		a1[59].m128_i32[0] = v91;
		a1[59].m128_i32[1] = v92;
		a1[59].m128_i32[2] = v90;
		a1[59].m128_i32[3] = v93;
	}
	if (a1[52].m128_f32[0] <= a1[51].m128_f32[0]
		|| a1[52].m128_f32[1] <= a1[51].m128_f32[1]
		|| a1[52].m128_f32[2] <= a1[51].m128_f32[2])
	{
		goto LABEL_86;
	}
	v94 = v74;
	v94.m128_f32[0] = (float)((float)(v74.m128_f32[0] * a1[51].m128_f32[0]) + 0.5) * 2048.0;
	v95 = (int)v94.m128_f32[0];
	if ((int)v94.m128_f32[0] != 0x80000000 && (float)v95 != v94.m128_f32[0])
	{
		result = _mm_movemask_ps(_mm_unpacklo_ps(v94, v94)) & 1;
		v94.m128_f32[0] = (float)(v95 - (int)result);
	}
	v97 = v74;
	v96 = (int)v94.m128_f32[0];
	v97.m128_f32[0] = (float)((float)(v74.m128_f32[0] * a1[51].m128_f32[2]) + 0.5) * 2048.0;
	v98 = (int)v97.m128_f32[0];
	if ((int)v97.m128_f32[0] != 0x80000000 && (float)v98 != v97.m128_f32[0])
	{
		result = _mm_movemask_ps(_mm_unpacklo_ps(v97, v97)) & 1;
		v97.m128_f32[0] = (float)(v98 - (int)result);
	}
	v99 = v74;
	v99.m128_f32[0] = (float)((float)(v74.m128_f32[0] * a1[52].m128_f32[0]) + 0.5) * 2048.0;
	v100 = (int)v99.m128_f32[0];
	if ((int)v99.m128_f32[0] != 0x80000000 && (float)v100 != v99.m128_f32[0])
	{
		result = _mm_movemask_ps(_mm_unpacklo_ps(v99, v99)) & 1;
		v99.m128_f32[0] = (float)(v100 - (int)result);
	}
	v101 = (int)v99.m128_f32[0] + 1;
	v74.m128_f32[0] = (float)((float)(v74.m128_f32[0] * a1[52].m128_f32[2]) + 0.5) * 2048.0;
	v102 = (int)v74.m128_f32[0];
	if ((int)v74.m128_f32[0] != 0x80000000 && (float)v102 != v74.m128_f32[0])
	{
		result = _mm_movemask_ps(_mm_unpacklo_ps(v74, v74)) & 1;
		v74.m128_f32[0] = (float)(v102 - (int)result);
	}
	a1[60].m128_i32[0] = v96;
	a1[60].m128_i32[1] = (int)v97.m128_f32[0];
	a1[60].m128_i32[2] = v101;
	v103 = (int)v74.m128_f32[0] + 1;
	a1[60].m128_i32[3] = v103;
	v104 = a1[60].m128_i32[0];
	if (dword_140C44548 < v101)
		v101 = dword_140C44548;
	v105 = a1[60].m128_i32[1];
	if (dword_140C4454C < v103)
		v103 = dword_140C4454C;
	if (v104 < dword_140C44540)
		v104 = dword_140C44540;
	if (v105 < dword_140C44544)
		v105 = dword_140C44544;
	if (v104 >= v101 || v105 >= v103)
	{
	LABEL_86:
		a1[60].m128_u64[0] = qword_140C784C0;
		a1[60].m128_i32[2] = qword_140C784C8;
		result = HIDWORD(qword_140C784C8);
		a1[60].m128_i32[3] = HIDWORD(qword_140C784C8);
	}
	else
	{
		a1[60].m128_i32[0] = v104;
		a1[60].m128_i32[1] = v105;
		a1[60].m128_i32[2] = v101;
		a1[60].m128_i32[3] = v103;
	}
	if (!a1[80].m128_u64[0])
	{
		v106 = (__m128**)(a1[1].m128_u64[0] + 5088);
		a1[80].m128_u64[0] = (unsigned __int64)v106;
		a1[80].m128_u64[1] = (unsigned __int64)*v106;
		*v106 = a1;
		result = a1[80].m128_u64[1];
		if (result)
			*(_QWORD*)(result + 1280) = (char*)a1 + 1288;
	}
	if (!a1[74].m128_u64[0])
	{
		v107 = (__m128**)(a1[1].m128_u64[0] + 5040);
		a1[74].m128_u64[0] = (unsigned __int64)v107;
		a1[74].m128_u64[1] = (unsigned __int64)*v107;
		*v107 = a1;
		result = a1[74].m128_u64[1];
		if (result)
			*(_QWORD*)(result + 1184) = (char*)a1 + 1192;
	}
	return result;
}
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44540: using guessed type int dword_140C44540;
// 140C44544: using guessed type int dword_140C44544;
// 140C44548: using guessed type int dword_140C44548;
// 140C4454C: using guessed type int dword_140C4454C;
// 140C784C0: using guessed type __int64 qword_140C784C0;
// 140C784C8: using guessed type __int64 qword_140C784C8;
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;
// 140377640: using guessed type __m128 var_80;

