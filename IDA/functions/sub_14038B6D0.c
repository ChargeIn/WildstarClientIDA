#include "../winhttp.h"

//----- (000000014038B6D0) ----------------------------------------------------
__int16* __fastcall sub_14038B6D0(__m128* a1)
{
	__int64 v2; // rdx
	__m128* v3; // rcx
	__m128 v4; // xmm13
	__int16* result; // rax
	__m128 v6; // xmm14
	float v7; // xmm1_4
	float v8; // xmm9_4
	float v9; // xmm8_4
	float v10; // xmm0_4
	float v11; // xmm1_4
	float v12; // xmm4_4
	float v13; // xmm3_4
	float v14; // xmm2_4
	float v15; // xmm0_4
	float v16; // xmm1_4
	float v17; // xmm5_4
	float v18; // xmm1_4
	float v19; // xmm0_4
	float v20; // xmm4_4
	float v21; // xmm3_4
	float v22; // xmm1_4
	float v23; // xmm2_4
	float v24; // xmm2_4
	float v25; // xmm0_4
	float v26; // xmm3_4
	float v27; // xmm0_4
	float v28; // xmm1_4
	float v29; // xmm10_4
	float v30; // xmm0_4
	float v31; // xmm3_4
	float v32; // xmm2_4
	float v33; // xmm0_4
	float v34; // xmm1_4
	float v35; // xmm1_4
	float v36; // xmm0_4
	float v37; // xmm10_4
	float v38; // xmm3_4
	float v39; // xmm2_4
	float v40; // xmm0_4
	float v41; // xmm1_4
	float v42; // xmm3_4
	float v43; // xmm1_4
	float v44; // xmm9_4
	float v45; // xmm8_4
	float v46; // xmm0_4
	float v47; // xmm1_4
	float v48; // xmm2_4
	float v49; // xmm7_4
	float v50; // xmm6_4
	float v51; // xmm0_4
	float v52; // xmm1_4
	float v53; // xmm2_4
	float v54; // xmm5_4
	float v55; // xmm4_4
	float v56; // xmm0_4
	float v57; // xmm1_4
	__m128 v58; // xmm8
	__m128 v59; // xmm10
	__m128 v60; // xmm9
	__m128 v61; // xmm7
	__m128 v62; // xmm2
	__m128 v63; // xmm5
	__m128 v64; // xmm4
	__m128 v65; // xmm3
	float v66; // xmm0_4
	__m128 v67; // xmm10
	__m128 v68; // xmm9
	__m128 v69; // xmm7
	__m128 v70; // xmm8
	__m128 v71; // xmm5
	__m128 v72; // xmm2
	__m128 v73; // xmm4
	__m128 v74; // xmm3
	float v75; // xmm0_4
	float v76; // xmm3_4
	float v77; // xmm0_4
	__m128 v78; // xmm1
	int v79; // ecx
	int v80; // r10d
	__m128 v81; // xmm1
	int v82; // ecx
	int v83; // r9d
	__m128 v84; // xmm2
	int v85; // ecx
	int v86; // edx
	__m128 v87; // xmm1
	int v88; // ecx
	__m128* v89; // rcx
	int v90; // r8d
	int v91; // r10d
	int v92; // r9d
	__m128** v93; // rcx
	__m128 v94; // [rsp+28h] [rbp-79h]
	__m128 v95; // [rsp+38h] [rbp-69h]

	v2 = 4i64;
	v3 = a1 + 16;
	v4 = (__m128)xmmword_140C798C0;
	result = &a1[33].m128_i16[2];
	v6 = (__m128)xmmword_140C798D0;
	do
	{
		v7 = a1[3].m128_f32[0];
		v8 = *((float*)result - 5);
		v9 = *((float*)result - 1);
		v94 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128)a1[6].m128_u32[0], (__m128)a1[6].m128_u32[2]),
			_mm_unpacklo_ps((__m128)a1[6].m128_u32[1], (__m128)0i64));
		v95 = v94;
		if (v7 <= 0.0)
		{
			v10 = v7 * v9;
			v11 = v7 * v8;
		}
		else
		{
			v10 = v7 * v8;
			v11 = v7 * v9;
		}
		v12 = a1[4].m128_f32[0];
		v13 = v94.m128_f32[0] + v11;
		v14 = v94.m128_f32[0] + v10;
		if (v12 <= 0.0)
		{
			v15 = *(float*)result;
			v16 = *((float*)result - 4);
		}
		else
		{
			v15 = *((float*)result - 4);
			v16 = *(float*)result;
		}
		v17 = *((float*)result - 3);
		v18 = v16 * v12;
		v19 = v15 * v12;
		v20 = *((float*)result + 1);
		v21 = v13 + v18;
		v22 = a1[5].m128_f32[0];
		v23 = v14 + v19;
		if (v22 <= 0.0)
		{
			v24 = v23 + (float)(v20 * v22);
			v25 = *((float*)result - 3);
		}
		else
		{
			v24 = v23 + (float)(v17 * v22);
			v25 = *((float*)result + 1);
		}
		v94.m128_f32[0] = v24;
		v95.m128_f32[0] = v21 + (float)(v25 * v22);
		v26 = a1[3].m128_f32[1];
		if (v26 <= 0.0)
		{
			v27 = *((float*)result - 1);
			v28 = *((float*)result - 5);
		}
		else
		{
			v27 = *((float*)result - 5);
			v28 = *((float*)result - 1);
		}
		v29 = a1[4].m128_f32[1];
		v30 = v27 * v26;
		v31 = v95.m128_f32[1] + (float)(v28 * v26);
		v32 = v94.m128_f32[1] + v30;
		if (v29 <= 0.0)
		{
			v33 = *(float*)result;
			v34 = *((float*)result - 4);
		}
		else
		{
			v33 = *((float*)result - 4);
			v34 = *(float*)result;
		}
		v35 = v34 * v29;
		v36 = v33 * v29;
		v37 = a1[5].m128_f32[1];
		v38 = v31 + v35;
		v39 = v32 + v36;
		if (v37 <= 0.0)
		{
			v40 = *((float*)result + 1);
			v41 = *((float*)result - 3);
		}
		else
		{
			v40 = *((float*)result - 3);
			v41 = *((float*)result + 1);
		}
		v42 = v38 + (float)(v41 * v37);
		v43 = a1[3].m128_f32[2];
		v44 = v8 * v43;
		v45 = v9 * v43;
		v95.m128_f32[1] = v42;
		v94.m128_f32[1] = v39 + (float)(v40 * v37);
		if (v43 <= 0.0)
		{
			v46 = v94.m128_f32[2] + v45;
			v47 = v95.m128_f32[2] + v44;
		}
		else
		{
			v46 = v94.m128_f32[2] + v44;
			v47 = v95.m128_f32[2] + v45;
		}
		v48 = a1[4].m128_f32[2];
		v49 = *((float*)result - 4) * v48;
		v50 = *(float*)result * v48;
		if (v48 <= 0.0)
		{
			v51 = v46 + v50;
			v52 = v47 + v49;
		}
		else
		{
			v51 = v46 + v49;
			v52 = v47 + v50;
		}
		v53 = a1[5].m128_f32[2];
		v54 = v17 * v53;
		v55 = v20 * v53;
		if (v53 <= 0.0)
		{
			v56 = v51 + v55;
			v57 = v52 + v54;
		}
		else
		{
			v56 = v51 + v54;
			v57 = v52 + v55;
		}
		v95.m128_f32[2] = v57;
		v94.m128_f32[2] = v56;
		v58 = 0i64;
		v3 += 4;
		result += 32;
		v3[-4] = v94;
		v3[-3] = v95;
		v59 = a1[5];
		v60 = a1[4];
		v61 = a1[3];
		v62 = _mm_mul_ps(v59, v59);
		v63 = _mm_mul_ps(v61, v61);
		v64 = _mm_mul_ps(v60, v60);
		v58.m128_f32[0] = fmaxf(
			(float)(v63.m128_f32[0] + _mm_shuffle_ps(v63, v63, 85).m128_f32[0])
			+ _mm_shuffle_ps(v63, v63, 170).m128_f32[0],
			(float)(v64.m128_f32[0] + _mm_shuffle_ps(v64, v64, 85).m128_f32[0])
			+ _mm_shuffle_ps(v64, v64, 170).m128_f32[0]);
		v65 = v58;
		v65.m128_f32[0] = fmaxf(
			v58.m128_f32[0],
			(float)(v62.m128_f32[0] + _mm_shuffle_ps(v62, v62, 85).m128_f32[0])
			+ _mm_shuffle_ps(v62, v62, 170).m128_f32[0]);
		v66 = _mm_sqrt_ps(v65).m128_f32[0] * *((float*)result - 9);
		*(__m128*)(result - 154) = _mm_add_ps(
			_mm_add_ps(
				_mm_add_ps(
					_mm_mul_ps(
						_mm_shuffle_ps(*(__m128*)(result - 26), *(__m128*)(result - 26), 0),
						v61),
					_mm_mul_ps(
						_mm_shuffle_ps(*(__m128*)(result - 26), *(__m128*)(result - 26), 85),
						v60)),
				_mm_mul_ps(
					_mm_shuffle_ps(*(__m128*)(result - 26), *(__m128*)(result - 26), 170),
					v59)),
			a1[6]);
		*((float*)result - 73) = v66;
		v6 = _mm_max_ps(v6, v3[-3]);
		v4 = _mm_min_ps(v4, v3[-4]);
		--v2;
	} while (v2);
	v67 = a1[5];
	v68 = a1[4];
	v69 = a1[3];
	v70 = 0i64;
	v71 = _mm_mul_ps(v69, v69);
	v72 = _mm_mul_ps(v67, v67);
	v73 = _mm_mul_ps(v68, v68);
	v70.m128_f32[0] = fmaxf(
		(float)(v71.m128_f32[0] + _mm_shuffle_ps(v71, v71, 85).m128_f32[0])
		+ _mm_shuffle_ps(v71, v71, 170).m128_f32[0],
		(float)(v73.m128_f32[0] + _mm_shuffle_ps(v73, v73, 85).m128_f32[0])
		+ _mm_shuffle_ps(v73, v73, 170).m128_f32[0]);
	v74 = v70;
	v74.m128_f32[0] = fmaxf(
		v70.m128_f32[0],
		(float)(v72.m128_f32[0] + _mm_shuffle_ps(v72, v72, 85).m128_f32[0])
		+ _mm_shuffle_ps(v72, v72, 170).m128_f32[0]);
	v78 = (__m128)v4.m128_u32[0];
	v75 = _mm_sqrt_ps(v74).m128_f32[0];
	v76 = *(float*)&dword_140C43FB8;
	v77 = v75 * a1[51].m128_f32[0];
	v78.m128_f32[0] = v4.m128_f32[0] * *(float*)&dword_140C43FB8;
	a1[48] = _mm_add_ps(
		_mm_add_ps(
			_mm_add_ps(
				_mm_mul_ps(_mm_shuffle_ps(a1[50], a1[50], 0), v69),
				_mm_mul_ps(_mm_shuffle_ps(a1[50], a1[50], 85), v68)),
			_mm_mul_ps(_mm_shuffle_ps(a1[50], a1[50], 170), v67)),
		a1[6]);
	a1[49].m128_f32[0] = v77;
	v78.m128_f32[0] = (float)(v78.m128_f32[0] + 0.5) * 2048.0;
	v79 = (int)v78.m128_f32[0];
	if ((int)v78.m128_f32[0] != 0x80000000 && (float)v79 != v78.m128_f32[0])
	{
		result = (__int16*)(_mm_movemask_ps(_mm_unpacklo_ps(v78, v78)) & 1);
		v78.m128_f32[0] = (float)(v79 - (int)result);
	}
	v80 = (int)v78.m128_f32[0];
	v81 = (__m128)v4.m128_u32[2];
	v81.m128_f32[0] = (float)((float)(v4.m128_f32[2] * v76) + 0.5) * 2048.0;
	v82 = (int)v81.m128_f32[0];
	if ((int)v81.m128_f32[0] != 0x80000000 && (float)v82 != v81.m128_f32[0])
	{
		result = (__int16*)(_mm_movemask_ps(_mm_unpacklo_ps(v81, v81)) & 1);
		v81.m128_f32[0] = (float)(v82 - (int)result);
	}
	v84 = (__m128)v6.m128_u32[0];
	v83 = (int)v81.m128_f32[0];
	v84.m128_f32[0] = (float)((float)(v6.m128_f32[0] * v76) + 0.5) * 2048.0;
	v85 = (int)v84.m128_f32[0];
	if ((int)v84.m128_f32[0] != 0x80000000 && (float)v85 != v84.m128_f32[0])
	{
		result = (__int16*)(_mm_movemask_ps(_mm_unpacklo_ps(v84, v84)) & 1);
		v84.m128_f32[0] = (float)(v85 - (int)result);
	}
	v87 = (__m128)v6.m128_u32[2];
	v86 = (int)v84.m128_f32[0] + 1;
	v87.m128_f32[0] = (float)((float)(v6.m128_f32[2] * v76) + 0.5) * 2048.0;
	v88 = (int)v87.m128_f32[0];
	if ((int)v87.m128_f32[0] != 0x80000000 && (float)v88 != v87.m128_f32[0])
	{
		result = (__int16*)(_mm_movemask_ps(_mm_unpacklo_ps(v87, v87)) & 1);
		v87.m128_f32[0] = (float)(v88 - (int)result);
	}
	v89 = a1 + 52;
	a1[52].m128_i32[0] = v80;
	a1[52].m128_i32[1] = v83;
	a1[52].m128_i32[2] = v86;
	v90 = (int)v87.m128_f32[0] + 1;
	a1[52].m128_i32[3] = v90;
	v91 = a1[52].m128_i32[0];
	if (dword_140C445A0 < v86)
		v86 = dword_140C445A0;
	v92 = a1[52].m128_i32[1];
	if (dword_140C445A4 < v90)
		v90 = dword_140C445A4;
	if (v91 < (int)qword_140C44598)
		v91 = qword_140C44598;
	if (v92 < SHIDWORD(qword_140C44598))
		v92 = HIDWORD(qword_140C44598);
	if (v91 >= v86 || v92 >= v90)
	{
		v89->m128_u64[0] = qword_140C784C0;
		a1[52].m128_i32[2] = qword_140C784C8;
		result = (__int16*)HIDWORD(qword_140C784C8);
		a1[52].m128_i32[3] = HIDWORD(qword_140C784C8);
	}
	else if (a1 != (__m128*) - 832i64)
	{
		v89->m128_i32[0] = v91;
		a1[52].m128_i32[1] = v92;
		a1[52].m128_i32[2] = v86;
		a1[52].m128_i32[3] = v90;
	}
	if (a1[14].m128_i32[1])
		result = (__int16*)sub_140367870(a1[1].m128_i64[0], a1[24].m128_f32);
	if (!a1[65].m128_u64[0])
	{
		v93 = (__m128**)(a1[1].m128_u64[0] + 5264);
		a1[65].m128_u64[0] = (unsigned __int64)v93;
		a1[65].m128_u64[1] = (unsigned __int64)*v93;
		*v93 = a1;
		result = (__int16*)a1[65].m128_u64[1];
		if (result)
			*((_QWORD*)result + 130) = (char*)a1 + 1048;
	}
	return result;
}
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C44598: using guessed type __int64 qword_140C44598;
// 140C445A0: using guessed type int dword_140C445A0;
// 140C445A4: using guessed type int dword_140C445A4;
// 140C784C0: using guessed type __int64 qword_140C784C0;
// 140C784C8: using guessed type __int64 qword_140C784C8;
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;

