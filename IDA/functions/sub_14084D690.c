#include "../winhttp.h"

//----- (000000014084D690) ----------------------------------------------------
__int64 sub_14084D690(__int64 a1, __int64 a2, int a3, __int64* a4, unsigned __int64 a5, ...)
{
	float v5; // xmm0_4
	unsigned int v7; // ebx
	unsigned __int64 v10; // r13
	__int64 v11; // r12
	float v12; // xmm7_4
	unsigned __int8* v13; // r8
	unsigned int v14; // r9d
	__int64 v15; // rcx
	__int64 v16; // rdx
	__int64 v17; // rdx
	int* v18; // rax
	float v19; // xmm0_4
	char v20; // cl
	char v21; // al
	unsigned __int8* v22; // r8
	unsigned int v23; // r9d
	__int64 v24; // rcx
	__int64 v25; // rdx
	__int64 v26; // rdx
	int* v27; // rax
	unsigned __int8* v28; // r8
	unsigned int v29; // r9d
	__int64 v30; // rcx
	__int64 v31; // rdx
	__int64 v32; // rdx
	int* v33; // rax
	unsigned __int8* v34; // r8
	unsigned int v35; // r9d
	__int64 v36; // rcx
	__int64 v37; // rdx
	__int64 v38; // rdx
	int* v39; // rax
	unsigned __int8* v40; // r8
	unsigned int v41; // r9d
	__int64 v42; // rcx
	__int64 v43; // rdx
	__int64 v44; // rdx
	int* v45; // rax
	__int64 v46; // r8
	unsigned __int8* v47; // r8
	unsigned int v48; // r9d
	int v49; // ecx
	__int64 v50; // rdx
	float* v51; // rdx
	unsigned __int8* v52; // r8
	unsigned int v53; // r9d
	int v54; // ecx
	__int64 v55; // rdx
	float* v56; // rdx
	unsigned __int8* v57; // r8
	unsigned int v58; // r9d
	int v59; // ecx
	__int64 v60; // rdx
	float* v61; // rdx
	unsigned __int8* v62; // r8
	unsigned int v63; // r9d
	int v64; // ecx
	__int64 v65; // rdx
	float* v66; // rdx
	float v67; // xmm2_4
	__int64 v68; // rcx
	_QWORD* v69; // rax
	_QWORD* v70; // rcx
	_QWORD* v71; // rax
	__int64 v72; // r10
	unsigned __int8* v73; // r8
	unsigned int v74; // r9d
	int v75; // ecx
	__int64 v76; // rdx
	float* v77; // rdx
	unsigned __int8* v78; // r8
	unsigned int v79; // r9d
	int v80; // ecx
	__int64 v81; // rdx
	float* v82; // rdx
	unsigned __int8* v83; // r8
	unsigned int v84; // r9d
	int v85; // ecx
	__int64 v86; // rdx
	float* v87; // rdx
	unsigned __int8* v88; // r8
	unsigned int v89; // r9d
	int v90; // ecx
	__int64 v91; // rdx
	float* v92; // rdx
	float v93; // xmm2_4
	char v94; // r15
	float* v95; // rdi
	unsigned __int8* v96; // r8
	unsigned int v97; // r9d
	__int64 v98; // rcx
	__int64 v99; // rdx
	float* v100; // rbx
	float v101; // xmm0_4
	float v102; // xmm6_4
	unsigned __int8* v103; // r8
	unsigned int v104; // r9d
	__int64 v105; // rcx
	__int64 v106; // rdx
	float* v107; // rbx
	float v108; // xmm0_4
	float v109; // xmm6_4
	unsigned __int8* v110; // r8
	unsigned int v111; // r9d
	__int64 v112; // rcx
	__int64 v113; // rdx
	float* v114; // rbx
	float v115; // xmm6_4
	unsigned __int8* v116; // r8
	unsigned int v117; // r9d
	__int64 v118; // rcx
	__int64 v119; // rdx
	__int64 v120; // rdx
	va_list v121; // rax
	float v122; // xmm0_4
	unsigned __int8* v123; // r8
	unsigned int v124; // r9d
	__int64 v125; // rcx
	__int64 v126; // rdx
	__int64 v127; // rdx
	va_list v128; // rax
	float v129; // xmm0_4
	unsigned __int8* v130; // r8
	unsigned int v131; // r9d
	__int64 v132; // rcx
	__int64 v133; // rdx
	__int64 v134; // rdx
	va_list v135; // rax
	float v136; // xmm0_4
	unsigned __int8* v137; // r8
	unsigned int v138; // r9d
	__int64 v139; // rcx
	__int64 v140; // rdx
	__int64 v141; // rdx
	va_list v142; // rax
	float v143; // xmm0_4
	unsigned __int8* v144; // r8
	unsigned int v145; // r9d
	__int64 v146; // rcx
	__int64 v147; // rdx
	__int64 v148; // rdx
	va_list v149; // rax
	float v150; // xmm0_4
	unsigned __int8* v151; // r8
	unsigned int v152; // r9d
	__int64 v153; // rcx
	__int64 v154; // rdx
	__int64 v155; // rdx
	va_list v156; // rax
	float v157; // xmm0_4
	unsigned __int8* v158; // r8
	unsigned int v159; // r9d
	__int64 v160; // rcx
	__int64 v161; // rdx
	va_list v162; // rax
	float v163; // xmm0_4
	__int64 v164; // rcx
	__int64* v165; // r12
	__int64 v166; // rcx
	__int64** v167; // rdi
	__int64* v168; // rbx
	__int64* v169; // rdi
	char v170; // r15
	int v172; // [rsp+28h] [rbp-48h]
	int v173; // [rsp+38h] [rbp-38h]
	__int128 v174; // [rsp+40h] [rbp-30h] BYREF
	int v175; // [rsp+B0h] [rbp+40h] BYREF
	int v176; // [rsp+C0h] [rbp+50h]
	__int64* v177; // [rsp+C8h] [rbp+58h]
	__int64 v178; // [rsp+D8h] [rbp+68h] BYREF
	va_list va; // [rsp+D8h] [rbp+68h]
	float* v180; // [rsp+E0h] [rbp+70h]
	__int64 v181; // [rsp+E8h] [rbp+78h]
	va_list va1; // [rsp+F0h] [rbp+80h] BYREF

	va_start(va1, a5);
	va_start(va, a5);
	v178 = va_arg(va1, _QWORD);
	v180 = va_arg(va1, float*);
	v181 = va_arg(va1, _QWORD);
	v177 = a4;
	v176 = a3;
	v7 = a3;
	sub_1408527D0(a1, (float*)a2, a3);
	v10 = a5;
	v11 = 0i64;
	v12 = 0.0;
	if ((v7 & 1) != 0)
	{
		v13 = *(unsigned __int8**)(a1 + 80);
		*(float*)&v175 = 0.0;
		if (v13)
		{
			v14 = *v13;
			v15 = 0i64;
			while (1)
			{
				v16 = (unsigned int)(v15 + 1);
				if (!v13[v16])
					break;
				v15 = (unsigned int)v16;
				if ((unsigned int)v16 >= v14)
					goto LABEL_6;
			}
			v17 = (__int64)&v13[4 * v15 + ((v14 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_6:
			v17 = 0i64;
		}
		v18 = &v175;
		if (v17)
			v18 = (int*)v17;
		v175 = *v18;
		v19 = *(float*)&v175 + *(float*)a2;
		*(float*)a2 = v19;
		if ((*(_QWORD*)(a1 + 96) & 1i64) != 0)
		{
			sub_140836340(qword_140C61BB0, a1, 0, v10);
			*(float*)a2 = v19 + *(float*)a2;
		}
		v20 = *(_BYTE*)(a2 + 24);
		if ((v20 & 2) == 0)
		{
			v21 = *(_BYTE*)(a1 + 161);
			if ((v21 & 1) != 0 || !*(_QWORD*)(a1 + 64))
				*(_BYTE*)(a2 + 24) = v20 & 0xFE | ((unsigned __int8)(v21 & 2 | 4) >> 1);
		}
		v22 = *(unsigned __int8**)(a1 + 80);
		*(float*)&v175 = 0.0;
		if (v22)
		{
			v23 = *v22;
			v24 = 0i64;
			while (1)
			{
				v25 = (unsigned int)(v24 + 1);
				if (v22[v25] == 33)
					break;
				v24 = (unsigned int)v25;
				if ((unsigned int)v25 >= v23)
					goto LABEL_19;
			}
			v26 = (__int64)&v22[4 * v24 + ((v23 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_19:
			v26 = 0i64;
		}
		v27 = &v175;
		if (v26)
			v27 = (int*)v26;
		v175 = *v27;
		v5 = *(float*)&v175 + *(float*)(a2 + 20);
		*(float*)(a2 + 20) = v5;
		if ((*(_QWORD*)(a1 + 96) & 0x1000000000i64) != 0)
		{
			sub_140836340(qword_140C61BB0, a1, 36, v10);
			v5 = v5 + *(float*)(a2 + 20);
			*(float*)(a2 + 20) = v5;
		}
	}
	if ((v7 & 2) != 0)
	{
		v28 = *(unsigned __int8**)(a1 + 80);
		*(float*)&v175 = 0.0;
		if (v28)
		{
			v29 = *v28;
			v30 = 0i64;
			while (1)
			{
				v31 = (unsigned int)(v30 + 1);
				if (v28[v31] == 2)
					break;
				v30 = (unsigned int)v31;
				if ((unsigned int)v31 >= v29)
					goto LABEL_29;
			}
			v32 = (__int64)&v28[4 * v30 + ((v29 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_29:
			v32 = 0i64;
		}
		v33 = &v175;
		if (v32)
			v33 = (int*)v32;
		v175 = *v33;
		v5 = *(float*)&v175 + *(float*)(a2 + 8);
		*(float*)(a2 + 8) = v5;
		if ((*(_QWORD*)(a1 + 96) & 4i64) != 0)
		{
			sub_140836340(qword_140C61BB0, a1, 2, v10);
			v5 = v5 + *(float*)(a2 + 8);
			*(float*)(a2 + 8) = v5;
		}
	}
	if ((v7 & 4) != 0)
	{
		v34 = *(unsigned __int8**)(a1 + 80);
		*(float*)&v175 = 0.0;
		if (v34)
		{
			v35 = *v34;
			v36 = 0i64;
			while (1)
			{
				v37 = (unsigned int)(v36 + 1);
				if (v34[v37] == 3)
					break;
				v36 = (unsigned int)v37;
				if ((unsigned int)v37 >= v35)
					goto LABEL_39;
			}
			v38 = (__int64)&v34[4 * v36 + ((v35 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_39:
			v38 = 0i64;
		}
		v39 = &v175;
		if (v38)
			v39 = (int*)v38;
		v175 = *v39;
		v5 = *(float*)&v175 + *(float*)(a2 + 12);
		*(float*)(a2 + 12) = v5;
		if ((*(_QWORD*)(a1 + 96) & 8i64) != 0)
		{
			sub_140836340(qword_140C61BB0, a1, 3, v10);
			v5 = v5 + *(float*)(a2 + 12);
			*(float*)(a2 + 12) = v5;
		}
	}
	if ((v7 & 0x10) != 0 && (*(_BYTE*)(a2 + 32) & 1) == 0 && (*(char*)(a1 + 160) < 0 || !*(_QWORD*)(a1 + 64)))
	{
		if ((*(_QWORD*)(a1 + 96) & 0x800000000i64) != 0)
		{
			sub_140836340(qword_140C61BB0, a1, 35, v10);
			*(float*)(a2 + 28) = v5;
		}
		else
		{
			v40 = *(unsigned __int8**)(a1 + 80);
			v175 = dword_140C11080;
			if (v40)
			{
				v41 = *v40;
				v42 = 0i64;
				while (1)
				{
					v43 = (unsigned int)(v42 + 1);
					if (v40[v43] == 32)
						break;
					v42 = (unsigned int)v43;
					if ((unsigned int)v43 >= v41)
						goto LABEL_58;
				}
				v44 = (__int64)&v40[4 * v42 + ((v41 + 4) & 0xFFFFFFFC)];
			}
			else
			{
			LABEL_58:
				v44 = 0i64;
			}
			v45 = &v175;
			if (v44)
				v45 = (int*)v44;
			*(_DWORD*)(a2 + 28) = *v45;
		}
		*(_BYTE*)(a2 + 32) = *(_BYTE*)(a2 + 32) ^ (*(_BYTE*)(a2 + 32) ^ (*(_BYTE*)(a1 + 161) >> 1)) & 2 | 1;
	}
	v46 = *(_QWORD*)(a1 + 40);
	if (v46)
	{
		v47 = *(unsigned __int8**)(v46 + 24);
		if (v47)
		{
			v48 = *v47;
			v49 = 0;
			while (1)
			{
				v50 = (unsigned int)(v49 + 1);
				if (!v47[v50])
					break;
				++v49;
				if ((unsigned int)v50 >= v48)
					goto LABEL_72;
			}
			v51 = (float*)&v47[16 * v49 + ((v48 + 4) & 0xFFFFFFFC)];
			if (v51)
				*(float*)a2 = *v51 + *(float*)a2;
		}
	LABEL_72:
		v52 = *(unsigned __int8**)(*(_QWORD*)(a1 + 40) + 24i64);
		if (v52)
		{
			v53 = *v52;
			v54 = 0;
			while (1)
			{
				v55 = (unsigned int)(v54 + 1);
				if (v52[v55] == 2)
					break;
				++v54;
				if ((unsigned int)v55 >= v53)
					goto LABEL_79;
			}
			v56 = (float*)&v52[16 * v54 + ((v53 + 4) & 0xFFFFFFFC)];
			if (v56)
				*(float*)(a2 + 8) = *(float*)(a2 + 8) + *v56;
		}
	LABEL_79:
		v57 = *(unsigned __int8**)(*(_QWORD*)(a1 + 40) + 24i64);
		if (v57)
		{
			v58 = *v57;
			v59 = 0;
			while (1)
			{
				v60 = (unsigned int)(v59 + 1);
				if (v57[v60] == 3)
					break;
				++v59;
				if ((unsigned int)v60 >= v58)
					goto LABEL_86;
			}
			v61 = (float*)&v57[16 * v59 + ((v58 + 4) & 0xFFFFFFFC)];
			if (v61)
				*(float*)(a2 + 12) = *(float*)(a2 + 12) + *v61;
		}
	LABEL_86:
		v62 = *(unsigned __int8**)(*(_QWORD*)(a1 + 40) + 24i64);
		if (v62)
		{
			v63 = *v62;
			v64 = 0;
			while (1)
			{
				v65 = (unsigned int)(v64 + 1);
				if (v62[v65] == 10)
					break;
				++v64;
				if ((unsigned int)v65 >= v63)
					goto LABEL_94;
			}
			v66 = (float*)&v62[16 * v64 + ((v63 + 4) & 0xFFFFFFFC)];
			if (v66)
			{
				v67 = *v66;
				if (*v66 != 1.0)
				{
					*(_QWORD*)&v174 = a1;
					DWORD2(v174) = DWORD2(v174) & 0xFFFFFFFC | 1;
					sub_14084F8A0(a4, &v174, v67);
				}
			}
		}
	}
LABEL_94:
	v68 = *(_QWORD*)(a1 + 112);
	if (v68)
	{
		v69 = *(_QWORD**)v68;
		v70 = *(_QWORD**)(v68 + 8);
		if (v69 != v70)
		{
			do
			{
				if (*v69 == v10)
					break;
				v69 += 2;
			} while (v69 != v70);
			if (v69 != v70)
			{
				v71 = v69 + 1;
				if (v71)
				{
					v72 = *v71;
					v73 = *(unsigned __int8**)(*v71 + 24i64);
					if (v73)
					{
						v74 = *v73;
						v75 = 0;
						while (1)
						{
							v76 = (unsigned int)(v75 + 1);
							if (!v73[v76])
								break;
							++v75;
							if ((unsigned int)v76 >= v74)
								goto LABEL_107;
						}
						v77 = (float*)&v73[16 * v75 + ((v74 + 4) & 0xFFFFFFFC)];
						if (v77)
							*(float*)a2 = *v77 + *(float*)a2;
					}
				LABEL_107:
					v78 = *(unsigned __int8**)(v72 + 24);
					if (v78)
					{
						v79 = *v78;
						v80 = 0;
						while (1)
						{
							v81 = (unsigned int)(v80 + 1);
							if (v78[v81] == 2)
								break;
							++v80;
							if ((unsigned int)v81 >= v79)
								goto LABEL_114;
						}
						v82 = (float*)&v78[16 * v80 + ((v79 + 4) & 0xFFFFFFFC)];
						if (v82)
							*(float*)(a2 + 8) = *v82 + *(float*)(a2 + 8);
					}
				LABEL_114:
					v83 = *(unsigned __int8**)(v72 + 24);
					if (v83)
					{
						v84 = *v83;
						v85 = 0;
						while (1)
						{
							v86 = (unsigned int)(v85 + 1);
							if (v83[v86] == 3)
								break;
							++v85;
							if ((unsigned int)v86 >= v84)
								goto LABEL_121;
						}
						v87 = (float*)&v83[16 * v85 + ((v84 + 4) & 0xFFFFFFFC)];
						if (v87)
							*(float*)(a2 + 12) = *(float*)(a2 + 12) + *v87;
					}
				LABEL_121:
					v88 = *(unsigned __int8**)(v72 + 24);
					if (v88)
					{
						v89 = *v88;
						v90 = 0;
						while (1)
						{
							v91 = (unsigned int)(v90 + 1);
							if (v88[v91] == 10)
								break;
							++v90;
							if ((unsigned int)v91 >= v89)
								goto LABEL_129;
						}
						v92 = (float*)&v88[16 * v90 + ((v89 + 4) & 0xFFFFFFFC)];
						if (v92)
						{
							v93 = *v92;
							if (*v92 != 1.0)
							{
								DWORD2(v174) &= 0xFFFFFFFC;
								*(_QWORD*)&v174 = a1;
								sub_14084F8A0(a4, &v174, v93);
							}
						}
					}
				}
			}
		}
	}
LABEL_129:
	v94 = v178;
	v95 = v180;
	if ((_BYTE)v178)
	{
		v96 = *(unsigned __int8**)(a1 + 128);
		if (v96)
		{
			v97 = *v96;
			v98 = 0i64;
			while (1)
			{
				v99 = (unsigned int)(v98 + 1);
				if (!v96[v99])
					break;
				v98 = (unsigned int)v99;
				if ((unsigned int)v99 >= v97)
					goto LABEL_139;
			}
			v100 = (float*)&v96[8 * v98 + ((v97 + 4) & 0xFFFFFFFC)];
			if (v100)
			{
				v101 = 0.0;
				v102 = v100[1] - *v100;
				if (v102 != 0.0)
					v101 = (double)(int)sub_1407DDB28() * 0.00003051850947599719 * v102;
				*v95 = (float)(v101 + *v100) + *v95;
			}
		LABEL_139:
			v103 = *(unsigned __int8**)(a1 + 128);
			if (v103)
			{
				v104 = *v103;
				v105 = 0i64;
				while (1)
				{
					v106 = (unsigned int)(v105 + 1);
					if (v103[v106] == 2)
						break;
					v105 = (unsigned int)v106;
					if ((unsigned int)v106 >= v104)
						goto LABEL_148;
				}
				v107 = (float*)&v103[8 * v105 + ((v104 + 4) & 0xFFFFFFFC)];
				if (v107)
				{
					v108 = 0.0;
					v109 = v107[1] - *v107;
					if (v109 != 0.0)
						v108 = (double)(int)sub_1407DDB28() * 0.00003051850947599719 * v109;
					v95[1] = (float)(v108 + *v107) + v95[1];
				}
			}
		LABEL_148:
			v110 = *(unsigned __int8**)(a1 + 128);
			if (v110)
			{
				v111 = *v110;
				v112 = 0i64;
				while (1)
				{
					v113 = (unsigned int)(v112 + 1);
					if (v110[v113] == 3)
						break;
					v112 = (unsigned int)v113;
					if ((unsigned int)v113 >= v111)
						goto LABEL_157;
				}
				v114 = (float*)&v110[8 * v112 + ((v111 + 4) & 0xFFFFFFFC)];
				if (v114)
				{
					v115 = v114[1] - *v114;
					if (v115 != 0.0)
						v12 = (double)(int)sub_1407DDB28() * 0.00003051850947599719 * v115;
					v95[2] = (float)(v12 + *v114) + v95[2];
				}
			}
		LABEL_157:
			v7 = v176;
		}
	}
	if (!*(_BYTE*)(a2 + 82) && ((*(_BYTE*)(a1 + 160) & 0x40) != 0 || !*(_QWORD*)(a1 + 64)))
	{
		*(_BYTE*)(a2 + 82) = 1;
		if (*(_QWORD*)(a1 + 152))
		{
			v116 = *(unsigned __int8**)(a1 + 80);
			LODWORD(v178) = 0;
			if (v116)
			{
				v117 = *v116;
				v118 = 0i64;
				while (1)
				{
					v119 = (unsigned int)(v118 + 1);
					if (v116[v119] == 18)
						break;
					v118 = (unsigned int)v119;
					if ((unsigned int)v119 >= v117)
						goto LABEL_166;
				}
				v120 = (__int64)&v116[4 * v118 + ((v117 + 4) & 0xFFFFFFFC)];
			}
			else
			{
			LABEL_166:
				v120 = 0i64;
			}
			va_copy(v121, va);
			if (v120)
				v121 = (va_list)v120;
			LODWORD(v178) = *(_DWORD*)v121;
			v122 = *(float*)&v178 + *(float*)(a2 + 44);
			*(float*)(a2 + 44) = v122;
			if ((*(_QWORD*)(a1 + 96) & 0x8000i64) != 0)
			{
				sub_140836340(qword_140C61BB0, a1, 15, v10);
				*(float*)(a2 + 44) = v122 + *(float*)(a2 + 44);
			}
			v123 = *(unsigned __int8**)(a1 + 80);
			LODWORD(v178) = 0;
			if (v123)
			{
				v124 = *v123;
				v125 = 0i64;
				while (1)
				{
					v126 = (unsigned int)(v125 + 1);
					if (v123[v126] == 19)
						break;
					v125 = (unsigned int)v126;
					if ((unsigned int)v126 >= v124)
						goto LABEL_175;
				}
				v127 = (__int64)&v123[4 * v125 + ((v124 + 4) & 0xFFFFFFFC)];
			}
			else
			{
			LABEL_175:
				v127 = 0i64;
			}
			va_copy(v128, va);
			if (v127)
				v128 = (va_list)v127;
			LODWORD(v178) = *(_DWORD*)v128;
			v129 = *(float*)&v178 + *(float*)(a2 + 48);
			*(float*)(a2 + 48) = v129;
			if ((*(_QWORD*)(a1 + 96) & 0x10000i64) != 0)
			{
				sub_140836340(qword_140C61BB0, a1, 16, v10);
				*(float*)(a2 + 48) = v129 + *(float*)(a2 + 48);
			}
			v130 = *(unsigned __int8**)(a1 + 80);
			LODWORD(v178) = 0;
			if (v130)
			{
				v131 = *v130;
				v132 = 0i64;
				while (1)
				{
					v133 = (unsigned int)(v132 + 1);
					if (v130[v133] == 20)
						break;
					v132 = (unsigned int)v133;
					if ((unsigned int)v133 >= v131)
						goto LABEL_184;
				}
				v134 = (__int64)&v130[4 * v132 + ((v131 + 4) & 0xFFFFFFFC)];
			}
			else
			{
			LABEL_184:
				v134 = 0i64;
			}
			va_copy(v135, va);
			if (v134)
				v135 = (va_list)v134;
			LODWORD(v178) = *(_DWORD*)v135;
			v136 = *(float*)&v178 + *(float*)(a2 + 52);
			*(float*)(a2 + 52) = v136;
			if ((*(_QWORD*)(a1 + 96) & 0x20000i64) != 0)
			{
				sub_140836340(qword_140C61BB0, a1, 17, v10);
				*(float*)(a2 + 52) = v136 + *(float*)(a2 + 52);
			}
			v137 = *(unsigned __int8**)(a1 + 80);
			LODWORD(v178) = 0;
			if (v137)
			{
				v138 = *v137;
				v139 = 0i64;
				while (1)
				{
					v140 = (unsigned int)(v139 + 1);
					if (v137[v140] == 21)
						break;
					v139 = (unsigned int)v140;
					if ((unsigned int)v140 >= v138)
						goto LABEL_193;
				}
				v141 = (__int64)&v137[4 * v139 + ((v138 + 4) & 0xFFFFFFFC)];
			}
			else
			{
			LABEL_193:
				v141 = 0i64;
			}
			va_copy(v142, va);
			if (v141)
				v142 = (va_list)v141;
			LODWORD(v178) = *(_DWORD*)v142;
			v143 = *(float*)&v178 + *(float*)(a2 + 56);
			*(float*)(a2 + 56) = v143;
			if ((*(_QWORD*)(a1 + 96) & 0x40000i64) != 0)
			{
				sub_140836340(qword_140C61BB0, a1, 18, v10);
				*(float*)(a2 + 56) = v143 + *(float*)(a2 + 56);
			}
			*(_DWORD*)(a2 + 60) = **(_DWORD**)(a1 + 152);
			*(_DWORD*)(a2 + 64) = *(_DWORD*)(*(_QWORD*)(a1 + 152) + 4i64);
			*(_DWORD*)(a2 + 68) = *(_DWORD*)(*(_QWORD*)(a1 + 152) + 8i64);
			*(_DWORD*)(a2 + 72) = *(_DWORD*)(*(_QWORD*)(a1 + 152) + 12i64);
		}
	}
	if (!*(_BYTE*)(a2 + 81) && ((*(_BYTE*)(a1 + 160) & 0x10) != 0 || !*(_QWORD*)(a1 + 64)))
	{
		*(_BYTE*)(a2 + 81) = 1;
		v144 = *(unsigned __int8**)(a1 + 80);
		LODWORD(v178) = 0;
		if (v144)
		{
			v145 = *v144;
			v146 = 0i64;
			while (1)
			{
				v147 = (unsigned int)(v146 + 1);
				if (v144[v147] == 22)
					break;
				v146 = (unsigned int)v147;
				if ((unsigned int)v147 >= v145)
					goto LABEL_206;
			}
			v148 = (__int64)&v144[4 * v146 + ((v145 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_206:
			v148 = 0i64;
		}
		va_copy(v149, va);
		if (v148)
			v149 = (va_list)v148;
		LODWORD(v178) = *(_DWORD*)v149;
		v150 = *(float*)&v178 + *(float*)(a2 + 76);
		*(float*)(a2 + 76) = v150;
		if ((*(_QWORD*)(a1 + 96) & 0x80000i64) != 0)
		{
			sub_140836340(qword_140C61BB0, a1, 19, v10);
			*(float*)(a2 + 76) = v150 + *(float*)(a2 + 76);
		}
		*(_BYTE*)(a2 + 80) = (*(_BYTE*)(a1 + 160) & 0x20) != 0;
	}
	if ((_BYTE)v181 && *(_QWORD*)(a1 + 72))
	{
		v151 = *(unsigned __int8**)(a1 + 80);
		LODWORD(v178) = 0;
		if (v151)
		{
			v152 = *v151;
			v153 = 0i64;
			while (1)
			{
				v154 = (unsigned int)(v153 + 1);
				if (v151[v154] == 23)
					break;
				v153 = (unsigned int)v154;
				if ((unsigned int)v154 >= v152)
					goto LABEL_218;
			}
			v155 = (__int64)&v151[4 * v153 + ((v152 + 4) & 0xFFFFFFFC)];
		}
		else
		{
		LABEL_218:
			v155 = 0i64;
		}
		va_copy(v156, va);
		if (v155)
			v156 = (va_list)v155;
		LODWORD(v178) = *(_DWORD*)v156;
		v157 = *(float*)&v178 + *(float*)(a2 + 36);
		*(float*)(a2 + 36) = v157;
		if ((*(_QWORD*)(a1 + 96) & 0x400000i64) != 0)
		{
			sub_140836340(qword_140C61BB0, a1, 22, v10);
			*(float*)(a2 + 36) = v157 + *(float*)(a2 + 36);
		}
		v158 = *(unsigned __int8**)(a1 + 80);
		LODWORD(v178) = 0;
		if (v158)
		{
			v159 = *v158;
			v160 = 0i64;
			while (1)
			{
				v161 = (unsigned int)(v160 + 1);
				if (v158[v161] == 24)
					break;
				v160 = (unsigned int)v161;
				if ((unsigned int)v161 >= v159)
					goto LABEL_235;
			}
			v11 = (__int64)&v158[4 * v160 + ((v159 + 4) & 0xFFFFFFFC)];
		}
	LABEL_235:
		va_copy(v162, va);
		if (v11)
			v162 = (va_list)v11;
		LODWORD(v178) = *(_DWORD*)v162;
		v163 = *(float*)&v178 + *(float*)(a2 + 40);
		*(float*)(a2 + 40) = v163;
		if ((*(_QWORD*)(a1 + 96) & 0x800000i64) != 0)
		{
			sub_140836340(qword_140C61BB0, a1, 23, v10);
			*(float*)(a2 + 40) = v163 + *(float*)(a2 + 40);
		}
		v164 = *(_QWORD*)(a1 + 64);
		v165 = v177;
		if (v164)
			(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64*, unsigned __int64, char, float*, _BYTE))(*(_QWORD*)v164 + 336i64))(
				v164,
				a2,
				v7,
				v177,
				v10,
				v94,
				v95,
				0);
		v166 = *(_QWORD*)(a1 + 72);
		LOBYTE(v173) = 0;
		goto LABEL_244;
	}
	v166 = *(_QWORD*)(a1 + 64);
	v165 = v177;
	if (v166)
	{
		LOBYTE(v173) = v181;
	LABEL_244:
		LOBYTE(v172) = v94;
		(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64*, unsigned __int64, int, float*, int))(*(_QWORD*)v166 + 336i64))(
			v166,
			a2,
			v7,
			v165,
			v10,
			v172,
			v95,
			v173);
	}
	v167 = *(__int64***)(a1 + 144);
	if (v167)
	{
		v168 = *v167;
		v169 = v167[1];
		if (v168 != v169)
		{
			v170 = v176;
			do
				sub_140865100(*v168++, a1, (float*)a2, v170, v165, v10);
			while (v168 != v169);
		}
	}
	return 1i64;
}
// 14084D964: variable 'v5' is possibly undefined
// 14084E3E9: variable 'v172' is possibly undefined
// 14084E3E9: variable 'v173' is possibly undefined
// 1409A3530: using guessed type int dword_1409A3530[];
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C11080: using guessed type int dword_140C11080;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

