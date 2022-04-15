#include "../winhttp.h"

//----- (00000001407BCE70) ----------------------------------------------------
void __fastcall sub_1407BCE70(unsigned int* a1)
{
	unsigned int v1; // edi
	unsigned int v3; // r8d
	float v4; // xmm9_4
	int* v5; // rbx
	unsigned int v6; // ecx
	__int64 v7; // r11
	__int64 v8; // r10
	__int64 v9; // r8
	__m128 v10; // xmm2
	__m128 v11; // xmm3
	__m128i v12; // xmm2
	unsigned int i; // r10d
	__int64 v14; // rcx
	__int64 v15; // r8
	__int64 v16; // rdx
	int v17; // eax
	__int64 v18; // r9
	__int64 v19; // rcx
	int v20; // eax
	__int64 v21; // r8
	__int64 v22; // rcx
	int* v23; // rax
	__int64 v24; // rcx
	unsigned int v25; // ebx
	__int64 v26; // r11
	__int64 v27; // r10
	__int64 v28; // rdx
	__int64 v29; // rcx
	__int64 v30; // rdx
	__m128 v31; // xmm4
	__m128 v32; // xmm2
	__m128 v33; // xmm1
	__int64 v34; // rax
	__int64 v35; // r9
	__int64 v36; // r8
	__int64 v37; // rcx
	int* v38; // rax
	__int64 v39; // rcx
	int* v40; // rax
	unsigned __int64 v41; // r12
	__int64 v42; // rbx
	__int64 v43; // rax
	bool v44; // cf
	__int64 v45; // rax
	int* v46; // rax
	int v47; // ecx
	__int64 v48; // r15
	_QWORD* v49; // rax
	unsigned int v50; // edx
	__int64* v51; // r8
	__int64 v52; // rcx
	__int64 v53; // rcx
	int* v54; // rax
	int* v55; // rdx
	char* v56; // rdi
	unsigned __int64 v57; // r8
	char* v58; // rcx
	__int64 v59; // r14
	__int64 v60; // r13
	float v61; // xmm0_4
	__int64* v62; // r15
	__int64* v63; // rdx
	unsigned __int64 v64; // r12
	unsigned __int64 v65; // rdx
	__int64 v66; // r8
	__int64 v67; // rbx
	__int64 v68; // rbx
	unsigned int v69; // r12d
	float* v70; // r15
	unsigned __int64 v71; // rdi
	unsigned __int64 v72; // rdx
	int* v73; // rcx
	__int64 v74; // rbx
	__int64 v75; // rbx
	__int64 v76; // rcx
	float* v77; // rbx
	__int64 v78; // r12
	__int64* v79; // r13
	__int64(__fastcall * **v80)(float*, float*); // r14
	unsigned __int64 v81; // rdi
	int v82; // xmm6_4
	unsigned __int64 v83; // r12
	int* v84; // rdx
	int* v85; // rbx
	int* v86; // rax
	int* v87; // r9
	unsigned __int64 v88; // rax
	unsigned __int64 v89; // r8
	unsigned __int64 v90; // rax
	unsigned __int64 v91; // rdx
	__int64 v92; // r8
	__int64 v93; // rbx
	__int64 v94; // rbx
	int v95; // xmm6_4
	int* v96; // rax
	unsigned __int64 v97; // rax
	__int64 v98; // rcx
	float* v99; // rbx
	__int64 v100; // r12
	__int64* v101; // r15
	__int64(__fastcall * **v102)(float*, float*); // r14
	unsigned __int64 v103; // rdi
	int v104; // xmm6_4
	unsigned __int64 v105; // r15
	int* v106; // rdx
	int* v107; // rbx
	int* v108; // rax
	int* v109; // r9
	unsigned __int64 v110; // rax
	unsigned __int64 v111; // r8
	unsigned __int64 v112; // r13
	unsigned __int64 v113; // rdx
	__int64 v114; // r8
	__int64 v115; // rbx
	__int64 v116; // rbx
	int v117; // xmm6_4
	int* v118; // rax
	unsigned __int64 v119; // rax
	unsigned int v120; // r11d
	int* v121; // r10
	__int64 v122; // r8
	__int64 v123; // r9
	__int64 v124; // rcx
	__int64 v125; // rdx
	__int64 v126; // rdi
	__int64 v127; // rcx
	int v128; // edi
	int* v129; // rbx
	__int64 v130; // rcx
	__int64 v131; // rcx
	int* v132; // rax
	__int64 v133; // rcx
	int* v134; // rax
	__int64 v135; // rdx
	bool v136; // zf
	unsigned __int64 v137; // r8
	unsigned int v138; // r9d
	unsigned int* v139; // r8
	unsigned int v140; // edx
	float v141; // xmm9_4
	__m128 v142; // xmm4
	__m128 v143; // xmm2
	__m128 v144; // xmm1
	int* v145; // rbx
	int* v146; // rax
	unsigned int v147; // r10d
	__int64 v148; // rdx
	__m128 v149; // xmm4
	__m128 v150; // xmm1
	BOOL v151; // eax
	unsigned __int64 v152; // rcx
	__int64 v153; // rdx
	__int64 v154; // r8
	__int64 v155; // rcx
	__int64 v156; // rcx
	int* v157; // rax
	__int64 v158; // rcx
	__int64 v159; // [rsp+20h] [rbp-59h] BYREF
	float v160; // [rsp+28h] [rbp-51h]
	__int64 v161; // [rsp+30h] [rbp-49h] BYREF
	int v162; // [rsp+38h] [rbp-41h]
	__int64(__fastcall * v163)(float*, float*); // [rsp+40h] [rbp-39h] BYREF
	int* v164; // [rsp+48h] [rbp-31h] BYREF
	unsigned __int64 v165; // [rsp+50h] [rbp-29h]
	__int64 v166; // [rsp+58h] [rbp-21h]
	unsigned int v167; // [rsp+E0h] [rbp+67h]
	unsigned int v168; // [rsp+E0h] [rbp+67h]
	__int64 v169; // [rsp+E8h] [rbp+6Fh]
	unsigned __int64 v170; // [rsp+E8h] [rbp+6Fh]
	int* v171; // [rsp+F0h] [rbp+77h]

	v1 = 1;
	v3 = 1;
	v4 = *(float*)&dword_140C5F470;
	if (*a1 > 1)
	{
		while (*(_DWORD*)(*((_QWORD*)a1 + 1) + 4i64 * (v3 - 1)) < *(_DWORD*)(*((_QWORD*)a1 + 1) + 4i64 * v3))
		{
			if (++v3 >= *a1)
				goto LABEL_6;
		}
		sub_1407BDEF0(a1);
	}
LABEL_6:
	v5 = (int*)*((_QWORD*)a1 + 1);
	if (*v5 < 0)
	{
		v6 = *a1;
		LODWORD(v7) = 0;
		if (*a1)
		{
			do
			{
				if (v5[(unsigned int)v7] >= 0)
					break;
				LODWORD(v7) = v7 + 1;
			} while ((unsigned int)v7 < v6);
			if ((_DWORD)v7)
			{
				if ((_DWORD)v7 == v6)
				{
					LODWORD(v7) = v7 - 1;
					v5[(unsigned int)v7] = 0;
				}
				else if (v5[(unsigned int)v7])
				{
					v8 = *((_QWORD*)a1 + 2);
					v7 = (unsigned int)(v7 - 1);
					v9 = 3 * v7;
					v10 = _mm_unpacklo_ps((__m128) * (unsigned int*)(v8 + 12 * v7 + 4), (__m128)0i64);
					v11 = _mm_unpacklo_ps(
						_mm_unpacklo_ps((__m128) * (unsigned int*)(v8 + 12 * v7), (__m128) * (unsigned int*)(v8 + 12 * v7 + 8)),
						v10);
					v10.m128_f32[0] = (float)-v5[v7] / (float)(v5[(unsigned int)(v7 + 1)] - v5[v7]);
					v12 = (__m128i)_mm_add_ps(
						_mm_mul_ps(
							_mm_shuffle_ps(v10, v10, 0),
							_mm_sub_ps(
								_mm_unpacklo_ps(
									_mm_unpacklo_ps(
										(__m128) * (unsigned int*)(v8 + 12i64 * (unsigned int)(v7 + 1)),
										(__m128) * (unsigned int*)(v8 + 12i64 * (unsigned int)(v7 + 1) + 8)),
									_mm_unpacklo_ps(
										(__m128) * (unsigned int*)(v8 + 12i64 * (unsigned int)(v7 + 1) + 4),
										(__m128)0i64)),
								v11)),
						v11);
					*(_DWORD*)(v8 + 4 * v9) = _mm_cvtsi128_si32(v12);
					*(_DWORD*)(v8 + 4 * v9 + 4) = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4));
					*(_DWORD*)(v8 + 4 * v9 + 8) = _mm_cvtsi128_si32(_mm_srli_si128(v12, 8));
					*(_DWORD*)(*((_QWORD*)a1 + 1) + 4 * v7) = 0;
				}
				if ((_DWORD)v7)
				{
					for (i = 0; (unsigned int)v7 < *a1; *(_DWORD*)(v18 + 4 * v21 + 8) = *(_DWORD*)(v18 + 4 * v19 + 8))
					{
						v14 = *((_QWORD*)a1 + 1);
						v15 = (unsigned int)v7;
						v16 = i;
						v17 = *(_DWORD*)(v14 + 4i64 * (unsigned int)v7);
						LODWORD(v7) = v7 + 1;
						++i;
						*(_DWORD*)(v14 + 4 * v16) = v17;
						v18 = *((_QWORD*)a1 + 2);
						v19 = 3 * v15;
						v20 = *(_DWORD*)(v18 + 12 * v15);
						v21 = 3 * v16;
						*(_DWORD*)(v18 + 4 * v21) = v20;
						*(_DWORD*)(v18 + 4 * v21 + 4) = *(_DWORD*)(v18 + 4 * v19 + 4);
					}
					v22 = *((_QWORD*)a1 + 1);
					*a1 = i;
					v23 = sub_14018C320(v22, 4i64 * i, 0);
					v24 = *((_QWORD*)a1 + 2);
					*((_QWORD*)a1 + 1) = v23;
					*((_QWORD*)a1 + 2) = sub_14018C320(v24, 12i64 * *a1, 0);
				}
			}
		}
	}
	if (v4 < 0.0)
	{
		if (*a1 > 1)
		{
			v147 = 1;
			do
			{
				v148 = *((_QWORD*)a1 + 2);
				if (v4 < 0.0)
				{
					v152 = *(_QWORD*)(v148 + 12i64 * (v1 - 1)) - *(_QWORD*)(v148 + 12i64 * v147);
					if (!v152)
						v152 = *(unsigned int*)(v148 + 12i64 * (v1 - 1) + 8)
						- (unsigned __int64)*(unsigned int*)(v148 + 12i64 * v147 + 8);
					v151 = v152 == 0;
				}
				else
				{
					v151 = 0;
					v149 = _mm_sub_ps(
						_mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(v148 + 12i64 * (v1 - 1)),
								(__m128) * (unsigned int*)(v148 + 12i64 * (v1 - 1) + 8)),
							_mm_unpacklo_ps((__m128) * (unsigned int*)(v148 + 12i64 * (v1 - 1) + 4), (__m128)0i64)),
						_mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(v148 + 12i64 * v147),
								(__m128) * (unsigned int*)(v148 + 12i64 * v147 + 8)),
							_mm_unpacklo_ps((__m128) * (unsigned int*)(v148 + 12i64 * v147 + 4), (__m128)0i64)));
					v150 = _mm_mul_ps(v149, v149);
					LOBYTE(v151) = (float)(v4 * v4) > (float)((float)(v150.m128_f32[0] + _mm_shuffle_ps(v150, v150, 85).m128_f32[0])
						+ _mm_shuffle_ps(v150, v150, 170).m128_f32[0]);
				}
				if (!v151)
				{
					v153 = v1++;
					*(_DWORD*)(*((_QWORD*)a1 + 1) + 4 * v153) = *(_DWORD*)(*((_QWORD*)a1 + 1) + 4i64 * v147);
					v154 = *((_QWORD*)a1 + 2);
					v155 = 3 * v153;
					*(_DWORD*)(v154 + 4 * v155) = *(_DWORD*)(v154 + 12i64 * v147);
					*(_DWORD*)(v154 + 4 * v155 + 4) = *(_DWORD*)(v154 + 12i64 * v147 + 4);
					*(_DWORD*)(v154 + 4 * v155 + 8) = *(_DWORD*)(v154 + 12i64 * v147 + 8);
				}
				++v147;
			} while (v147 < *a1);
			v156 = *((_QWORD*)a1 + 1);
			*a1 = v1;
			v157 = sub_14018C320(v156, 4i64 * v1, 0);
			v158 = *((_QWORD*)a1 + 2);
			*((_QWORD*)a1 + 1) = v157;
			*((_QWORD*)a1 + 2) = sub_14018C320(v158, 12i64 * *a1, 0);
		}
		return;
	}
	if (*a1 <= 2)
		goto LABEL_160;
	v25 = 0;
	LODWORD(v26) = 0;
	if (*a1)
	{
		do
		{
			v27 = v25 + 1;
			*(_DWORD*)(*((_QWORD*)a1 + 1) + 4i64 * (unsigned int)v26) = *(_DWORD*)(*((_QWORD*)a1 + 1) + 4i64 * v25);
			v28 = *((_QWORD*)a1 + 2);
			v29 = 3i64 * (unsigned int)v26;
			v26 = (unsigned int)(v26 + 1);
			*(_DWORD*)(v28 + 4 * v29) = *(_DWORD*)(v28 + 12i64 * v25);
			*(_DWORD*)(v28 + 4 * v29 + 4) = *(_DWORD*)(v28 + 12i64 * v25 + 4);
			*(_DWORD*)(v28 + 4 * v29 + 8) = *(_DWORD*)(v28 + 12i64 * v25 + 8);
			if ((unsigned int)v27 < *a1)
			{
				v30 = *((_QWORD*)a1 + 2);
				v31 = _mm_unpacklo_ps(
					_mm_unpacklo_ps(
						(__m128) * (unsigned int*)(v30 + 12i64 * v25),
						(__m128) * (unsigned int*)(v30 + 12i64 * v25 + 8)),
					_mm_unpacklo_ps((__m128) * (unsigned int*)(v30 + 12i64 * v25 + 4), (__m128)0i64));
				do
				{
					v32 = _mm_sub_ps(
						v31,
						_mm_unpacklo_ps(
							_mm_unpacklo_ps(
								(__m128) * (unsigned int*)(v30 + 12 * v27),
								(__m128) * (unsigned int*)(v30 + 12 * v27 + 8)),
							_mm_unpacklo_ps((__m128) * (unsigned int*)(v30 + 12 * v27 + 4), (__m128)0i64)));
					v33 = _mm_mul_ps(v32, v32);
					if ((float)((float)(v33.m128_f32[0] + _mm_shuffle_ps(v33, v33, 85).m128_f32[0])
						+ _mm_shuffle_ps(v33, v33, 170).m128_f32[0]) >= 9.9999994e-11)
						break;
					v27 = (unsigned int)(v27 + 1);
				} while ((unsigned int)v27 < *a1);
			}
			v34 = (unsigned int)(v27 - 1);
			if ((unsigned int)v34 > v25)
			{
				*(_DWORD*)(*((_QWORD*)a1 + 1) + 4 * v26) = *(_DWORD*)(*((_QWORD*)a1 + 1) + 4 * v34);
				v35 = *((_QWORD*)a1 + 2);
				v36 = 3 * v26;
				LODWORD(v26) = v26 + 1;
				*(_DWORD*)(v35 + 4 * v36) = *(_DWORD*)(v35 + 12i64 * (unsigned int)v34);
				*(_DWORD*)(v35 + 4 * v36 + 4) = *(_DWORD*)(v35 + 12i64 * (unsigned int)v34 + 4);
				*(_DWORD*)(v35 + 4 * v36 + 8) = *(_DWORD*)(v35 + 12i64 * (unsigned int)v34 + 8);
			}
			v25 = v27;
		} while ((unsigned int)v27 < *a1);
	}
	v37 = *((_QWORD*)a1 + 1);
	*a1 = v26;
	v38 = sub_14018C320(v37, 4i64 * (unsigned int)v26, 0);
	v39 = *((_QWORD*)a1 + 2);
	*((_QWORD*)a1 + 1) = v38;
	v40 = sub_14018C320(v39, 12i64 * *a1, 0);
	v41 = *a1;
	*((_QWORD*)a1 + 2) = v40;
	v167 = v41;
	if ((unsigned int)v41 <= 2)
		goto LABEL_160;
	v42 = (unsigned int)v41;
	v169 = (unsigned int)v41;
	v43 = 40 * v41;
	if (!is_mul_ok(v41, 0x28ui64))
		v43 = -1i64;
	v44 = __CFADD__(v43, 8i64);
	v45 = v43 + 8;
	if (v44)
		v45 = -1i64;
	v46 = sub_14018B280(v45, 8u);
	if (v46)
	{
		v47 = v41 - 1;
		v48 = (__int64)(v46 + 2);
		*v46 = v41;
		v171 = v46 + 2;
		if ((int)v41 - 1 >= 0)
		{
			v49 = v46 + 8;
			do
			{
				--v47;
				*v49 = 0i64;
				v49 += 5;
			} while (v47 >= 0);
		}
	}
	else
	{
		v48 = 0i64;
		v171 = 0i64;
	}
	v50 = 0;
	v51 = (__int64*)(v48 + 16);
	do
	{
		if (v50)
			v52 = v48 + 40i64 * (v50 - 1);
		else
			v52 = 0i64;
		*(v51 - 1) = v52;
		if (v50 >= *a1 - 1)
			v53 = 0i64;
		else
			v53 = v48 + 40i64 * (v50 + 1);
		*((_DWORD*)v51 - 3) = v50++;
		*v51 = v53;
		v51 += 5;
	} while (v50 < (unsigned int)v41);
	v165 = 0i64;
	v164 = 0i64;
	v163 = sub_1407BE6C0;
	v54 = sub_14018B280(16 * (v41 + 1), 0);
	if (v54)
	{
		*((_QWORD*)v54 + 1) = (unsigned int)v41;
		*(_QWORD*)v54 = off_140B55060;
	}
	else
	{
		v54 = 0i64;
	}
	v56 = (char*)(v54 + 4);
	if (v164 != v54 + 4)
	{
		v57 = 0i64;
		if (v165)
		{
			v55 = v54 + 4;
			do
			{
				if (v55)
				{
					v58 = (char*)v164 + (char*)v55 - v56;
					*(_QWORD*)v55 = *(_QWORD*)v58;
					v55[2] = *((_DWORD*)v58 + 2);
				}
				++v57;
				v55 += 4;
			} while (v57 < v165);
		}
		if (v164)
			(*(void(__fastcall**)(_QWORD*, int*, unsigned __int64))(*((_QWORD*)v164 - 2) + 8i64))(
				(_QWORD*)v164 - 2,
				v55,
				v57);
		v164 = (int*)v56;
	}
	v166 = v48;
	v59 = v48 + 24;
	v60 = v48;
	do
	{
		v61 = sub_1407BE0E0((__int64)a1, v60);
		*(float*)(v59 - 24) = v61;
		v62 = *(__int64**)v59;
		if (!*(_QWORD*)v59)
		{
			v160 = v61;
			*(_QWORD*)v59 = &v163;
			v159 = v59;
			v63 = &v159;
		LABEL_71:
			*(_QWORD*)(v59 + 8) = sub_1407BE5E0((__int64*)&v164, (__int64)v63);
			sub_1407BE330((__int64)&v163, v59);
			goto LABEL_72;
		}
		if (v62 != (__int64*)&v163)
		{
			v64 = *(_QWORD*)(v59 + 8);
			*(_QWORD*)v59 = 0i64;
			v65 = v62[2] - 1;
			if (v64 >= v65)
			{
				sub_1407BE530(v62 + 1, v65);
			}
			else
			{
				v66 = v62[1];
				v67 = 2 * v64;
				*(_QWORD*)(v66 + 8 * v67) = *(_QWORD*)(v66 + 16 * v65);
				*(_QWORD*)(v66 + 8 * v67 + 8) = *(_QWORD*)(v66 + 16 * v65 + 8);
				sub_1407BE530(v62 + 1, v65);
				v68 = *(_QWORD*)(v62[1] + 16 * v64);
				*(_QWORD*)(v68 + 8) = v64;
				if (!(unsigned int)sub_1407BE330((__int64)v62, v68))
					sub_1407BE410((__int64)v62, v68);
				v42 = v169;
			}
			v161 = v59;
			v63 = &v161;
			*(_QWORD*)v59 = &v163;
			v162 = *(_DWORD*)(v59 - 24);
			goto LABEL_71;
		}
		v164[4 * *(_QWORD*)(v59 + 8) + 2] = *(_DWORD*)(v59 - 24);
		if (!(unsigned int)sub_1407BE330((__int64)&v163, v59))
			sub_1407BE410((__int64)&v163, v59);
	LABEL_72:
		v60 += 40i64;
		v59 += 40i64;
		v169 = --v42;
	} while (v42);
	v69 = v167;
	if (v167 > 2)
	{
		while (1)
		{
			if (v165)
				v70 = *(float**)v164;
			else
				v70 = 0i64;
			if ((float)(v4 * v4) < *(v70 - 6))
				goto LABEL_147;
			if (*(__int64(__fastcall***)(float*, float*))v70 == &v163)
			{
				v71 = *((_QWORD*)v70 + 1);
				*(_QWORD*)v70 = 0i64;
				v72 = v165 - 1;
				if (v71 >= v165 - 1)
				{
					sub_1407BE530((__int64*)&v164, v72);
				}
				else
				{
					v73 = v164;
					v74 = 2 * v71;
					*(_QWORD*)&v164[2 * v74] = *(_QWORD*)&v164[4 * v72];
					*(_QWORD*)&v73[2 * v74 + 2] = *(_QWORD*)&v73[4 * v72 + 2];
					sub_1407BE530((__int64*)&v164, v72);
					v75 = *(_QWORD*)&v164[4 * v71];
					*(_QWORD*)(v75 + 8) = v71;
					if (!(unsigned int)sub_1407BE330((__int64)&v163, v75))
						sub_1407BE410((__int64)&v163, v75);
				}
			}
			v76 = *((_QWORD*)v70 - 2);
			v168 = --v69;
			if (v76)
				break;
		LABEL_115:
			v98 = *((_QWORD*)v70 - 1);
			if (v98)
			{
				*(_QWORD*)(v98 + 8) = *((_QWORD*)v70 - 2);
				v99 = (float*)*((_QWORD*)v70 - 1);
				*v99 = sub_1407BE0E0((__int64)a1, (__int64)v99);
				v100 = *((_QWORD*)v70 - 1);
				v101 = *(__int64**)(v100 + 24);
				v102 = (__int64(__fastcall***)(float*, float*))(v100 + 24);
				if (!v101)
				{
					*v102 = &v163;
					v103 = v165;
					v104 = *(_DWORD*)v100;
					v105 = v165 + 1;
					v107 = sub_14018DB00((__int64)v164, v165 + 1, 16i64);
					v108 = &v107[4 * v103];
					if (v108)
					{
						v108[2] = v104;
						*(_QWORD*)v108 = v102;
					}
					v109 = v164;
					if (v164 != v107)
					{
						v110 = v165;
						v111 = 0i64;
						if (v165)
						{
							v106 = v107;
							do
							{
								if (v106)
								{
									*(_QWORD*)v106 = *(_QWORD*)((char*)v109 + (char*)v106 - (char*)v107);
									v106[2] = *(int*)((char*)v109 + (char*)v106 - (char*)v107 + 8);
									v110 = v165;
									v109 = v164;
								}
								++v111;
								v106 += 4;
							} while (v111 < v110);
						}
						goto LABEL_141;
					}
					goto LABEL_144;
				}
				if (v101 == (__int64*)&v163)
				{
					v164[4 * *(_QWORD*)(v100 + 32) + 2] = *(_DWORD*)v100;
					if (!(unsigned int)sub_1407BE330((__int64)&v163, v100 + 24))
						sub_1407BE410((__int64)&v163, v100 + 24);
				}
				else
				{
					v112 = *(_QWORD*)(v100 + 32);
					*v102 = 0i64;
					v113 = v101[2] - 1;
					if (v112 >= v113)
					{
						sub_1407BE530(v101 + 1, v113);
					}
					else
					{
						v114 = v101[1];
						v115 = 2 * v112;
						*(_QWORD*)(v114 + 8 * v115) = *(_QWORD*)(v114 + 16 * v113);
						*(_QWORD*)(v114 + 8 * v115 + 8) = *(_QWORD*)(v114 + 16 * v113 + 8);
						sub_1407BE530(v101 + 1, v113);
						v116 = *(_QWORD*)(v101[1] + 16 * v112);
						*(_QWORD*)(v116 + 8) = v112;
						if (!(unsigned int)sub_1407BE330((__int64)v101, v116))
							sub_1407BE410((__int64)v101, v116);
					}
					*v102 = &v163;
					v103 = v165;
					v117 = *(_DWORD*)v100;
					v105 = v165 + 1;
					v107 = sub_14018DB00((__int64)v164, v165 + 1, 16i64);
					v118 = &v107[4 * v103];
					if (v118)
					{
						v118[2] = v117;
						*(_QWORD*)v118 = v102;
					}
					v109 = v164;
					if (v164 != v107)
					{
						v119 = v165;
						v111 = 0i64;
						if (v165)
						{
							v106 = v107;
							do
							{
								if (v106)
								{
									*(_QWORD*)v106 = *(_QWORD*)((char*)v109 + (char*)v106 - (char*)v107);
									v106[2] = *(int*)((char*)v109 + (char*)v106 - (char*)v107 + 8);
									v119 = v165;
									v109 = v164;
								}
								++v111;
								v106 += 4;
							} while (v111 < v119);
						}
					LABEL_141:
						if (v109)
							(*(void(__fastcall**)(_QWORD*, int*, unsigned __int64))(*((_QWORD*)v109 - 2) + 8i64))(
								(_QWORD*)v109 - 2,
								v106,
								v111);
						v164 = v107;
					}
				LABEL_144:
					v165 = v105;
					*(_QWORD*)(v100 + 32) = v103;
					sub_1407BE330((__int64)&v163, v100 + 24);
				}
				v69 = v168;
			}
			if (v69 <= 2)
				goto LABEL_147;
		}
		*(_QWORD*)(v76 + 16) = *((_QWORD*)v70 - 1);
		v77 = (float*)*((_QWORD*)v70 - 2);
		*v77 = sub_1407BE0E0((__int64)a1, (__int64)v77);
		v78 = *((_QWORD*)v70 - 2);
		v79 = *(__int64**)(v78 + 24);
		v80 = (__int64(__fastcall***)(float*, float*))(v78 + 24);
		if (!v79)
		{
			*v80 = &v163;
			v81 = v165;
			v82 = *(_DWORD*)v78;
			v83 = v165 + 1;
			v85 = sub_14018DB00((__int64)v164, v165 + 1, 16i64);
			v86 = &v85[4 * v81];
			if (v86)
			{
				v86[2] = v82;
				*(_QWORD*)v86 = v80;
			}
			v87 = v164;
			if (v164 != v85)
			{
				v88 = v165;
				v89 = 0i64;
				if (v165)
				{
					v84 = v85;
					do
					{
						if (v84)
						{
							*(_QWORD*)v84 = *(_QWORD*)((char*)v87 + (char*)v84 - (char*)v85);
							v84[2] = *(int*)((char*)v87 + (char*)v84 - (char*)v85 + 8);
							v88 = v165;
							v87 = v164;
						}
						++v89;
						v84 += 4;
					} while (v89 < v88);
				}
				goto LABEL_110;
			}
			goto LABEL_113;
		}
		if (v79 == (__int64*)&v163)
		{
			v164[4 * *(_QWORD*)(v78 + 32) + 2] = *(_DWORD*)v78;
			if (!(unsigned int)sub_1407BE330((__int64)&v163, v78 + 24))
				sub_1407BE410((__int64)&v163, v78 + 24);
		}
		else
		{
			v90 = *(_QWORD*)(v78 + 32);
			*v80 = 0i64;
			v91 = v79[2] - 1;
			v170 = v90;
			if (v90 >= v91)
			{
				sub_1407BE530(v79 + 1, v91);
			}
			else
			{
				v92 = v79[1];
				v93 = 2 * v90;
				*(_QWORD*)(v92 + 8 * v93) = *(_QWORD*)(v92 + 16 * v91);
				*(_QWORD*)(v92 + 8 * v93 + 8) = *(_QWORD*)(v92 + 16 * v91 + 8);
				sub_1407BE530(v79 + 1, v91);
				v94 = *(_QWORD*)(v79[1] + 8 * v93);
				*(_QWORD*)(v94 + 8) = v170;
				if (!(unsigned int)sub_1407BE330((__int64)v79, v94))
					sub_1407BE410((__int64)v79, v94);
			}
			*v80 = &v163;
			v81 = v165;
			v95 = *(_DWORD*)v78;
			v83 = v165 + 1;
			v85 = sub_14018DB00((__int64)v164, v165 + 1, 16i64);
			v96 = &v85[4 * v81];
			if (v96)
			{
				v96[2] = v95;
				*(_QWORD*)v96 = v80;
			}
			v87 = v164;
			if (v164 != v85)
			{
				v97 = v165;
				v89 = 0i64;
				if (v165)
				{
					v84 = v85;
					do
					{
						if (v84)
						{
							*(_QWORD*)v84 = *(_QWORD*)((char*)v87 + (char*)v84 - (char*)v85);
							v84[2] = *(int*)((char*)v87 + (char*)v84 - (char*)v85 + 8);
							v97 = v165;
							v87 = v164;
						}
						++v89;
						v84 += 4;
					} while (v89 < v97);
				}
			LABEL_110:
				if (v87)
					(*(void(__fastcall**)(_QWORD*, int*, unsigned __int64))(*((_QWORD*)v87 - 2) + 8i64))(
						(_QWORD*)v87 - 2,
						v84,
						v89);
				v164 = v85;
			}
		LABEL_113:
			v165 = v83;
			v80[1] = (__int64(__fastcall**)(float*, float*))v81;
			sub_1407BE330((__int64)&v163, (__int64)v80);
		}
		v69 = v168;
		goto LABEL_115;
	}
