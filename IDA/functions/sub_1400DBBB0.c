#include "../winhttp.h"

//----- (00000001400DBBB0) ----------------------------------------------------
__int64 __fastcall sub_1400DBBB0(__int64 a1, int a2, __int64 a3, _BYTE* a4)
{
	_DWORD* v7; // rax
	__int64 v8; // rdx
	_DWORD* v9; // rax
	__int64 v10; // r10
	__int64 v11; // rdx
	__int64 v12; // r10
	_QWORD* v13; // rax
	__int64 v14; // r10
	__int64 v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // r11
	int v18; // eax
	_WORD* v19; // rax
	float* v20; // r12
	unsigned int* v21; // rsi
	unsigned __int64 v22; // rbx
	__int64 v23; // r8
	__int64 v24; // rdx
	__int64 v25; // rcx
	int v26; // r9d
	unsigned int* v27; // rsi
	unsigned __int64 v28; // rbx
	__int64 v29; // r8
	__int64 v30; // rdx
	__int64 v31; // rcx
	int v32; // r9d
	__int64(__fastcall * *v33)(); // rax
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	__int64 v37; // rbx
	unsigned __int64* v38; // rdx
	unsigned __int64 v39; // r8
	__int64 v40; // rdx
	unsigned __int64* v41; // rax
	int v42; // ecx
	unsigned int v43; // ecx
	__int64(__fastcall * *v44)(); // rax
	_QWORD* v45; // rax
	__int64 v46; // r10
	__int64 v47; // rdx
	__int64 v48; // rbx
	unsigned __int64* v49; // rdx
	unsigned __int64 v50; // r8
	__int64 v51; // r8
	_DWORD* v52; // rax
	int v53; // ecx
	BOOL v54; // ecx
	__int64(__fastcall * *v55)(); // rax
	_QWORD* v56; // rax
	__int64 v57; // r10
	__int64 v58; // rdx
	__int64 v59; // rbx
	unsigned __int64* v60; // rdx
	unsigned __int64 v61; // r8
	__int64 v62; // r8
	_DWORD* v63; // rax
	int v64; // ecx
	_QWORD* v65; // rax
	__int64 v66; // r10
	__int64 v67; // rdx
	__int64 v68; // rbx
	unsigned __int64* v69; // rdx
	unsigned __int64 v70; // r8
	__int64 v71; // rcx
	_DWORD* v72; // rax
	__int64 v73; // rcx
	unsigned __int64 v74; // rdi
	int v75; // esi
	__int64 v76; // rbx
	__int64 v77; // rax
	int v78; // ecx
	BOOL v79; // ecx
	_WORD* v80; // rax
	__int64 v81; // rcx
	__int64 v82; // rcx
	int v83; // ebx
	__int64 v84; // rdx
	__int64 v85; // rcx
	int v86; // ebx
	__int64 v87; // rdx
	__int64 v88; // rdx
	__int64 v89; // rcx
	__int64 v90; // r9
	int v91; // eax
	unsigned __int8 v92; // bl
	__int64(__fastcall * *v94)(); // [rsp+28h] [rbp-E0h] BYREF
	__int64 v95; // [rsp+30h] [rbp-D8h]
	__int64 v96; // [rsp+38h] [rbp-D0h]
	__int64 v97; // [rsp+40h] [rbp-C8h]
	__int64(__fastcall * *v98)(); // [rsp+48h] [rbp-C0h] BYREF
	__int64 v99; // [rsp+50h] [rbp-B8h]
	__int64 v100; // [rsp+58h] [rbp-B0h]
	__int64(__fastcall * **v101)(); // [rsp+60h] [rbp-A8h]
	__int64(__fastcall * *v102)(); // [rsp+68h] [rbp-A0h] BYREF
	__int64 v103; // [rsp+70h] [rbp-98h]
	__int64 v104; // [rsp+78h] [rbp-90h]
	int v105; // [rsp+80h] [rbp-88h]
	__int64(__fastcall * *v106)(); // [rsp+88h] [rbp-80h] BYREF
	int v107; // [rsp+90h] [rbp-78h]
	__int64 v108; // [rsp+98h] [rbp-70h]
	int v109; // [rsp+A0h] [rbp-68h]
	__int64(__fastcall * *v110)(); // [rsp+A8h] [rbp-60h] BYREF
	int v111; // [rsp+B0h] [rbp-58h]
	__int64 v112; // [rsp+B8h] [rbp-50h]
	int v113; // [rsp+C0h] [rbp-48h]
	__int64(__fastcall * *v114)(); // [rsp+C8h] [rbp-40h] BYREF
	int v115; // [rsp+D0h] [rbp-38h]
	__int64 v116; // [rsp+D8h] [rbp-30h]
	int v117; // [rsp+E0h] [rbp-28h]
	unsigned __int64 v118[2]; // [rsp+E8h] [rbp-20h] BYREF
	unsigned __int64 v119; // [rsp+F8h] [rbp-10h] BYREF
	__int64 v120; // [rsp+100h] [rbp-8h]

	v94 = off_140B569F0;
	v96 = a1;
	LODWORD(v97) = 1;
	LODWORD(v95) = -2;
	v7 = sub_1400580E0(a1, a2);
	if (v7 != dword_140A12138 && v7[2] == 5)
	{
		sub_1400579E0(v96, v8, v95);
		v9 = sub_1400580E0(v96, a2);
		v11 = *(_QWORD*)(v10 + 16);
		*(_QWORD*)v11 = *(_QWORD*)v9;
		*(_DWORD*)(v11 + 8) = v9[2];
		*(_QWORD*)(v10 + 16) += 16i64;
		LODWORD(v95) = sub_1400578C0(v96);
	}
	v12 = v96;
	if (!v96)
		goto LABEL_155;
	v8 = (unsigned int)v95;
	if ((_DWORD)v95 == -2)
		goto LABEL_155;
	v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v96 + 32) + 160i64), v95);
	v15 = *(_QWORD*)(v14 + 16);
	*(_QWORD*)v15 = *v13;
	*(_DWORD*)(v15 + 8) = *((_DWORD*)v13 + 2);
	*(_QWORD*)(v14 + 16) += 16i64;
	v8 = v96;
	v16 = *(_QWORD*)(v96 + 16) - 16i64;
	if (v16 == v17)
		v18 = -1;
	else
		v18 = *(_DWORD*)(v16 + 8);
	*(_QWORD*)(v96 + 16) = v16;
	if (v18 != 5)
	{
	LABEL_154:
		v12 = v96;
	LABEL_155:
		v92 = 0;
		goto LABEL_156;
	}
	v19 = *(_WORD**)(a3 + 16);
	if (v19 != *(_WORD**)(a3 + 24))
	{
		*v19 = 0;
		*(_QWORD*)(a3 + 24) = *(_QWORD*)(a3 + 16);
	}
	v20 = (float*)(a3 + 144);
	*(_DWORD*)(a3 + 144) = 0;
	v21 = (unsigned int*)(a3 + 40);
	v22 = (unsigned int)sub_140142170(qword_140C63678, L"white");
	if ((unsigned __int64*)(a3 + 40) == v118)
	{
		v23 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v21);
		v23 = qword_140C63678;
		*v21 = v22;
		if (v22 < *(_QWORD*)(v23 + 48))
		{
			v24 = *(_QWORD*)(v23 + 40);
			v25 = 32i64 * (unsigned int)v22;
			v26 = *(_DWORD*)(v25 + v24 + 16);
			if ((unsigned int)(v26 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v25 + v24 + 16) = v26 + 1;
		}
	}
	sub_1401429A0(v23, v22);
	v27 = (unsigned int*)(a3 + 44);
	v28 = (unsigned int)sub_140142170(qword_140C63678, L"white");
	if ((unsigned __int64*)(a3 + 44) == v118)
	{
		v29 = qword_140C63678;
	}
	else
	{
		sub_1401429A0(qword_140C63678, *v27);
		v29 = qword_140C63678;
		*v27 = v28;
		if (v28 < *(_QWORD*)(v29 + 48))
		{
			v30 = *(_QWORD*)(v29 + 40);
			v31 = 32i64 * (unsigned int)v28;
			v32 = *(_DWORD*)(v31 + v30 + 16);
			if ((unsigned int)(v32 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v31 + v30 + 16) = v32 + 1;
		}
	}
	sub_1401429A0(v29, v28);
	v33 = v94;
	*(_BYTE*)a3 = 1;
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v33[1])(&v94))
	{
		v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v96 + 32) + 160i64), v95);
		v36 = *(_QWORD*)(v35 + 16);
		*(_QWORD*)v36 = *v34;
		*(_DWORD*)(v36 + 8) = *((_DWORD*)v34 + 2);
		*(_QWORD*)(v35 + 16) += 16i64;
		v37 = v96;
		v38 = (unsigned __int64*)sub_14018F0E0(&v98, L"iLayer")[1];
		if (v38)
		{
			v39 = -1i64;
			do
				++v39;
			while (*((_BYTE*)v38 + v39));
			sub_140058710(v37, v38, v39);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v37 + 16) + 8i64) = 0;
			*(_QWORD*)(v37 + 16) += 16i64;
		}
		if (v99)
			sub_14018B900(v99, 0);
		sub_14005E8E0(
			v96,
			*(_QWORD*)(v96 + 16) - 32i64,
			(int*)(*(_QWORD*)(v96 + 16) - 16i64),
			*(_QWORD*)(v96 + 16) - 16i64);
		v40 = *(_QWORD*)(v96 + 16);
		v41 = (unsigned __int64*)(v40 - 16);
		if ((_DWORD*)(v40 - 16) == dword_140A12138 || *((_DWORD*)v41 + 2) != 3)
		{
			*(_QWORD*)(v96 + 16) = v40 - 32;
			goto LABEL_41;
		}
		v42 = *((_DWORD*)v41 + 2);
		if (v42 != 3)
		{
			if (v42 != 4 || !sub_14005AC80((char*)(*v41 + 32), v118))
			{
				v43 = 0;
			LABEL_37:
				*(_QWORD*)(v96 + 16) -= 32i64;
				if (v43 <= 2)
					*(_BYTE*)a3 = v43;
				goto LABEL_41;
			}
			LODWORD(v120) = 3;
			v41 = &v119;
			v119 = v118[0];
		}
		v43 = (int)*(double*)v41;
		goto LABEL_37;
	}
