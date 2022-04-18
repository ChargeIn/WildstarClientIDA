#include "../winhttp.h"

//----- (000000014060E4E0) ----------------------------------------------------
void __fastcall sub_14060E4E0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v3; // r13
	__int64 v4; // rdx
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // edi
	_QWORD* v8; // rax
	__int64 v9; // rdx
	int v10; // r10d
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	int v14; // r11d
	_QWORD* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	int v18; // r11d
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	int v22; // r11d
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	int v26; // r11d
	_QWORD* v27; // rax
	__int64 v28; // r10
	__int64 v29; // rdx
	int v30; // r11d
	int v31; // ebx
	_QWORD* v32; // rax
	__int64 v33; // r10
	unsigned __int64* v34; // rdx
	unsigned __int64 v35; // r12
	unsigned __int64 v36; // r8
	_DWORD* v37; // rcx
	__int64* v38; // rax
	__int64 v39; // rcx
	__int64 v40; // rdi
	__int64 v41; // rbx
	__int64 v42; // rax
	int v43; // eax
	bool v44; // zf
	int v45; // r14d
	unsigned __int64 v46; // rsi
	_QWORD* v47; // rdi
	__int64 v48; // rcx
	__int64 v49; // rbx
	__int64 v50; // rax
	__int64 v51; // rsi
	int v52; // r15d
	__int64 v53; // rcx
	int v54; // ebx
	__int64 v55; // r9
	_DWORD* v56; // rdx
	__int64 v57; // rcx
	unsigned __int64* v58; // r14
	unsigned __int64 v59; // rsi
	__int64 v60; // rbx
	__int64 v61; // rax
	__int64 v62; // rcx
	__int64 v63; // rax
	__int64* v64; // rax
	__int64 v65; // r10
	int v66; // ebx
	__int64 v67; // r9
	_DWORD* v68; // rcx
	unsigned __int64* v69; // r14
	unsigned __int64 v70; // rsi
	__int64 v71; // rbx
	__int64 v72; // rax
	__int64 v73; // rcx
	__int64 v74; // rax
	__int64* v75; // rax
	__int64 v76; // r10
	int v77; // ebx
	__int64 v78; // r9
	_DWORD* v79; // rcx
	unsigned __int64* v80; // r14
	unsigned __int64 v81; // rsi
	__int64 v82; // rbx
	__int64 v83; // rax
	__int64 v84; // rcx
	__int64 v85; // rax
	__int64* v86; // rax
	__int64 v87; // r10
	int v88; // ebx
	__int64 v89; // r9
	_DWORD* v90; // rcx
	unsigned __int64* v91; // r14
	unsigned __int64 v92; // rsi
	__int64 v93; // rbx
	__int64 v94; // rax
	__int64 v95; // rcx
	__int64 v96; // rax
	__int64* v97; // rax
	__int64 v98; // rdx
	unsigned int v99; // ebx
	__int64 v100; // r9
	_DWORD* v101; // rdx
	__int64 v102; // rcx
	unsigned __int64* v103; // rsi
	__int64 v104; // rbx
	__int64 v105; // rax
	__int64 v106; // rcx
	__int64 v107; // r8
	_DWORD* v108; // rdx
	__int64 v109; // rcx
	__int64 v110; // rcx
	__int64 v111; // rdx
	double v112; // [rsp+20h] [rbp-69h]
	__int64(__fastcall * *v113)(); // [rsp+30h] [rbp-59h] BYREF
	int v114; // [rsp+38h] [rbp-51h]
	__int64 v115; // [rsp+40h] [rbp-49h]
	int v116; // [rsp+48h] [rbp-41h]
	__int64(__fastcall * *v117)(); // [rsp+50h] [rbp-39h] BYREF
	int v118; // [rsp+58h] [rbp-31h]
	__int64 v119; // [rsp+60h] [rbp-29h]
	int v120; // [rsp+68h] [rbp-21h]
	__int64(__fastcall * *v121)(); // [rsp+70h] [rbp-19h] BYREF
	__int64 v122; // [rsp+78h] [rbp-11h]
	_QWORD* v123; // [rsp+80h] [rbp-9h]
	int v124; // [rsp+88h] [rbp-1h]
	int v126; // [rsp+F8h] [rbp+6Fh]
	int v127; // [rsp+F8h] [rbp+6Fh]
	int v128; // [rsp+F8h] [rbp+6Fh]
	int v129; // [rsp+F8h] [rbp+6Fh]
	double v130; // [rsp+F8h] [rbp+6Fh]
	double v131; // [rsp+F8h] [rbp+6Fh]
	__int64 v132; // [rsp+100h] [rbp+77h]
	double v133; // [rsp+100h] [rbp+77h]
	unsigned __int64 v134; // [rsp+108h] [rbp+7Fh]

	v1 = *(_QWORD*)(qword_140C65898 + 29504);
	v120 = 1;
	v3 = *(_QWORD*)(v1 + 400);
	v117 = off_140B569F0;
	v4 = *(_QWORD*)(v3 + 32);
	v119 = v3;
	if (*(_QWORD*)(v4 + 120) >= *(_QWORD*)(v4 + 112))
		sub_14005E2C0(v3);
	v5 = *(_QWORD*)(v3 + 16);
	v6 = sub_14005C1B0(v3, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v3 + 16) += 16i64;
	v7 = sub_1400578C0(v3);
	v118 = v7;
	sub_14060B380((int*)a1, (__int64)&v117);
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v7);
	v9 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v9 = *v8;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400F06F0(v3, v9, L"nDamageAmount", v10);
	*(_QWORD*)(v3 + 16) -= 16i64;
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v7);
	*(_QWORD*)v12 = *v11;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400F06F0(v3, v13, L"eDamageType", v14);
	*(_QWORD*)(v3 + 16) -= 16i64;
	v15 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v7);
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400F06F0(v3, v17, L"nShield", v18);
	*(_QWORD*)(v3 + 16) -= 16i64;
	v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v7);
	*(_QWORD*)v20 = *v19;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400F06F0(v3, v21, L"nAbsorption", v22);
	*(_QWORD*)(v3 + 16) -= 16i64;
	v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v7);
	*(_QWORD*)v24 = *v23;
	*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400F06F0(v3, v25, L"nOverkill", v26);
	*(_QWORD*)(v3 + 16) -= 16i64;
	v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v7);
	*(_QWORD*)v28 = *v27;
	*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400F06F0(v3, v29, L"nGlanceAmount", v30);
	*(_QWORD*)(v3 + 16) -= 16i64;
	v31 = *(_DWORD*)(a1 + 56);
	v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v7);
	*(_QWORD*)v33 = *v32;
	*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	v34 = (unsigned __int64*)sub_14018F0E0(&v121, L"bTargetVulnerable")[1];
	v35 = -1i64;
	if (v34)
	{
		v36 = -1i64;
		do
			++v36;
		while (*((_BYTE*)v34 + v36));
		sub_140058710(v3, v34, v36);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v3 + 16) + 8i64) = 0;
		*(_QWORD*)(v3 + 16) += 16i64;
	}
	if (v122)
		sub_14018B900(v122, 0);
	v37 = *(_DWORD**)(v3 + 16);
	v37[2] = 1;
	*v37 = v31 != 0;
	*(_QWORD*)(v3 + 16) += 16i64;
	v38 = (__int64*)sub_1400580E0(v3, -3);
	sub_14005EA50(v3, v38, (int*)(*(_QWORD*)(v3 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v3 + 16) - 16i64));
	*(_QWORD*)(v3 + 16) -= 48i64;
	v39 = *(_QWORD*)(qword_140C65898 + 29504);
	v113 = off_140B569F0;
	v116 = 1;
	v40 = *(_QWORD*)(v39 + 400);
	v115 = v40;
	if (*(_QWORD*)(*(_QWORD*)(v40 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v40 + 32) + 112i64))
		sub_14005E2C0(v40);
	v41 = *(_QWORD*)(v40 + 16);
	v42 = sub_14005C1B0(v40, 0, 0);
	*(_DWORD*)(v41 + 8) = 5;
	*(_QWORD*)v41 = v42;
	*(_QWORD*)(v40 + 16) += 16i64;
	v43 = sub_1400578C0(v40);
	v44 = *(_QWORD*)(a1 + 72) == 0i64;
	v45 = v43;
	v114 = v43;
	v134 = 0i64;
	if (!v44)
	{
		v46 = 0i64;
		do
		{
			v124 = 1;
			v47 = *(_QWORD**)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
			v121 = off_140B569F0;
			v48 = v47[4];
			v123 = v47;
			if (*(_QWORD*)(v48 + 120) >= *(_QWORD*)(v48 + 112))
				sub_14005E2C0((__int64)v47);
			v49 = v47[2];
			v50 = sub_14005C1B0((__int64)v47, 0, 0);
			*(_DWORD*)(v49 + 8) = 5;
			*(_QWORD*)v49 = v50;
			v47[2] += 16i64;
			v51 = 5 * v46;
			v52 = sub_1400578C0((__int64)v47);
			v53 = *(_QWORD*)(a1 + 64);
			LODWORD(v122) = v52;
			v132 = v51;
			if ((unsigned int)sub_140649870(v47, *(_DWORD*)(v53 + 4 * v51)))
			{
				sub_1400FB540((__int64)&v121);
				v47[2] -= 16i64;
			}
			v54 = *(_DWORD*)(*(_QWORD*)(a1 + 64) + 4 * v51 + 4);
			v55 = *(_QWORD*)(v47[4] + 160i64);
			v126 = v54;
			if ((unsigned int)(v52 - 1) >= *(_DWORD*)(v55 + 56))
			{
				v112 = (double)v52;
				if ((double)v52 == 0.0)
					v56 = *(_DWORD**)(v55 + 32);
				else
					v56 = (_DWORD*)(*(_QWORD*)(v55 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v112) + HIDWORD(v112)) % (((1i64 << *(_BYTE*)(v55 + 11)) - 1) | 1)));
				while (v56[6] != 3 || (double)v52 != *((double*)v56 + 2))
				{
					v56 = (_DWORD*)*((_QWORD*)v56 + 4);
					if (!v56)
					{
						v56 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v56 = (_DWORD*)(*(_QWORD*)(v55 + 24) + 16i64 * (v52 - 1));
			}
			v57 = v47[2];
			*(_QWORD*)v57 = *(_QWORD*)v56;
			*(_DWORD*)(v57 + 8) = v56[2];
			v47[2] += 16i64;
			v58 = (unsigned __int64*)sub_14018F0E0(&v121, L"nHealAmount")[1];
			if (v58)
			{
				v59 = -1i64;
				do
					++v59;
				while (*((_BYTE*)v58 + v59));
				if (*(_QWORD*)(v47[4] + 120i64) >= *(_QWORD*)(v47[4] + 112i64))
					sub_14005E2C0((__int64)v47);
				v60 = v47[2];
				v61 = sub_140062650((__int64)v47, v58, v59);
				v51 = v132;
				*(_DWORD*)(v60 + 8) = 4;
				*(_QWORD*)v60 = v61;
				v54 = v126;
			}
			else
			{
				*(_DWORD*)(v47[2] + 8i64) = 0;
			}
			v62 = v122;
			v47[2] += 16i64;
			if (v62)
				sub_14018B900(v62, 0);
			v63 = v47[2];
			*(_DWORD*)(v63 + 8) = 3;
			*(double*)v63 = (double)v54;
			v47[2] += 16i64;
			v64 = (__int64*)sub_1400580E0((__int64)v47, -3);
			sub_14005EA50((__int64)v47, v64, (int*)(v47[2] - 32i64), (unsigned int*)(v47[2] - 16i64));
			v47[2] -= 48i64;
			v65 = v47[2];
			v66 = *(_DWORD*)(*(_QWORD*)(a1 + 64) + 4 * v51 + 8);
			v67 = *(_QWORD*)(v47[4] + 160i64);
			v127 = v66;
			if ((unsigned int)(v52 - 1) >= *(_DWORD*)(v67 + 56))
			{
				v112 = (double)v52;
				if ((double)v52 == 0.0)
					v68 = *(_DWORD**)(v67 + 32);
				else
					v68 = (_DWORD*)(*(_QWORD*)(v67 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v112) + HIDWORD(v112)) % (((1i64 << *(_BYTE*)(v67 + 11)) - 1) | 1)));
				while (v68[6] != 3 || (double)v52 != *((double*)v68 + 2))
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
				v68 = (_DWORD*)(*(_QWORD*)(v67 + 24) + 16i64 * (v52 - 1));
			}
			*(_QWORD*)v65 = *(_QWORD*)v68;
			*(_DWORD*)(v65 + 8) = v68[2];
			v47[2] += 16i64;
			v69 = (unsigned __int64*)sub_14018F0E0(&v121, L"eVitalType")[1];
			if (v69)
			{
				v70 = -1i64;
				do
					++v70;
				while (*((_BYTE*)v69 + v70));
				if (*(_QWORD*)(v47[4] + 120i64) >= *(_QWORD*)(v47[4] + 112i64))
					sub_14005E2C0((__int64)v47);
				v71 = v47[2];
				v72 = sub_140062650((__int64)v47, v69, v70);
				v51 = v132;
				*(_DWORD*)(v71 + 8) = 4;
				*(_QWORD*)v71 = v72;
				v66 = v127;
			}
			else
			{
				*(_DWORD*)(v47[2] + 8i64) = 0;
			}
			v73 = v122;
			v47[2] += 16i64;
			if (v73)
				sub_14018B900(v73, 0);
			v74 = v47[2];
			*(_DWORD*)(v74 + 8) = 3;
			*(double*)v74 = (double)v66;
			v47[2] += 16i64;
			v75 = (__int64*)sub_1400580E0((__int64)v47, -3);
			sub_14005EA50((__int64)v47, v75, (int*)(v47[2] - 32i64), (unsigned int*)(v47[2] - 16i64));
			v47[2] -= 48i64;
			v76 = v47[2];
			v77 = *(_DWORD*)(*(_QWORD*)(a1 + 64) + 4 * v51 + 12);
			v78 = *(_QWORD*)(v47[4] + 160i64);
			v128 = v77;
			if ((unsigned int)(v52 - 1) >= *(_DWORD*)(v78 + 56))
			{
				v112 = (double)v52;
				if ((double)v52 == 0.0)
					v79 = *(_DWORD**)(v78 + 32);
				else
					v79 = (_DWORD*)(*(_QWORD*)(v78 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v112) + HIDWORD(v112)) % (((1i64 << *(_BYTE*)(v78 + 11)) - 1) | 1)));
				while (v79[6] != 3 || (double)v52 != *((double*)v79 + 2))
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
				v79 = (_DWORD*)(*(_QWORD*)(v78 + 24) + 16i64 * (v52 - 1));
			}
			*(_QWORD*)v76 = *(_QWORD*)v79;
			*(_DWORD*)(v76 + 8) = v79[2];
			v47[2] += 16i64;
			v80 = (unsigned __int64*)sub_14018F0E0(&v121, L"nOverheal")[1];
			if (v80)
			{
				v81 = -1i64;
				do
					++v81;
				while (*((_BYTE*)v80 + v81));
				if (*(_QWORD*)(v47[4] + 120i64) >= *(_QWORD*)(v47[4] + 112i64))
					sub_14005E2C0((__int64)v47);
				v82 = v47[2];
				v83 = sub_140062650((__int64)v47, v80, v81);
				v51 = v132;
				*(_DWORD*)(v82 + 8) = 4;
				*(_QWORD*)v82 = v83;
				v77 = v128;
			}
			else
			{
				*(_DWORD*)(v47[2] + 8i64) = 0;
			}
			v84 = v122;
			v47[2] += 16i64;
			if (v84)
				sub_14018B900(v84, 0);
			v85 = v47[2];
			*(_DWORD*)(v85 + 8) = 3;
			*(double*)v85 = (double)v77;
			v47[2] += 16i64;
			v86 = (__int64*)sub_1400580E0((__int64)v47, -3);
			sub_14005EA50((__int64)v47, v86, (int*)(v47[2] - 32i64), (unsigned int*)(v47[2] - 16i64));
			v47[2] -= 48i64;
			v87 = v47[2];
			v88 = *(_DWORD*)(*(_QWORD*)(a1 + 64) + 4 * v51 + 16);
			v89 = *(_QWORD*)(v47[4] + 160i64);
			v129 = v88;
			if ((unsigned int)(v52 - 1) >= *(_DWORD*)(v89 + 56))
			{
				if ((double)v52 == 0.0)
				{
					v90 = *(_DWORD**)(v89 + 32);
				}
				else
				{
					v133 = (double)v52;
					v90 = (_DWORD*)(*(_QWORD*)(v89 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v133) + HIDWORD(v133)) % (((1i64 << *(_BYTE*)(v89 + 11)) - 1) | 1)));
				}
				while (v90[6] != 3 || (double)v52 != *((double*)v90 + 2))
				{
					v90 = (_DWORD*)*((_QWORD*)v90 + 4);
					if (!v90)
					{
						v90 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v90 = (_DWORD*)(*(_QWORD*)(v89 + 24) + 16i64 * (v52 - 1));
			}
			*(_QWORD*)v87 = *(_QWORD*)v90;
			*(_DWORD*)(v87 + 8) = v90[2];
			v47[2] += 16i64;
			v91 = (unsigned __int64*)sub_14018F0E0(&v121, L"nAbsorption")[1];
			if (v91)
			{
				v92 = -1i64;
				do
					++v92;
				while (*((_BYTE*)v91 + v92));
				if (*(_QWORD*)(v47[4] + 120i64) >= *(_QWORD*)(v47[4] + 112i64))
					sub_14005E2C0((__int64)v47);
				v93 = v47[2];
				v94 = sub_140062650((__int64)v47, v91, v92);
				*(_DWORD*)(v93 + 8) = 4;
				*(_QWORD*)v93 = v94;
				v88 = v129;
			}
			else
			{
				*(_DWORD*)(v47[2] + 8i64) = 0;
			}
			v95 = v122;
			v47[2] += 16i64;
			if (v95)
				sub_14018B900(v95, 0);
			v96 = v47[2];
			*(_DWORD*)(v96 + 8) = 3;
			*(double*)v96 = (double)v88;
			v47[2] += 16i64;
			v97 = (__int64*)sub_1400580E0((__int64)v47, -3);
			sub_14005EA50((__int64)v47, v97, (int*)(v47[2] - 32i64), (unsigned int*)(v47[2] - 16i64));
			v47[2] -= 48i64;
			sub_1400FB1D0((__int64)&v113);
			sub_1400579E0((__int64)v47, v98, v52);
			v46 = v134 + 1;
			v134 = v46;
		} while (v46 < *(_QWORD*)(a1 + 72));
		v40 = v115;
		v45 = v114;
	}
	v99 = v118;
	v100 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64);
	if ((unsigned int)(v118 - 1) >= *(_DWORD*)(v100 + 56))
	{
		if ((double)v118 == 0.0)
		{
			v101 = *(_DWORD**)(v100 + 32);
		}
		else
		{
			v130 = (double)v118;
			v101 = (_DWORD*)(*(_QWORD*)(v100 + 32)
				+ 40
				* ((unsigned int)(LODWORD(v130) + HIDWORD(v130)) % (((1i64 << *(_BYTE*)(v100 + 11)) - 1) | 1)));
		}
		while (v101[6] != 3 || (double)v118 != *((double*)v101 + 2))
		{
			v101 = (_DWORD*)*((_QWORD*)v101 + 4);
			if (!v101)
			{
				v101 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v101 = (_DWORD*)(*(_QWORD*)(v100 + 24) + 16i64 * (v118 - 1));
	}
	v102 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v102 = *(_QWORD*)v101;
	*(_DWORD*)(v102 + 8) = v101[2];
	*(_QWORD*)(v3 + 16) += 16i64;
	v103 = (unsigned __int64*)sub_14018F0E0(&v121, L"tHealData")[1];
	if (v103)
	{
		do
			++v35;
		while (*((_BYTE*)v103 + v35));
		if (*(_QWORD*)(*(_QWORD*)(v3 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v3 + 32) + 112i64))
			sub_14005E2C0(v3);
		v104 = *(_QWORD*)(v3 + 16);
		v105 = sub_140062650(v3, v103, v35);
		*(_DWORD*)(v104 + 8) = 4;
		*(_QWORD*)v104 = v105;
		v99 = v118;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v3 + 16) + 8i64) = 0;
	}
	v106 = v122;
	*(_QWORD*)(v3 + 16) += 16i64;
	if (v106)
		sub_14018B900(v106, 0);
	v107 = *(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64);
	if ((unsigned int)(v45 - 1) >= *(_DWORD*)(v107 + 56))
	{
		if ((double)v45 == 0.0)
		{
			v108 = *(_DWORD**)(v107 + 32);
		}
		else
		{
			v131 = (double)v45;
			v108 = (_DWORD*)(*(_QWORD*)(v107 + 32)
				+ 40
				* ((unsigned int)(LODWORD(v131) + HIDWORD(v131)) % (((1i64 << *(_BYTE*)(v107 + 11)) - 1) | 1)));
		}
		while (v108[6] != 3 || (double)v45 != *((double*)v108 + 2))
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
		v108 = (_DWORD*)(*(_QWORD*)(v107 + 24) + 16i64 * (v45 - 1));
	}
	v109 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v109 = *(_QWORD*)v108;
	*(_DWORD*)(v109 + 8) = v108[2];
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_14005EA50(
		v3,
		(__int64*)(*(_QWORD*)(v3 + 16) - 48i64),
		(int*)(*(_QWORD*)(v3 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(v3 + 16) - 16i64));
	v110 = qword_140C65898;
	*(_QWORD*)(v3 + 16) -= 48i64;
	Apollo_LUAEvent(*(_QWORD*)(v110 + 29504), "CombatLogTransference", "T", v99);
	v111 = *(unsigned int*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64);
	if ((_DWORD)v111 == *(_DWORD*)(a1 + 8) || (_DWORD)v111 == *(_DWORD*)(a1 + 16))
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "FloaterTransference", "T", v99, v112);
	if (v40)
		sub_1400579E0(v40, v111, v45);
	sub_1400579E0(v3, v111, v99);
}
// 14060E5CA: variable 'v10' is possibly undefined
// 14060E5FB: variable 'v12' is possibly undefined
// 14060E60D: variable 'v13' is possibly undefined
// 14060E60D: variable 'v14' is possibly undefined
// 14060E63E: variable 'v16' is possibly undefined
// 14060E650: variable 'v17' is possibly undefined
// 14060E650: variable 'v18' is possibly undefined
// 14060E681: variable 'v20' is possibly undefined
// 14060E693: variable 'v21' is possibly undefined
// 14060E693: variable 'v22' is possibly undefined
// 14060E6C4: variable 'v24' is possibly undefined
// 14060E6D6: variable 'v25' is possibly undefined
// 14060E6D6: variable 'v26' is possibly undefined
// 14060E707: variable 'v28' is possibly undefined
// 14060E719: variable 'v29' is possibly undefined
// 14060E719: variable 'v30' is possibly undefined
// 14060E746: variable 'v33' is possibly undefined
// 14060EECB: variable 'v98' is possibly undefined
// 14060F127: variable 'v112' is possibly undefined
// 14060F137: variable 'v111' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B26B38: using guessed type wchar_t aEvitaltype[11];
// 140B26B50: using guessed type wchar_t aNoverheal_1[10];
// 140B26B80: using guessed type wchar_t aNhealamount_1[12];
// 140B26B98: using guessed type wchar_t aNglanceamount_4[14];
// 140B26BB8: using guessed type wchar_t aBtargetvulnera_3[18];
// 140B26BE0: using guessed type wchar_t aNabsorption_8[12];
// 140B26BF8: using guessed type wchar_t aNoverkill_4[10];
// 140B26C10: using guessed type wchar_t aEdamagetype_4[12];
// 140B26C28: using guessed type wchar_t aNshield_5[8];
// 140B26C48: using guessed type wchar_t aNdamageamount_5[14];
// 140B26E28: using guessed type wchar_t aNabsorption_9[12];
// 140B26E40: using guessed type wchar_t aThealdata[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

