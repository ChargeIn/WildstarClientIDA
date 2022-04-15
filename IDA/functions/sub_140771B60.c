#include "../winhttp.h"

//----- (0000000140771B60) ----------------------------------------------------
__int64 __fastcall sub_140771B60(__int64 a1, __int64 a2, __m128* a3)
{
	__int64 v3; // rdi
	__int64 v4; // rcx
	__m128* v5; // r14
	int* v7; // rax
	float v8; // xmm12_4
	__int64 v9; // rcx
	float v10; // xmm12_4
	unsigned __int64 v11; // rax
	float v12; // xmm12_4
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // eax
	__m128 v16; // xmm2
	__m128 v17; // xmm3
	int v18; // r10d
	__m128 v19; // xmm5
	__m128 v20; // xmm2
	int v21; // ecx
	__m128 v22; // xmm1
	__m128 v23; // xmm4
	int v24; // ecx
	__m128 v25; // xmm3
	int v26; // ecx
	int v27; // ecx
	int v28; // ecx
	float v29; // xmm3_4
	int v30; // ecx
	unsigned __int64 v31; // rcx
	__int64 v32; // rbx
	__int64 v33; // rax
	int v34; // edi
	__int64 v35; // r13
	__int64 v36; // rcx
	__m128* v37; // rax
	__m128 v38; // xmm1
	unsigned __int64 v39; // r9
	__int64 v40; // r8
	__int64 v41; // rdi
	__int64 v42; // rax
	int v43; // eax
	int v44; // r12d
	unsigned int v45; // edi
	__int64 v46; // r9
	int v47; // r14d
	_DWORD* v48; // rdx
	__int64 v49; // rcx
	unsigned __int64* v50; // r15
	unsigned __int64 v51; // r14
	__int64 v52; // rdi
	__int64 v53; // rax
	__int64 v54; // rcx
	__int64 v55; // rax
	__int64* v56; // rax
	__int64 v57; // rax
	__int64 v58; // r10
	__int64 v59; // r9
	int v60; // r12d
	_DWORD* v61; // rcx
	unsigned __int64* v62; // r15
	unsigned __int64 v63; // r14
	__int64 v64; // rdi
	__int64 v65; // rax
	__int64 v66; // rcx
	__int64 v67; // rax
	__int64* v68; // rax
	__int64 v69; // rax
	__int64 v70; // r10
	__int64 v71; // r9
	int v72; // r13d
	_DWORD* v73; // rcx
	unsigned __int64* v74; // r15
	unsigned __int64 v75; // r14
	__int64 v76; // rdi
	__int64 v77; // rax
	__int64 v78; // rcx
	__int64 v79; // r9
	_DWORD* v80; // rdx
	__int64 v81; // rcx
	__int64 v82; // r8
	__int64 v83; // rdx
	__int64 v84; // r9
	_DWORD* v85; // rcx
	__int64 v86; // r8
	__int64 v87; // rdx
	double v89; // [rsp+28h] [rbp-99h]
	double v90; // [rsp+28h] [rbp-99h]
	_QWORD v91[3]; // [rsp+30h] [rbp-91h] BYREF
	__int128 v92; // [rsp+48h] [rbp-79h]
	unsigned __int64 v93; // [rsp+58h] [rbp-69h]
	__int64 v94; // [rsp+60h] [rbp-61h]
	__m128 v95; // [rsp+68h] [rbp-59h]
	__int64 v96; // [rsp+78h] [rbp-49h] BYREF
	__int64 v97; // [rsp+80h] [rbp-41h]
	__int128 v98; // [rsp+98h] [rbp-29h] BYREF
	char v99[8]; // [rsp+A8h] [rbp-19h] BYREF
	__int64 v101; // [rsp+130h] [rbp+6Fh]
	int v102; // [rsp+130h] [rbp+6Fh]
	double v103; // [rsp+130h] [rbp+6Fh]
	double v105; // [rsp+138h] [rbp+77h]
	int v106; // [rsp+140h] [rbp+7Fh]
	double v107; // [rsp+140h] [rbp+7Fh]

	v3 = a1;
	v4 = *(_QWORD*)(a1 + 8);
	v5 = a3;
	if (v4)
	{
		v7 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 88i64))(v4);
		sub_14044A3B0((__int64)&v91[1], v7);
	}
	else
	{
		*(_OWORD*)&v91[1] = xmmword_140C784E0;
		v92 = xmmword_140C784F0;
	}
	v8 = *(float*)&v92;
	v9 = *(_QWORD*)(a2 + 32);
	*(_QWORD*)&v92 = a2;
	v10 = v8 - *(float*)&v91[1];
	v91[1] = off_140B569F0;
	v11 = *(_QWORD*)(v9 + 112);
	DWORD2(v92) = 1;
	v12 = (float)((float)(v10 / v10) * 20.0) * (float)((float)(v10 / v10) * 20.0);
	if (*(_QWORD*)(v9 + 120) >= v11)
		sub_14005E2C0(a2);
	v13 = *(_QWORD*)(a2 + 16);
	v14 = sub_14005C1B0(a2, 0, 0);
	*(_DWORD*)(v13 + 8) = 5;
	*(_QWORD*)v13 = v14;
	*(_QWORD*)(a2 + 16) += 16i64;
	v15 = sub_1400578C0(a2);
	v16 = (__m128)(unsigned int)dword_140C3B738;
	v17 = (__m128)(unsigned int)dword_140C3B738;
	v16.m128_f32[0] = *(float*)&dword_140C3B738 + v5->m128_f32[2];
	v18 = v15;
	LODWORD(v91[2]) = v15;
	v16.m128_f32[0] = (float)(v16.m128_f32[0] / *(float*)&dword_140C66F48) + 1.0;
	v17.m128_f32[0] = (float)((float)(*(float*)&dword_140C3B738 + v5->m128_f32[0]) / *(float*)&dword_140C66F1C) + 0.5;
	v95 = _mm_unpacklo_ps(_mm_unpacklo_ps(v17, (__m128)0i64), _mm_unpacklo_ps(v16, (__m128)0i64));
	v19 = _mm_shuffle_ps(v95, v95, 85);
	v20 = v19;
	v21 = (int)v19.m128_f32[0];
	if ((int)v19.m128_f32[0] != 0x80000000 && (float)v21 != v19.m128_f32[0])
		v20 = (__m128)COERCE_UNSIGNED_INT((float)(v21 - (_mm_movemask_ps(_mm_unpacklo_ps(v19, v19)) & 1)));
	v19.m128_f32[0] = v19.m128_f32[0] * 0.5;
	v22 = (__m128)v95.m128_u32[0];
	v23 = v19;
	v23.m128_f32[0] = v19.m128_f32[0] + v95.m128_f32[0];
	v24 = (int)(float)(v19.m128_f32[0] + v95.m128_f32[0]);
	if (v24 != 0x80000000 && (float)v24 != v23.m128_f32[0])
		v23 = (__m128)COERCE_UNSIGNED_INT((float)(v24 - (_mm_movemask_ps(_mm_unpacklo_ps(v23, v23)) & 1)));
	v23.m128_f32[0] = v23.m128_f32[0] - (float)(v20.m128_f32[0] * 2.0);
	v25 = v23;
	v25.m128_f32[0] = (float)(v23.m128_f32[0] * 0.33333334) + 0.0000099999997;
	v26 = (int)v25.m128_f32[0];
	if ((int)v25.m128_f32[0] != 0x80000000 && (float)v26 != v25.m128_f32[0])
		v25.m128_f32[0] = (float)(v26 - (_mm_movemask_ps(_mm_unpacklo_ps(v25, v25)) & 1));
	v22.m128_f32[0] = v95.m128_f32[0] - v19.m128_f32[0];
	v27 = (int)(float)(v95.m128_f32[0] - v19.m128_f32[0]);
	if (v27 != 0x80000000 && (float)v27 != v22.m128_f32[0])
		v22 = (__m128)COERCE_UNSIGNED_INT((float)(v27 - (_mm_movemask_ps(_mm_unpacklo_ps(v22, v22)) & 1)));
	v22.m128_f32[0] = (float)((float)((float)((float)((float)(v22.m128_f32[0] - v20.m128_f32[0])
		- (float)(v25.m128_f32[0] * 3.0))
		+ 1.0)
		+ (float)(v23.m128_f32[0] - (float)(v25.m128_f32[0] * 3.0)))
		* 0.33333334)
		+ 0.0000099999997;
	v28 = (int)v22.m128_f32[0];
	if ((int)v22.m128_f32[0] != 0x80000000 && (float)v28 != v22.m128_f32[0])
		v22.m128_f32[0] = (float)(v28 - (_mm_movemask_ps(_mm_unpacklo_ps(v22, v22)) & 1));
	v29 = (float)(v25.m128_f32[0] * 2.0) + v20.m128_f32[0];
	v20.m128_f32[0] = (float)(v20.m128_f32[0] - v22.m128_f32[0]) * 0.5;
	v30 = (int)v20.m128_f32[0];
	if ((int)v20.m128_f32[0] != 0x80000000 && (float)v30 != v20.m128_f32[0])
		v20.m128_f32[0] = (float)(v30 - (_mm_movemask_ps(_mm_unpacklo_ps(v20, v20)) & 1));
	v31 = 0i64;
	v93 = 0i64;
	if (*(_QWORD*)(v3 + 808))
	{
		LODWORD(v101) = (int)(float)(v29 + v22.m128_f32[0]);
		HIDWORD(v101) = (int)v20.m128_f32[0];
		v32 = v101;
		while (1)
		{
			v33 = *(_QWORD*)(v3 + 800);
			v34 = 0;
			v35 = *(_QWORD*)(v33 + 8 * v31);
			v36 = *(_QWORD*)(v35 + 96);
			if (v36)
			{
				v37 = (__m128*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v36 + 16i64))(v36, v99);
			}
			else
			{
				v37 = (__m128*) & v98;
				v98 = 0i64;
			}
			v95 = _mm_sub_ps(*v37, *v5);
			v95.m128_i32[1] = 0;
			v38 = _mm_mul_ps(v95, v95);
			if ((float)((float)(v38.m128_f32[0] + _mm_shuffle_ps(v38, v38, 85).m128_f32[0])
				+ _mm_shuffle_ps(v38, v38, 170).m128_f32[0]) < v12)
				goto LABEL_38;
			if (*(_DWORD*)(v35 + 216))
			{
				if (*(_DWORD*)(v35 + 220))
				{
					v39 = *(_QWORD*)(v35 + 72);
					v40 = 0i64;
					if (v39)
						break;
				}
			}
		LABEL_104:
			v3 = a1;
			v31 = v93 + 1;
			v93 = v31;
			if (v31 >= *(_QWORD*)(a1 + 808))
			{
				a2 = v92;
				v18 = v91[2];
				goto LABEL_106;
			}
		}
		while (!v34)
		{
			v94 = *(_QWORD*)(*(_QWORD*)(v35 + 64) + 12i64 * (int)v40);
			if (v94 == v32)
				v34 = 1;
			if (++v40 >= v39)
			{
				if (!v34)
					goto LABEL_104;
				break;
			}
		}
	LABEL_38:
		if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
			sub_14005E2C0(a2);
		v41 = *(_QWORD*)(a2 + 16);
		v42 = sub_14005C1B0(a2, 0, 0);
		*(_DWORD*)(v41 + 8) = 5;
		*(_QWORD*)v41 = v42;
		*(_QWORD*)(a2 + 16) += 16i64;
		v43 = sub_1400578C0(a2);
		v44 = *(_DWORD*)v35;
		v45 = v43 - 1;
		v46 = *(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64);
		v47 = v43;
		v102 = v43;
		v106 = v43 - 1;
		if ((unsigned int)(v43 - 1) >= *(_DWORD*)(v46 + 56))
		{
			if ((double)v43 == 0.0)
			{
				v48 = *(_DWORD**)(v46 + 32);
			}
			else
			{
				v89 = (double)v43;
				v48 = (_DWORD*)(*(_QWORD*)(v46 + 32)
					+ 40 * ((unsigned int)(LODWORD(v89) + HIDWORD(v89)) % (((1i64 << *(_BYTE*)(v46 + 11)) - 1) | 1)));
			}
			while (v48[6] != 3 || (double)v43 != *((double*)v48 + 2))
			{
				v48 = (_DWORD*)*((_QWORD*)v48 + 4);
				if (!v48)
				{
					v48 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v48 = (_DWORD*)(*(_QWORD*)(v46 + 24) + 16i64 * (v43 - 1));
		}
		v49 = *(_QWORD*)(a2 + 16);
		*(_QWORD*)v49 = *(_QWORD*)v48;
		*(_DWORD*)(v49 + 8) = v48[2];
		*(_QWORD*)(a2 + 16) += 16i64;
		v50 = (unsigned __int64*)sub_14018F0E0(&v96, L"id")[1];
		if (v50)
		{
			v51 = -1i64;
			do
				++v51;
			while (*((_BYTE*)v50 + v51));
			if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
				sub_14005E2C0(a2);
			v52 = *(_QWORD*)(a2 + 16);
			v53 = sub_140062650(a2, v50, v51);
			v47 = v102;
			*(_DWORD*)(v52 + 8) = 4;
			*(_QWORD*)v52 = v53;
			v45 = v106;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a2 + 16) + 8i64) = 0;
		}
		v54 = v97;
		*(_QWORD*)(a2 + 16) += 16i64;
		if (v54)
			sub_14018B900(v54, 0);
		v55 = *(_QWORD*)(a2 + 16);
		*(_DWORD*)(v55 + 8) = 3;
		*(double*)v55 = (double)v44;
		*(_QWORD*)(a2 + 16) += 16i64;
		v56 = (__int64*)sub_1400580E0(a2, -3);
		sub_14005EA50(a2, v56, (int*)(*(_QWORD*)(a2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
		v57 = *(_QWORD*)(a2 + 32);
		v58 = *(_QWORD*)(a2 + 16) - 48i64;
		*(_QWORD*)(a2 + 16) = v58;
		v59 = *(_QWORD*)(v57 + 160);
		v60 = *(_DWORD*)(v35 + 4);
		if (v45 >= *(_DWORD*)(v59 + 56))
		{
			if ((double)v47 == 0.0)
			{
				v61 = *(_DWORD**)(v59 + 32);
			}
			else
			{
				v90 = (double)v47;
				v61 = (_DWORD*)(*(_QWORD*)(v59 + 32)
					+ 40 * ((unsigned int)(LODWORD(v90) + HIDWORD(v90)) % (((1i64 << *(_BYTE*)(v59 + 11)) - 1) | 1)));
			}
			while (v61[6] != 3 || (double)v47 != *((double*)v61 + 2))
			{
				v61 = (_DWORD*)*((_QWORD*)v61 + 4);
				if (!v61)
				{
					v61 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v61 = (_DWORD*)(*(_QWORD*)(v59 + 24) + 16i64 * (v47 - 1));
		}
		*(_QWORD*)v58 = *(_QWORD*)v61;
		*(_DWORD*)(v58 + 8) = v61[2];
		*(_QWORD*)(a2 + 16) += 16i64;
		v62 = (unsigned __int64*)sub_14018F0E0(&v96, L"eType")[1];
		if (v62)
		{
			v63 = -1i64;
			do
				++v63;
			while (*((_BYTE*)v62 + v63));
			if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
				sub_14005E2C0(a2);
			v64 = *(_QWORD*)(a2 + 16);
			v65 = sub_140062650(a2, v62, v63);
			v47 = v102;
			*(_DWORD*)(v64 + 8) = 4;
			*(_QWORD*)v64 = v65;
			v45 = v106;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a2 + 16) + 8i64) = 0;
		}
		v66 = v97;
		*(_QWORD*)(a2 + 16) += 16i64;
		if (v66)
			sub_14018B900(v66, 0);
		v67 = *(_QWORD*)(a2 + 16);
		*(_DWORD*)(v67 + 8) = 3;
		*(double*)v67 = (double)v60;
		*(_QWORD*)(a2 + 16) += 16i64;
		v68 = (__int64*)sub_1400580E0(a2, -3);
		sub_14005EA50(a2, v68, (int*)(*(_QWORD*)(a2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
		v69 = *(_QWORD*)(a2 + 32);
		v70 = *(_QWORD*)(a2 + 16) - 48i64;
		*(_QWORD*)(a2 + 16) = v70;
		v71 = *(_QWORD*)(v69 + 160);
		v72 = *(_DWORD*)(v35 + 16);
		if (v45 >= *(_DWORD*)(v71 + 56))
		{
			if ((double)v47 == 0.0)
			{
				v73 = *(_DWORD**)(v71 + 32);
			}
			else
			{
				v107 = (double)v47;
				v73 = (_DWORD*)(*(_QWORD*)(v71 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v107) + HIDWORD(v107)) % (((1i64 << *(_BYTE*)(v71 + 11)) - 1) | 1)));
			}
			while (v73[6] != 3 || (double)v47 != *((double*)v73 + 2))
			{
				v73 = (_DWORD*)*((_QWORD*)v73 + 4);
				if (!v73)
				{
					v73 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v73 = (_DWORD*)(*(_QWORD*)(v71 + 24) + 16i64 * (v47 - 1));
		}
		*(_QWORD*)v70 = *(_QWORD*)v73;
		*(_DWORD*)(v70 + 8) = v73[2];
		*(_QWORD*)(a2 + 16) += 16i64;
		v74 = (unsigned __int64*)sub_14018F0E0(&v96, L"userData")[1];
		if (v74)
		{
			v75 = -1i64;
			do
				++v75;
			while (*((_BYTE*)v74 + v75));
			if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
				sub_14005E2C0(a2);
			v76 = *(_QWORD*)(a2 + 16);
			v77 = sub_140062650(a2, v74, v75);
			v47 = v102;
			*(_DWORD*)(v76 + 8) = 4;
			*(_QWORD*)v76 = v77;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a2 + 16) + 8i64) = 0;
		}
		v78 = v97;
		*(_QWORD*)(a2 + 16) += 16i64;
		if (v78)
			sub_14018B900(v78, 0);
		v79 = *(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64);
		if ((unsigned int)(v72 - 1) >= *(_DWORD*)(v79 + 56))
		{
			if ((double)v72 == 0.0)
			{
				v80 = *(_DWORD**)(v79 + 32);
			}
			else
			{
				v103 = (double)v72;
				v80 = (_DWORD*)(*(_QWORD*)(v79 + 32)
					+ 40
					* ((unsigned int)(LODWORD(v103) + HIDWORD(v103)) % (((1i64 << *(_BYTE*)(v79 + 11)) - 1) | 1)));
			}
			while (v80[6] != 3 || (double)v72 != *((double*)v80 + 2))
			{
				v80 = (_DWORD*)*((_QWORD*)v80 + 4);
				if (!v80)
				{
					v80 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v80 = (_DWORD*)(*(_QWORD*)(v79 + 24) + 16i64 * (v72 - 1));
		}
		v81 = *(_QWORD*)(a2 + 16);
		*(_QWORD*)v81 = *(_QWORD*)v80;
		*(_DWORD*)(v81 + 8) = v80[2];
		v82 = *(_QWORD*)(a2 + 16) + 16i64;
		*(_QWORD*)(a2 + 16) = v82;
		sub_14005EA50(a2, (__int64*)(v82 - 48), (int*)(v82 - 32), (unsigned int*)(v82 - 16));
		*(_QWORD*)(a2 + 16) -= 48i64;
		sub_1400FB1D0((__int64)&v91[1]);
		sub_1400579E0(a2, v83, v47);
		v5 = a3;
		goto LABEL_104;
	}
LABEL_106:
	v84 = *(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64);
	if ((unsigned int)(v18 - 1) >= *(_DWORD*)(v84 + 56))
	{
		if ((double)v18 == 0.0)
		{
			v85 = *(_DWORD**)(v84 + 32);
		}
		else
		{
			v105 = (double)v18;
			v85 = (_DWORD*)(*(_QWORD*)(v84 + 32)
				+ 40 * ((unsigned int)(LODWORD(v105) + HIDWORD(v105)) % (((1i64 << *(_BYTE*)(v84 + 11)) - 1) | 1)));
		}
		while (v85[6] != 3 || (double)v18 != *((double*)v85 + 2))
		{
			v85 = (_DWORD*)*((_QWORD*)v85 + 4);
			if (!v85)
			{
				v85 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v85 = (_DWORD*)(*(_QWORD*)(v84 + 24) + 16i64 * (v18 - 1));
	}
	v86 = *(_QWORD*)(a2 + 16);
	*(_QWORD*)v86 = *(_QWORD*)v85;
	v87 = (unsigned int)v85[2];
	*(_DWORD*)(v86 + 8) = v87;
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400579E0(a2, v87, v18);
	return 1i64;
}
// 140772436: variable 'v83' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B4F0C4: using guessed type wchar_t aId_25[3];
// 140B4F220: using guessed type wchar_t aUserdata[9];
// 140B4F238: using guessed type wchar_t aEtype_47[6];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3B738: using guessed type int dword_140C3B738;
// 140C66F1C: using guessed type int dword_140C66F1C;
// 140C66F48: using guessed type int dword_140C66F48;
// 140C784E0: using guessed type __int128 xmmword_140C784E0;
// 140C784F0: using guessed type __int128 xmmword_140C784F0;
// 140771B60: using guessed type char var_70[8];

