#include "../winhttp.h"

//----- (000000014005F800) ----------------------------------------------------
__int64 __fastcall sub_14005F800(__int64 a1, int a2)
{
	int* v3; // r15
	unsigned __int64 v4; // r13
	char v5; // al
	unsigned int v6; // ebx
	bool v7; // zf
	int v8; // r12d
	__int64 v9; // rdi
	_QWORD* v10; // r14
	unsigned int v11; // ebx
	__int64 v12; // rcx
	unsigned __int64 v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rax
	unsigned int v16; // r8d
	int* v17; // r8
	__int64 v18; // rax
	__int64 v19; // r9
	__int64 v20; // rcx
	char v21; // r8
	__int64 v22; // rax
	unsigned int v23; // r9d
	unsigned int* v24; // r9
	unsigned int v25; // ebx
	unsigned int v26; // edx
	int v27; // ebx
	int v28; // edx
	int v29; // ecx
	int v30; // ecx
	__int64 v31; // rax
	unsigned int v32; // edx
	unsigned int v33; // ebx
	__int64 v34; // rdx
	__int64 v35; // rcx
	unsigned __int64 v36; // r8
	unsigned int v37; // ebx
	unsigned __int64 v38; // r9
	double v39; // xmm0_8
	__int64 v40; // rcx
	unsigned __int64 v41; // r8
	unsigned int v42; // ebx
	unsigned __int64 v43; // r9
	double v44; // xmm0_8
	__int64 v45; // rcx
	unsigned __int64 v46; // r8
	unsigned int v47; // ebx
	unsigned __int64 v48; // r9
	double v49; // xmm0_8
	__int64 v50; // rcx
	unsigned __int64 v51; // r8
	unsigned int v52; // ebx
	unsigned __int64 v53; // r9
	double v54; // xmm0_8
	__int64 v55; // rcx
	double* v56; // r8
	unsigned int v57; // ebx
	unsigned __int64 v58; // r9
	double v59; // xmm1_8
	double v60; // xmm3_8
	__m128d v61; // xmm0
	__int64 v62; // rcx
	unsigned __int64 v63; // r8
	unsigned int v64; // ebx
	unsigned __int64 v65; // r9
	double v66; // xmm0_8
	unsigned int v67; // ebx
	unsigned __int64 v68; // r8
	double v69; // xmm0_8
	unsigned int v70; // ebx
	int v71; // ecx
	_DWORD* v72; // rbx
	int v73; // eax
	__int64 v74; // rcx
	double v75; // xmm0_8
	unsigned int v76; // ebp
	__int64 v77; // rcx
	_DWORD* v78; // rdx
	unsigned int v79; // ebx
	_DWORD* v80; // r8
	int v81; // eax
	unsigned int v82; // r8d
	__int64 v83; // r8
	unsigned int v84; // ebx
	__int64 v85; // rdx
	unsigned int v86; // r8d
	__int64 v87; // r8
	unsigned int v88; // ebx
	__int64 v89; // rdx
	int v90; // eax
	int v91; // eax
	_DWORD* v92; // rcx
	int v93; // eax
	int v94; // eax
	__int64 v95; // rax
	int v96; // ebx
	int v97; // eax
	__int64 result; // rax
	unsigned int v99; // ebx
	int v100; // eax
	double v101; // xmm2_8
	int v102; // eax
	double v103; // xmm1_8
	bool v104; // cf
	int v105; // eax
	unsigned __int64* v106; // rbp
	unsigned __int64* v107; // rdi
	unsigned __int64 v108; // xmm0_8
	int v109; // eax
	unsigned __int64 v110; // xmm0_8
	int v111; // eax
	unsigned __int64 v112; // xmm0_8
	double v113; // xmm0_8
	unsigned __int64 v114; // rbp
	__int64 v115; // r12
	int v116; // ebx
	__int64 v117; // rdi
	int v118; // ebp
	__int64 v119; // rax
	_DWORD* v120; // rbx
	_QWORD* v121; // rax
	char v122; // al
	__int64 v123; // rcx
	__int64 v124; // rbx
	__int64 v125; // rdi
	__int64 v126; // rax
	__int64 v127; // rbp
	__int64* v128; // rbx
	__int64 v129; // rdx
	__int64 v130; // rcx
	_QWORD* v131; // r12
	int v132; // ebx
	int v133; // ebp
	__int64 v134; // rcx
	int v135; // eax
	int v136; // edx
	__int64 v137; // r8
	_DWORD* v138; // rdx
	__int64 v139; // rcx
	_QWORD* v140; // rdi
	__int64 v141; // rbp
	unsigned __int64 v142; // rbx
	int v143; // edx
	unsigned __int64 v144; // rcx
	__int64 v145; // rcx
	__int64 v146; // r8
	__int64 v147; // rax
	__int64 v148; // rcx
	__int64 v149; // rax
	unsigned int v150; // ebx
	unsigned __int64 v151; // [rsp+30h] [rbp-C8h] BYREF
	unsigned __int64 v152; // [rsp+38h] [rbp-C0h] BYREF
	unsigned __int64 v153; // [rsp+40h] [rbp-B8h] BYREF
	__int64 v154; // [rsp+48h] [rbp-B0h] BYREF
	int v155; // [rsp+50h] [rbp-A8h]
	__int64 v156; // [rsp+58h] [rbp-A0h] BYREF
	int v157; // [rsp+60h] [rbp-98h]
	double v158; // [rsp+68h] [rbp-90h] BYREF
	int v159; // [rsp+70h] [rbp-88h]
	__int64 v160; // [rsp+100h] [rbp+8h]
	__int64 v162; // [rsp+110h] [rbp+18h]
	int* v163; // [rsp+118h] [rbp+20h]

LABEL_1:
	v3 = *(int**)(a1 + 48);
	v162 = **(_QWORD**)(*(_QWORD*)(a1 + 40) + 8i64);
	v160 = *(_QWORD*)(*(_QWORD*)(v162 + 32) + 16i64);
	while (1)
	{
		v4 = *(_QWORD*)(a1 + 24);
	LABEL_3:
		v5 = *(_BYTE*)(a1 + 100);
		v6 = *v3++;
		v163 = v3;
		if ((v5 & 0xC) == 0)
			goto LABEL_8;
		v7 = (*(_DWORD*)(a1 + 108))-- == 1;
		if (!v7 && (v5 & 4) == 0)
			goto LABEL_8;
		sub_14005E6B0(a1, (unsigned __int64)v3);
		if (*(_BYTE*)(a1 + 10) == 1)
			break;
		v4 = *(_QWORD*)(a1 + 24);
	LABEL_8:
		v8 = (unsigned __int8)(v6 >> 6);
		v9 = 2i64 * (unsigned __int8)(v6 >> 6);
		v10 = (_QWORD*)(v4 + 16i64 * (unsigned __int8)(v6 >> 6));
		switch (v6 & 0x3F)
		{
		case 0u:
			v11 = v6 >> 23;
			*v10 = *(_QWORD*)(v4 + 16i64 * v11);
			*((_DWORD*)v10 + 2) = *(_DWORD*)(v4 + 16i64 * v11 + 8);
			goto LABEL_3;
		case 1u:
			v12 = v160 + 16i64 * (v6 >> 14);
			*v10 = *(_QWORD*)v12;
			*((_DWORD*)v10 + 2) = *(_DWORD*)(v12 + 8);
			goto LABEL_3;
		case 2u:
			*((_DWORD*)v10 + 2) = 1;
			*(_DWORD*)v10 = v6 >> 23;
			if ((v6 & 0x7FC000) != 0)
				++v3;
			goto LABEL_3;
		case 3u:
			v13 = v4 + 16i64 * (v6 >> 23);
			do
			{
				*(_DWORD*)(v13 + 8) = 0;
				v13 -= 16i64;
			} while (v13 >= (unsigned __int64)v10);
			goto LABEL_3;
		case 4u:
			v14 = *(_QWORD*)(*(_QWORD*)(v162 + 8i64 * (v6 >> 23) + 40) + 16i64);
			*v10 = *(_QWORD*)v14;
			*((_DWORD*)v10 + 2) = *(_DWORD*)(v14 + 8);
			goto LABEL_3;
		case 5u:
			v15 = *(_QWORD*)(v162 + 24);
			v155 = 5;
			v154 = v15;
			*(_QWORD*)(a1 + 48) = v3;
			sub_14005E8E0(a1, (__int64)&v154, (int*)(v160 + 16i64 * (v6 >> 14)), (__int64)v10);
			continue;
		case 6u:
			*(_QWORD*)(a1 + 48) = v3;
			v16 = v6 >> 14;
			if (((v6 >> 14) & 0x100) != 0)
				v17 = (int*)(v160 + 16i64 * (unsigned __int8)v16);
			else
				v17 = (int*)(v4 + 16i64 * (v16 & 0x1FF));
			sub_14005E8E0(a1, v4 + 16i64 * (v6 >> 23), v17, (__int64)v10);
			continue;
		case 7u:
			v18 = *(_QWORD*)(v162 + 24);
			v157 = 5;
			v156 = v18;
			*(_QWORD*)(a1 + 48) = v3;
			sub_14005EA50(a1, &v156, (int*)(v160 + 16i64 * (v6 >> 14)), (unsigned int*)v10);
			continue;
		case 8u:
			v19 = *(_QWORD*)(v162 + 8i64 * (v6 >> 23) + 40);
			v20 = *(_QWORD*)(v19 + 16);
			*(_QWORD*)v20 = *v10;
			*(_DWORD*)(v20 + 8) = *((_DWORD*)v10 + 2);
			if (*((int*)v10 + 2) >= 4 && (*(_BYTE*)(*v10 + 9i64) & 3) != 0)
			{
				v21 = *(_BYTE*)(v19 + 9);
				if ((v21 & 4) != 0)
				{
					v22 = *(_QWORD*)(a1 + 32);
					if (*(_BYTE*)(v22 + 33) == 1)
						sub_14005C960(*(_QWORD*)(a1 + 32), *v10);
					else
						*(_BYTE*)(v19 + 9) = v21 & 0xF8 | *(_BYTE*)(v22 + 32) & 3;
				}
			}
			goto LABEL_3;
		case 9u:
			*(_QWORD*)(a1 + 48) = v3;
			v23 = v6 >> 14;
			if (((v6 >> 14) & 0x100) != 0)
				v24 = (unsigned int*)(v160 + 16i64 * (unsigned __int8)v23);
			else
				v24 = (unsigned int*)(v4 + 16i64 * (v23 & 0x1FF));
			v25 = v6 >> 23;
			if ((v25 & 0x100) != 0)
				sub_14005EA50(a1, v10, (int*)(v160 + 16i64 * (unsigned __int8)v25), v24);
			else
				sub_14005EA50(a1, v10, (int*)(v4 + 16i64 * v25), v24);
			continue;
		case 0xAu:
			v26 = v6;
			v27 = (v6 >> 14) & 0x1FF;
			v28 = v26 >> 23;
			v29 = (v27 >> 3) & 0x1F;
			if (v29)
				v27 = ((v27 & 7) + 8) << (v29 - 1);
			v30 = (v28 >> 3) & 0x1F;
			if (v30)
				v28 = ((v28 & 7) + 8) << (v30 - 1);
			v31 = sub_14005C1B0(a1, v28, v27);
			*((_DWORD*)v10 + 2) = 5;
			*v10 = v31;
			goto LABEL_232;
		case 0xBu:
			v32 = v6;
			v33 = v6 >> 14;
			v34 = v4 + 16i64 * (v32 >> 23);
			v10[2] = *(_QWORD*)v34;
			*((_DWORD*)v10 + 6) = *(_DWORD*)(v34 + 8);
			*(_QWORD*)(a1 + 48) = v3;
			if ((v33 & 0x100) != 0)
				sub_14005E8E0(a1, v34, (int*)(v160 + 16i64 * (unsigned __int8)v33), (__int64)v10);
			else
				sub_14005E8E0(a1, v34, (int*)(v4 + 16i64 * (v33 & 0x1FF)), (__int64)v10);
			continue;
		case 0xCu:
			v35 = v6 >> 23;
			if (((v6 >> 23) & 0x100) != 0)
				v36 = v160 + 16i64 * (unsigned __int8)v35;
			else
				v36 = v4 + 16 * v35;
			v37 = v6 >> 14;
			if ((v37 & 0x100) != 0)
				v38 = v160 + 16i64 * (unsigned __int8)v37;
			else
				v38 = v4 + 16i64 * (v37 & 0x1FF);
			if (*(_DWORD*)(v36 + 8) == 3 && *(_DWORD*)(v38 + 8) == 3)
			{
				v39 = *(double*)v38 + *(double*)v36;
				*((_DWORD*)v10 + 2) = 3;
				*(double*)v10 = v39;
				goto LABEL_3;
			}
			*(_QWORD*)(a1 + 48) = v3;
			sub_14005F590(a1, (__int64)v10, (double*)v36, (__int64*)v38, 5);
			continue;
		case 0xDu:
			v40 = v6 >> 23;
			if (((v6 >> 23) & 0x100) != 0)
				v41 = v160 + 16i64 * (unsigned __int8)v40;
			else
				v41 = v4 + 16 * v40;
			v42 = v6 >> 14;
			if ((v42 & 0x100) != 0)
				v43 = v160 + 16i64 * (unsigned __int8)v42;
			else
				v43 = v4 + 16i64 * (v42 & 0x1FF);
			if (*(_DWORD*)(v41 + 8) == 3 && *(_DWORD*)(v43 + 8) == 3)
			{
				v44 = *(double*)v41 - *(double*)v43;
				*((_DWORD*)v10 + 2) = 3;
				*(double*)v10 = v44;
				goto LABEL_3;
			}
			*(_QWORD*)(a1 + 48) = v3;
			sub_14005F590(a1, (__int64)v10, (double*)v41, (__int64*)v43, 6);
			continue;
		case 0xEu:
			v45 = v6 >> 23;
			if (((v6 >> 23) & 0x100) != 0)
				v46 = v160 + 16i64 * (unsigned __int8)v45;
			else
				v46 = v4 + 16 * v45;
			v47 = v6 >> 14;
			if ((v47 & 0x100) != 0)
				v48 = v160 + 16i64 * (unsigned __int8)v47;
			else
				v48 = v4 + 16i64 * (v47 & 0x1FF);
			if (*(_DWORD*)(v46 + 8) == 3 && *(_DWORD*)(v48 + 8) == 3)
			{
				v49 = *(double*)v48 * *(double*)v46;
				*((_DWORD*)v10 + 2) = 3;
				*(double*)v10 = v49;
				goto LABEL_3;
			}
			*(_QWORD*)(a1 + 48) = v3;
			sub_14005F590(a1, (__int64)v10, (double*)v46, (__int64*)v48, 7);
			continue;
		case 0xFu:
			v50 = v6 >> 23;
			if (((v6 >> 23) & 0x100) != 0)
				v51 = v160 + 16i64 * (unsigned __int8)v50;
			else
				v51 = v4 + 16 * v50;
			v52 = v6 >> 14;
			if ((v52 & 0x100) != 0)
				v53 = v160 + 16i64 * (unsigned __int8)v52;
			else
				v53 = v4 + 16i64 * (v52 & 0x1FF);
			if (*(_DWORD*)(v51 + 8) == 3 && *(_DWORD*)(v53 + 8) == 3)
			{
				v54 = *(double*)v51 / *(double*)v53;
				*((_DWORD*)v10 + 2) = 3;
				*(double*)v10 = v54;
				goto LABEL_3;
			}
			*(_QWORD*)(a1 + 48) = v3;
			sub_14005F590(a1, (__int64)v10, (double*)v51, (__int64*)v53, 8);
			continue;
		case 0x10u:
			v55 = v6 >> 23;
			if (((v6 >> 23) & 0x100) != 0)
				v56 = (double*)(v160 + 16i64 * (unsigned __int8)v55);
			else
				v56 = (double*)(v4 + 16 * v55);
			v57 = v6 >> 14;
			if ((v57 & 0x100) != 0)
				v58 = v160 + 16i64 * (unsigned __int8)v57;
			else
				v58 = v4 + 16i64 * (v57 & 0x1FF);
			if (*((_DWORD*)v56 + 2) != 3 || *(_DWORD*)(v58 + 8) != 3)
			{
				*(_QWORD*)(a1 + 48) = v3;
				sub_14005F590(a1, (__int64)v10, v56, (__int64*)v58, 9);
				continue;
			}
			v59 = *v56;
			v60 = *(double*)v58;
			v61 = (__m128d) * (unsigned __int64*)v56;
			v61.m128d_f64[0] = v61.m128d_f64[0] / *(double*)v58;
			if ((double)(int)v61.m128d_f64[0] != v61.m128d_f64[0])
				v61.m128d_f64[0] = (double)((int)v61.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v61, v61)) & 1));
			*((_DWORD*)v10 + 2) = 3;
			*(double*)v10 = v59 - v61.m128d_f64[0] * v60;
			goto LABEL_3;
		case 0x11u:
			v62 = v6 >> 23;
			if (((v6 >> 23) & 0x100) != 0)
				v63 = v160 + 16i64 * (unsigned __int8)v62;
			else
				v63 = v4 + 16 * v62;
			v64 = v6 >> 14;
			if ((v64 & 0x100) != 0)
				v65 = v160 + 16i64 * (unsigned __int8)v64;
			else
				v65 = v4 + 16i64 * (v64 & 0x1FF);
			if (*(_DWORD*)(v63 + 8) == 3 && *(_DWORD*)(v65 + 8) == 3)
			{
				v66 = sub_1408FFA00(*(double*)v63, *(double*)v65);
				*((_DWORD*)v10 + 2) = 3;
				*(double*)v10 = v66;
				goto LABEL_3;
			}
			*(_QWORD*)(a1 + 48) = v3;
			sub_14005F590(a1, (__int64)v10, (double*)v63, (__int64*)v65, 10);
			continue;
		case 0x12u:
			v67 = v6 >> 23;
			v68 = v4 + 16i64 * v67;
			if (*(_DWORD*)(v68 + 8) == 3)
			{
				v69 = *(double*)v68;
				*((_DWORD*)v10 + 2) = 3;
				*(double*)v10 = -v69;
				goto LABEL_3;
			}
			*(_QWORD*)(a1 + 48) = v3;
			sub_14005F590(a1, (__int64)v10, (double*)v68, (__int64*)(v4 + 16i64 * v67), 11);
			continue;
		case 0x13u:
			v70 = v6 >> 23;
			v71 = *(_DWORD*)(v4 + 16i64 * v70 + 8);
			if (v71 && (v71 != 1 || *(_DWORD*)(v4 + 16i64 * v70)))
			{
				*((_DWORD*)v10 + 2) = 1;
				*(_DWORD*)v10 = 0;
			}
			else
			{
				*(_DWORD*)v10 = 1;
				*((_DWORD*)v10 + 2) = 1;
			}
			goto LABEL_3;
		case 0x14u:
			v72 = (_DWORD*)(v4 + 16i64 * (v6 >> 23));
			if (v72[2] == 4)
			{
				v74 = *(_QWORD*)(*(_QWORD*)v72 + 16i64);
				v75 = (double)(int)v74;
				if (v74 < 0)
					v75 = v75 + 1.844674407370955e19;
				*(double*)v10 = v75;
				*((_DWORD*)v10 + 2) = 3;
				goto LABEL_3;
			}
			if (v72[2] == 5)
			{
				v73 = sub_14005C8E0(*(_QWORD*)v72);
				*((_DWORD*)v10 + 2) = 3;
				*(double*)v10 = (double)v73;
				goto LABEL_3;
			}
			*(_QWORD*)(a1 + 48) = v3;
			if (!(unsigned int)sub_14005EC50(a1, v72, dword_140A12138, (int)v10, 12))
				sub_14005A950(a1, (__int64)v72, aGetLengthOf);
			continue;
		case 0x15u:
			v76 = v6 >> 23;
			*(_QWORD*)(a1 + 48) = v3;
			sub_14005F210(a1, ((v6 >> 14) & 0x1FF) - (v6 >> 23) + 1, (v6 >> 14) & 0x1FF);
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v4 = *(_QWORD*)(a1 + 24);
			*(_QWORD*)(v4 + 16i64 * (unsigned __int8)(v6 >> 6)) = *(_QWORD*)(v4 + 16i64 * v76);
			*(_DWORD*)(v4 + 16i64 * (unsigned __int8)(v6 >> 6) + 8) = *(_DWORD*)(v4 + 16i64 * v76 + 8);
			goto LABEL_3;
		case 0x16u:
			goto LABEL_199;
		case 0x17u:
			v77 = v6 >> 23;
			if (((v6 >> 23) & 0x100) != 0)
				v78 = (_DWORD*)(v160 + 16i64 * (unsigned __int8)v77);
			else
				v78 = (_DWORD*)(v4 + 16 * v77);
			v79 = v6 >> 14;
			if ((v79 & 0x100) != 0)
				v80 = (_DWORD*)(v160 + 16i64 * (unsigned __int8)v79);
			else
				v80 = (_DWORD*)(v4 + 16i64 * (v79 & 0x1FF));
			*(_QWORD*)(a1 + 48) = v3;
			v81 = v78[2] == v80[2] && (unsigned int)sub_14005F0D0(a1, v78, v80);
			if (v81 != v8)
				goto LABEL_152;
			v4 = *(_QWORD*)(a1 + 24);
			goto LABEL_202;
		case 0x18u:
			*(_QWORD*)(a1 + 48) = v3;
			v82 = v6 >> 14;
			if (((v6 >> 14) & 0x100) != 0)
				v83 = v160 + 16i64 * (unsigned __int8)v82;
			else
				v83 = v4 + 16i64 * (v82 & 0x1FF);
			v84 = v6 >> 23;
			if ((v84 & 0x100) != 0)
				v85 = v160 + 16i64 * (unsigned __int8)v84;
			else
				v85 = v4 + 16i64 * v84;
			if ((unsigned int)sub_14005EEA0(a1, v85, v83) != v8)
				goto LABEL_152;
			v4 = *(_QWORD*)(a1 + 24);
			goto LABEL_202;
		case 0x19u:
			*(_QWORD*)(a1 + 48) = v3;
			v86 = v6 >> 14;
			if (((v6 >> 14) & 0x100) != 0)
				v87 = v160 + 16i64 * (unsigned __int8)v86;
			else
				v87 = v4 + 16i64 * (v86 & 0x1FF);
			v88 = v6 >> 23;
			if ((v88 & 0x100) != 0)
				v89 = v160 + 16i64 * (unsigned __int8)v88;
			else
				v89 = v4 + 16i64 * v88;
			if ((unsigned int)sub_14005EFA0(a1, v89, v87) == v8)
				v3 += (int)(((unsigned int)*v3 >> 14) - 0x1FFFF);
		LABEL_152:
			v4 = *(_QWORD*)(a1 + 24);
			++v3;
			goto LABEL_3;
		case 0x1Au:
			v90 = *((_DWORD*)v10 + 2);
			v91 = !v90 || v90 == 1 && !*(_DWORD*)v10;
			if (v91 != ((v6 >> 14) & 0x1FF))
				goto LABEL_202;
			goto LABEL_203;
		case 0x1Bu:
			v92 = (_DWORD*)(v4 + 16i64 * (v6 >> 23));
			v93 = v92[2];
			v94 = !v93 || v93 == 1 && !*v92;
			if (v94 == ((v6 >> 14) & 0x1FF))
				goto LABEL_203;
			*v10 = *(_QWORD*)v92;
			*((_DWORD*)v10 + 2) = v92[2];
			goto LABEL_202;
		case 0x1Cu:
			v95 = v6 >> 23;
			v96 = ((v6 >> 14) & 0x1FF) - 1;
			if ((_DWORD)v95)
				*(_QWORD*)(a1 + 16) = &v10[2 * v95];
			*(_QWORD*)(a1 + 48) = v3;
			v97 = sub_1400618B0(a1, (char*)v10, v96);
			if (!v97)
			{
				++a2;
				goto LABEL_1;
			}
			result = (unsigned int)(v97 - 1);
			if ((_DWORD)result)
				return result;
			if (v96 >= 0)
				*(_QWORD*)(a1 + 16) = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64);
			continue;
		case 0x1Du:
			v99 = v6 >> 23;
			if (v99)
				*(_QWORD*)(a1 + 16) = &v10[2 * v99];
			*(_QWORD*)(a1 + 48) = v3;
			v100 = sub_1400618B0(a1, (char*)v10, -1);
			if (!v100)
			{
				v140 = *(_QWORD**)(a1 + 40);
				v141 = *(v140 - 4);
				v142 = v140[1];
				if (*(_QWORD*)(a1 + 152))
					sub_140060CB0(a1, *(v140 - 5));
				v143 = 0;
				v144 = *(v140 - 4) + ((*v140 - v142) & 0xFFFFFFFFFFFFFFF0ui64);
				*(v140 - 5) = v144;
				*(_QWORD*)(a1 + 24) = v144;
				if (v142 < *(_QWORD*)(a1 + 16))
				{
					v145 = v141 + 8;
					v146 = v142 - v141;
					do
					{
						v147 = *(_QWORD*)(v146 + v145 - 8);
						++v143;
						v145 += 16i64;
						*(_QWORD*)(v145 - 24) = v147;
						*(_DWORD*)(v145 - 16) = *(_DWORD*)(v146 + v145 - 16);
					} while (v142 + 16i64 * v143 < *(_QWORD*)(a1 + 16));
				}
				v148 = v141 + 16i64 * v143;
				*(_QWORD*)(a1 + 16) = v148;
				*(v140 - 3) = v148;
				v149 = *(_QWORD*)(a1 + 48);
				++* ((_DWORD*)v140 - 1);
				*(v140 - 2) = v149;
				*(_QWORD*)(a1 + 40) -= 40i64;
				goto LABEL_1;
			}
			result = (unsigned int)(v100 - 1);
			if ((_DWORD)result)
				return result;
			break;
		case 0x1Eu:
			v150 = v6 >> 23;
			if (v150)
				*(_QWORD*)(a1 + 16) = &v10[2 * v150 - 2];
			if (*(_QWORD*)(a1 + 152))
				sub_140060CB0(a1, v4);
			*(_QWORD*)(a1 + 48) = v3;
			result = sub_140061C90(a1, (__int64)v10);
			if (!--a2)
				return result;
			if ((_DWORD)result)
				*(_QWORD*)(a1 + 16) = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64);
			goto LABEL_1;
		case 0x1Fu:
			v101 = *((double*)v10 + 2);
			v102 = 0;
			v103 = *((double*)v10 + 4) + *(double*)v10;
			if (*((double*)v10 + 4) <= 0.0)
				v104 = v103 < v101;
			else
				v104 = v101 < v103;
			LOBYTE(v102) = !v104;
			if (v102)
			{
				*(double*)v10 = v103;
				*((_DWORD*)v10 + 2) = 3;
				*((double*)v10 + 6) = v103;
				*((_DWORD*)v10 + 14) = 3;
				v3 += (int)((v6 >> 14) - 0x1FFFF);
			}
			goto LABEL_3;
		case 0x20u:
			*(_QWORD*)(a1 + 48) = v3;
			v105 = *((_DWORD*)v10 + 2);
			v106 = v10 + 2;
			v107 = v10 + 4;
			if (v105 != 3)
			{
				if (v105 != 4 || !sub_14005AC80((char*)(*v10 + 32i64), &v151))
					sub_14005ABE0(a1, aForInitialValu);
				v108 = v151;
				*((_DWORD*)v10 + 2) = 3;
				*v10 = v108;
			}
			v109 = *((_DWORD*)v10 + 6);
			if (v109 != 3)
			{
				if (v109 != 4
					|| !sub_14005AC80((char*)(*v106 + 32), &v152)
					|| (v110 = v152, *((_DWORD*)v10 + 6) = 3, *v106 = v110, v10 == (_QWORD*)-16i64))
				{
					sub_14005ABE0(a1, aForLimitMustBe);
				}
			}
			v111 = *((_DWORD*)v10 + 10);
			if (v111 != 3)
			{
				if (v111 != 4
					|| !sub_14005AC80((char*)(*v107 + 32), &v153)
					|| (v112 = v153, *((_DWORD*)v10 + 10) = 3, *v107 = v112, v10 == (_QWORD*)-32i64))
				{
					sub_14005ABE0(a1, aForStepMustBeA);
				}
			}
			v113 = *(double*)v10 - *(double*)v107;
			*((_DWORD*)v10 + 2) = 3;
			*(double*)v10 = v113;
		LABEL_199:
			v3 += (int)((v6 >> 14) - 0x1FFFF);
			goto LABEL_3;
		case 0x21u:
			v10[10] = v10[4];
			*((_DWORD*)v10 + 22) = *((_DWORD*)v10 + 10);
			v10[8] = v10[2];
			*((_DWORD*)v10 + 18) = *((_DWORD*)v10 + 6);
			v10[6] = *v10;
			*((_DWORD*)v10 + 14) = *((_DWORD*)v10 + 2);
			*(_QWORD*)(a1 + 48) = v3;
			*(_QWORD*)(a1 + 16) = v10 + 12;
			sub_140061D30(a1, v10 + 6, (v6 >> 14) & 0x1FF);
			v4 = *(_QWORD*)(a1 + 24);
			*(_QWORD*)(a1 + 16) = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64);
			v114 = v4 + 16 * ((unsigned __int8)(v6 >> 6) + 3i64);
			if (!*(_DWORD*)(v114 + 8))
				goto LABEL_203;
			*(_QWORD*)(v114 - 16) = *(_QWORD*)v114;
			*(_DWORD*)(v114 - 8) = *(_DWORD*)(v114 + 8);
		LABEL_202:
			v3 += (int)(((unsigned int)*v3 >> 14) - 0x1FFFF);
		LABEL_203:
			++v3;
			goto LABEL_3;
		case 0x22u:
			LODWORD(v115) = v6 >> 23;
			v116 = (v6 >> 14) & 0x1FF;
			if (!(_DWORD)v115)
			{
				v115 = (__int64)(*(_QWORD*)(a1 + 16) - (_QWORD)v10) >> 4;
				*(_QWORD*)(a1 + 16) = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 16i64);
				LODWORD(v115) = v115 - 1;
			}
			if (!v116)
			{
				v116 = *v3++;
				v163 = v3;
			}
			if (*((_DWORD*)v10 + 2) == 5)
			{
				v117 = *v10;
				v118 = 50 * v116 + v115 - 50;
				if (v118 > *(_DWORD*)(*v10 + 56i64))
				{
					if (*(_UNKNOWN**)(v117 + 32) == &unk_140A12148)
						LODWORD(v119) = 0;
					else
						v119 = 1i64 << *(_BYTE*)(v117 + 11);
					sub_14005BD50(a1, *v10, (unsigned int)v118, (unsigned int)v119);
				}
				v115 = (int)v115;
				if ((int)v115 > 0)
				{
					v120 = &v10[2 * (int)v115];
					do
					{
						v121 = sub_14005C3C0(v117, v118);
						if (v121 == (_QWORD*)dword_140A12138)
						{
							v159 = 3;
							v158 = (double)v118;
							v121 = (_QWORD*)sub_14005C260(a1, v117, &v158);
						}
						--v118;
						*v121 = *(_QWORD*)v120;
						*((_DWORD*)v121 + 2) = v120[2];
						if ((int)v120[2] >= 4 && (*(_BYTE*)(*(_QWORD*)v120 + 9i64) & 3) != 0)
						{
							v122 = *(_BYTE*)(v117 + 9);
							if ((v122 & 4) != 0)
							{
								v123 = *(_QWORD*)(a1 + 32);
								*(_BYTE*)(v117 + 9) = v122 & 0xFB;
								*(_QWORD*)(v117 + 48) = *(_QWORD*)(v123 + 64);
								*(_QWORD*)(v123 + 64) = v117;
							}
						}
						--v115;
						v120 -= 4;
					} while (v115 > 0);
					v3 = v163;
				}
			}
			goto LABEL_3;
		case 0x23u:
			sub_140060CB0(a1, (unsigned __int64)v10);
			goto LABEL_3;
		case 0x24u:
			v124 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v162 + 32) + 32i64) + 8i64 * (v6 >> 14));
			v125 = *(unsigned __int8*)(v124 + 112);
			v126 = sub_140060B60(a1, *(unsigned __int8*)(v124 + 112), *(_QWORD*)(v162 + 24));
			v127 = v126;
			*(_QWORD*)(v126 + 32) = v124;
			if (v125 > 0)
			{
				v128 = (__int64*)(v126 + 40);
				do
				{
					v129 = (unsigned int)*v3 >> 23;
					if ((*v3 & 0x3F) == 4)
						*v128 = *(_QWORD*)(v162 + 8 * v129 + 40);
					else
						*v128 = sub_140060BE0(a1, v4 + 16 * v129);
					++v128;
					++v3;
					--v125;
				} while (v125);
			}
			*v10 = v127;
			*((_DWORD*)v10 + 2) = 6;
		LABEL_232:
			v130 = *(_QWORD*)(a1 + 32);
			*(_QWORD*)(a1 + 48) = v3;
			if (*(_QWORD*)(v130 + 120) >= *(_QWORD*)(v130 + 112))
				sub_14005E2C0(a1);
			continue;
		case 0x25u:
			v131 = *(_QWORD**)(a1 + 40);
			v132 = (v6 >> 23) - 1;
			v133 = ((__int64)(*v131 - v131[1]) >> 4) - *(unsigned __int8*)(*(_QWORD*)(v162 + 32) + 113i64) - 1;
			if (v132 == -1)
			{
				v134 = *(_QWORD*)(a1 + 56);
				*(_QWORD*)(a1 + 48) = v3;
				if (v134 - *(_QWORD*)(a1 + 16) <= 16 * v133)
				{
					v135 = *(_DWORD*)(a1 + 88);
					v136 = 2 * v135;
					if (v133 > v135)
						v136 = v135 + v133;
					sub_140061210(a1, v136);
				}
				v4 = *(_QWORD*)(a1 + 24);
				v10 = (_QWORD*)(v4 + 8 * v9);
				v132 = v133;
				*(_QWORD*)(a1 + 16) = &v10[2 * v133];
			}
			v137 = 0i64;
			if (v132 > 0)
			{
				v138 = v10 + 1;
				do
				{
					if (v137 >= v133)
					{
						*v138 = 0;
					}
					else
					{
						v139 = (__int64)v138 + -8 - 16i64 * v133 - (_QWORD)v10 + *v131;
						*((_QWORD*)v138 - 1) = *(_QWORD*)v139;
						*v138 = *(_DWORD*)(v139 + 8);
					}
					++v137;
					v138 += 4;
				} while (v137 < v132);
			}
			goto LABEL_3;
		default:
			goto LABEL_3;
		}
	}
	result = (__int64)(v3 - 1);
	*(_QWORD*)(a1 + 48) = v3 - 1;
	return result;
}
// 14005FEFB: conditional instruction was optimized away because rcx.8<100000000u
// 14005ABE0: using guessed type void __noreturn sub_14005ABE0(_QWORD, const char *, ...);
// 14005BD50: using guessed type __int64 __fastcall sub_14005BD50(_QWORD, _QWORD, _QWORD, _QWORD);
// 14005C260: using guessed type __int64 __fastcall sub_14005C260(_QWORD, _QWORD, _QWORD);
// 14005F210: using guessed type __int64 __fastcall sub_14005F210(_QWORD, _QWORD, _QWORD);
// 140061D30: using guessed type __int64 __fastcall sub_140061D30(_QWORD, _QWORD, _QWORD);
// 140A12138: using guessed type _DWORD dword_140A12138[4];

