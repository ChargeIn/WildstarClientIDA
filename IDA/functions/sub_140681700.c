#include "../winhttp.h"

//----- (0000000140681700) ----------------------------------------------------
__int64 __fastcall sub_140681700(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // ebx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // r14
	__int64 v9; // rdx
	__int64 v10; // rcx
	int v11; // esi
	int v12; // esi
	int v13; // r13d
	__int64 v14; // r15
	BOOL v15; // eax
	unsigned __int64 v16; // rsi
	__int64 v17; // rcx
	unsigned __int64 v18; // rax
	__int64 v19; // rbx
	__int64 v20; // rax
	int v21; // eax
	__int64 v22; // rdx
	unsigned __int64 v23; // rcx
	__int64 v24; // rax
	__int64 v25; // rbx
	__int64 v26; // rax
	int v27; // eax
	__int64 v28; // rbx
	unsigned int v29; // r9d
	unsigned int v30; // r8d
	int v31; // r12d
	__int64 v32; // r13
	unsigned int* v33; // r14
	__int64 v34; // rdx
	__int64 v35; // rax
	__int64 v36; // rsi
	unsigned int v37; // r15d
	BOOL v38; // r12d
	__int64 v39; // rbx
	__int64 v40; // rax
	int v41; // ebx
	__int64 v42; // rax
	_QWORD* v43; // rax
	__int64 v44; // rdx
	unsigned __int16* v45; // r10
	_QWORD* v46; // rax
	__int64 v47; // r10
	__int64 v48; // rdx
	_QWORD* v49; // rax
	__int64 v50; // r10
	unsigned __int64* v51; // rdx
	unsigned __int64 v52; // r8
	BOOL* v53; // rcx
	__int64* v54; // rax
	__int64 v55; // rdx
	unsigned int* v56; // r15
	__int64 v57; // rcx
	int* v58; // rsi
	unsigned int v59; // r14d
	__int64 v60; // rdx
	unsigned __int64 v61; // rcx
	__int64 v62; // rbx
	__int64 v63; // rax
	int v64; // ebx
	_QWORD* v65; // rax
	__int64 v66; // rdx
	__int64 v67; // rcx
	BOOL v68; // esi
	_QWORD* v69; // rax
	__int64 v70; // rdx
	unsigned __int64* v71; // rdx
	unsigned __int64 v72; // r8
	BOOL* v73; // rcx
	__int64* v74; // rax
	int v75; // r14d
	__int64 v76; // rdx
	__int64 v77; // rcx
	__int64 v78; // rbx
	unsigned int v79; // edx
	__int64 v80; // rax
	int v81; // ebx
	int v82; // esi
	unsigned int v83; // eax
	unsigned __int64 v84; // r15
	int v85; // r13d
	_QWORD* v86; // rax
	__int64 v87; // rdx
	int v88; // r10d
	_QWORD* v89; // rax
	__int64 v90; // r10
	unsigned __int64* v91; // rdx
	unsigned __int64 v92; // r8
	_DWORD* v93; // rcx
	__int64* v94; // rax
	_QWORD* v95; // rax
	__int64 v96; // r10
	unsigned __int64* v97; // rdx
	unsigned __int64 v98; // r8
	_DWORD* v99; // rcx
	__int64* v100; // rax
	unsigned __int64 v101; // rax
	int v102; // ebx
	_QWORD* v103; // rax
	__int64 v104; // r10
	unsigned __int64* v105; // rdx
	unsigned __int64 v106; // r8
	_DWORD* v107; // rcx
	__int64* v108; // rax
	_QWORD* v109; // rax
	__int64 v110; // r10
	unsigned __int64* v111; // rdx
	unsigned __int64 v112; // r8
	BOOL* v113; // rax
	__int64* v114; // rax
	__int64 v115; // rax
	__int64 v116; // rdx
	_QWORD* v117; // rax
	__int64 v118; // rdx
	_QWORD* v119; // rax
	__int64 v120; // r8
	unsigned __int64 v122; // [rsp+30h] [rbp-D0h]
	int v123; // [rsp+38h] [rbp-C8h]
	__int64 v124; // [rsp+40h] [rbp-C0h] BYREF
	int v125; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v126)(); // [rsp+50h] [rbp-B0h] BYREF
	__int64 v127; // [rsp+58h] [rbp-A8h]
	_QWORD* v128; // [rsp+60h] [rbp-A0h]
	int v129; // [rsp+68h] [rbp-98h]
	__int64 v130; // [rsp+70h] [rbp-90h]
	BOOL v131; // [rsp+78h] [rbp-88h]
	__int64 v132; // [rsp+80h] [rbp-80h]
	__int64 v133; // [rsp+88h] [rbp-78h]
	__int64(__fastcall * *v134)(); // [rsp+90h] [rbp-70h] BYREF
	int v135; // [rsp+98h] [rbp-68h]
	_QWORD* v136; // [rsp+A0h] [rbp-60h]
	int v137; // [rsp+A8h] [rbp-58h]
	__int64(__fastcall * *v138)(); // [rsp+B0h] [rbp-50h] BYREF
	int v139; // [rsp+B8h] [rbp-48h]
	_QWORD* v140; // [rsp+C0h] [rbp-40h]
	int v141; // [rsp+C8h] [rbp-38h]
	__int64 v142; // [rsp+D0h] [rbp-30h]
	__int64 v143; // [rsp+D8h] [rbp-28h]
	__int64 v144[2]; // [rsp+E0h] [rbp-20h] BYREF
	__int64 v145; // [rsp+F0h] [rbp-10h]
	__int64(__fastcall * *v146)(); // [rsp+F8h] [rbp-8h] BYREF
	int v147; // [rsp+100h] [rbp+0h]
	_QWORD* v148; // [rsp+108h] [rbp+8h]
	int v149; // [rsp+110h] [rbp+10h]
	int v150[4]; // [rsp+118h] [rbp+18h] BYREF

	v1 = (_QWORD*)a1;
	v148 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v146 = off_140B569F0;
	v149 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v147 = v5;
	v6 = sub_140056AB0(v1, 1u);
	if (v6
		&& (v7 = *(_QWORD*)(v6 + 8)) != 0
		&& (v8 = *(_QWORD*)(v7 + 8), (v143 = v8) != 0)
		&& *(_QWORD*)(v8 + 32)
		&& (v9 = *(_QWORD*)(qword_140C65898 + 120)) != 0)
	{
		v10 = *(_QWORD*)(v8 + 32);
		v11 = *(_DWORD*)(*(_QWORD*)(v10 + 8) + 36i64);
		v130 = v10;
		v12 = v11 & 1;
		if (v12)
			v13 = 0;
		else
			v13 = sub_1406848F0(v10, v9);
		v125 = v13;
		v122 = 0i64;
		v142 = v12;
		if (*(_QWORD*)(v8 + 16))
		{
			v14 = 0i64;
			v15 = v12 != 0;
			v133 = 0i64;
			LODWORD(v16) = 0;
			v131 = v15;
			while (1)
			{
				v17 = v1[4];
				v136 = v1;
				v18 = *(_QWORD*)(v17 + 112);
				v134 = off_140B569F0;
				v137 = 1;
				if (*(_QWORD*)(v17 + 120) >= v18)
					sub_14005E2C0((__int64)v1);
				v19 = v1[2];
				v20 = sub_14005C1B0((__int64)v1, 0, 0);
				*(_DWORD*)(v19 + 8) = 5;
				*(_QWORD*)v19 = v20;
				v1[2] += 16i64;
				v21 = sub_1400578C0((__int64)v1);
				v22 = v1[4];
				v135 = v21;
				v23 = *(_QWORD*)(v22 + 112);
				v24 = v14 + *(_QWORD*)(v8 + 8);
				v138 = off_140B569F0;
				v145 = v24;
				v140 = v1;
				v141 = 1;
				if (*(_QWORD*)(v22 + 120) >= v23)
					sub_14005E2C0((__int64)v1);
				v25 = v1[2];
				v26 = sub_14005C1B0((__int64)v1, 0, 0);
				*(_DWORD*)(v25 + 8) = 5;
				*(_QWORD*)v25 = v26;
				v1[2] += 16i64;
				v27 = sub_1400578C0((__int64)v1);
				v28 = v130;
				v29 = *(_DWORD*)(v8 + 108);
				v30 = **(_DWORD**)(v8 + 24);
				v31 = v27;
				v139 = v27;
				sub_140684A40(v130, v150, v30, v29, v16, v13);
				v132 = 0i64;
				v32 = 3i64;
				v123 = 1;
				if (v142)
				{
					v33 = (unsigned int*)v150;
					v34 = 52i64 - (_QWORD)v150;
					v124 = 52i64 - (_QWORD)v150;
					do
					{
						v35 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
							qword_140C65980,
							*(unsigned int*)((char*)v33 + v34 + *(_QWORD*)(v28 + 8)),
							0i64);
						v36 = v35;
						if (v35)
						{
							v37 = *v33;
							v38 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v35 + 152i64))(v35) >= v37;
							if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
								sub_14005E2C0((__int64)v1);
							v39 = v1[2];
							v40 = sub_14005C1B0((__int64)v1, 0, 0);
							*(_DWORD*)(v39 + 8) = 5;
							*(_QWORD*)v39 = v40;
							v1[2] += 16i64;
							v41 = sub_1400578C0((__int64)v1);
							v42 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v36 + 320i64))(v36);
							sub_14034BDD0(*(_QWORD*)(v42 + 8), *(_DWORD*)(*(_QWORD*)(v42 + 8) + 32i64));
							v43 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v41);
							v44 = v1[2];
							*(_QWORD*)v44 = *v43;
							*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
							v1[2] += 16i64;
							sub_1400F0870((__int64)v1, v44, L"strObjective", v45);
							v1[2] -= 16i64;
							v46 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v41);
							*(_QWORD*)v47 = *v46;
							*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
							v1[2] += 16i64;
							sub_1400F06F0((__int64)v1, v48, L"nCount", v37);
							v1[2] -= 16i64;
							v49 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v41);
							*(_QWORD*)v50 = *v49;
							*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
							v1[2] += 16i64;
							v51 = (unsigned __int64*)sub_14018F0E0(&v126, L"bHasEnough")[1];
							if (v51)
							{
								v52 = -1i64;
								do
									++v52;
								while (*((_BYTE*)v51 + v52));
								sub_140058710((__int64)v1, v51, v52);
							}
							else
							{
								*(_DWORD*)(v1[2] + 8i64) = 0;
								v1[2] += 16i64;
							}
							if (v127)
								sub_14018B900(v127, 0);
							v53 = (BOOL*)v1[2];
							v53[2] = 1;
							*v53 = v38;
							v1[2] += 16i64;
							v54 = (__int64*)sub_1400580E0((__int64)v1, -3);
							sub_14005EA50((__int64)v1, v54, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
							v1[2] -= 48i64;
							sub_1400FB1D0((__int64)&v138);
							sub_1400579E0((__int64)v1, v55, v41);
							v28 = v130;
						}
						v34 = v124;
						++v33;
						--v32;
					} while (v32);
					v31 = v139;
					sub_1400FB2A0((__int64)&v134, (__int64)L"arObjectives", v139);
				}
				else
				{
					v56 = (unsigned int*)v150;
					v57 = 40i64 - (_QWORD)v150;
					v124 = 40i64 - (_QWORD)v150;
					do
					{
						v58 = sub_1400B5DF0(qword_140C658F0, *(unsigned int*)((char*)v56 + *(_QWORD*)(v28 + 8) + v57), 0i64);
						if (v58)
						{
							v59 = *v56;
							if (*v56)
							{
								v60 = v1[4];
								v128 = v1;
								v61 = *(_QWORD*)(v60 + 112);
								v126 = off_140B569F0;
								v129 = 1;
								if (*(_QWORD*)(v60 + 120) >= v61)
									sub_14005E2C0((__int64)v1);
								v62 = v1[2];
								v63 = sub_14005C1B0((__int64)v1, 0, 0);
								*(_DWORD*)(v62 + 8) = 5;
								*(_QWORD*)v62 = v63;
								v1[2] += 16i64;
								v64 = sub_1400578C0((__int64)v1);
								LODWORD(v127) = v64;
								if ((unsigned int)sub_140415C70(v1, (__int64)v58))
								{
									sub_1400FB540((__int64)&v126);
									v1[2] -= 16i64;
								}
								v65 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v64);
								v66 = v1[2];
								*(_QWORD*)v66 = *v65;
								*(_DWORD*)(v66 + 8) = *((_DWORD*)v65 + 2);
								v1[2] += 16i64;
								sub_1400F06F0((__int64)v1, v66, L"nCount", v59);
								v67 = qword_140C65898;
								v1[2] -= 16i64;
								v68 = (unsigned int)sub_1403AC840(v67 + 160, 2, *v58) >= v59;
								v69 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v64);
								v70 = v1[2];
								*(_QWORD*)v70 = *v69;
								*(_DWORD*)(v70 + 8) = *((_DWORD*)v69 + 2);
								v1[2] += 16i64;
								v71 = (unsigned __int64*)sub_14018F0E0(&v126, L"bHasEnough")[1];
								if (v71)
								{
									v72 = -1i64;
									do
										++v72;
									while (*((_BYTE*)v71 + v72));
									sub_140058710((__int64)v1, v71, v72);
								}
								else
								{
									*(_DWORD*)(v1[2] + 8i64) = 0;
									v1[2] += 16i64;
								}
								if (v127)
									sub_14018B900(v127, 0);
								v73 = (BOOL*)v1[2];
								v73[2] = 1;
								*v73 = v68;
								v1[2] += 16i64;
								v74 = (__int64*)sub_1400580E0((__int64)v1, -3);
								sub_14005EA50((__int64)v1, v74, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
								v75 = v123;
								v1[2] -= 48i64;
								if (!v68)
									v75 = 0;
								v123 = v75;
								sub_1400FB1D0((__int64)&v138);
								v31 = v139;
								sub_1400FB2A0((__int64)&v134, (__int64)L"arItems", v139);
								sub_1400579E0((__int64)v1, v76, v64);
								v28 = v130;
							}
						}
						v57 = v124;
						++v56;
						--v32;
					} while (v32);
				}
				LODWORD(v124) = *(_DWORD*)(*(_QWORD*)(v145 + 8) + 28i64);
				if ((unsigned int)sub_1403D3470(v1, (int*)&v124))
				{
					sub_1400FB540((__int64)&v134);
					v1[2] -= 16i64;
				}
				v8 = v143;
				v78 = *(_QWORD*)(v143 + 24);
				v79 = *(_DWORD*)(v78 + 40);
				if (v79)
				{
					v80 = sub_140432A10(v77, v79);
					if (v80)
					{
						if (*(_DWORD*)(v80 + 108) == -1 && *(_QWORD*)(v80 + 32))
						{
							v81 = 0;
							v132 = v80;
							v82 = 0;
						LABEL_65:
							v84 = v122;
							goto LABEL_66;
						}
					}
				}
				v82 = v123;
				if (!v123)
				{
					v81 = 0;
					goto LABEL_65;
				}
				v83 = *(_DWORD*)(v8 + 108);
				v84 = v122;
				if (*(_DWORD*)(v78 + 32) == -1)
				{
					if ((unsigned int)v122 > v83)
						goto LABEL_60;
				}
				else if ((unsigned int)v122 >= v83)
				{
					goto LABEL_60;
				}
				if (v83 != -1)
				{
					v81 = 0;
					v82 = 0;
					goto LABEL_66;
				}
			LABEL_60:
				v82 = 1;
				v81 = 0;
			LABEL_66:
				v85 = v135;
				v86 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v135);
				v87 = v1[2];
				*(_QWORD*)v87 = *v86;
				*(_DWORD*)(v87 + 8) = *((_DWORD*)v86 + 2);
				v1[2] += 16i64;
				sub_1400F06F0((__int64)v1, v87, L"idImprovement", v88);
				v1[2] -= 16i64;
				LOBYTE(v81) = *(unsigned int*)(v8 + 108) == v84;
				v89 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v85);
				*(_QWORD*)v90 = *v89;
				*(_DWORD*)(v90 + 8) = *((_DWORD*)v89 + 2);
				v1[2] += 16i64;
				v91 = (unsigned __int64*)sub_14018F0E0(&v126, L"bIsActive")[1];
				if (v91)
				{
					v92 = -1i64;
					do
						++v92;
					while (*((_BYTE*)v91 + v92));
					sub_140058710((__int64)v1, v91, v92);
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
					v1[2] += 16i64;
				}
				if (v127)
					sub_14018B900(v127, 0);
				v93 = (_DWORD*)v1[2];
				v93[2] = 1;
				*v93 = v81 != 0;
				v1[2] += 16i64;
				v94 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v94, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v95 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v85);
				*(_QWORD*)v96 = *v95;
				*(_DWORD*)(v96 + 8) = *((_DWORD*)v95 + 2);
				v1[2] += 16i64;
				v97 = (unsigned __int64*)sub_14018F0E0(&v126, L"bCanPlace")[1];
				if (v97)
				{
					v98 = -1i64;
					do
						++v98;
					while (*((_BYTE*)v97 + v98));
					sub_140058710((__int64)v1, v97, v98);
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
					v1[2] += 16i64;
				}
				if (v127)
					sub_14018B900(v127, 0);
				v99 = (_DWORD*)v1[2];
				v99[2] = 1;
				*v99 = v82 != 0;
				v1[2] += 16i64;
				v100 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v100, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v101 = *(unsigned int*)(v8 + 108);
				if ((_DWORD)v101 == -1 || (v102 = 1, v122 >= v101))
					v102 = 0;
				v103 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v85);
				*(_QWORD*)v104 = *v103;
				*(_DWORD*)(v104 + 8) = *((_DWORD*)v103 + 2);
				v1[2] += 16i64;
				v105 = (unsigned __int64*)sub_14018F0E0(&v126, L"bObsolete")[1];
				if (v105)
				{
					v106 = -1i64;
					do
						++v106;
					while (*((_BYTE*)v105 + v106));
					sub_140058710((__int64)v1, v105, v106);
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
					v1[2] += 16i64;
				}
				if (v127)
					sub_14018B900(v127, 0);
				v107 = (_DWORD*)v1[2];
				v107[2] = 1;
				*v107 = v102 != 0;
				v1[2] += 16i64;
				v108 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v108, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v109 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v85);
				*(_QWORD*)v110 = *v109;
				*(_DWORD*)(v110 + 8) = *((_DWORD*)v109 + 2);
				v1[2] += 16i64;
				v111 = (unsigned __int64*)sub_14018F0E0(&v126, L"bIsPublicEvent")[1];
				if (v111)
				{
					v112 = -1i64;
					do
						++v112;
					while (*((_BYTE*)v111 + v112));
					sub_140058710((__int64)v1, v111, v112);
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
					v1[2] += 16i64;
				}
				if (v127)
					sub_14018B900(v127, 0);
				v113 = (BOOL*)v1[2];
				*v113 = v131;
				v113[2] = 1;
				v1[2] += 16i64;
				v114 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v114, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v115 = v132;
				v1[2] -= 48i64;
				if (v115)
				{
					v144[1] = v115;
					v144[0] = (__int64)off_140B6FE30;
					if ((unsigned int)sub_1404342E0(v1, (__int64)v144))
					{
						sub_1400FB540((__int64)&v134);
						v1[2] -= 16i64;
					}
					v144[0] = (__int64)&off_140B567A8;
				}
				sub_1400FB1D0((__int64)&v146);
				if (v140)
					sub_1400579E0((__int64)v140, v116, v31);
				sub_1400579E0((__int64)v1, v116, v85);
				v13 = v125;
				v16 = v122 + 1;
				v14 = v133 + 24;
				v133 += 24i64;
				v122 = v16;
				if (v16 >= *(_QWORD*)(v8 + 16))
				{
					v1 = v148;
					v5 = v147;
					break;
				}
			}
		}
		v117 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v118 = v1[2];
		*(_QWORD*)v118 = *v117;
		*(_DWORD*)(v118 + 8) = *((_DWORD*)v117 + 2);
	}
	else
	{
		v119 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v120 = v1[2];
		*(_QWORD*)v120 = *v119;
		v118 = *((unsigned int*)v119 + 2);
		*(_DWORD*)(v120 + 8) = v118;
	}
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v118, v5);
	return 1i64;
}
// 140681A42: variable 'v45' is possibly undefined
// 140681A6F: variable 'v47' is possibly undefined
// 140681A81: variable 'v48' is possibly undefined
// 140681AAB: variable 'v50' is possibly undefined
// 140681B5A: variable 'v55' is possibly undefined
// 140681DAD: variable 'v76' is possibly undefined
// 140681E0D: variable 'v77' is possibly undefined
// 140681EAC: variable 'v88' is possibly undefined
// 140681EE1: variable 'v90' is possibly undefined
// 140681FAA: variable 'v96' is possibly undefined
// 140682082: variable 'v104' is possibly undefined
// 140682147: variable 'v110' is possibly undefined
// 140682242: variable 'v116' is possibly undefined
// 140B31BB0: using guessed type wchar_t aBobsolete[10];
// 140B31BC8: using guessed type wchar_t aBispublicevent[15];
// 140B31BE8: using guessed type wchar_t aBisactive_8[10];
// 140B31C00: using guessed type wchar_t aBcanplace_1[10];
// 140B31C30: using guessed type wchar_t aIdimprovement[14];
// 140B31C50: using guessed type wchar_t aBhasenough_0[11];
// 140B31C68: using guessed type wchar_t aAritems[8];
// 140B31C98: using guessed type wchar_t aNcount_43[7];
// 140B31CA8: using guessed type wchar_t aBhasenough[11];
// 140B31CC0: using guessed type wchar_t aArobjectives_0[13];
// 140B31CE0: using guessed type wchar_t aStrobjective_0[13];
// 140B31D00: using guessed type wchar_t aNcount_42[7];
// 140B567A8: using guessed type __int64 (__fastcall *off_140B567A8)();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B6FE30: using guessed type __int64 (__fastcall *off_140B6FE30[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65980: using guessed type __int64 qword_140C65980;
// 140681700: using guessed type int var_38[4];

