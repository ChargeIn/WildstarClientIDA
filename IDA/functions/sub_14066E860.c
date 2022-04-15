#include "../winhttp.h"

//----- (000000014066E860) ----------------------------------------------------
__int64 __fastcall sub_14066E860(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx
	unsigned __int64 v3; // rsi
	__int64* v5; // r12
	_QWORD* v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdx
	int v9; // r11d
	int* v10; // rax
	int* v11; // r13
	int* v12; // rax
	__int64 v13; // rax
	bool v14; // zf
	int v15; // eax
	unsigned int* v16; // r15
	__int64 v17; // rax
	__int16* v18; // rax
	__int64* v19; // rax
	int* v20; // rax
	_QWORD* v21; // rax
	int* v22; // rax
	_QWORD* v23; // rax
	__int64 v24; // r10
	__int64 v25; // rdx
	unsigned __int16* v26; // r11
	_QWORD* v27; // rax
	__int64 v28; // r10
	__int64 v29; // rdx
	int v30; // r11d
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	int v34; // r11d
	_QWORD* v35; // rax
	__int64 v36; // r10
	__int64 v37; // rdx
	int v38; // r11d
	unsigned __int16* v39; // r12
	_QWORD* v40; // rax
	__int64 v41; // r10
	__int64 v42; // rdx
	__int64 v43; // rax
	__int64 v44; // rax
	_QWORD* v45; // rax
	__int64 v46; // r10
	__int64 v47; // rdx
	__int64 v48; // r15
	unsigned __int64* v49; // rdx
	unsigned __int64 v50; // r8
	_DWORD* v51; // rax
	__int64* v52; // rax
	_QWORD* v53; // rax
	__int64 v54; // r10
	__int64 v55; // rdx
	int v56; // r11d
	__int64 v57; // rax
	__int64 v58; // rax
	_QWORD* v59; // rax
	__int64 v60; // r10
	__int64 v61; // rdx
	int v62; // r11d
	_QWORD* v63; // rax
	__int64 v64; // r10
	int v65; // r11d
	unsigned __int16* v66; // r8
	_QWORD* v67; // rax
	__int64 v68; // r10
	__int64 v69; // rdx
	int v70; // r11d
	_QWORD* v71; // rax
	__int64 v72; // r10
	__int64 v73; // rdx
	int v74; // r11d
	__int64 v75; // rax
	float v76; // xmm6_4
	_QWORD* v77; // rax
	__int64 v78; // r10
	__int64 v79; // rdx
	__int64 v80; // r15
	unsigned __int64* v81; // rdx
	unsigned __int64 v82; // r8
	__int64 v83; // rax
	__int64* v84; // rax
	__int64 v85; // rax
	__int64 v86; // rax
	_QWORD* v87; // rax
	__int64 v88; // r10
	__int64 v89; // rdx
	__int64 v90; // rdx
	__int64 v91; // rax
	__int64 v92; // rax
	int v93; // edx
	__int64 v94; // rcx
	_QWORD* v95; // rax
	__int64 v96; // r10
	__int64 v97; // rdx
	__int64 v98; // r15
	unsigned __int64* v99; // rdx
	_QWORD* v100; // rax
	__int64 v101; // r10
	__int64 v102; // rdx
	_DWORD* v103; // rax
	__int64* v104; // rax
	_QWORD* v105; // rax
	__int64 v106; // r10
	__int64 v107; // rdx
	unsigned __int16* v108; // r11
	__int64 v109; // rsi
	int v110; // r15d
	__int64 v111; // rax
	_QWORD* v112; // rax
	int v113; // r10d
	int v114; // r9d
	unsigned __int16* v115; // r8
	__int64 v116; // rdx
	_QWORD* v117; // rax
	__int64 v118; // rdx
	int v119; // r10d
	__int64 v120; // r11
	unsigned __int16* v121; // r8
	__int64 v122; // rdx
	__int64 v123; // rax
	__int64 v124; // rdi
	int v125; // esi
	_QWORD* v126; // rax
	__int64 v127; // rdx
	int v128; // r10d
	_QWORD* v129; // rax
	__int64 v130; // r11
	__int64 v131; // rdx
	int v132; // r10d
	__int64 v133; // rdx
	__int64 result; // rax
	__int64 v135; // rcx
	unsigned __int16* v136; // rdx
	__int64 v137; // [rsp+28h] [rbp-E0h] BYREF
	int* v138; // [rsp+30h] [rbp-D8h]
	int* v139; // [rsp+38h] [rbp-D0h]
	int* v140; // [rsp+40h] [rbp-C8h]
	__int64 v141; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v142; // [rsp+50h] [rbp-B8h]
	__int64(__fastcall * *v143)(); // [rsp+68h] [rbp-A0h] BYREF
	__int64 v144; // [rsp+70h] [rbp-98h] BYREF
	__int128 v145; // [rsp+128h] [rbp+20h]
	int* v146; // [rsp+138h] [rbp+30h]

	v2 = a1 + 160;
	v3 = -1i64;
	v5 = (__int64*)a1;
	if (!*(_DWORD*)(a1 + 1344) || !*(_QWORD*)(a1 + 168))
		goto LABEL_54;
	v6 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v8 = *(_QWORD*)(v7 + 16);
	*(_QWORD*)v8 = *v6;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v6 + 2);
	*(_QWORD*)(v7 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v8, L"nId", v9);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v10 = sub_14018B280(16i64, 0);
	v11 = v10;
	v138 = v10;
	v139 = v10;
	v140 = v10 + 4;
	if (v10)
		*(_WORD*)v10 = 0;
	sub_1400B6F30((__int64)&v143);
	v143 = off_140B69230;
	v146 = 0i64;
	v145 = 0i64;
	v12 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v145 = v12;
	*((_QWORD*)&v145 + 1) = v12;
	v146 = v12 + 4;
	if (v12)
		*(_WORD*)v12 = 0;
	v13 = 0i64;
	do
		v14 = a1n_13[++v13] == 0;
	while (!v14);
	sub_14001C480((__int64)&v144, (int*)L"$1n", (int*)&a1n_13[v13]);
	v15 = dword_140C45FC0;
	if (*(_DWORD*)qword_140C63750 < dword_140C45FC0)
		v15 = *(_DWORD*)qword_140C63750;
	if (!byte_140C45FD0[v15])
	{
		v22 = sub_14018B280(96i64, 0);
		if (v22)
		{
			if (*(_DWORD*)(v2 + 1184))
				v21 = (_QWORD*)sub_1404DDAF0((__int64)v22, *(_DWORD*)(*(_QWORD*)(v2 + 8) + 476i64));
			else
				v21 = (_QWORD*)sub_1404DDAF0((__int64)v22, MEMORY[0x1DC]);
			goto LABEL_29;
		}
		goto LABEL_28;
	}
	if (*(_DWORD*)(v2 + 1184))
		v16 = *(unsigned int**)(v2 + 8);
	else
		v16 = 0i64;
	if (*(_DWORD*)(v2 + 1184))
		v17 = *(_QWORD*)(v2 + 8);
	else
		v17 = 0i64;
	v18 = sub_14034BDD0((__int64)byte_140C45FD0, *(_DWORD*)(v17 + 476));
	v19 = sub_14018EFA0(&v141, (__int64)L"%s - [%d]", v18, *v16);
	if (v19 != &v137)
	{
		sub_14001C480((__int64)&v137, (int*)v19[1], (int*)v19[2]);
		v11 = v138;
	}
	if (v142)
		sub_14018B900(v142, 0);
	v20 = sub_14018B280(96i64, 0);
	if (!v20)
	{
	LABEL_28:
		v21 = 0i64;
		goto LABEL_29;
	}
	v21 = (_QWORD*)sub_1404DDB40((__int64)v20, v11);