LABEL_41:
	v44 = v94;
	*(_BYTE*)(a3 + 1) = 0;
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v44[1])(&v94))
	{
		v45 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v96 + 32) + 160i64), v95);
		v47 = *(_QWORD*)(v46 + 16);
		*(_QWORD*)v47 = *v45;
		*(_DWORD*)(v47 + 8) = *((_DWORD*)v45 + 2);
		*(_QWORD*)(v46 + 16) += 16i64;
		v48 = v96;
		v49 = (unsigned __int64*)sub_14018F0E0(&v98, L"bLine")[1];
		if (v49)
		{
			v50 = -1i64;
			do
				++v50;
			while (*((_BYTE*)v49 + v50));
			sub_140058710(v48, v49, v50);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v48 + 16) + 8i64) = 0;
			*(_QWORD*)(v48 + 16) += 16i64;
		}
		if (v99)
			sub_14018B900(v99, 0);
		sub_14005E8E0(
			v96,
			*(_QWORD*)(v96 + 16) - 32i64,
			(int*)(*(_QWORD*)(v96 + 16) - 16i64),
			*(_QWORD*)(v96 + 16) - 16i64);
		v51 = *(_QWORD*)(v96 + 16);
		v52 = (_DWORD*)(v51 - 16);
		if ((_DWORD*)(v51 - 16) == dword_140A12138 || v52[2] != 1)
		{
			*(_QWORD*)(v96 + 16) = v51 - 32;
		}
		else
		{
			v53 = v52[2];
			v54 = v53 && (v53 != 1 || *v52);
			*(_QWORD*)(v96 + 16) = v51 - 32;
			*(_BYTE*)(a3 + 1) = v54;
		}
	}
	v55 = v94;
	*a4 = 0;
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v55[1])(&v94))
	{
		v56 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v96 + 32) + 160i64), v95);
		v58 = *(_QWORD*)(v57 + 16);
		*(_QWORD*)v58 = *v56;
		*(_DWORD*)(v58 + 8) = *((_DWORD*)v56 + 2);
		*(_QWORD*)(v57 + 16) += 16i64;
		v59 = v96;
		v60 = (unsigned __int64*)sub_14018F0E0(&v98, L"bRestart")[1];
		if (v60)
		{
			v61 = -1i64;
			do
				++v61;
			while (*((_BYTE*)v60 + v61));
			sub_140058710(v59, v60, v61);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v59 + 16) + 8i64) = 0;
			*(_QWORD*)(v59 + 16) += 16i64;
		}
		if (v99)
			sub_14018B900(v99, 0);
		sub_14005E8E0(
			v96,
			*(_QWORD*)(v96 + 16) - 32i64,
			(int*)(*(_QWORD*)(v96 + 16) - 16i64),
			*(_QWORD*)(v96 + 16) - 16i64);
		v62 = *(_QWORD*)(v96 + 16);
		v63 = (_DWORD*)(v62 - 16);
		if ((_DWORD*)(v62 - 16) == dword_140A12138 || v63[2] != 1)
		{
			*(_QWORD*)(v96 + 16) = v62 - 32;
		}
		else
		{
			v64 = v63[2];
			if (v64 && (v64 != 1 || *v63))
			{
				*(_QWORD*)(v96 + 16) = v62 - 32;
				*a4 = 1;
			}
			else
			{
				*(_QWORD*)(v96 + 16) = v62 - 32;
				*a4 = 0;
			}
		}
	}
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v94[1])(&v94))
	{
		v65 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v96 + 32) + 160i64), v95);
		v67 = *(_QWORD*)(v66 + 16);
		*(_QWORD*)v67 = *v65;
		*(_DWORD*)(v67 + 8) = *((_DWORD*)v65 + 2);
		*(_QWORD*)(v66 + 16) += 16i64;
		v68 = v96;
		v69 = (unsigned __int64*)sub_14018F0E0(&v98, L"strText")[1];
		if (v69)
		{
			v70 = -1i64;
			do
				++v70;
			while (*((_BYTE*)v69 + v70));
			sub_140058710(v68, v69, v70);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v68 + 16) + 8i64) = 0;
			*(_QWORD*)(v68 + 16) += 16i64;
		}
		if (v99)
			sub_14018B900(v99, 0);
		sub_14005E8E0(
			v96,
			*(_QWORD*)(v96 + 16) - 32i64,
			(int*)(*(_QWORD*)(v96 + 16) - 16i64),
			*(_QWORD*)(v96 + 16) - 16i64);
		v71 = *(_QWORD*)(v96 + 16);
		v72 = (_DWORD*)(v71 - 16);
		if ((_DWORD*)(v71 - 16) == dword_140A12138 || v72[2] != 4)
		{
			*(_QWORD*)(v96 + 16) = v71 - 32;
		}
		else
		{
			sub_14018F2D0(&v98, (char*)(*(_QWORD*)v72 + 32i64));
			v73 = *(_QWORD*)(a3 + 160);
			*(_QWORD*)(a3 + 160) = v99;
			*(_QWORD*)(a3 + 168) = v100;
			*(_QWORD*)(a3 + 176) = v101;
			if (v73)
				sub_14018B900(v73, 0);
			*(_QWORD*)(v96 + 16) -= 32i64;
		}
	}
	sub_1400FABF0((__int64)&v94, L"strFont", (_QWORD*)(a3 + 184));
	v74 = 0i64;
	v106 = off_140B569F0;
	v109 = 1;
	v107 = -2;
	v108 = 0i64;
	if ((int)sub_1400FB720((__int64)&v94, L"flagsText", -1) >= 0)
	{
		v108 = v96;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v106[2])(&v106, 0xFFFFFFFFi64);
		*(_QWORD*)(v96 + 16) -= 32i64;
	}
	if (v108 && v107 != -2 && (unsigned int)sub_1400F9ED0((__int64)&v106) == 5)
	{
		v75 = 0;
		v76 = 1i64;
		do
		{
			if ((int)sub_1400FB720((__int64)&v106, off_140A14E60[v74], 1) >= 0)
			{
				v77 = *(_QWORD*)(v108 + 16);
				v78 = *(_DWORD*)(v77 - 8);
				v79 = v78 && (v78 != 1 || *(_DWORD*)(v77 - 16));
				*(_QWORD*)(v108 + 16) = v77 - 32;
				if (v79)
					v75 |= v76;
			}
			v76 = __ROL8__(v76, 1);
			++v74;
		} while (v74 < 6);
		*(_DWORD*)(a3 + 216) = v75;
		v20 = (float*)(a3 + 144);
		v27 = (unsigned int*)(a3 + 44);
	}
	if (*(_BYTE*)(a3 + 1))
	{
		v80 = *(_WORD**)(a3 + 16);
		if (v80 != *(_WORD**)(a3 + 24))
		{
			*v80 = 0;
			*(_QWORD*)(a3 + 24) = *(_QWORD*)(a3 + 16);
		}
		sub_1400FAE90((__int64)&v94, L"fWidth", (float*)(a3 + 148));
		*v20 = 0.0;
	}
	else
	{
		sub_1400FABF0((__int64)&v94, L"strSprite", (_QWORD*)(a3 + 8));
		sub_1400FAE90((__int64)&v94, L"fRotation", v20);
		*(_DWORD*)(a3 + 148) = 1065353216;
	}
	v102 = off_140B569F0;
	v104 = 0i64;
	v105 = 1;
	LODWORD(v103) = -2;
	if ((int)sub_1400FB720((__int64)&v94, L"loc", -1) >= 0)
	{
		v104 = v96;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v102[2])(&v102, 0xFFFFFFFFi64);
		*(_QWORD*)(v96 + 16) -= 32i64;
	}
	v81 = v104;
	if (!v104 || (_DWORD)v103 == -2)
		goto LABEL_150;
	if ((unsigned int)sub_1400F9ED0((__int64)&v102) != 5)
	{
		v81 = v104;
	LABEL_150:
		v102 = off_140B56A08;
		if (v81)
			sub_1400579E0(v81, v8, v103);
		v106 = off_140B56A08;
		if (v108)
			sub_1400579E0(v108, v8, v107);
		goto LABEL_154;
	}
	v114 = off_140B569F0;
	v116 = 0i64;
	v117 = 1;
	v115 = -2;
	v110 = off_140B569F0;
	v112 = 0i64;
	v113 = 1;
	v111 = -2;
	v118[0] = 0i64;
	v118[1] = 0i64;
	v119 = 0i64;
	v120 = 0i64;
	if ((int)sub_1400FB720((__int64)&v102, L"fPoints", -1) >= 0)
	{
		v116 = v104;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v114[2])(&v114, 0xFFFFFFFFi64);
		*(_QWORD*)(v104 + 16) -= 32i64;
	}
	if (v116 && v115 != -2 && (unsigned int)sub_1400F9ED0((__int64)&v114) == 5)
	{
		v82 = v116;
		v98 = off_140B56A08;
		LODWORD(v99) = -2;
		v100 = v116;
		v101 = &v114;
		v83 = 0;
		*(_DWORD*)(*(_QWORD*)(v116 + 16) + 8i64) = 0;
		*(_QWORD*)(v82 + 16) += 16i64;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v98[2])(&v98, 0xFFFFFFFFi64);
		*(_QWORD*)(v116 + 16) -= 16i64;
		while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v101)[1])(v101)
			&& (unsigned int)sub_1400FCBA0((__int64)&v98)
			&& v83 < 4)
			sub_1400FCA40((__int64)&v98, (float*)v118 + v83++);
		v98 = off_140B56A08;
		if (v100)
			sub_1400579E0(v100, v84, v99);
	}
	if ((int)sub_1400FB720((__int64)&v102, L"nOffsets", -1) >= 0)
	{
		v112 = v104;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v110[2])(&v110, 0xFFFFFFFFi64);
		*(_QWORD*)(v104 + 16) -= 32i64;
	}
	if (v112 && v111 != -2 && (unsigned int)sub_1400F9ED0((__int64)&v110) == 5)
	{
		v85 = v112;
		v98 = off_140B56A08;
		LODWORD(v99) = -2;
		v100 = v112;
		v101 = &v110;
		v86 = 0;
		*(_DWORD*)(*(_QWORD*)(v112 + 16) + 8i64) = 0;
		*(_QWORD*)(v85 + 16) += 16i64;
		((void(__fastcall*)(__int64(__fastcall***)(), __int64))v98[2])(&v98, 0xFFFFFFFFi64);
		*(_QWORD*)(v112 + 16) -= 16i64;
		while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v101)[1])(v101)
			&& (unsigned int)sub_1400FCBA0((__int64)&v98)
			&& v86 < 4)
			sub_1400FC8E0((__int64)&v98, (int*)&v119 + v86++);
		v98 = off_140B56A08;
		if (v100)
			sub_1400579E0(v100, v87, v99);
	}
	*(_DWORD*)(a3 + 128) &= ~1u;
	v88 = a3 + 64;
	v89 = a3 + 112;
	v90 = 4i64;
	do
	{
		v91 = *(_DWORD*)((char*)&v118[-14] + v89 - a3);
		v88 += 8i64;
		v89 += 4i64;
		*(_DWORD*)(v89 - 20) = v91;
		*(_DWORD*)(v89 - 4) = *(_DWORD*)((char*)&v119 + v89 - a3 - 116);
		*(_QWORD*)(v88 - 8) = 0i64;
		--v90;
	} while (v90);
	sub_1400FAAA0((__int64)&v94, (__int64)L"cr", (unsigned int*)(a3 + 40));
	sub_1400FAAA0((__int64)&v94, (__int64)L"crText", v27);
	v110 = off_140B56A08;
	if (v112)
		sub_1400579E0(v112, v8, v111);
	v114 = off_140B56A08;
	if (v116)
		sub_1400579E0(v116, v8, v115);
	v102 = off_140B56A08;
	if (v104)
		sub_1400579E0(v104, v8, v103);
	v106 = off_140B56A08;
	if (v108)
		sub_1400579E0(v108, v8, v107);
	v12 = v96;
	v92 = 1;