LABEL_147:
	v120 = 0;
	v121 = v171;
	if (v171)
	{
		do
		{
			v122 = v120++;
			*(_DWORD*)(*((_QWORD*)a1 + 1) + 4 * v122) = *(_DWORD*)(*((_QWORD*)a1 + 1) + 4i64 * (unsigned int)v121[1]);
			v123 = *((_QWORD*)a1 + 2);
			v124 = 3i64 * (unsigned int)v121[1];
			v125 = 3 * v122;
			*(_DWORD*)(v123 + 4 * v125) = *(_DWORD*)(v123 + 12i64 * (unsigned int)v121[1]);
			*(_DWORD*)(v123 + 4 * v125 + 4) = *(_DWORD*)(v123 + 4 * v124 + 4);
			*(_DWORD*)(v123 + 4 * v125 + 8) = *(_DWORD*)(v123 + 4 * v124 + 8);
			v121 = (int*)*((_QWORD*)v121 + 2);
		} while (v121);
		v126 = *(v171 - 2);
		v127 = 5 * v126;
		v128 = v126 - 1;
		if (v128 >= 0)
		{
			v129 = &v171[2 * v127 + 6];
			do
			{
				v130 = *((_QWORD*)v129 - 5);
				v129 -= 10;
				if (v130)
					sub_1407BE030(v130, v129);
				--v128;
			} while (v128 >= 0);
		}
		sub_14018B900((__int64)(v171 - 2), 0);
	}
	v131 = *((_QWORD*)a1 + 1);
	*a1 = v69;
	v132 = sub_14018C320(v131, 4i64 * v69, 0);
	v133 = *((_QWORD*)a1 + 2);
	*((_QWORD*)a1 + 1) = v132;
	v134 = sub_14018C320(v133, 12i64 * *a1, 0);
	v136 = v165 == 0;
	*((_QWORD*)a1 + 2) = v134;
	v137 = 0i64;
	if (!v136)
	{
		v135 = 0i64;
		do
		{
			++v137;
			v135 += 4i64;
			**(_QWORD**)&v164[v135 - 4] = 0i64;
		} while (v137 < v165);
	}
	if (v164)
		(*(void(__fastcall**)(_QWORD*, __int64, unsigned __int64))(*((_QWORD*)v164 - 2) + 8i64))(
			(_QWORD*)v164 - 2,
			v135 * 4,
			v137);