LABEL_29:
	sub_1400B7480((__int64)&v143, v21);
	sub_1400B7660(&v143);
	v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v25 = *(_QWORD*)(v24 + 16);
	*(_QWORD*)v25 = *v23;
	*(_DWORD*)(v25 + 8) = *((_DWORD*)v23 + 2);
	*(_QWORD*)(v24 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v25, L"strName", v26);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v29 = *(_QWORD*)(v28 + 16);
	*(_QWORD*)v29 = *v27;
	*(_DWORD*)(v29 + 8) = *((_DWORD*)v27 + 2);
	*(_QWORD*)(v28 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v29, L"eFamily", v30);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v33 = *(_QWORD*)(v32 + 16);
	*(_QWORD*)v33 = *v31;
	*(_DWORD*)(v33 + 8) = *((_DWORD*)v31 + 2);
	*(_QWORD*)(v32 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v33, L"eCategory", v34);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v35 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v37 = *(_QWORD*)(v36 + 16);
	*(_QWORD*)v37 = *v35;
	*(_DWORD*)(v37 + 8) = *((_DWORD*)v35 + 2);
	*(_QWORD*)(v36 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v37, L"eType", v38);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	sub_14040FE30((_QWORD*)v2, &v137);
	v39 = (unsigned __int16*)v138;
	if (v138 != v139)
	{
		v40 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v42 = *(_QWORD*)(v41 + 16);
		*(_QWORD*)v42 = *v40;
		*(_DWORD*)(v42 + 8) = *((_DWORD*)v40 + 2);
		*(_QWORD*)(v41 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a2 + 16), v42, L"strFlavor", v39);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	if (*(_DWORD*)(v2 + 1184))
		v43 = *(_QWORD*)(v2 + 8);
	else
		v43 = 0i64;
	if (*(_DWORD*)(v43 + 320) == 33)
	{
		v44 = *(_DWORD*)(v2 + 1184) ? *(_QWORD*)(v2 + 8) : 0i64;
		if ((*(_DWORD*)(v44 + 332) & 0x800) != 0)
		{
			v45 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v47 = *(_QWORD*)(v46 + 16);
			*(_QWORD*)v47 = *v45;
			*(_DWORD*)(v47 + 8) = *((_DWORD*)v45 + 2);
			*(_QWORD*)(v46 + 16) += 16i64;
			v48 = *(_QWORD*)(a2 + 16);
			v49 = (unsigned __int64*)sub_14018F0E0(&v141, L"bPveOnlyRune")[1];
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
			if (v142)
				sub_14018B900(v142, 0);
			v51 = *(_DWORD**)(v48 + 16);
			*v51 = 1;
			v51[2] = 1;
			*(_QWORD*)(v48 + 16) += 16i64;
			v52 = (__int64*)sub_1400580E0(v48, -3);
			sub_14005EA50(v48, v52, (int*)(*(_QWORD*)(v48 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v48 + 16) - 16i64));
			*(_QWORD*)(v48 + 16) -= 32i64;
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
	}
	if (v39)
		sub_14018B900((__int64)v39, 0);
	if ((_QWORD)v145)
		sub_14018B900(v145, 0);
	sub_1400B7390(&v143);
	if (v11)
		sub_14018B900((__int64)v11, 0);
	v5 = (__int64*)a1;
LABEL_54:
	if (!*(_DWORD*)(v2 + 1176) || v2 == -32)
		goto LABEL_102;
	v53 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v55 = *(_QWORD*)(v54 + 16);
	*(_QWORD*)v55 = *v53;
	*(_DWORD*)(v55 + 8) = *((_DWORD*)v53 + 2);
	*(_QWORD*)(v54 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v55, L"eQuality", v56);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	if (*(_DWORD*)(v2 + 1184))
		v57 = *(_QWORD*)(v2 + 8);
	else
		v57 = 0i64;
	v14 = *(_DWORD*)(v57 + 320) == 33;
	v58 = v2 + 32;
	if (v14)
	{
		v59 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v61 = *(_QWORD*)(v60 + 16);
		*(_QWORD*)v61 = *v59;
		*(_DWORD*)(v61 + 8) = *((_DWORD*)v59 + 2);
		*(_QWORD*)(v60 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v61, L"nItemLevel", v62);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v63 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v66 = L"nInstalledMinimumItemLevel";
	LABEL_83:
		v90 = *(_QWORD*)(v64 + 16);
		*(_QWORD*)v90 = *v63;
		*(_DWORD*)(v90 + 8) = *((_DWORD*)v63 + 2);
		*(_QWORD*)(v64 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v90, v66, v65);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		goto LABEL_84;
	}
	if (!*(_DWORD*)(v2 + 1176))
		v58 = 0i64;
	if ((*(_BYTE*)(v58 + 32) & 2) != 0)
	{
		v63 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v66 = L"nPowerCoreMaximumLevel";
		goto LABEL_83;
	}
	v67 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v69 = *(_QWORD*)(v68 + 16);
	*(_QWORD*)v69 = *v67;
	*(_DWORD*)(v69 + 8) = *((_DWORD*)v67 + 2);
	*(_QWORD*)(v68 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v69, L"nItemLevel", v70);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v71 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v73 = *(_QWORD*)(v72 + 16);
	*(_QWORD*)v73 = *v71;
	*(_DWORD*)(v73 + 8) = *((_DWORD*)v71 + 2);
	*(_QWORD*)(v72 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v73, L"nEffectiveLevel", v74);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v75 = v2 + 32;
	if (!*(_DWORD*)(v2 + 1176))
		v75 = 0i64;
	v76 = *(float*)(v75 + 28);
	v77 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v79 = *(_QWORD*)(v78 + 16);
	*(_QWORD*)v79 = *v77;
	*(_DWORD*)(v79 + 8) = *((_DWORD*)v77 + 2);
	*(_QWORD*)(v78 + 16) += 16i64;
	v80 = *(_QWORD*)(a2 + 16);
	v81 = (unsigned __int64*)sub_14018F0E0(&v141, L"nCraftedMultiplier")[1];
	if (v81)
	{
		v82 = -1i64;
		do
			++v82;
		while (*((_BYTE*)v81 + v82));
		sub_140058710(v80, v81, v82);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v80 + 16) + 8i64) = 0;
		*(_QWORD*)(v80 + 16) += 16i64;
	}
	if (v142)
		sub_14018B900(v142, 0);
	v83 = *(_QWORD*)(v80 + 16);
	*(_DWORD*)(v83 + 8) = 3;
	*(double*)v83 = v76;
	*(_QWORD*)(v80 + 16) += 16i64;
	v84 = (__int64*)sub_1400580E0(v80, -3);
	sub_14005EA50(v80, v84, (int*)(*(_QWORD*)(v80 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v80 + 16) - 16i64));
	*(_QWORD*)(v80 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	if (*(_DWORD*)(v2 + 1184))
		v85 = *(_QWORD*)(v2 + 8);
	else
		v85 = 0i64;
	if ((*(_DWORD*)(v85 + 332) & 0x100000) != 0)
	{
		v86 = v2 + 32;
		if (!*(_DWORD*)(v2 + 1176))
			v86 = 0i64;
		if ((*(_BYTE*)(v86 + 32) & 8) != 0)
		{
			v87 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v89 = *(_QWORD*)(v88 + 16);
			*(_QWORD*)v89 = *v87;
			*(_DWORD*)(v89 + 8) = *((_DWORD*)v87 + 2);
			*(_QWORD*)(v88 + 16) += 16i64;
			sub_1400F06F0(*(_QWORD*)(a2 + 16), v89, L"bScalable", 1);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
		v63 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v66 = L"nPrimeTier";
		goto LABEL_83;
	}
LABEL_84:
	v91 = v2 + 32;
	if (!*(_DWORD*)(v2 + 1176))
		v91 = 0i64;
	if ((*(_BYTE*)(v91 + 32) & 1) != 0)
	{
		if (*(_DWORD*)(v2 + 1184))
			v92 = *(_QWORD*)(v2 + 8);
		else
			v92 = 0i64;
		v93 = *(_DWORD*)(a2 + 8);
		v94 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64);
		if (*(_DWORD*)(v92 + 320) == 33)
		{
			v95 = sub_14005C3C0(v94, v93);
			v97 = *(_QWORD*)(v96 + 16);
			*(_QWORD*)v97 = *v95;
			*(_DWORD*)(v97 + 8) = *((_DWORD*)v95 + 2);
			*(_QWORD*)(v96 + 16) += 16i64;
			v98 = *(_QWORD*)(a2 + 16);
			v99 = (unsigned __int64*)sub_14018F0E0(&v141, L"bPvpOnlyRune")[1];
			if (!v99)
			{
				*(_DWORD*)(*(_QWORD*)(v98 + 16) + 8i64) = 0;
				*(_QWORD*)(v98 + 16) += 16i64;
			LABEL_99:
				if (v142)
					sub_14018B900(v142, 0);
				v103 = *(_DWORD**)(v98 + 16);
				*v103 = 1;
				v103[2] = 1;
				*(_QWORD*)(v98 + 16) += 16i64;
				v104 = (__int64*)sub_1400580E0(v98, -3);
				sub_14005EA50(
					v98,
					v104,
					(int*)(*(_QWORD*)(v98 + 16) - 32i64),
					(unsigned int*)(*(_QWORD*)(v98 + 16) - 16i64));
				*(_QWORD*)(v98 + 16) -= 32i64;
				*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
				goto LABEL_102;
			}
			do
				++v3;
			while (*((_BYTE*)v99 + v3));
		}
		else
		{
			v100 = sub_14005C3C0(v94, v93);
			v102 = *(_QWORD*)(v101 + 16);
			*(_QWORD*)v102 = *v100;
			*(_DWORD*)(v102 + 8) = *((_DWORD*)v100 + 2);
			*(_QWORD*)(v101 + 16) += 16i64;
			v98 = *(_QWORD*)(a2 + 16);
			v99 = (unsigned __int64*)sub_14018F0E0(&v141, L"bPvpGear")[1];
			if (!v99)
			{
				*(_DWORD*)(*(_QWORD*)(v98 + 16) + 8i64) = 0;
				*(_QWORD*)(v98 + 16) += 16i64;
				goto LABEL_99;
			}
			do
				++v3;
			while (*((_BYTE*)v99 + v3));
		}
		sub_140058710(v98, v99, v3);
		goto LABEL_99;
	}
LABEL_102:
	if (v5[116] != v5[117])
	{
		v105 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v107 = *(_QWORD*)(v106 + 16);
		*(_QWORD*)v107 = *v105;
		*(_DWORD*)(v107 + 8) = *((_DWORD*)v105 + 2);
		*(_QWORD*)(v106 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a2 + 16), v107, L"strMakersMark", v108);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	}
	if (*(_DWORD*)(v2 + 1184) && *(_QWORD*)(v2 + 8))
	{
		v109 = *v5;
		sub_140058900(*v5, a2, 0);
		v110 = sub_1400578C0(v109);
		if (*(_DWORD*)(v2 + 1184))
			v111 = *(_QWORD*)(v2 + 8);
		else
			v111 = 0i64;
		if ((*(_BYTE*)(v111 + 340) & 4) != 0)
		{
			v112 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v109 + 32) + 160i64), v110);
			v114 = v113;
			v115 = L"nMaxCount";
		}
		else
		{
			v112 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v109 + 32) + 160i64), v110);
			v114 = 1;
			v115 = L"nMaxCount";
		}
		v116 = *(_QWORD*)(v109 + 16);
		*(_QWORD*)v116 = *v112;
		*(_DWORD*)(v116 + 8) = *((_DWORD*)v112 + 2);
		*(_QWORD*)(v109 + 16) += 16i64;
		sub_1400F06F0(v109, v116, v115, v114);
		*(_QWORD*)(v109 + 16) -= 16i64;
		if (*(_QWORD*)v2)
		{
			v117 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v109 + 32) + 160i64), v110);
			v121 = L"nCount";
		}
		else if (*(_DWORD*)(v2 + 1208) && *(_DWORD*)(v2 + 1140) && v2 != -1136)
		{
			v117 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v109 + 32) + 160i64), v110);
			v121 = L"nCount";
		}
		else if (*(_DWORD*)(v2 + 1200) && *(_DWORD*)(v2 + 1048) && v2 != -1048)
		{
			v117 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v109 + 32) + 160i64), v110);
			v121 = L"nCount";
		}
		else
		{
			if (!*(_DWORD*)(v2 + 1204) || !*(_DWORD*)(v2 + 792) || v2 == -792)
				goto LABEL_127;
			v117 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v109 + 32) + 160i64), v110);
			v121 = L"nCount";
		}
		*(_QWORD*)v120 = *v117;
		*(_DWORD*)(v120 + 8) = *((_DWORD*)v117 + 2);
		*(_QWORD*)(v109 + 16) += 16i64;
		sub_1400F06F0(v109, v118, v121, v119);
		*(_QWORD*)(v109 + 16) -= 16i64;
	LABEL_127:
		sub_1400FB2A0(a2, (__int64)L"tStack", v110);
		sub_1400579E0(v109, v122, v110);
	}
	if (*(_DWORD*)(v2 + 1184) && *(_QWORD*)(v2 + 8))
	{
		v123 = *(_DWORD*)(v2 + 1184) ? *(_QWORD*)(v2 + 8) : 0i64;
		if (*(_DWORD*)(v123 + 420))
		{
			sub_1400FA0F0((__int64)&v137, *v5, 1);
			v124 = (__int64)v139;
			v125 = (int)v138;
			v126 = sub_14005C3C0(*(_QWORD*)(*((_QWORD*)v139 + 4) + 160i64), (int)v138);
			v127 = *(_QWORD*)(v124 + 16);
			*(_QWORD*)v127 = *v126;
			*(_DWORD*)(v127 + 8) = *((_DWORD*)v126 + 2);
			*(_QWORD*)(v124 + 16) += 16i64;
			sub_1400F06F0(v124, v127, L"nMaxCount", v128);
			*(_QWORD*)(v124 + 16) -= 16i64;
			if (*(_QWORD*)v2)
			{
				v129 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v124 + 32) + 160i64), v125);
				*(_QWORD*)v130 = *v129;
				*(_DWORD*)(v130 + 8) = *((_DWORD*)v129 + 2);
				*(_QWORD*)(v124 + 16) += 16i64;
				sub_1400F06F0(v124, v131, L"nCount", v132);
				*(_QWORD*)(v124 + 16) -= 16i64;
			}
			sub_1400FB2A0(a2, (__int64)L"tCharge", v125);
			sub_1400579E0(v124, v133, v125);
		}
	}
	result = *(_QWORD*)v2;
	if (*(_QWORD*)v2)
	{
		v135 = *(_QWORD*)(result + 64);
		if (v135)
		{
			if ((*(_DWORD*)(v135 + 332) & 0x10000) != 0)
			{
				v136 = L"bCantDelete";
				return sub_1400FAE20(a2, v136);
			}
		}
	}
	if (*(_DWORD*)(v2 + 1184))
	{
		if (*(_QWORD*)(v2 + 8))
		{
			if (*(_DWORD*)(v2 + 1184))
			{
				result = *(_QWORD*)(v2 + 8);
				if (result)
				{
					if ((*(_DWORD*)(result + 332) & 0x10000) != 0)
					{
						v136 = L"bCantDelete";
						return sub_1400FAE20(a2, v136);
					}
				}
			}
		}
	}
	return result;
}
// 14066E8DE: variable 'v7' is possibly undefined
// 14066E901: variable 'v9' is possibly undefined
// 14066EACB: variable 'v24' is possibly undefined
// 14066EAEE: variable 'v26' is possibly undefined
// 14066EB2C: variable 'v28' is possibly undefined
// 14066EB4F: variable 'v30' is possibly undefined
// 14066EB8D: variable 'v32' is possibly undefined
// 14066EBB0: variable 'v34' is possibly undefined
// 14066EBEE: variable 'v36' is possibly undefined
// 14066EC11: variable 'v38' is possibly undefined
// 14066EC50: variable 'v41' is possibly undefined
// 14066ECD8: variable 'v46' is possibly undefined
// 14066EE14: variable 'v54' is possibly undefined
// 14066EE37: variable 'v56' is possibly undefined
// 14066EE8E: variable 'v60' is possibly undefined
// 14066EEB1: variable 'v62' is possibly undefined
// 14066EF7B: variable 'v68' is possibly undefined
// 14066EF9E: variable 'v70' is possibly undefined
// 14066EFD7: variable 'v72' is possibly undefined
// 14066EFFA: variable 'v74' is possibly undefined
// 14066F034: variable 'v78' is possibly undefined
// 14066F145: variable 'v88' is possibly undefined
// 14066F1AE: variable 'v64' is possibly undefined
// 14066F1C7: variable 'v65' is possibly undefined
// 14066F220: variable 'v96' is possibly undefined
// 14066F271: variable 'v101' is possibly undefined
// 14066F351: variable 'v106' is possibly undefined
// 14066F374: variable 'v108' is possibly undefined
// 14066F3A2: variable 'a2' is possibly undefined
// 14066F3F7: variable 'v113' is possibly undefined
// 14066F578: variable 'v120' is possibly undefined
// 14066F58A: variable 'v118' is possibly undefined
// 14066F58A: variable 'v119' is possibly undefined
// 14066F5AC: variable 'v122' is possibly undefined
// 14066F64D: variable 'v128' is possibly undefined
// 14066F686: variable 'v130' is possibly undefined
// 14066F698: variable 'v131' is possibly undefined
// 14066F698: variable 'v132' is possibly undefined
// 14066F6BA: variable 'v133' is possibly undefined
// 140B2F110: using guessed type wchar_t aEcategory[10];
// 140B2F128: using guessed type wchar_t aEtype_23[6];
// 140B2F138: using guessed type wchar_t aStrname_60[8];
// 140B2F148: using guessed type wchar_t aEfamily[8];
// 140B2F158: using guessed type wchar_t a1n_13[4];
// 140B2F160: using guessed type wchar_t aSD_10[10];
// 140B2F190: using guessed type wchar_t aNid_24[4];
// 140B2F1B0: using guessed type wchar_t aNmaxcount_1[10];
// 140B2F1C8: using guessed type wchar_t aNmaxcount_2[10];
// 140B2F1E0: using guessed type wchar_t aBpvpgear[9];
// 140B2F1F8: using guessed type wchar_t aStrmakersmark[14];
// 140B2F218: using guessed type wchar_t aNprimetier[11];
// 140B2F230: using guessed type wchar_t aBpvponlyrune[13];
// 140B2F250: using guessed type wchar_t aNcraftedmultip[19];
// 140B2F278: using guessed type wchar_t aBscalable[10];
// 140B2F290: using guessed type wchar_t aNitemlevel_0[11];
// 140B2F2A8: using guessed type wchar_t aNeffectiveleve_1[16];
// 140B2F2C8: using guessed type wchar_t aNinstalledmini[27];
// 140B2F300: using guessed type wchar_t aNpowercoremaxi_0[23];
// 140B2F330: using guessed type wchar_t aEquality[9];
// 140B2F348: using guessed type wchar_t aNitemlevel[11];
// 140B2F360: using guessed type wchar_t aStrflavor_0[10];
// 140B2F378: using guessed type wchar_t aBpveonlyrune[13];
// 140B2F420: using guessed type wchar_t aBcantdelete[12];
// 140B2F438: using guessed type wchar_t aBcantdelete_0[12];
// 140B2F450: using guessed type wchar_t aNcount_40[7];
// 140B2F460: using guessed type wchar_t aTcharge[8];
// 140B2F470: using guessed type wchar_t aTstack[7];
// 140B2F480: using guessed type wchar_t aNmaxcount_3[10];
// 140B2F498: using guessed type wchar_t aNcount_38[7];
// 140B2F4A8: using guessed type wchar_t aNcount_39[7];
// 140B2F4B8: using guessed type wchar_t aNcount_36[7];
// 140B2F4C8: using guessed type wchar_t aNcount_37[7];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C45FC0: using guessed type int dword_140C45FC0;
// 140C45FD0: using guessed type _BYTE byte_140C45FD0[32];
// 140C63750: using guessed type __int64 qword_140C63750;

