#include "../winhttp.h"

//----- (0000000140599010) ----------------------------------------------------
__int64 __fastcall sub_140599010(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // r15
	__int64 v4; // r13
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rcx
	int v11; // r14d
	_QWORD* v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rdx
	int v15; // r11d
	__int64 v16; // rbx
	_QWORD* v17; // rax
	__int64 v18; // rdx
	int v19; // r11d
	__int64 v20; // rbx
	_QWORD* v21; // rax
	__int64 v22; // rdx
	int v23; // r11d
	int v24; // esi
	int* v25; // rcx
	int* v26; // rax
	_QWORD* v27; // rax
	_QWORD* v28; // rax
	__int64 v29; // rcx
	__int64 v30; // rdx
	unsigned __int16* v31; // r11
	__int64 v32; // rbx
	_QWORD* v33; // rax
	__int64 v34; // rdx
	int v35; // r11d
	unsigned int v36; // edx
	__int64 v37; // r8
	__int64 v38; // rcx
	__int64 v39; // rax
	int v40; // ebx
	__int64 v41; // rax
	__int64 v42; // rax
	unsigned int v43; // r8d
	unsigned __int64 v44; // rdx
	int v45; // ebx
	int v46; // r12d
	__int64 v47; // rcx
	__int64 v48; // r14
	__int64 v49; // rax
	__int64 v50; // r14
	__int64 v51; // rax
	__int64 v52; // rdx
	unsigned int v53; // eax
	__int64 v54; // rcx
	_QWORD* v55; // rax
	__int64 v56; // rcx
	__int64 v57; // rdx
	int v58; // r11d
	_QWORD* v59; // rax
	__int64 v60; // r11
	__int64 v61; // rdx
	int v62; // ebx
	_QWORD* v63; // rax
	__int64 v64; // r11
	__int64 v65; // rdx
	unsigned __int64 v66; // rdx
	unsigned __int64 v67; // rcx
	_DWORD* v68; // rax
	int v69; // r12d
	_QWORD* v70; // rax
	__int64 v71; // r11
	unsigned __int64* v72; // rdx
	unsigned __int64 v73; // rbx
	unsigned __int64 v74; // r8
	_DWORD* v75; // rcx
	__int64* v76; // rax
	int v77; // r12d
	_QWORD* v78; // rax
	__int64 v79; // r11
	unsigned __int64* v80; // rdx
	unsigned __int64 v81; // r8
	_DWORD* v82; // rcx
	__int64* v83; // rax
	int v84; // r12d
	_QWORD* v85; // rax
	__int64 v86; // r11
	unsigned __int64* v87; // rdx
	unsigned __int64 v88; // r8
	_DWORD* v89; // rcx
	__int64* v90; // rax
	int v91; // r12d
	_QWORD* v92; // rax
	__int64 v93; // r11
	unsigned __int64* v94; // rdx
	unsigned __int64 v95; // r8
	_DWORD* v96; // rcx
	__int64* v97; // rax
	int v98; // r12d
	_QWORD* v99; // rax
	__int64 v100; // r11
	unsigned __int64* v101; // rdx
	_DWORD* v102; // rax
	__int64* v103; // rax
	__int64 v104; // rdx
	int v105; // eax
	unsigned int v106; // edx
	_QWORD* v107; // rax
	__int64 v108; // rcx
	__int64 v109; // rdx
	int v110; // r11d
	__int64 v111; // rcx
	unsigned __int64 v112; // rax
	__int64 v113; // rbx
	__int64 v114; // rax
	__int64 v115; // rbx
	int* v116; // r12
	int v117; // r9d
	unsigned int v118; // r14d
	__int64 v119; // rax
	unsigned int v120; // esi
	bool v121; // zf
	int* v122; // rax
	__int64 v123; // r13
	unsigned int v124; // eax
	__int64 v125; // rcx
	int v126; // r14d
	unsigned __int64 v127; // rax
	__int64 v128; // rbx
	__int64 v129; // rax
	int v130; // ebx
	__int64 v131; // rcx
	_QWORD* v132; // rax
	__int64 v133; // rcx
	__int64 v134; // rdx
	__int64 v135; // rcx
	_QWORD* v136; // rax
	__int64 v137; // rcx
	__int64 v138; // rdx
	int v139; // r11d
	__int64 v140; // rdx
	int v141; // esi
	int v142; // ebx
	int v143; // xmm0_4
	int v144; // ecx
	int v145; // r14d
	_QWORD* v146; // rax
	__int64 v147; // rcx
	__int64 v148; // rdx
	_QWORD* v149; // rax
	__int64 v150; // rdx
	__int64 v151; // rcx
	__int64 v152; // r11
	__int64 v153; // rdx
	__int64(__fastcall * *v154)(); // [rsp+30h] [rbp-D0h] BYREF
	int v155; // [rsp+38h] [rbp-C8h]
	_QWORD* v156; // [rsp+40h] [rbp-C0h]
	int v157; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v158)(); // [rsp+50h] [rbp-B0h] BYREF
	__int64 v159; // [rsp+58h] [rbp-A8h]
	_QWORD* v160; // [rsp+60h] [rbp-A0h]
	int v161; // [rsp+68h] [rbp-98h]
	__int64(__fastcall * *v162)(); // [rsp+70h] [rbp-90h] BYREF
	int v163; // [rsp+78h] [rbp-88h]
	_QWORD* v164; // [rsp+80h] [rbp-80h]
	int v165; // [rsp+88h] [rbp-78h]
	__int64 v166[24]; // [rsp+90h] [rbp-70h] BYREF
	__int128 v167; // [rsp+150h] [rbp+50h]
	int* v168; // [rsp+160h] [rbp+60h]
	unsigned int v169; // [rsp+1B8h] [rbp+B8h]
	__int64 v170; // [rsp+1B8h] [rbp+B8h]
	__int64 v171; // [rsp+1C0h] [rbp+C0h]
	__int64 v172; // [rsp+1C8h] [rbp+C8h]
	__int64 v173; // [rsp+1C8h] [rbp+C8h]

	v169 = sub_1405925D0(a1, 1u);
	result = sub_140245C00(v169);
	v3 = result;
	if (result)
	{
		result = (__int64)sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(result + 12), 0i64);
		v4 = result;
		v171 = result;
		if (result)
		{
			v5 = a1[4];
			v154 = off_140B569F0;
			v6 = *(_QWORD*)(v5 + 112);
			v156 = a1;
			v157 = 1;
			if (*(_QWORD*)(v5 + 120) >= v6)
				sub_14005E2C0((__int64)a1);
			v7 = a1[2];
			v8 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v7 + 8) = 5;
			*(_QWORD*)v7 = v8;
			a1[2] += 16i64;
			v9 = sub_1400578C0((__int64)a1);
			v10 = *(_QWORD*)(a1[4] + 160i64);
			v11 = v9;
			v155 = v9;
			v12 = sub_14005C3C0(v10, v9);
			v13 = a1[2];
			*(_QWORD*)v13 = *v12;
			*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v14, L"nSchematicId", v15);
			a1[2] -= 16i64;
			v16 = a1[2];
			v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
			*(_QWORD*)v16 = *v17;
			*(_DWORD*)(v16 + 8) = *((_DWORD*)v17 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v18, L"eTradeskillId", v19);
			a1[2] -= 16i64;
			v20 = a1[2];
			v21 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
			*(_QWORD*)v20 = *v21;
			*(_DWORD*)(v20 + 8) = *((_DWORD*)v21 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v22, L"eTier", v23);
			a1[2] -= 16i64;
			sub_1400B7210((__int64)v166, (int*)L"$1n");
			v24 = 0;
			v168 = 0i64;
			v167 = 0i64;
			v166[0] = (__int64)off_140B69230;
			v25 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v167 = v25;
			*((_QWORD*)&v167 + 1) = v25;
			v168 = v25 + 4;
			if (v25)
				*(_WORD*)v25 = 0;
			v26 = sub_14018B280(96i64, 0);
			if (v26)
				v27 = (_QWORD*)sub_1404DDAF0((__int64)v26, *(_DWORD*)(v4 + 476));
			else
				v27 = 0i64;
			sub_1400B7480((__int64)v166, v27);
			sub_1400B7660(v166);
			v28 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
			v29 = a1[2];
			*(_QWORD*)v29 = *v28;
			*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v30, L"strName", v31);
			a1[2] -= 16i64;
			v32 = a1[2];
			v33 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
			*(_QWORD*)v32 = *v33;
			*(_DWORD*)(v32 + 8) = *((_DWORD*)v33 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v34, L"nParentSchematicId", v35);
			a1[2] -= 16i64;
			if ((unsigned int)sub_140415C70(a1, v4))
			{
				sub_1400FB540((__int64)&v154);
				a1[2] -= 16i64;
			}
			v36 = *(_DWORD*)v3;
			v37 = *(_QWORD*)(qword_140C65B90 + 208);
			v38 = v37;
			v39 = *(_QWORD*)(v37 + 8);
			while (v39)
			{
				if (*(_DWORD*)(v39 + 32) < v36)
				{
					v39 = *(_QWORD*)(v39 + 24);
				}
				else
				{
					v38 = v39;
					v39 = *(_QWORD*)(v39 + 16);
				}
			}
			if (v38 == v37 || (v172 = v38, v36 < *(_DWORD*)(v38 + 32)))
				v172 = *(_QWORD*)(qword_140C65B90 + 208);
			if (v172 == v37)
			{
				v40 = 0;
			}
			else
			{
				v40 = *(_DWORD*)(v172 + 36);
				if (v40)
				{
					v41 = sub_140643E20(qword_140C65C28, v40);
					if ((unsigned int)sub_1404332A0(a1, v41))
					{
						sub_1400FB540((__int64)&v154);
						a1[2] -= 16i64;
					}
				}
			}
			if ((*(_BYTE*)(v3 + 32) & 1) != 0)
			{
				if ((unsigned int)sub_140644E10(v38, *(_DWORD*)(v3 + 8), *(_DWORD*)(v3 + 28)))
				{
					v42 = sub_140643E20(qword_140C65C28, v40);
					if ((unsigned int)sub_1404332A0(a1, v42))
					{
						sub_1400FB540((__int64)&v154);
						a1[2] -= 16i64;
					}
				}
			}
			v43 = *(_DWORD*)(v3 + 8);
			v44 = *(_QWORD*)(qword_140C65898 + 5792);
			v45 = 0;
			v46 = 0;
			v47 = 0i64;
			if (v44)
			{
				v48 = *(_QWORD*)(qword_140C65898 + 5784);
				v49 = 0i64;
				while (*(_DWORD*)(*(_QWORD*)(v48 + 8 * v49) + 8i64) != v43)
				{
					v47 = (unsigned int)(v47 + 1);
					v49 = (unsigned int)v47;
					if ((unsigned int)v47 >= v44)
						goto LABEL_33;
				}
				v50 = *(_QWORD*)(v48 + 8i64 * (unsigned int)v47);
			}
			else
			{
			LABEL_33:
				v50 = 0i64;
			}
			v51 = sub_1405BE150(v47, v43);
			v52 = v51;
			v173 = v51;
			if (v50 && v51)
			{
				v53 = *(_DWORD*)(v50 + 12) ? *(_DWORD*)(v50 + 84) : 0;
				if (v53 <= *(_DWORD*)(v52 + 12))
				{
					if (v53)
					{
						v54 = 48i64 * (v53 - 1) + v52 + 32;
						if (v54)
						{
							v45 = *(_DWORD*)(v54 + 12);
							v46 = *(_DWORD*)(v54 + 4);
						}
					}
				}
			}
			v55 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v155);
			v56 = a1[2];
			*(_QWORD*)v56 = *v55;
			*(_DWORD*)(v56 + 8) = *((_DWORD*)v55 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v57, L"nCraftXp", v58);
			a1[2] -= 16i64;
			v59 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v155);
			*(_QWORD*)v60 = *v59;
			*(_DWORD*)(v60 + 8) = *((_DWORD*)v59 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v61, L"nFailXp", v45);
			a1[2] -= 16i64;
			v62 = v155;
			v63 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v155);
			*(_QWORD*)v64 = *v63;
			*(_DWORD*)(v64 + 8) = *((_DWORD*)v63 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v65, L"nLearnXp", v46);
			a1[2] -= 16i64;
			if (v50 && (v66 = *(_QWORD*)(v50 + 72), v67 = 0i64, v66))
			{
				v68 = *(_DWORD**)(v50 + 64);
				while (*v68 != *(_DWORD*)v3)
				{
					++v67;
					++v68;
					if (v67 >= v66)
						goto LABEL_49;
				}
				v69 = 1;
			}
			else
			{
			LABEL_49:
				v69 = 0;
			}
			v70 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v62);
			*(_QWORD*)v71 = *v70;
			*(_DWORD*)(v71 + 8) = *((_DWORD*)v70 + 2);
			a1[2] += 16i64;
			v72 = (unsigned __int64*)sub_14018F0E0(&v158, L"bIsKnown")[1];
			v73 = -1i64;
			if (v72)
			{
				v74 = -1i64;
				do
					++v74;
				while (*((_BYTE*)v72 + v74));
				sub_140058710((__int64)a1, v72, v74);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v159)
				sub_14018B900(v159, 0);
			v75 = (_DWORD*)a1[2];
			v75[2] = 1;
			*v75 = v69 != 0;
			a1[2] += 16i64;
			v76 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v76, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v77 = (*(_DWORD*)(v3 + 32) >> 2) & 1;
			v78 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v155);
			*(_QWORD*)v79 = *v78;
			*(_DWORD*)(v79 + 8) = *((_DWORD*)v78 + 2);
			a1[2] += 16i64;
			v80 = (unsigned __int64*)sub_14018F0E0(&v158, L"bIsOneUse")[1];
			if (v80)
			{
				v81 = -1i64;
				do
					++v81;
				while (*((_BYTE*)v80 + v81));
				sub_140058710((__int64)a1, v80, v81);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v159)
				sub_14018B900(v159, 0);
			v82 = (_DWORD*)a1[2];
			v82[2] = 1;
			*v82 = v77 != 0;
			a1[2] += 16i64;
			v83 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v83, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v84 = (*(_DWORD*)(v3 + 32) >> 3) & 1;
			v85 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v155);
			*(_QWORD*)v86 = *v85;
			*(_DWORD*)(v86 + 8) = *((_DWORD*)v85 + 2);
			a1[2] += 16i64;
			v87 = (unsigned __int64*)sub_14018F0E0(&v158, L"bIsAutoCraft")[1];
			if (v87)
			{
				v88 = -1i64;
				do
					++v88;
				while (*((_BYTE*)v87 + v88));
				sub_140058710((__int64)a1, v87, v88);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v159)
				sub_14018B900(v159, 0);
			v89 = (_DWORD*)a1[2];
			v89[2] = 1;
			*v89 = v84 != 0;
			a1[2] += 16i64;
			v90 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v90, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v91 = *(_DWORD*)(v3 + 32) & 1;
			v92 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v155);
			*(_QWORD*)v93 = *v92;
			*(_DWORD*)(v93 + 8) = *((_DWORD*)v92 + 2);
			a1[2] += 16i64;
			v94 = (unsigned __int64*)sub_14018F0E0(&v158, L"bIsAutoLearn")[1];
			if (v94)
			{
				v95 = -1i64;
				do
					++v95;
				while (*((_BYTE*)v94 + v95));
				sub_140058710((__int64)a1, v94, v95);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v159)
				sub_14018B900(v159, 0);
			v96 = (_DWORD*)a1[2];
			v96[2] = 1;
			*v96 = v91 != 0;
			a1[2] += 16i64;
			v97 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v97, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			if (*(_DWORD*)(v3 + 28) || (v98 = 1, (*(_BYTE*)(v3 + 32) & 4) == 0))
				v98 = 0;
			v99 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v155);
			*(_QWORD*)v100 = *v99;
			*(_DWORD*)(v100 + 8) = *((_DWORD*)v99 + 2);
			a1[2] += 16i64;
			v101 = (unsigned __int64*)sub_14018F0E0(&v158, L"bIsUniversal")[1];
			if (v101)
			{
				do
					++v73;
				while (*((_BYTE*)v101 + v73));
				sub_140058710((__int64)a1, v101, v73);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v159)
				sub_14018B900(v159, 0);
			v102 = (_DWORD*)a1[2];
			LOBYTE(v24) = v98 != 0;
			v102[2] = 1;
			*v102 = v24;
			a1[2] += 16i64;
			v103 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v103, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			if (*(_DWORD*)(v3 + 8) == 22)
			{
				sub_14059FF20((__int64)&v154, v104, v4);
			}
			else if (v173)
			{
				v105 = *(_DWORD*)(v173 + 16);
				if ((v105 & 8) != 0)
				{
					sub_14059E9A0((__int64)&v154, v169, v3, v4, v173, v50);
				}
				else if ((v105 & 4) != 0)
				{
					sub_14059F9C0((__int64)&v154, v104, v3, v4);
				}
			}
			if (v50)
			{
				v106 = *(_DWORD*)(v3 + 76);
				if (!v106)
					v106 = *(_DWORD*)v3;
				if ((unsigned int)sub_1405E47C0(v50, v106) > 1)
				{
					v107 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v155);
					v108 = a1[2];
					*(_QWORD*)v108 = *v107;
					*(_DWORD*)(v108 + 8) = *((_DWORD*)v107 + 2);
					a1[2] += 16i64;
					sub_1400F06F0((__int64)a1, v109, L"nCraftAtOnceMax", v110);
					a1[2] -= 16i64;
				}
			}
			v111 = a1[4];
			v164 = a1;
			v162 = off_140B569F0;
			v112 = *(_QWORD*)(v111 + 112);
			v165 = 1;
			if (*(_QWORD*)(v111 + 120) >= v112)
				sub_14005E2C0((__int64)a1);
			v113 = a1[2];
			v114 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v113 + 8) = 5;
			*(_QWORD*)v113 = v114;
			a1[2] += 16i64;
			v115 = 5i64;
			v163 = sub_1400578C0((__int64)a1);
			v116 = (int*)(v3 + 36);
			v170 = 5i64;
			do
			{
				v117 = *v116;
				if (*v116)
				{
					v118 = v116[5];
					if (v118)
					{
						if (!*(_DWORD*)(qword_140C65898 + 6328)
							|| (v119 = *(_QWORD*)(qword_140C65898 + 6392), *(_DWORD*)v119 != 1)
							|| (v120 = *(_DWORD*)(v119 + 8), v121 = v120 == 0, !v120)
							&& (!*(_QWORD*)(v119 + 24)
								|| (v120 = *(_DWORD*)(*(_QWORD*)(v119 + 16) + 16i64), v121 = v120 == 0, !v120)))
						{
							v120 = sub_14079E710(
								*(_QWORD*)(qword_140C65898 + 5856),
								*(_DWORD*)(v3 + 8),
								*(_DWORD*)(v4 + 324),
								v117);
							v121 = v120 == 0;
						}
						if (v121)
							v120 = v117;
						v122 = sub_1400B5DF0(qword_140C658F0, v120, 0i64);
						v123 = (__int64)v122;
						if (v122)
						{
							v124 = sub_1405E6300(qword_140C65898 + 5784, 6, *(_DWORD*)(v3 + 8), *(_DWORD*)(v171 + 324), v122[81]);
							if (v124 < v118)
							{
								v125 = a1[4];
								v126 = v118 - v124;
								v158 = off_140B569F0;
								v127 = *(_QWORD*)(v125 + 112);
								v160 = a1;
								v161 = 1;
								if (*(_QWORD*)(v125 + 120) >= v127)
									sub_14005E2C0((__int64)a1);
								v128 = a1[2];
								v129 = sub_14005C1B0((__int64)a1, 0, 0);
								*(_DWORD*)(v128 + 8) = 5;
								*(_QWORD*)v128 = v129;
								a1[2] += 16i64;
								v130 = sub_1400578C0((__int64)a1);
								v131 = *(_QWORD*)(a1[4] + 160i64);
								LODWORD(v159) = v130;
								v132 = sub_14005C3C0(v131, v130);
								v133 = a1[2];
								*(_QWORD*)v133 = *v132;
								*(_DWORD*)(v133 + 8) = *((_DWORD*)v132 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v134, L"nNeeded", v126);
								v135 = qword_140C65898;
								a1[2] -= 16i64;
								sub_1403AC840(v135 + 160, 1030, v120);
								v136 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v130);
								v137 = a1[2];
								*(_QWORD*)v137 = *v136;
								*(_DWORD*)(v137 + 8) = *((_DWORD*)v136 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v138, L"nOwned", v139);
								a1[2] -= 16i64;
								if ((unsigned int)sub_140415C70(a1, v123))
								{
									sub_1400FB540((__int64)&v158);
									a1[2] -= 16i64;
								}
								sub_1400FB1D0((__int64)&v162);
								sub_1400579E0((__int64)a1, v140, v130);
								v115 = v170;
							}
						}
						v4 = v171;
					}
				}
				++v116;
				v170 = --v115;
			} while (v115);
			v141 = v163;
			sub_1400FB2A0((__int64)&v154, (__int64)L"arMaterials", v163);
			v142 = *(_DWORD*)(v3 + 20);
			v143 = sub_1405E6140(qword_140C65898 + 5784, 10, *(_DWORD*)(v3 + 8), *(_DWORD*)(v4 + 324)).m128_u32[0];
			v144 = v143;
			if (v143 < 0)
				v144 = 0x80000000 - v143;
			if ((int)abs32(v144 - 1065353216) > 84)
				v142 = (int)(float)((float)v142 * *(float*)&v143);
			v145 = v155;
			v146 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v155);
			v147 = a1[2];
			*(_QWORD*)v147 = *v146;
			*(_DWORD*)(v147 + 8) = *((_DWORD*)v146 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v148, L"nCreateCount", v142);
			a1[2] -= 16i64;
			v149 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v145);
			v151 = (__int64)v164;
			*(_QWORD*)v152 = *v149;
			*(_DWORD*)(v152 + 8) = *((_DWORD*)v149 + 2);
			a1[2] += 16i64;
			if (v151)
				sub_1400579E0(v151, v150, v141);
			if ((_QWORD)v167)
				sub_14018B900(v167, 0);
			sub_1400B7390(v166);
			sub_1400579E0((__int64)a1, v153, v145);
			return 1i64;
		}
	}
	return result;
}
// 140599138: variable 'v14' is possibly undefined
// 140599138: variable 'v15' is possibly undefined
// 14059917F: variable 'v18' is possibly undefined
// 14059917F: variable 'v19' is possibly undefined
// 1405991C6: variable 'v22' is possibly undefined
// 1405991C6: variable 'v23' is possibly undefined
// 140599293: variable 'v30' is possibly undefined
// 140599293: variable 'v31' is possibly undefined
// 1405992DA: variable 'v34' is possibly undefined
// 1405992DA: variable 'v35' is possibly undefined
// 1405993B1: variable 'v38' is possibly undefined
// 1405994CA: variable 'v57' is possibly undefined
// 1405994CA: variable 'v58' is possibly undefined
// 1405994FF: variable 'v60' is possibly undefined
// 14059950F: variable 'v61' is possibly undefined
// 140599546: variable 'v64' is possibly undefined
// 140599556: variable 'v65' is possibly undefined
// 1405995B8: variable 'v71' is possibly undefined
// 14059968E: variable 'v79' is possibly undefined
// 14059975B: variable 'v86' is possibly undefined
// 140599822: variable 'v93' is possibly undefined
// 1405998FB: variable 'v100' is possibly undefined
// 14059999D: variable 'v104' is possibly undefined
// 140599A47: variable 'v109' is possibly undefined
// 140599A47: variable 'v110' is possibly undefined
// 140599B32: variable 'v117' is possibly undefined
// 140599C21: variable 'v134' is possibly undefined
// 140599C81: variable 'v138' is possibly undefined
// 140599C81: variable 'v139' is possibly undefined
// 140599CC2: variable 'v140' is possibly undefined
// 140599DC3: variable 'v148' is possibly undefined
// 140599DF6: variable 'v152' is possibly undefined
// 140599E0E: variable 'v150' is possibly undefined
// 140599E3A: variable 'v153' is possibly undefined
// 140B1F9E0: using guessed type wchar_t aNparentschemat[19];
// 140B1FA08: using guessed type wchar_t aStrname_35[8];
// 140B1FA48: using guessed type wchar_t aEtradeskillid_1[14];
// 140B1FA68: using guessed type wchar_t aNschematicid[13];
// 140B1FA88: using guessed type wchar_t a1n_4[4];
// 140B1FA90: using guessed type wchar_t aEtier_1[6];
// 140B1FB38: using guessed type wchar_t aArmaterials[12];
// 140B1FB90: using guessed type wchar_t aNcreatecount[13];
// 140B1FBB0: using guessed type wchar_t aNcraftatoncema[16];
// 140B1FBD0: using guessed type wchar_t aBisuniversal[13];
// 140B1FBF0: using guessed type wchar_t aNowned[7];
// 140B1FC00: using guessed type wchar_t aNneeded[8];
// 140B1FC10: using guessed type wchar_t aBisoneuse[10];
// 140B1FC28: using guessed type wchar_t aBisknown[9];
// 140B1FC40: using guessed type wchar_t aBisautolearn_0[13];
// 140B1FC60: using guessed type wchar_t aBisautocraft[13];
// 140B1FC80: using guessed type wchar_t aNcraftxp[9];
// 140B1FCA8: using guessed type wchar_t aNlearnxp[9];
// 140B1FCC0: using guessed type wchar_t aNfailxp[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B90: using guessed type __int64 qword_140C65B90;
// 140C65C28: using guessed type __int64 qword_140C65C28;

