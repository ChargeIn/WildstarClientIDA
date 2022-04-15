#include "../winhttp.h"

//----- (000000014035A150) ----------------------------------------------------
void __fastcall sub_14035A150(__m128* a1)
{
	__int64 v1; // r12
	bool v2; // zf
	__m128 v4; // xmm5
	__m128 v5; // xmm0
	int v6; // r10d
	int v7; // eax
	__int64 v8; // rdx
	__m128* v9; // rsi
	__m128 v10; // xmm1
	__m128 v11; // xmm3
	__m128 v12; // xmm10
	__m128 v13; // xmm2
	float v14; // xmm4_4
	float v15; // xmm6_4
	__m128 v16; // xmm11
	float v17; // xmm5_4
	__m128 v18; // xmm2
	float v19; // xmm7_4
	float v20; // xmm8_4
	__m128 v21; // xmm4
	__m128 v22; // xmm4
	float v23; // xmm0_4
	float v24; // xmm0_4
	int v25; // ebx
	int v26; // r14d
	float v27; // xmm6_4
	float v28; // xmm0_4
	float v29; // xmm0_4
	int v30; // eax
	float v31; // xmm1_4
	__int32 v32; // r9d
	__int64 v33; // rax
	int v34; // r14d
	__int32 v35; // r9d
	float v36; // xmm0_4
	float v37; // xmm1_4
	int* v38; // rbx
	__int64 v39; // rcx
	float* v40; // rax
	float* m128_f32; // r14
	int* v42; // rcx
	unsigned __int64 v43; // rax
	__int64 v44; // rdx
	float* v45; // rax
	__int64 v46; // r8
	float v47; // xmm4_4
	unsigned __int64 v48; // rax
	__m128* v49; // rax
	float v50; // xmm3_4
	unsigned __int64 v51; // r13
	__int64 v52; // r15
	unsigned __int64 v53; // r13
	unsigned __int64 v54; // rax
	__m128 v55; // xmm0
	__m128 v56; // xmm6
	__m128 v57; // xmm7
	float v58; // xmm8_4
	__m128 v59; // xmm6
	__m128 v60; // xmm6
	__m128 v61; // xmm5
	__m128 v62; // xmm4
	__m128 v63; // xmm2
	__m128 v64; // xmm2
	__m128 v65; // xmm2
	float v66; // xmm2_4
	float v67; // xmm0_4
	int* v68; // rdx
	int v69; // r14d
	__int32 v70; // r9d
	__int64 i; // rax
	__m128 v72; // xmm7
	__m128 v73; // xmm6
	float v74; // xmm8_4
	float v75; // xmm6_4
	float v76; // xmm0_4
	float v77; // xmm2_4
	bool v78; // cc
	float v79; // xmm0_4
	int* v80; // rdx
	__int64 v81; // rcx
	float* v82; // rax
	__int64 v83; // rcx
	__int64 v84; // rax
	int* v85; // rdx
	__int64 v86; // r8
	float* v87; // rax
	__int64 v88; // r8
	__int64 v89; // rax
	__int64 v90; // rax
	__int64 v91; // rcx
	int v92[2]; // [rsp+20h] [rbp-E0h] BYREF
	int* v93; // [rsp+28h] [rbp-D8h]
	__int64 v94; // [rsp+30h] [rbp-D0h]
	int v95[2]; // [rsp+38h] [rbp-C8h] BYREF
	__int64 v96; // [rsp+40h] [rbp-C0h]
	__m128 v97; // [rsp+50h] [rbp-B0h]
	__m128 v98; // [rsp+60h] [rbp-A0h]
	int v99[2]; // [rsp+70h] [rbp-90h] BYREF
	int* v100; // [rsp+78h] [rbp-88h]
	__int64 v101; // [rsp+80h] [rbp-80h]
	__m128 v102; // [rsp+90h] [rbp-70h]
	__int128 v103; // [rsp+A0h] [rbp-60h]
	__m128 v104; // [rsp+B0h] [rbp-50h]
	__m128 v105; // [rsp+C0h] [rbp-40h]
	int v106; // [rsp+1C0h] [rbp+C0h]
	int v107; // [rsp+1C8h] [rbp+C8h]
	int v108; // [rsp+1D0h] [rbp+D0h] BYREF
	int v109; // [rsp+1D4h] [rbp+D4h]
	int v110; // [rsp+1D8h] [rbp+D8h] BYREF
	int v111; // [rsp+1DCh] [rbp+DCh]

	v1 = 0i64;
	v2 = (a1[8].m128_i32[0] & 0x1000000) == 0;
	a1[53].m128_i32[1] = 0;
	if (!v2 && a1[82].m128_f32[3] != 0.0)
	{
		v4 = (__m128)xmmword_140B7AC50;
		v5 = _mm_mul_ps(
			_mm_add_ps(
				(__m128)xmmword_140B7AC50,
				_mm_mul_ps(
					_mm_shuffle_ps(a1[57], a1[57], 136),
					_mm_shuffle_ps((__m128)(unsigned int)dword_140C43FB8, (__m128)(unsigned int)dword_140C43FB8, 0))),
			(__m128)xmmword_140B7B490);
		v6 = (int)v5.m128_f32[0];
		v7 = (int)_mm_shuffle_ps(v5, v5, 85).m128_f32[0];
		v107 = (int)v5.m128_f32[0];
		v106 = v7;
		if ((int)v5.m128_f32[0] < a1[136].m128_i32[3]
			|| v6 >= a1[137].m128_i32[1]
			|| v7 < a1[137].m128_i32[0]
			|| v7 >= a1[137].m128_i32[2]
			|| (v8 = *(_QWORD*)(a1[142].m128_u64[0]
				+ 8i64
				* (v6 % a1[137].m128_i32[3]
					+ a1[137].m128_i32[3]
					* (v7 % a1[138].m128_i32[0] + a1[138].m128_i32[0] * (v7 % a1[138].m128_i32[0] < 0))
					+ a1[137].m128_i32[3] * (unsigned int)(v6 % a1[137].m128_i32[3] < 0)))) == 0
			|| *(float*)(v8 + 196) <= a1[57].m128_f32[1])
		{
			v9 = (__m128*)a1[146].m128_u64[0];
			v93 = v99;
			v99[0] = dword_140C440D8;
			v94 = 0i64;
			v100 = v92;
			v101 = 0i64;
			*(float*)v92 = -*(float*)&dword_140C440D8;
			*(float*)&v92[1] = -*(float*)&dword_140C440D8;
			*(float*)&v99[1] = -*(float*)&dword_140C440D8;
			while (v9)
			{
				v10 = a1[57];
				v11 = _mm_sub_ps(v9[21], v10);
				v97 = _mm_sub_ps(v9[20], v10);
				v12 = (__m128)v97.m128_u32[2];
				v98 = v11;
				v103 = 0i64;
				v13 = _mm_max_ps(v97, _mm_min_ps((__m128)0i64, v11));
				v104 = _mm_mul_ps(_mm_add_ps(v97, v11), v4);
				v14 = _mm_shuffle_ps(v104, v104, 170).m128_f32[0];
				v10.m128_f32[0] = _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
				v15 = 1.0 / fsqrt((float)(v10.m128_f32[0] * v10.m128_f32[0]) + (float)(v13.m128_f32[0] * v13.m128_f32[0]));
				v9[81].m128_f32[1] = v15;
				if (_mm_shuffle_ps((__m128)0i64, (__m128)0i64, 170).m128_f32[0] <= v14)
					v16 = (__m128)v11.m128_u32[2];
				else
					v16 = v12;
				v17 = v97.m128_f32[1];
				if (*((float*)&v103 + 1) <= v104.m128_f32[1])
					v18 = (__m128)v98.m128_u32[1];
				else
					v18 = (__m128)v97.m128_u32[1];
				v19 = v98.m128_f32[0];
				v20 = v97.m128_f32[0];
				if (*(float*)&v103 <= v104.m128_f32[0])
					v21 = (__m128)v98.m128_u32[0];
				else
					v21 = (__m128)v97.m128_u32[0];
				v22 = _mm_unpacklo_ps(_mm_unpacklo_ps(v21, v16), _mm_unpacklo_ps(v18, (__m128)0i64));
				v23 = _mm_shuffle_ps(v22, v22, 170).m128_f32[0];
				v24 = 1.0 / fsqrt((float)(v23 * v23) + (float)(v22.m128_f32[0] * v22.m128_f32[0]));
				v9[81].m128_f32[2] = v24;
				if (v17 >= 0.0)
					v9[81].m128_f32[0] = v24 * v17;
				else
					v9[81].m128_f32[0] = v15 * v17;
				v25 = v9->m128_i32[3];
				v26 = v9->m128_i32[2];
				if (v25 >= v7)
				{
					if (v25 == v7)
					{
						if (v26 >= v6)
						{
							if (v26 == v6)
							{
								v27 = -3.1415927;
								v31 = 3.1415927;
							LABEL_42:
								v38 = v92;
								goto LABEL_43;
							}
							v27 = sub_1408FD190(v12.m128_f32[0], v20);
							v67 = sub_1408FD190(v11.m128_f32[2], v20);
							v109 = v25;
							v108 = v26 - 1;
							v68 = &v108;
							goto LABEL_66;
						}
						v36 = sub_1408FD190(v11.m128_f32[2], v19);
						v37 = v19;
					}
					else
					{
						if (v26 >= v6)
						{
							if (v26 == v6)
							{
								v27 = sub_1408FD190(v12.m128_f32[0], v19);
								v67 = sub_1408FD190(v12.m128_f32[0], v20);
								v110 = v26;
								v111 = v25 - 1;
								v68 = &v110;
							}
							else
							{
								v27 = sub_1408FD190(v12.m128_f32[0], v19);
								v67 = sub_1408FD190(v11.m128_f32[2], v20);
								v95[0] = v26;
								v95[1] = v25 - 1;
								v68 = v95;
							}
						LABEL_66:
							v31 = v67;
							v33 = sub_14035BF90((__int64)a1, v68);
							goto LABEL_67;
						}
						v36 = sub_1408FD190(v11.m128_f32[2], v19);
						v37 = v20;
					}
					v27 = v36;
					v69 = v26 + 1;
					v31 = sub_1408FD190(v12.m128_f32[0], v37);
					if (v69 < a1[136].m128_i32[3]
						|| v69 >= a1[137].m128_i32[1]
						|| v25 < a1[137].m128_i32[0]
						|| v25 >= a1[137].m128_i32[2])
					{
						goto LABEL_42;
					}
					v70 = a1[137].m128_i32[3];
					v33 = *(_QWORD*)(a1[142].m128_u64[0]
						+ 8i64
						* (v69 % v70
							+ v70 * (v25 % a1[138].m128_i32[0] + a1[138].m128_i32[0] * (v25 % a1[138].m128_i32[0] < 0))
							+ v70 * (unsigned int)(v69 % v70 < 0)));
				}
				else
				{
					if (v26 < v6)
					{
						v27 = sub_1408FD190(v11.m128_f32[2], v20);
						v28 = v12.m128_f32[0];
						goto LABEL_27;
					}
					if (v26 == v6)
					{
						v27 = sub_1408FD190(v11.m128_f32[2], v20);
						v28 = v11.m128_f32[2];
					LABEL_27:
						v29 = sub_1408FD190(v28, v19);
						v30 = v25 + 1;
						v31 = v29;
						if (v26 < a1[136].m128_i32[3]
							|| v26 >= a1[137].m128_i32[1]
							|| v30 < a1[137].m128_i32[0]
							|| v30 >= a1[137].m128_i32[2])
						{
							goto LABEL_42;
						}
						v32 = a1[137].m128_i32[3];
						v33 = *(_QWORD*)(a1[142].m128_u64[0]
							+ 8i64
							* (v26 % v32
								+ v32 * (v30 % a1[138].m128_i32[0] + a1[138].m128_i32[0] * (v30 % a1[138].m128_i32[0] < 0))
								+ v32 * (unsigned int)(v26 % v32 < 0)));
						goto LABEL_67;
					}
					v27 = sub_1408FD190(v12.m128_f32[0], v20);
					v34 = v26 - 1;
					v31 = sub_1408FD190(v11.m128_f32[2], v19);
					if (v34 < a1[136].m128_i32[3]
						|| v34 >= a1[137].m128_i32[1]
						|| v25 < a1[137].m128_i32[0]
						|| v25 >= a1[137].m128_i32[2])
					{
						goto LABEL_42;
					}
					v35 = a1[137].m128_i32[3];
					v33 = *(_QWORD*)(a1[142].m128_u64[0]
						+ 8i64
						* (v34 % v35
							+ v35 * (v25 % a1[138].m128_i32[0] + a1[138].m128_i32[0] * (v25 % a1[138].m128_i32[0] < 0))
							+ v35 * (unsigned int)(v34 % v35 < 0)));
				}
			LABEL_67:
				if (!v33)
					goto LABEL_42;
				if (!*(_QWORD*)(v33 + 1416))
					goto LABEL_42;
				v38 = (int*)(v33 + 1312);
				if (v27 <= *(float*)(v33 + 1312) || v9[3].m128_f32[0] <= *(float*)(v33 + 48))
					goto LABEL_42;
				for (i = *(_QWORD*)(v33 + 1328); i; i = *(_QWORD*)(i + 16))
					v38 = (int*)i;
			LABEL_43:
				v39 = (__int64)(v38 + 2);
				if (v27 > **((float**)v38 + 1))
				{
					do
					{
						v38 = *(int**)v39;
						v40 = *(float**)(*(_QWORD*)v39 + 8i64);
						v39 = *(_QWORD*)v39 + 8i64;
					} while (v27 > *v40);
				}
				m128_f32 = v9[82].m128_f32;
				v42 = v92;
				v9[82].m128_f32[0] = v27;
				if (v31 >= v27)
					v42 = (int*)&v9[82];
				v9[82].m128_i32[1] = v38[1];
				v43 = *((_QWORD*)v38 + 1);
				v9[83].m128_u64[0] = 0i64;
				v9[82].m128_u64[1] = v43;
				*((_QWORD*)v38 + 1) = m128_f32;
				v44 = (__int64)(v42 + 2);
				if (v31 >= **((float**)v42 + 1))
				{
					do
					{
						v42 = *(int**)v44;
						v45 = *(float**)(*(_QWORD*)v44 + 8i64);
						v44 = *(_QWORD*)v44 + 8i64;
					} while (v31 >= *v45);
				}
				v46 = *((_QWORD*)v42 + 1);
				v47 = *(float*)&dword_140C440D8;
				v96 = v46;
				v9[83].m128_f32[2] = v31;
				v9[83].m128_i32[3] = v42[1];
				v48 = *((_QWORD*)v42 + 1);
				v9[84].m128_u64[1] = 0i64;
				v9[84].m128_u64[0] = v48;
				*((_QWORD*)v42 + 1) = (char*)v9 + 1336;
				v49 = v9 + 82;
				if (m128_f32 != (float*)&v9[83].m128_u16[4])
				{
					do
					{
						v50 = fmaxf(v9[81].m128_f32[0], v49->m128_f32[1]);
						v49->m128_f32[1] = v50;
						v47 = fminf(v47, v50);
						v49 = (__m128*)v49->m128_u64[1];
					} while (v49 != (__m128*) & v9[83].m128_u16[4]);
				}
				v51 = v9[86].m128_u64[1];
				v9[81].m128_f32[0] = v47;
				if (v51)
				{
					v52 = 0i64;
					v53 = ((v51 - 1) >> 1) + 1;
					while (1)
					{
						v54 = v9[86].m128_u64[0];
						v55 = a1[57];
						v56 = _mm_sub_ps(*(__m128*)(v1 + v54 + 16), v55);
						v102 = _mm_sub_ps(*(__m128*)(v1 + v54), v55);
						v57 = _mm_shuffle_ps(v102, v102, 136);
						v105 = v56;
						v58 = fminf(_mm_shuffle_ps(v102, v102, 85).m128_f32[0], _mm_shuffle_ps(v56, v56, 85).m128_f32[0]);
						v59 = _mm_shuffle_ps(v56, v56, 136);
						if (v58 >= 0.0)
						{
							v72 = _mm_mul_ps(v57, v57);
							v73 = _mm_mul_ps(v59, v59);
							v66 = fsqrt(
								fmaxf(
									v72.m128_f32[0] + _mm_shuffle_ps(v72, v72, 85).m128_f32[0],
									_mm_shuffle_ps(v73, v73, 85).m128_f32[0] + v73.m128_f32[0]));
						}
						else
						{
							v60 = _mm_sub_ps(v59, v57);
							v61 = _mm_mul_ps(v60, v57);
							v62 = _mm_mul_ps(v60, v60);
							v63 = 0i64;
							v63.m128_f32[0] = fmaxf(
								0.0,
								fminf(
									-(float)((float)(_mm_shuffle_ps(v61, v61, 85).m128_f32[0] + v61.m128_f32[0])
										/ (float)(v62.m128_f32[0] + _mm_shuffle_ps(v62, v62, 85).m128_f32[0])),
									1.0));
							v64 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v63, v63, 0), v60), v57);
							v65 = _mm_mul_ps(v64, v64);
							v66 = fsqrt(v65.m128_f32[0] + _mm_shuffle_ps(v65, v65, 85).m128_f32[0]);
						}
						v74 = v58 / v66;
						v75 = sub_1408FD190(v102.m128_f32[2], v102.m128_f32[0]);
						v76 = sub_1408FD190(v105.m128_f32[2], v105.m128_f32[0]);
						v77 = v76;
						v78 = v75 <= v76;
						if (v75 >= v76)
							goto LABEL_78;
						if ((float)(v76 - v75) <= 3.1415927)
							break;
					LABEL_80:
						v79 = v75;
						v75 = v77;
						v77 = v79;
					LABEL_81:
						v80 = v92;
						if (v75 >= *m128_f32)
							v80 = (int*)&v9[82];
						v81 = (__int64)(v80 + 2);
						if (v75 > **((float**)v80 + 1))
						{
							do
							{
								v80 = *(int**)v81;
								v82 = *(float**)(*(_QWORD*)v81 + 8i64);
								v81 = *(_QWORD*)v81 + 8i64;
							} while (v75 > *v82);
						}
						v83 = v52 + v9[85].m128_u64[0];
						*(float*)v83 = v75;
						*(_DWORD*)(v83 + 4) = v80[1];
						v84 = *((_QWORD*)v80 + 1);
						*(_QWORD*)(v83 + 16) = 0i64;
						*(_QWORD*)(v83 + 8) = v84;
						*((_QWORD*)v80 + 1) = v83;
						v85 = v92;
						if (v77 >= *m128_f32)
							v85 = (int*)&v9[82];
						v86 = (__int64)(v85 + 2);
						if (v77 >= **((float**)v85 + 1))
						{
							do
							{
								v85 = *(int**)v86;
								v87 = *(float**)(*(_QWORD*)v86 + 8i64);
								v86 = *(_QWORD*)v86 + 8i64;
							} while (v77 >= *v87);
						}
						v88 = v52 + v9[85].m128_u64[0] + 24;
						*(float*)v88 = v77;
						*(_DWORD*)(v88 + 4) = v85[1];
						v89 = *((_QWORD*)v85 + 1);
						*(_QWORD*)(v88 + 16) = 0i64;
						*(_QWORD*)(v88 + 8) = v89;
						for (*((_QWORD*)v85 + 1) = v88; v83 != v88; v83 = *(_QWORD*)(v83 + 8))
							*(float*)(v83 + 4) = fmaxf(v74, *(float*)(v83 + 4));
						v1 += 32i64;
						v52 += 48i64;
						if (!--v53)
						{
							v46 = v96;
							v1 = 0i64;
							goto LABEL_93;
						}
					}
					v78 = v75 <= v76;
				LABEL_78:
					if (v78 || (float)(v75 - v76) >= 3.1415927)
						goto LABEL_81;
					goto LABEL_80;
				}
			LABEL_93:
				while (*((_QWORD*)v38 + 1) != v46)
				{
					v90 = *((_QWORD*)v38 + 1);
					if ((int*)v90 == v99)
					{
						v38 = v92;
					}
					else if (*(float*)(v90 + 4) == *((float*)v38 + 1) || *(float*)v90 == *(float*)v38)
					{
						*(_QWORD*)(v90 + 16) = v38;
						v91 = *((_QWORD*)v38 + 1);
						v38[1] = *(_DWORD*)(v91 + 4);
						*((_QWORD*)v38 + 1) = *(_QWORD*)(v91 + 8);
					}
					else
					{
						v38 = (int*)*((_QWORD*)v38 + 1);
					}
				}
				v9 = (__m128*)v9[89].m128_u64[0];
				v4 = (__m128)xmmword_140B7AC50;
				v6 = v107;
				v7 = v106;
			}
			a1[53].m128_i32[1] = 1;
		}
	}
}
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;
// 140B7B490: using guessed type __int128 xmmword_140B7B490;
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C43FB8: using guessed type int dword_140C43FB8;
// 140C440D8: using guessed type int dword_140C440D8;

