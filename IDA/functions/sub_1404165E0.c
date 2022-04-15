#include "../winhttp.h"

//----- (00000001404165E0) ----------------------------------------------------
__int64 __fastcall sub_1404165E0(_QWORD* a1)
{
	__int64 v1; // rdx
	unsigned __int64 v3; // rax
	__int64 v4; // r14
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // r12d
	__int64 v8; // rcx
	__int64* v9; // rax
	int* v10; // r15
	__int64 v11; // r13
	int* v12; // rcx
	int* v13; // rsi
	int* v14; // r14
	__int64 v15; // rcx
	unsigned __int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	int v19; // eax
	int v20; // r8d
	unsigned int v21; // edx
	int v22; // ebx
	__int64 v23; // rcx
	__int64 v24; // rdx
	__int64 v25; // rcx
	int v26; // edx
	__int64 v27; // rax
	int** v28; // rax
	int* v29; // rcx
	int* v30; // rcx
	__int64 v31; // rsi
	int* v32; // r14
	__int64 v33; // rcx
	unsigned __int64 v34; // rax
	__int64 v35; // rbx
	__int64 v36; // rax
	int v37; // eax
	int v38; // r8d
	unsigned int v39; // edx
	int v40; // ebx
	__int64 v41; // rcx
	__int64 v42; // rdx
	__int64 v43; // rax
	__int64* v44; // rax
	__int64 v45; // rbx
	__int64 v46; // rdx
	__int64 v47; // rcx
	int* v48; // r12
	__int64 v49; // rsi
	__int64 v50; // rcx
	unsigned __int64 v51; // rax
	__int64 v52; // rbx
	__int64 v53; // rax
	int v54; // eax
	int v55; // r8d
	unsigned int v56; // edx
	int v57; // r13d
	__int64 v58; // rcx
	unsigned int v59; // edx
	__int64 v60; // r8
	__int64 v61; // rcx
	__int64 v62; // rax
	__int64* v63; // rax
	__int64 v64; // rax
	__int64 v65; // rdx
	__int64 v66; // r9
	__int64 v67; // r15
	_DWORD* v68; // rdx
	__int64 v69; // rcx
	unsigned __int64* v70; // r14
	unsigned __int64 v71; // rsi
	__int64 v72; // rbx
	__int64 v73; // rax
	__int64 v74; // rcx
	_DWORD* v75; // rax
	__int64 v76; // rdx
	__int64 v77; // rbx
	__int64 v78; // r9
	_DWORD* v79; // rdx
	__int64 v80; // rcx
	__int64 v81; // rcx
	int v82; // eax
	__int64 v83; // r10
	__int64 v84; // r9
	_DWORD* v85; // rcx
	_DWORD* v86; // rdx
	__int64 v87; // rcx
	__int64 v88; // rax
	__int64* v89; // rax
	__int64 v90; // rcx
	__int64 v91; // rsi
	int* v92; // rbx
	int* v93; // r12
	__int64 v94; // rcx
	unsigned __int64 v95; // rax
	__int64 v96; // rbx
	__int64 v97; // rax
	int v98; // eax
	int v99; // r8d
	unsigned int v100; // edx
	int v101; // r13d
	__int64 v102; // rcx
	unsigned int v103; // edx
	__int64 v104; // r8
	__int64 v105; // rcx
	__int64 v106; // rax
	__int64* v107; // rax
	__int64 v108; // rax
	__int64 v109; // rdx
	__int64 v110; // r9
	__int64 v111; // r15
	_DWORD* v112; // rdx
	__int64 v113; // rcx
	unsigned __int64* v114; // r14
	unsigned __int64 v115; // rsi
	__int64 v116; // rbx
	__int64 v117; // rax
	__int64 v118; // rcx
	_DWORD* v119; // rax
	__int64 v120; // rdx
	__int64 v121; // rbx
	__int64 v122; // r9
	_DWORD* v123; // rdx
	__int64 v124; // rcx
	int v125; // eax
	int v126; // edx
	__int64 v127; // rcx
	__int64 v128; // r10
	__int64 v129; // r9
	_DWORD* v130; // rcx
	_DWORD* v131; // rdx
	__int64 v132; // rcx
	__int64 v133; // rax
	_QWORD* v134; // rax
	__int64 v135; // r8
	__int64 v136; // rdx
	__int64(__fastcall * *v138)(); // [rsp+20h] [rbp-89h] BYREF
	int v139; // [rsp+28h] [rbp-81h]
	_QWORD* v140; // [rsp+30h] [rbp-79h]
	int v141; // [rsp+38h] [rbp-71h]
	__int64(__fastcall * *v142)(); // [rsp+40h] [rbp-69h] BYREF
	int v143; // [rsp+48h] [rbp-61h]
	_QWORD* v144; // [rsp+50h] [rbp-59h]
	int v145; // [rsp+58h] [rbp-51h]
	__int64(__fastcall * *v146)(); // [rsp+60h] [rbp-49h] BYREF
	__int64 v147; // [rsp+68h] [rbp-41h]
	_QWORD* v148; // [rsp+70h] [rbp-39h]
	int v149; // [rsp+78h] [rbp-31h]
	__int64 v150[2]; // [rsp+80h] [rbp-29h] BYREF
	int* v151[2]; // [rsp+90h] [rbp-19h] BYREF
	__int64 v152[2]; // [rsp+A0h] [rbp-9h] BYREF
	int v153; // [rsp+110h] [rbp+67h]
	double v154; // [rsp+118h] [rbp+6Fh]
	double v155; // [rsp+118h] [rbp+6Fh]
	double v156; // [rsp+118h] [rbp+6Fh]
	double v157; // [rsp+118h] [rbp+6Fh]
	double v158; // [rsp+118h] [rbp+6Fh]
	double v159; // [rsp+118h] [rbp+6Fh]
	__int64 v160; // [rsp+120h] [rbp+77h]
	__int64 v161; // [rsp+120h] [rbp+77h]
	__int64 v162; // [rsp+128h] [rbp+7Fh] BYREF

	v1 = a1[4];
	v138 = off_140B569F0;
	v153 = 1;
	v141 = 1;
	v3 = *(_QWORD*)(v1 + 112);
	v4 = (__int64)a1;
	v140 = a1;
	if (*(_QWORD*)(v1 + 120) >= v3)
		sub_14005E2C0((__int64)a1);
	v5 = a1[2];
	v6 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	a1[2] += 16i64;
	v7 = sub_1400578C0((__int64)a1);
	v8 = *(_QWORD*)qword_140C65B80;
	v139 = v7;
	v9 = sub_1405FCD70(v8, v150);
	v10 = (int*)v9[1];
	v11 = *v9;
	v9[1] = 0i64;
	*v9 = 0i64;
	v12 = (int*)v150[0];
	if (v150[0])
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v150[0] - 16) + 8i64))(v150[0] - 16);
	if (v10)
	{
		v13 = (int*)(v11 + 4);
		v14 = v10;
		do
		{
			if (*v13)
			{
				v15 = a1[4];
				v142 = off_140B569F0;
				v144 = a1;
				v16 = *(_QWORD*)(v15 + 112);
				v145 = 1;
				if (*(_QWORD*)(v15 + 120) >= v16)
					sub_14005E2C0((__int64)a1);
				v17 = a1[2];
				v18 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v17 + 8) = 5;
				*(_QWORD*)v17 = v18;
				a1[2] += 16i64;
				v19 = sub_1400578C0((__int64)a1);
				v20 = *v13;
				v21 = *(v13 - 1);
				v22 = v19;
				v143 = v19;
				if ((int)sub_140416130(v23, v21, v20, (__int64)&v142) >= 0)
				{
					v26 = v13[1];
					if (v26)
					{
						v27 = sub_1405A8A40(v25, v26);
						if (v27)
						{
							if ((unsigned int)sub_140663030(a1, v27))
							{
								sub_1400FB540((__int64)&v142);
								a1[2] -= 16i64;
							}
						}
					}
					sub_1400FB1D0((__int64)&v138);
				}
				sub_1400579E0((__int64)a1, v24, v22);
			}
			v13 += 3;
			v14 = (int*)((char*)v14 - 1);
		} while (v14);
		v4 = (__int64)v140;
		v7 = v139;
		v153 = v141;
	}
	if (qword_140C65970)
	{
		v28 = sub_140570660((__int64)v12, v151);
		v29 = v10;
		v10 = v28[1];
		v28[1] = v29;
		v30 = (int*)v11;
		v11 = (__int64)*v28;
		*v28 = v30;
		v12 = v151[0];
		if (v151[0])
			(*(void(__fastcall**)(int*))(*((_QWORD*)v151[0] - 2) + 8i64))(v151[0] - 4);
		if (v10)
		{
			v31 = v11 + 4;
			v32 = v10;
			do
			{
				if (*(_DWORD*)v31)
				{
					v33 = a1[4];
					v142 = off_140B569F0;
					v144 = a1;
					v34 = *(_QWORD*)(v33 + 112);
					v145 = 1;
					if (*(_QWORD*)(v33 + 120) >= v34)
						sub_14005E2C0((__int64)a1);
					v35 = a1[2];
					v36 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v35 + 8) = 5;
					*(_QWORD*)v35 = v36;
					a1[2] += 16i64;
					v37 = sub_1400578C0((__int64)a1);
					v38 = *(_DWORD*)v31;
					v39 = *(_DWORD*)(v31 - 4);
					v40 = v37;
					v143 = v37;
					if ((int)sub_140416130(v41, v39, v38, (__int64)&v142) >= 0)
					{
						v43 = sub_140491C60(qword_140C65968, *(_DWORD*)(v31 + 4));
						if ((unsigned int)sub_140432AC0(a1, v43))
						{
							sub_1400FB540((__int64)&v142);
							a1[2] -= 16i64;
						}
						sub_1400FB1D0((__int64)&v138);
					}
					sub_1400579E0((__int64)a1, v42, v40);
				}
				v31 += 12i64;
				v32 = (int*)((char*)v32 - 1);
			} while (v32);
			v4 = (__int64)v140;
			v7 = v139;
			v153 = v141;
		}
	}
	v44 = sub_14048D3D0((__int64)v12, (__int64*)&v142);
	v45 = v44[1];
	v46 = *v44;
	v44[1] = (__int64)v10;
	*v44 = v11;
	v47 = (__int64)v142;
	v150[0] = v45;
	v162 = v46;
	if (v142)
	{
		(*((void(__fastcall**)(__int64(__fastcall**)())) * (v142 - 2) + 1))(v142 - 2);
		v46 = v162;
	}
	if (v45)
	{
		v48 = (int*)(v46 + 4);
		v49 = v45;
		v160 = v45;
		do
		{
			if (*v48)
			{
				v50 = a1[4];
				v148 = a1;
				v146 = off_140B569F0;
				v51 = *(_QWORD*)(v50 + 112);
				v149 = 1;
				if (*(_QWORD*)(v50 + 120) >= v51)
					sub_14005E2C0((__int64)a1);
				v52 = a1[2];
				v53 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v52 + 8) = 5;
				*(_QWORD*)v52 = v53;
				a1[2] += 16i64;
				v54 = sub_1400578C0((__int64)a1);
				v55 = *v48;
				v56 = *(v48 - 1);
				v57 = v54;
				LODWORD(v147) = v54;
				if ((int)sub_140416130(v58, v56, v55, (__int64)&v146) >= 0)
				{
					v59 = v48[1];
					v60 = *(_QWORD*)(qword_140C65948 + 16);
					v61 = v60;
					v62 = *(_QWORD*)(v60 + 8);
					while (v62)
					{
						if (*(_DWORD*)(v62 + 32) < v59)
						{
							v62 = *(_QWORD*)(v62 + 24);
						}
						else
						{
							v61 = v62;
							v62 = *(_QWORD*)(v62 + 16);
						}
					}
					if (v61 == v60 || v59 < *(_DWORD*)(v61 + 32))
					{
						v151[0] = *(int**)(qword_140C65948 + 16);
						v63 = (__int64*)v151;
					}
					else
					{
						v152[0] = v61;
						v63 = v152;
					}
					v64 = *v63;
					if (v64 == v60)
						v65 = 0i64;
					else
						v65 = *(_QWORD*)(v64 + 40);
					if ((unsigned int)sub_1404330E0(a1, v65))
					{
						v66 = *(_QWORD*)(a1[4] + 160i64);
						v67 = (__int64)(a1[2] - a1[3]) >> 4;
						if ((unsigned int)(v57 - 1) >= *(_DWORD*)(v66 + 56))
						{
							if ((double)v57 == 0.0)
							{
								v68 = *(_DWORD**)(v66 + 32);
							}
							else
							{
								v154 = (double)v57;
								v68 = (_DWORD*)(*(_QWORD*)(v66 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v154) + HIDWORD(v154))
										% (((1i64 << *(_BYTE*)(v66 + 11)) - 1) | 1)));
							}
							while (v68[6] != 3 || (double)v57 != *((double*)v68 + 2))
							{
								v68 = (_DWORD*)*((_QWORD*)v68 + 4);
								if (!v68)
								{
									v68 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v68 = (_DWORD*)(*(_QWORD*)(v66 + 24) + 16i64 * (v57 - 1));
						}
						v69 = a1[2];
						*(_QWORD*)v69 = *(_QWORD*)v68;
						*(_DWORD*)(v69 + 8) = v68[2];
						a1[2] += 16i64;
						v70 = (unsigned __int64*)sub_14018F0E0(&v146, L"clgOwner")[1];
						if (v70)
						{
							v71 = -1i64;
							do
								++v71;
							while (*((_BYTE*)v70 + v71));
							if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
								sub_14005E2C0((__int64)a1);
							v72 = a1[2];
							v73 = sub_140062650((__int64)a1, v70, v71);
							v49 = v160;
							*(_DWORD*)(v72 + 8) = 4;
							*(_QWORD*)v72 = v73;
						}
						else
						{
							*(_DWORD*)(a1[2] + 8i64) = 0;
						}
						v74 = v147;
						a1[2] += 16i64;
						if (v74)
							sub_14018B900(v74, 0);
						v75 = sub_1400580E0((__int64)a1, v67);
						v76 = a1[2];
						*(_QWORD*)v76 = *(_QWORD*)v75;
						*(_DWORD*)(v76 + 8) = v75[2];
						a1[2] += 16i64;
						sub_14005EA50(
							(__int64)a1,
							(__int64*)(a1[2] - 48i64),
							(int*)(a1[2] - 32i64),
							(unsigned int*)(a1[2] - 16i64));
						a1[2] -= 64i64;
					}
					v77 = (__int64)v140;
					v78 = *(_QWORD*)(v140[4] + 160i64);
					if ((unsigned int)(v139 - 1) >= *(_DWORD*)(v78 + 56))
					{
						if ((double)v139 == 0.0)
						{
							v79 = *(_DWORD**)(v78 + 32);
						}
						else
						{
							v155 = (double)v139;
							v79 = (_DWORD*)(*(_QWORD*)(v78 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v155) + HIDWORD(v155))
									% (((1i64 << *(_BYTE*)(v78 + 11)) - 1) | 1)));
						}
						while (v79[6] != 3 || (double)v139 != *((double*)v79 + 2))
						{
							v79 = (_DWORD*)*((_QWORD*)v79 + 4);
							if (!v79)
							{
								v79 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v79 = (_DWORD*)(*(_QWORD*)(v78 + 24) + 16i64 * (v139 - 1));
					}
					v80 = v140[2];
					*(_QWORD*)v80 = *(_QWORD*)v79;
					*(_DWORD*)(v80 + 8) = v79[2];
					*(_QWORD*)(v77 + 16) += 16i64;
					v81 = *(_QWORD*)(v77 + 16);
					*(_DWORD*)(v81 + 8) = 3;
					v82 = v153++;
					*(double*)v81 = (double)v82;
					*(_QWORD*)(v77 + 16) += 16i64;
					v83 = *(_QWORD*)(v77 + 16);
					v84 = *(_QWORD*)(*(_QWORD*)(v77 + 32) + 160i64);
					if ((unsigned int)(v57 - 1) >= *(_DWORD*)(v84 + 56))
					{
						if ((double)v57 == 0.0)
						{
							v85 = *(_DWORD**)(v84 + 32);
						}
						else
						{
							v156 = (double)v57;
							v85 = (_DWORD*)(*(_QWORD*)(v84 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v156) + HIDWORD(v156))
									% (((1i64 << *(_BYTE*)(v84 + 11)) - 1) | 1)));
						}
						while (v85[6] != 3 || (double)v57 != *((double*)v85 + 2))
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
						v85 = (_DWORD*)(*(_QWORD*)(v84 + 24) + 16i64 * (v57 - 1));
					}
					*(_QWORD*)v83 = *(_QWORD*)v85;
					*(_DWORD*)(v83 + 8) = v85[2];
					*(_QWORD*)(v77 + 16) += 16i64;
					sub_14005EA50(
						v77,
						(__int64*)(*(_QWORD*)(v77 + 16) - 48i64),
						(int*)(*(_QWORD*)(v77 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v77 + 16) - 16i64));
					*(_QWORD*)(v77 + 16) -= 48i64;
				}
				if (v57 >= 0)
				{
					v86 = *(_DWORD**)(*(_QWORD*)sub_1400580E0((__int64)a1, -10000) + 32i64);
					while (v86[6] != 3 || *((double*)v86 + 2) != 0.0)
					{
						v86 = (_DWORD*)*((_QWORD*)v86 + 4);
						if (!v86)
						{
							v86 = dword_140A12138;
							break;
						}
					}
					v87 = a1[2];
					*(_QWORD*)v87 = *(_QWORD*)v86;
					*(_DWORD*)(v87 + 8) = v86[2];
					a1[2] += 16i64;
					sub_140058B30((__int64)a1, -10000);
					v88 = a1[2];
					*(_DWORD*)(v88 + 8) = 3;
					*(double*)v88 = (double)v57;
					a1[2] += 16i64;
					sub_140058B30((__int64)a1, -10000);
				}
			}
			v48 += 3;
			v160 = --v49;
		} while (v49);
		v45 = v150[0];
		v4 = (__int64)v140;
		v7 = v139;
	}
	v89 = sub_1405F6560(v47, v152);
	v90 = v162;
	v91 = v89[1];
	v89[1] = v45;
	v92 = (int*)*v89;
	*v89 = v90;
	v161 = v91;
	v151[0] = v92;
	if (v152[0])
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v152[0] - 16) + 8i64))(v152[0] - 16);
	if (v91)
	{
		v93 = v92 + 1;
		do
		{
			if (*v93)
			{
				v94 = a1[4];
				v148 = a1;
				v146 = off_140B569F0;
				v95 = *(_QWORD*)(v94 + 112);
				v149 = 1;
				if (*(_QWORD*)(v94 + 120) >= v95)
					sub_14005E2C0((__int64)a1);
				v96 = a1[2];
				v97 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v96 + 8) = 5;
				*(_QWORD*)v96 = v97;
				a1[2] += 16i64;
				v98 = sub_1400578C0((__int64)a1);
				v99 = *v93;
				v100 = *(v93 - 1);
				v101 = v98;
				LODWORD(v147) = v98;
				if ((int)sub_140416130(v102, v100, v99, (__int64)&v146) >= 0)
				{
					v103 = v93[1];
					v104 = *(_QWORD*)(qword_140C65988 + 48);
					v105 = v104;
					v106 = *(_QWORD*)(v104 + 8);
					while (v106)
					{
						if (*(_DWORD*)(v106 + 32) < v103)
						{
							v106 = *(_QWORD*)(v106 + 24);
						}
						else
						{
							v105 = v106;
							v106 = *(_QWORD*)(v106 + 16);
						}
					}
					if (v105 == v104 || v103 < *(_DWORD*)(v105 + 32))
					{
						v150[0] = *(_QWORD*)(qword_140C65988 + 48);
						v107 = v150;
					}
					else
					{
						v162 = v105;
						v107 = &v162;
					}
					v108 = *v107;
					if (v108 == v104)
						v109 = 0i64;
					else
						v109 = *(_QWORD*)(v108 + 40);
					if ((unsigned int)sub_140432D60(a1, v109))
					{
						v110 = *(_QWORD*)(a1[4] + 160i64);
						v111 = (__int64)(a1[2] - a1[3]) >> 4;
						if ((unsigned int)(v101 - 1) >= *(_DWORD*)(v110 + 56))
						{
							if ((double)v101 == 0.0)
							{
								v112 = *(_DWORD**)(v110 + 32);
							}
							else
							{
								v157 = (double)v101;
								v112 = (_DWORD*)(*(_QWORD*)(v110 + 32)
									+ 40
									* ((unsigned int)(LODWORD(v157) + HIDWORD(v157))
										% (((1i64 << *(_BYTE*)(v110 + 11)) - 1) | 1)));
							}
							while (v112[6] != 3 || (double)v101 != *((double*)v112 + 2))
							{
								v112 = (_DWORD*)*((_QWORD*)v112 + 4);
								if (!v112)
								{
									v112 = dword_140A12138;
									break;
								}
							}
						}
						else
						{
							v112 = (_DWORD*)(*(_QWORD*)(v110 + 24) + 16i64 * (v101 - 1));
						}
						v113 = a1[2];
						*(_QWORD*)v113 = *(_QWORD*)v112;
						*(_DWORD*)(v113 + 8) = v112[2];
						a1[2] += 16i64;
						v114 = (unsigned __int64*)sub_14018F0E0(&v146, L"peoOwner")[1];
						if (v114)
						{
							v115 = -1i64;
							do
								++v115;
							while (*((_BYTE*)v114 + v115));
							if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
								sub_14005E2C0((__int64)a1);
							v116 = a1[2];
							v117 = sub_140062650((__int64)a1, v114, v115);
							v91 = v161;
							*(_DWORD*)(v116 + 8) = 4;
							*(_QWORD*)v116 = v117;
						}
						else
						{
							*(_DWORD*)(a1[2] + 8i64) = 0;
						}
						v118 = v147;
						a1[2] += 16i64;
						if (v118)
							sub_14018B900(v118, 0);
						v119 = sub_1400580E0((__int64)a1, v111);
						v120 = a1[2];
						*(_QWORD*)v120 = *(_QWORD*)v119;
						*(_DWORD*)(v120 + 8) = v119[2];
						a1[2] += 16i64;
						sub_14005EA50(
							(__int64)a1,
							(__int64*)(a1[2] - 48i64),
							(int*)(a1[2] - 32i64),
							(unsigned int*)(a1[2] - 16i64));
						a1[2] -= 64i64;
					}
					v121 = (__int64)v140;
					v122 = *(_QWORD*)(v140[4] + 160i64);
					if ((unsigned int)(v139 - 1) >= *(_DWORD*)(v122 + 56))
					{
						if ((double)v139 == 0.0)
						{
							v123 = *(_DWORD**)(v122 + 32);
						}
						else
						{
							v158 = (double)v139;
							v123 = (_DWORD*)(*(_QWORD*)(v122 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v158) + HIDWORD(v158))
									% (((1i64 << *(_BYTE*)(v122 + 11)) - 1) | 1)));
						}
						while (v123[6] != 3 || (double)v139 != *((double*)v123 + 2))
						{
							v123 = (_DWORD*)*((_QWORD*)v123 + 4);
							if (!v123)
							{
								v123 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v123 = (_DWORD*)(*(_QWORD*)(v122 + 24) + 16i64 * (v139 - 1));
					}
					v124 = v140[2];
					*(_QWORD*)v124 = *(_QWORD*)v123;
					v125 = v123[2];
					v126 = v153;
					*(_DWORD*)(v124 + 8) = v125;
					*(_QWORD*)(v121 + 16) += 16i64;
					v127 = *(_QWORD*)(v121 + 16);
					*(_DWORD*)(v127 + 8) = 3;
					++v153;
					*(double*)v127 = (double)v126;
					*(_QWORD*)(v121 + 16) += 16i64;
					v128 = *(_QWORD*)(v121 + 16);
					v129 = *(_QWORD*)(*(_QWORD*)(v121 + 32) + 160i64);
					if ((unsigned int)(v101 - 1) >= *(_DWORD*)(v129 + 56))
					{
						if ((double)v101 == 0.0)
						{
							v130 = *(_DWORD**)(v129 + 32);
						}
						else
						{
							v159 = (double)v101;
							v130 = (_DWORD*)(*(_QWORD*)(v129 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v159) + HIDWORD(v159))
									% (((1i64 << *(_BYTE*)(v129 + 11)) - 1) | 1)));
						}
						while (v130[6] != 3 || (double)v101 != *((double*)v130 + 2))
						{
							v130 = (_DWORD*)*((_QWORD*)v130 + 4);
							if (!v130)
							{
								v130 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v130 = (_DWORD*)(*(_QWORD*)(v129 + 24) + 16i64 * (v101 - 1));
					}
					*(_QWORD*)v128 = *(_QWORD*)v130;
					*(_DWORD*)(v128 + 8) = v130[2];
					*(_QWORD*)(v121 + 16) += 16i64;
					sub_14005EA50(
						v121,
						(__int64*)(*(_QWORD*)(v121 + 16) - 48i64),
						(int*)(*(_QWORD*)(v121 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v121 + 16) - 16i64));
					*(_QWORD*)(v121 + 16) -= 48i64;
				}
				if (v101 >= 0)
				{
					v131 = *(_DWORD**)(*(_QWORD*)sub_1400580E0((__int64)a1, -10000) + 32i64);
					while (v131[6] != 3 || *((double*)v131 + 2) != 0.0)
					{
						v131 = (_DWORD*)*((_QWORD*)v131 + 4);
						if (!v131)
						{
							v131 = dword_140A12138;
							break;
						}
					}
					v132 = a1[2];
					*(_QWORD*)v132 = *(_QWORD*)v131;
					*(_DWORD*)(v132 + 8) = v131[2];
					a1[2] += 16i64;
					sub_140058B30((__int64)a1, -10000);
					v133 = a1[2];
					*(_DWORD*)(v133 + 8) = 3;
					*(double*)v133 = (double)v101;
					a1[2] += 16i64;
					sub_140058B30((__int64)a1, -10000);
				}
			}
			v93 += 3;
			v161 = --v91;
		} while (v91);
		v92 = v151[0];
		v4 = (__int64)v140;
		v7 = v139;
	}
	v134 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), v7);
	v135 = *(_QWORD*)(v4 + 16);
	*(_QWORD*)v135 = *v134;
	v136 = *((unsigned int*)v134 + 2);
	*(_DWORD*)(v135 + 8) = v136;
	*(_QWORD*)(v4 + 16) += 16i64;
	sub_1400579E0(v4, v136, v7);
	if (v92)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v92 - 2) + 8i64))(v92 - 4);
	return 1i64;
}
// 140416717: variable 'v23' is possibly undefined
// 140416727: variable 'v25' is possibly undefined
// 140416767: variable 'v24' is possibly undefined
// 14041679A: variable 'v12' is possibly undefined
// 140416847: variable 'v41' is possibly undefined
// 140416895: variable 'v42' is possibly undefined
// 140416982: variable 'v58' is possibly undefined
// 140416DBD: variable 'v47' is possibly undefined
// 140416E76: variable 'v102' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140AF9ED0: using guessed type wchar_t aPeoowner[9];
// 140AF9FA0: using guessed type wchar_t aClgowner[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65948: using guessed type __int64 qword_140C65948;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65988: using guessed type __int64 qword_140C65988;
// 140C65B80: using guessed type __int64 qword_140C65B80;