LABEL_156:
	v94 = off_140B56A08;
	if (v12)
		sub_1400579E0(v12, v8, v95);
	return v92;
}
// 1400DBC24: variable 'v8' is possibly undefined
// 1400DBC38: variable 'v10' is possibly undefined
// 1400DBC9C: variable 'v14' is possibly undefined
// 1400DBCC1: variable 'v17' is possibly undefined
// 1400DBE20: variable 'v35' is possibly undefined
// 1400DBF4E: variable 'v46' is possibly undefined
// 1400DC055: variable 'v57' is possibly undefined
// 1400DC16B: variable 'v66' is possibly undefined
// 1400DC5BF: variable 'v84' is possibly undefined
// 1400DC6BF: variable 'v87' is possibly undefined
// 1409D418C: using guessed type wchar_t aCr[3];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A14E60: using guessed type wchar_t *off_140A14E60[6];
// 140A16520: using guessed type wchar_t aBrestart[9];
// 140A16538: using guessed type wchar_t aStrtext[8];
// 140A16548: using guessed type wchar_t aStrfont[8];
// 140A16558: using guessed type wchar_t aFlagstext[10];
// 140A16570: using guessed type wchar_t aWhite_4[6];
// 140A16580: using guessed type wchar_t aWhite_5[6];
// 140A16590: using guessed type wchar_t aIlayer[7];
// 140A165A0: using guessed type wchar_t aBline[6];
// 140A165B0: using guessed type wchar_t aFpoints[8];
// 140A165C0: using guessed type wchar_t aNoffsets[9];
// 140A165D8: using guessed type wchar_t aCrtext[7];
// 140A165E8: using guessed type wchar_t aFwidth[7];
// 140A165F8: using guessed type wchar_t aStrsprite[10];
// 140A16610: using guessed type wchar_t aFrotation[10];
// 140A16628: using guessed type wchar_t aLoc[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C63678: using guessed type __int64 qword_140C63678;