LABEL_160:
	v138 = *a1;
	if (*a1 > 1)
	{
		v139 = (unsigned int*)*((_QWORD*)a1 + 2);
		v140 = 1;
		v141 = v4 * v4;
		v142 = _mm_unpacklo_ps(
			_mm_unpacklo_ps((__m128) * v139, (__m128)v139[2]),
			_mm_unpacklo_ps((__m128)v139[1], (__m128)0i64));
		do
		{
			v143 = _mm_sub_ps(
				v142,
				_mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v139[3 * v140], (__m128)v139[3 * v140 + 2]),
					_mm_unpacklo_ps((__m128)v139[3 * v140 + 1], (__m128)0i64)));
			v144 = _mm_mul_ps(v143, v143);
			if (v141 <= (float)((float)(v144.m128_f32[0] + _mm_shuffle_ps(v144, v144, 85).m128_f32[0])
				+ _mm_shuffle_ps(v144, v144, 170).m128_f32[0]))
				break;
			++v140;
		} while (v140 < v138);
		if (v140 == v138)
		{
			if (v138 != 1)
			{
				v145 = sub_14018C320(*((_QWORD*)a1 + 1), 4ui64, 2u);
				v146 = sub_14018C320(*((_QWORD*)a1 + 2), 0xCui64, 2u);
				*a1 = 1;
				*((_QWORD*)a1 + 1) = v145;
				*((_QWORD*)a1 + 2) = v146;
			}
			**((_DWORD**)a1 + 1) = 0;
		}
	}
}
// 1407BD26A: conditional instruction was optimized away because r12d.4>=3u
// 1407BD2C8: conditional instruction was optimized away because r12d.4>=3u
// 1407BD35F: conditional instruction was optimized away because r12d.4>=3u
// 1407BD349: variable 'v55' is possibly undefined
// 1407BD78E: variable 'v84' is possibly undefined
// 1407BD9C9: variable 'v106' is possibly undefined
// 1407BDB3A: variable 'v135' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C5F470: using guessed type int dword_140C5F470;

