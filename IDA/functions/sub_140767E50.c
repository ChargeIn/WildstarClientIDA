#include "../winhttp.h"

//----- (0000000140767E50) ----------------------------------------------------
__int64 __fastcall sub_140767E50(_QWORD* a1)
{
	__int64 v1; // rdx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // rsi
	int v7; // ebx
	_QWORD* v8; // rdx
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // rax
	unsigned int v11; // r15d
	__int64 v12; // rsi
	unsigned __int64 v13; // r14
	_QWORD* v14; // rbx
	unsigned int v15; // r13d
	__int64 v16; // rdx
	__int64 v17; // r8
	__int64 v18; // rcx
	__int64 v19; // rax
	__int64 v20; // rax
	__int64* v21; // rax
	__int64 v22; // rax
	__int64 v23; // r14
	__int64 v24; // rax
	__int64 v25; // r8
	__int64 v26; // rcx
	__int64 v27; // rax
	__int64* v28; // rax
	__int64 v29; // rax
	__int64* v30; // rax
	__int64 v31; // rax
	char v32; // si
	unsigned __int64 v33; // rcx
	_DWORD* v34; // rax
	__int64 v35; // rbx
	__int64 v36; // rax
	int v37; // ebx
	__int64 v38; // rcx
	_QWORD* v39; // rax
	__int64 v40; // rdx
	unsigned __int64* v41; // rdx
	unsigned __int64 v42; // r8
	__int64 v43; // rax
	__int64* v44; // rax
	_QWORD* v45; // rax
	__int64 v46; // r10
	unsigned __int64* v47; // rdx
	unsigned __int64 v48; // r8
	__int64 v49; // rax
	__int64* v50; // rax
	__int64 v51; // rcx
	_QWORD* v52; // rax
	__int64 v53; // rdx
	unsigned __int16* v54; // r10
	_QWORD* v55; // rax
	__int64 v56; // r10
	unsigned __int64* v57; // rdx
	unsigned __int64 v58; // r8
	_DWORD* v59; // rcx
	__int64* v60; // rax
	int v61; // esi
	unsigned int v62; // ebx
	_QWORD* v63; // rax
	__int64 v64; // r10
	unsigned __int64* v65; // rdx
	unsigned __int64 v66; // r8
	_DWORD* v67; // rcx
	__int64* v68; // rax
	int* v69; // rax
	int v70; // eax
	__int64 v71; // rcx
	int* v72; // rdx
	_WORD* v73; // rdx
	__int64 v74; // rax
	__int64 v75; // rax
	_QWORD* v76; // rax
	__int64 v77; // rdx
	unsigned __int16* v78; // r10
	int v79; // r15d
	__int64 v80; // rax
	__int64 v81; // r10
	unsigned int v82; // edx
	__int64 v83; // r8
	_DWORD* v84; // rcx
	unsigned int v85; // r12d
	__int64 v86; // r9
	_DWORD* v87; // rcx
	unsigned __int64* v88; // r14
	unsigned __int64 v89; // rsi
	__int64 v90; // rbx
	__int64 v91; // rax
	__int64 v92; // rcx
	__int64 v93; // rax
	__int64* v94; // rax
	__int64 v95; // r10
	__int64 v96; // r9
	__int64 v97; // r15
	_DWORD* v98; // rcx
	unsigned __int64* v99; // r14
	unsigned __int64 v100; // rsi
	__int64 v101; // rbx
	__int64 v102; // rax
	__int64 v103; // rcx
	_DWORD* v104; // rax
	__int64 v105; // rdx
	__int64 v106; // r8
	__int64 v107; // r9
	_DWORD* v108; // rdx
	__int64 v109; // rcx
	int v110; // r13d
	__int64 v111; // rcx
	__int64 v112; // rax
	__int64 v113; // r10
	__int64 v114; // r9
	_DWORD* v115; // rcx
	__int64 v116; // r8
	__int64 v117; // rcx
	__int64 v118; // rdx
	_QWORD* v119; // rax
	__int64 v120; // rdx
	int* v122; // [rsp+20h] [rbp-E0h] BYREF
	unsigned __int64 v123; // [rsp+28h] [rbp-D8h]
	__int64 v124; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v125; // [rsp+38h] [rbp-C8h]
	__int64 v126; // [rsp+50h] [rbp-B0h] BYREF
	unsigned __int64 v127; // [rsp+58h] [rbp-A8h]
	_QWORD* v128; // [rsp+60h] [rbp-A0h]
	__int64 v129; // [rsp+68h] [rbp-98h] BYREF
	__int64 v130; // [rsp+70h] [rbp-90h] BYREF
	__int64 v131; // [rsp+78h] [rbp-88h] BYREF
	__int64(__fastcall * *v132)(); // [rsp+80h] [rbp-80h] BYREF
	char v133[8]; // [rsp+88h] [rbp-78h] BYREF
	_WORD* v134; // [rsp+90h] [rbp-70h]
	_WORD* v135; // [rsp+98h] [rbp-68h]
	char v136[8]; // [rsp+D8h] [rbp-28h] BYREF
	_WORD* v137; // [rsp+E0h] [rbp-20h]
	_WORD* v138; // [rsp+E8h] [rbp-18h]
	__int128 v139; // [rsp+140h] [rbp+40h]
	int* v140; // [rsp+150h] [rbp+50h]
	int v141; // [rsp+1C0h] [rbp+C0h]
	double v142; // [rsp+1C8h] [rbp+C8h] BYREF
	int v143; // [rsp+1D0h] [rbp+D0h]
	double v144; // [rsp+1D8h] [rbp+D8h] BYREF

	v1 = a1[4];
	v143 = 1;
	if (*(_QWORD*)(v1 + 120) >= *(_QWORD*)(v1 + 112))
		sub_14005E2C0((__int64)a1);
	v3 = a1[2];
	v4 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	a1[2] += 16i64;
	v5 = sub_1400578C0((__int64)a1);
	v6 = qword_140C65B70;
	v7 = v5;
	v8 = (_QWORD*)(qword_140C65B70 + 2016);
	v141 = v5;
	v9 = 0i64;
	v10 = *(_QWORD*)(qword_140C65B70 + 2024);
	v128 = (_QWORD*)(qword_140C65B70 + 2016);
	v123 = 0i64;
	v127 = v10;
	if (v10)
	{
		while (1)
		{
			v11 = *(_DWORD*)(*v8 + 4 * v9);
			LODWORD(v142) = v11;
			v12 = *(_QWORD*)(v6 + 1560);
			v13 = (*(__int64(__fastcall**)(double*))(v12 + 24))(&v142);
			v14 = *(_QWORD**)(*(_QWORD*)(v12 + 16) + 8 * (v13 % *(_QWORD*)(v12 + 8)));
			if (!v14)
				goto LABEL_8;
			while (v13 != *v14 || !(*(unsigned int(__fastcall**)(double*, _QWORD*))(v12 + 32))(&v142, v14 + 2))
			{
				v14 = (_QWORD*)v14[1];
				if (!v14)
					goto LABEL_8;
			}
			if (v14 != (_QWORD*)-24i64 && (v20 = v14[3]) != 0 && *(_QWORD*)(v20 + 8))
				v15 = **(_DWORD**)v20;
			else
				LABEL_8:
			v15 = 0;
			v16 = qword_140C65898;
			if (!v15)
				goto LABEL_160;
			if (!*(_QWORD*)(qword_140C65898 + 120) || !qword_140C65898)
				goto LABEL_166;
			v17 = *(_QWORD*)(qword_140C65898 + 32024);
			v18 = v17;
			v19 = *(_QWORD*)(v17 + 8);
			while (v19)
			{
				if (*(_DWORD*)(v19 + 32) < v15)
				{
					v19 = *(_QWORD*)(v19 + 24);
				}
				else
				{
					v18 = v19;
					v19 = *(_QWORD*)(v19 + 16);
				}
			}
			if (v18 == v17 || v15 < *(_DWORD*)(v18 + 32))
			{
				v130 = *(_QWORD*)(qword_140C65898 + 32024);
				v21 = &v130;
			}
			else
			{
				v131 = v18;
				v21 = &v131;
			}
			v22 = *v21;
			if (v22 == v17 || (v23 = *(_QWORD*)(v22 + 40)) == 0)
			{
			LABEL_166:
				v24 = sub_1407A0FD0(qword_140C65B70, v15);
				v16 = qword_140C65898;
				v23 = v24;
				if (!v24)
					goto LABEL_160;
			}
			if (!v11)
				goto LABEL_43;
			v25 = *(_QWORD*)(v16 + 2728);
			v26 = v25;
			v27 = *(_QWORD*)(v25 + 8);
			while (v27)
			{
				if (*(_DWORD*)(v27 + 32) < v11)
				{
					v27 = *(_QWORD*)(v27 + 24);
				}
				else
				{
					v26 = v27;
					v27 = *(_QWORD*)(v27 + 16);
				}
			}
			if (v26 == v25 || v11 < *(_DWORD*)(v26 + 32))
			{
				v129 = *(_QWORD*)(v16 + 2728);
				v28 = &v129;
			}
			else
			{
				v126 = v26;
				v28 = &v126;
			}
			v29 = *v28;
			if (v29 == v25 || (v30 = *(__int64**)(v29 + 40), !v30[1]) || (v31 = *v30, !*(_QWORD*)v31))
			{
			LABEL_43:
				v32 = 0;
			LABEL_44:
				v33 = 0i64;
				v34 = (_DWORD*)(*(_QWORD*)(v23 + 112) + 408i64);
				while (*v34 != 11)
				{
					++v33;
					++v34;
					if (v33 >= 5)
						goto LABEL_47;
				}
			LABEL_160:
				v7 = v141;
				goto LABEL_161;
			}
			v32 = *(_BYTE*)(*(_QWORD*)v31 + 8i64);
			if (!v32)
				goto LABEL_44;
		LABEL_47:
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v35 = a1[2];
			v36 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v35 + 8) = 5;
			*(_QWORD*)v35 = v36;
			a1[2] += 16i64;
			v37 = sub_1400578C0((__int64)a1);
			v38 = *(_QWORD*)(a1[4] + 160i64);
			LODWORD(v142) = v37;
			v39 = sub_14005C3C0(v38, v37);
			v40 = a1[2];
			*(_QWORD*)v40 = *v39;
			*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
			a1[2] += 16i64;
			v41 = (unsigned __int64*)sub_14018F0E0(&v124, L"nId")[1];
			if (v41)
			{
				v42 = -1i64;
				do
					++v42;
				while (*((_BYTE*)v41 + v42));
				sub_140058710((__int64)a1, v41, v42);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v125)
				sub_14018B900(v125, 0);
			v43 = a1[2];
			*(_DWORD*)(v43 + 8) = 3;
			*(double*)v43 = (double)(int)v11;
			a1[2] += 16i64;
			v44 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v44, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v45 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v37);
			*(_QWORD*)v46 = *v45;
			*(_DWORD*)(v46 + 8) = *((_DWORD*)v45 + 2);
			a1[2] += 16i64;
			v47 = (unsigned __int64*)sub_14018F0E0(&v124, L"nSpellId")[1];
			if (v47)
			{
				v48 = -1i64;
				do
					++v48;
				while (*((_BYTE*)v47 + v48));
				sub_140058710((__int64)a1, v47, v48);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v125)
				sub_14018B900(v125, 0);
			v49 = a1[2];
			*(_DWORD*)(v49 + 8) = 3;
			*(double*)v49 = (double)(int)v15;
			a1[2] += 16i64;
			v50 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v50, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			sub_14034BDD0(v51, *(_DWORD*)(*(_QWORD*)(v23 + 8) + 16i64));
			v52 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v37);
			v53 = a1[2];
			*(_QWORD*)v53 = *v52;
			*(_DWORD*)(v53 + 8) = *((_DWORD*)v52 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v53, L"strName", v54);
			a1[2] -= 16i64;
			v55 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v37);
			*(_QWORD*)v56 = *v55;
			*(_DWORD*)(v56 + 8) = *((_DWORD*)v55 + 2);
			a1[2] += 16i64;
			v57 = (unsigned __int64*)sub_14018F0E0(&v124, L"bIsKnown")[1];
			if (v57)
			{
				v58 = -1i64;
				do
					++v58;
				while (*((_BYTE*)v57 + v58));
				sub_140058710((__int64)a1, v57, v58);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v125)
				sub_14018B900(v125, 0);
			v59 = (_DWORD*)a1[2];
			v59[2] = 1;
			*v59 = v32 != 0;
			a1[2] += 16i64;
			v60 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v60, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v61 = LODWORD(v142);
			v62 = (~*(_DWORD*)(*(_QWORD*)(v23 + 112) + 264i64) & 0x40000000u) >> 30;
			v63 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), SLODWORD(v142));
			*(_QWORD*)v64 = *v63;
			*(_DWORD*)(v64 + 8) = *((_DWORD*)v63 + 2);
			a1[2] += 16i64;
			v65 = (unsigned __int64*)sub_14018F0E0(&v124, L"bCanUseOnSecondaryBars")[1];
			if (v65)
			{
				v66 = -1i64;
				do
					++v66;
				while (*((_BYTE*)v65 + v66));
				sub_140058710((__int64)a1, v65, v66);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			if (v125)
				sub_14018B900(v125, 0);
			v67 = (_DWORD*)a1[2];
			v67[2] = 1;
			*v67 = v62 != 0;
			a1[2] += 16i64;
			v68 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v68, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			sub_1400B6F30((__int64)&v132);
			v132 = off_140B69230;
			v140 = 0i64;
			v139 = 0i64;
			v69 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v139 = v69;
			*((_QWORD*)&v139 + 1) = v69;
			v140 = v69 + 4;
			if (v69)
				*(_WORD*)v69 = 0;
			v70 = sub_140564760((__int64)(v69 + 4), v15);
			v72 = (int*)sub_14034BDD0(v71, v70);
			if (v72)
			{
				v74 = 0i64;
				if (*(_WORD*)v72)
				{
					do
						++v74;
					while (*((_WORD*)v72 + v74));
				}
				sub_14001C480((__int64)v133, v72, (int*)((char*)v72 + 2 * v74));
				v73 = v134;
			}
			else
			{
				v73 = v134;
				if (v134 != v135)
				{
					*v134 = 0;
					v73 = v134;
					v135 = v134;
				}
			}
			if (v137 == v138 && qword_140C63648)
			{
				v122 = 0i64;
				(**(void(__fastcall***)(__int64, _WORD*, __int64(__fastcall***)(), int**))qword_140C63648)(
					qword_140C63648,
					v73,
					&v132,
					&v122);
				if (v122)
				{
					v75 = 0i64;
					if (*(_WORD*)v122)
					{
						do
							++v75;
						while (*((_WORD*)v122 + v75));
					}
					sub_14001C480((__int64)v136, v122, (int*)((char*)v122 + 2 * v75));
					goto LABEL_93;
				}
				if (v137 != v138)
				{
					*v137 = 0;
					v138 = v137;
				LABEL_93:
					if (v122)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v122 - 2) + 8i64))(v122 - 4);
				}
			}
			v76 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v61);
			v77 = a1[2];
			*(_QWORD*)v77 = *v76;
			*(_DWORD*)(v77 + 8) = *((_DWORD*)v76 + 2);
			a1[2] += 16i64;
			sub_1400F0870((__int64)a1, v77, L"strDescription", v78);
			v79 = 0;
			v80 = 0i64;
			v81 = a1[2] - 16i64;
			a1[2] = v81;
			v82 = *(_DWORD*)(v23 + 40);
			if (v82)
			{
				v83 = *(_QWORD*)(v23 + 48);
				v84 = (_DWORD*)(v83 + 16);
				while (*v84 != 137)
				{
					v80 = (unsigned int)(v80 + 1);
					v84 += 42;
					if ((unsigned int)v80 >= v82)
						goto LABEL_101;
				}
				v79 = *(_DWORD*)(168 * v80 + v83 + 64);
			}
		LABEL_101:
			v85 = v61 - 1;
			v86 = *(_QWORD*)(a1[4] + 160i64);
			if ((unsigned int)(v61 - 1) >= *(_DWORD*)(v86 + 56))
			{
				v144 = (double)v61;
				if ((double)v61 == 0.0)
					v87 = *(_DWORD**)(v86 + 32);
				else
					v87 = (_DWORD*)(*(_QWORD*)(v86 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v144) + HIDWORD(v144)) % (((1i64 << *(_BYTE*)(v86 + 11)) - 1) | 1)));
				while (v87[6] != 3 || (double)v61 != *((double*)v87 + 2))
				{
					v87 = (_DWORD*)*((_QWORD*)v87 + 4);
					if (!v87)
					{
						v87 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v87 = (_DWORD*)(*(_QWORD*)(v86 + 24) + 16i64 * (v61 - 1));
			}
			*(_QWORD*)v81 = *(_QWORD*)v87;
			*(_DWORD*)(v81 + 8) = v87[2];
			a1[2] += 16i64;
			v88 = (unsigned __int64*)sub_14018F0E0(&v124, L"nPreviewCreatureId")[1];
			if (v88)
			{
				v89 = -1i64;
				do
					++v89;
				while (*((_BYTE*)v88 + v89));
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v90 = a1[2];
				v91 = sub_140062650((__int64)a1, v88, v89);
				v61 = LODWORD(v142);
				*(_DWORD*)(v90 + 8) = 4;
				*(_QWORD*)v90 = v91;
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
			}
			v92 = v125;
			a1[2] += 16i64;
			if (v92)
				sub_14018B900(v92, 0);
			v93 = a1[2];
			*(_DWORD*)(v93 + 8) = 3;
			*(double*)v93 = (double)v79;
			a1[2] += 16i64;
			v94 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v94, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			LODWORD(v144) = v15;
			if ((unsigned int)sub_1403D3470(a1, (int*)&v144))
			{
				v95 = a1[2];
				v96 = *(_QWORD*)(a1[4] + 160i64);
				v97 = (v95 - a1[3]) >> 4;
				if (v85 >= *(_DWORD*)(v96 + 56))
				{
					v144 = (double)v61;
					if ((double)v61 == 0.0)
						v98 = *(_DWORD**)(v96 + 32);
					else
						v98 = (_DWORD*)(*(_QWORD*)(v96 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v144) + HIDWORD(v144)) % (((1i64 << *(_BYTE*)(v96 + 11)) - 1) | 1)));
					while (v98[6] != 3 || (double)v61 != *((double*)v98 + 2))
					{
						v98 = (_DWORD*)*((_QWORD*)v98 + 4);
						if (!v98)
						{
							v98 = dword_140A12138;
							break;
						}
					}
				}
				else
				{
					v98 = (_DWORD*)(*(_QWORD*)(v96 + 24) + 16i64 * (v61 - 1));
				}
				*(_QWORD*)v95 = *(_QWORD*)v98;
				*(_DWORD*)(v95 + 8) = v98[2];
				a1[2] += 16i64;
				v99 = (unsigned __int64*)sub_14018F0E0(&v124, L"splObject")[1];
				if (v99)
				{
					v100 = -1i64;
					do
						++v100;
					while (*((_BYTE*)v99 + v100));
					if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
						sub_14005E2C0((__int64)a1);
					v101 = a1[2];
					v102 = sub_140062650((__int64)a1, v99, v100);
					v61 = LODWORD(v142);
					*(_DWORD*)(v101 + 8) = 4;
					*(_QWORD*)v101 = v102;
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
				}
				v103 = v125;
				a1[2] += 16i64;
				if (v103)
					sub_14018B900(v103, 0);
				v104 = sub_1400580E0((__int64)a1, v97);
				v105 = a1[2];
				*(_QWORD*)v105 = *(_QWORD*)v104;
				*(_DWORD*)(v105 + 8) = v104[2];
				v106 = a1[2] + 16i64;
				a1[2] = v106;
				sub_14005EA50((__int64)a1, (__int64*)(v106 - 48), (int*)(v106 - 32), (unsigned int*)(v106 - 16));
				a1[2] -= 64i64;
			}
			v7 = v141;
			v107 = *(_QWORD*)(a1[4] + 160i64);
			if ((unsigned int)(v141 - 1) >= *(_DWORD*)(v107 + 56))
			{
				v142 = (double)v141;
				if ((double)v141 == 0.0)
					v108 = *(_DWORD**)(v107 + 32);
				else
					v108 = (_DWORD*)(*(_QWORD*)(v107 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v142) + HIDWORD(v142)) % (((1i64 << *(_BYTE*)(v107 + 11)) - 1) | 1)));
				while (v108[6] != 3 || (double)v141 != *((double*)v108 + 2))
				{
					v108 = (_DWORD*)*((_QWORD*)v108 + 4);
					if (!v108)
					{
						v108 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v108 = (_DWORD*)(*(_QWORD*)(v107 + 24) + 16i64 * (v141 - 1));
			}
			v109 = a1[2];
			v110 = v143;
			*(_QWORD*)v109 = *(_QWORD*)v108;
			*(_DWORD*)(v109 + 8) = v108[2];
			a1[2] += 16i64;
			v111 = a1[2];
			*(_DWORD*)(v111 + 8) = 3;
			v143 = v110 + 1;
			*(double*)v111 = (double)v110;
			v112 = a1[4];
			v113 = a1[2] + 16i64;
			a1[2] = v113;
			v114 = *(_QWORD*)(v112 + 160);
			if (v85 >= *(_DWORD*)(v114 + 56))
			{
				v142 = (double)v61;
				if ((double)v61 == 0.0)
					v115 = *(_DWORD**)(v114 + 32);
				else
					v115 = (_DWORD*)(*(_QWORD*)(v114 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v142) + HIDWORD(v142)) % (((1i64 << *(_BYTE*)(v114 + 11)) - 1) | 1)));
				while (v115[6] != 3 || (double)v61 != *((double*)v115 + 2))
				{
					v115 = (_DWORD*)*((_QWORD*)v115 + 4);
					if (!v115)
					{
						v115 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v115 = (_DWORD*)(*(_QWORD*)(v114 + 24) + 16i64 * (v61 - 1));
			}
			*(_QWORD*)v113 = *(_QWORD*)v115;
			*(_DWORD*)(v113 + 8) = v115[2];
			v116 = a1[2] + 16i64;
			a1[2] = v116;
			sub_14005EA50((__int64)a1, (__int64*)(v116 - 48), (int*)(v116 - 32), (unsigned int*)(v116 - 16));
			v117 = v139;
			a1[2] -= 48i64;
			if (v117)
				sub_14018B900(v117, 0);
			sub_1400B7390(&v132);
			sub_1400579E0((__int64)a1, v118, v61);
		LABEL_161:
			v9 = v123 + 1;
			v123 = v9;
			if (v9 >= v127)
				break;
			v6 = qword_140C65B70;
			v8 = v128;
		}
	}
	v119 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
	v120 = a1[2];
	*(_QWORD*)v120 = *v119;
	*(_DWORD*)(v120 + 8) = *((_DWORD*)v119 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v120, v7);
	return 1i64;
}
// 1407681EF: variable 'v46' is possibly undefined
// 140768294: variable 'v51' is possibly undefined
// 1407682D0: variable 'v54' is possibly undefined
// 1407682FA: variable 'v56' is possibly undefined
// 1407683D2: variable 'v64' is possibly undefined
// 1407684C3: variable 'v71' is possibly undefined
// 1407685D0: variable 'v78' is possibly undefined
// 140768AE6: variable 'v118' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B4E288: using guessed type wchar_t aSplobject_2[10];
// 140B4E2A0: using guessed type wchar_t aNpreviewcreatu_0[19];
// 140B4E2C8: using guessed type wchar_t aStrdescription_22[15];
// 140B4E2E8: using guessed type wchar_t aBcanuseonsecon_2[23];
// 140B4E318: using guessed type wchar_t aBisknown_6[9];
// 140B4E330: using guessed type wchar_t aStrname_112[8];
// 140B4E340: using guessed type wchar_t aNspellid_1[9];
// 140B4E358: using guessed type wchar_t aNid_46[4];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63648: using guessed type __int64 qword_140C63648;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140767E50: using guessed type char var_128[8];
// 140767E50: using guessed type char var_D8[8];

