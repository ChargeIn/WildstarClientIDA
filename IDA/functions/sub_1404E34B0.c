#include "../winhttp.h"

//----- (00000001404E34B0) ----------------------------------------------------
__int64 __fastcall sub_1404E34B0(__int64 a1, __int64 a2)
{
	int v4; // esi
	_QWORD* v5; // rax
	__int64 v6; // r10
	__int64 v7; // rdx
	__int64 v8; // rdi
	unsigned __int64 v9; // r12
	unsigned __int16* v10; // rbp
	unsigned __int64* v11; // rdx
	unsigned __int64 v12; // r8
	_DWORD* v13; // rcx
	__int64* v14; // rax
	unsigned int v15; // edx
	int v16; // r15d
	int* v17; // rax
	int* v18; // rdi
	__int64 v19; // rcx
	unsigned int v20; // edx
	unsigned int v21; // ecx
	_DWORD* v22; // r13
	__int64 v23; // rsi
	__int64 v24; // rdi
	__int64 v25; // rax
	int v26; // edi
	__int64 v27; // rcx
	_QWORD* v28; // rax
	__int64 v29; // rdx
	unsigned __int16* v30; // r10
	__int64 v31; // rcx
	_QWORD* v32; // rax
	__int64 v33; // rdx
	unsigned __int16* v34; // r10
	_QWORD* v35; // rax
	__int64 v36; // r10
	__int64 v37; // rdx
	int v38; // r11d
	_QWORD* v39; // rax
	__int64 v40; // r11
	__int64 v41; // rdx
	int v42; // r10d
	_QWORD* v43; // rax
	__int64 v44; // r11
	__int64 v45; // rdx
	unsigned __int16* v46; // r10
	unsigned int v47; // eax
	unsigned __int64 v48; // rdx
	__int64 v49; // rcx
	unsigned __int64 v50; // rax
	__int64 v51; // r9
	_DWORD* v52; // rcx
	__int64 v53; // rsi
	__int64 v54; // rdi
	__int64 v55; // rax
	_QWORD* v56; // rax
	__int64 v57; // r8
	__int64 v58; // rdx
	int v59; // r10d
	__int64 v60; // rdx
	int v61; // eax
	_QWORD* v62; // rsi
	__int64 v63; // rdi
	_QWORD* v64; // rax
	__int64 v65; // rcx
	__int64 v66; // rdi
	__int64(__fastcall * *v67)(); // rax
	__int64 v68; // r9
	__int64 v69; // rsi
	__int64 v70; // rcx
	__int64 v71; // rdi
	__int64 v72; // rax
	int v73; // eax
	unsigned int v74; // edx
	int v75; // edi
	__int64 v76; // rcx
	__int64 v77; // rax
	__int64 v78; // rdx
	__int64 v79; // rcx
	_QWORD* v80; // rax
	__int64 v81; // r10
	__int64 v82; // r8
	__int64 v83; // rdx
	unsigned __int16* v84; // r11
	__int64 v85; // r8
	__int64 v86; // rcx
	__int64 v87; // rdx
	int v88; // eax
	__int64 v89; // rcx
	unsigned __int64 v90; // rax
	unsigned __int64 v91; // rdx
	__int64 v92; // r8
	_DWORD* v93; // rcx
	__int64 v94; // rcx
	unsigned __int64 v95; // rax
	unsigned __int64 v96; // rdx
	_DWORD* v97; // r9
	_DWORD* v98; // rcx
	int v99; // r11d
	BOOL v100; // edi
	_QWORD* v101; // rax
	__int64 v102; // r10
	__int64 v103; // rdx
	int v104; // r11d
	int v105; // esi
	_QWORD* v106; // rax
	__int64 v107; // r10
	__int64 v108; // rdx
	__int64 v109; // rdi
	unsigned __int64* v110; // rdx
	_DWORD* v111; // rcx
	_DWORD* v112; // rcx
	__int64* v113; // rax
	_QWORD* v114; // rax
	__int64 v115; // r10
	__int64 v116; // rdx
	int v117; // r11d
	unsigned __int64 v118; // rcx
	_QWORD* v119; // rax
	__int64 v120; // r10
	__int64 v121; // rdx
	__int64 result; // rax
	__int64(__fastcall * *v123)(); // [rsp+30h] [rbp-48h] BYREF
	__int64 v124; // [rsp+38h] [rbp-40h]
	__int64 v125; // [rsp+40h] [rbp-38h]
	int v126; // [rsp+48h] [rbp-30h]

	v4 = (*(_DWORD*)(a2 + 4) >> 1) & 1;
	v5 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v7 = *(_QWORD*)(v6 + 16);
	*(_QWORD*)v7 = *v5;
	*(_DWORD*)(v7 + 8) = *((_DWORD*)v5 + 2);
	*(_QWORD*)(v6 + 16) += 16i64;
	v8 = *(_QWORD*)(a1 + 16);
	v9 = -1i64;
	v10 = 0i64;
	v11 = (unsigned __int64*)sub_14018F0E0(&v123, L"multiRedeem")[1];
	if (v11)
	{
		v12 = -1i64;
		do
			++v12;
		while (*((_BYTE*)v11 + v12));
		sub_140058710(v8, v11, v12);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v8 + 16) + 8i64) = 0;
		*(_QWORD*)(v8 + 16) += 16i64;
	}
	if (v124)
		sub_14018B900(v124, 0);
	v13 = *(_DWORD**)(v8 + 16);
	v13[2] = 1;
	*v13 = v4 != 0;
	*(_QWORD*)(v8 + 16) += 16i64;
	v14 = (__int64*)sub_1400580E0(v8, -3);
	sub_14005EA50(v8, v14, (int*)(*(_QWORD*)(v8 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v8 + 16) - 16i64));
	*(_QWORD*)(v8 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v15 = *(_DWORD*)(a2 + 8);
	v16 = 1;
	if (v15)
	{
		v17 = sub_1400B5DF0(qword_140C658F0, v15, 0i64);
		v18 = v17;
		if (v17)
		{
			if ((unsigned int)sub_140415C70(*(_QWORD**)(a1 + 16), (__int64)v17))
			{
				sub_1400FB540(a1);
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
			}
			v20 = v18[118];
			if (v20 && (unsigned int)sub_140452750(v19, v20))
				v16 = 0;
		}
	}
	v21 = *(_DWORD*)(a2 + 12);
	if (v21)
	{
		v22 = (_DWORD*)sub_1401FE020(v21);
		if (v22)
		{
			v23 = *(_QWORD*)(a1 + 16);
			if (*(_QWORD*)(*(_QWORD*)(v23 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v23 + 32) + 112i64))
				sub_14005E2C0(*(_QWORD*)(a1 + 16));
			v24 = *(_QWORD*)(v23 + 16);
			v25 = sub_14005C1B0(v23, 0, 0);
			*(_DWORD*)(v24 + 8) = 5;
			*(_QWORD*)v24 = v25;
			*(_QWORD*)(v23 + 16) += 16i64;
			v26 = sub_1400578C0(v23);
			sub_14034BDD0(v27, v22[5]);
			v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v26);
			v29 = *(_QWORD*)(v23 + 16);
			*(_QWORD*)v29 = *v28;
			*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
			*(_QWORD*)(v23 + 16) += 16i64;
			sub_1400F0870(v23, v29, L"name", v30);
			*(_QWORD*)(v23 + 16) -= 16i64;
			sub_14034BDD0(v31, v22[6]);
			v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v26);
			v33 = *(_QWORD*)(v23 + 16);
			*(_QWORD*)v33 = *v32;
			*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
			*(_QWORD*)(v23 + 16) += 16i64;
			sub_1400F0870(v23, v33, L"description", v34);
			*(_QWORD*)(v23 + 16) -= 16i64;
			v35 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v26);
			*(_QWORD*)v36 = *v35;
			*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
			*(_QWORD*)(v23 + 16) += 16i64;
			sub_1400F06F0(v23, v37, L"count", v38);
			*(_QWORD*)(v23 + 16) -= 16i64;
			v39 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v26);
			*(_QWORD*)v40 = *v39;
			*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
			*(_QWORD*)(v23 + 16) += 16i64;
			sub_1400F06F0(v23, v41, L"maxCount", v42);
			*(_QWORD*)(v23 + 16) -= 16i64;
			v43 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v23 + 32) + 160i64), v26);
			*(_QWORD*)v44 = *v43;
			*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
			*(_QWORD*)(v23 + 16) += 16i64;
			sub_1400F0870(v23, v45, L"icon", v46);
			*(_QWORD*)(v23 + 16) -= 16i64;
			sub_1400FB2A0(a1, (__int64)L"entitlement", v26);
			if (qword_140C65898)
			{
				v47 = sub_1403D2140(qword_140C65898, *(_DWORD*)(a2 + 12));
			}
			else
			{
				v49 = *(_QWORD*)(qword_140C635F0 + 5584);
				v50 = 0i64;
				v48 = *(_QWORD*)(v49 + 160);
				if (v48)
				{
					v51 = *(_QWORD*)(v49 + 152);
					v52 = (_DWORD*)(v51 + 8);
					while (*v52 != *(_DWORD*)(a2 + 12))
					{
						++v50;
						v52 += 4;
						if (v50 >= v48)
							goto LABEL_25;
					}
					v47 = *(_DWORD*)(v51 + 16 * v50 + 12);
				}
				else
				{
				LABEL_25:
					v47 = 0;
				}
			}
			if (v47 >= v22[1])
				v16 = 0;
			sub_1400579E0(v23, v48, v26);
		}
	}
	if (*(_DWORD*)(a2 + 24))
	{
		v53 = *(_QWORD*)(a1 + 16);
		if (*(_QWORD*)(*(_QWORD*)(v53 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v53 + 32) + 112i64))
			sub_14005E2C0(*(_QWORD*)(a1 + 16));
		v54 = *(_QWORD*)(v53 + 16);
		v55 = sub_14005C1B0(v53, 0, 0);
		*(_DWORD*)(v54 + 8) = 5;
		*(_QWORD*)v54 = v55;
		*(_QWORD*)(v53 + 16) += 16i64;
		LODWORD(v54) = sub_1400578C0(v53);
		v56 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v53 + 32) + 160i64), v54);
		v57 = *(_QWORD*)(v53 + 16);
		*(_QWORD*)v57 = *v56;
		v58 = *((unsigned int*)v56 + 2);
		*(_DWORD*)(v57 + 8) = v58;
		*(_QWORD*)(v53 + 16) += 16i64;
		sub_1400F06F0(v53, v58, L"eventEnum", v59);
		*(_QWORD*)(v53 + 16) -= 16i64;
		sub_1400FB2A0(a1, (__int64)L"instantEvent", v54);
		v16 = 0;
		sub_1400579E0(v53, v60, v54);
	}
	v61 = *(_DWORD*)(a2 + 28);
	if (v61)
	{
		v62 = *(_QWORD**)(a1 + 16);
		v63 = *(_QWORD*)(a2 + 32);
		v124 = 15i64;
		LODWORD(v125) = 0;
		HIDWORD(v125) = v61;
		v64 = (_QWORD*)sub_140059170(v62, 0x18ui64);
		v65 = v124;
		*v64 = v63;
		v64[1] = v65;
		v64[2] = v125;
		v66 = v62[4];
		v67 = (__int64(__fastcall**)())sub_140062650((__int64)v62, (unsigned __int64*)"Game.Money", 0xAui64);
		v68 = v62[2];
		v123 = v67;
		LODWORD(v124) = 4;
		sub_14005E8E0((__int64)v62, v66 + 160, (int*)&v123, v68);
		v62[2] += 16i64;
		sub_140058BF0((__int64)v62, -2);
		sub_1400FB540(a1);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	}
	if (*(_DWORD*)(a2 + 80))
	{
		v69 = *(_QWORD*)(a1 + 16);
		v126 = 1;
		v70 = *(_QWORD*)(v69 + 32);
		v123 = off_140B569F0;
		v125 = v69;
		if (*(_QWORD*)(v70 + 120) >= *(_QWORD*)(v70 + 112))
			sub_14005E2C0(v69);
		v71 = *(_QWORD*)(v69 + 16);
		v72 = sub_14005C1B0(v69, 0, 0);
		*(_DWORD*)(v71 + 8) = 5;
		*(_QWORD*)v71 = v72;
		*(_QWORD*)(v69 + 16) += 16i64;
		v73 = sub_1400578C0(v69);
		v74 = *(_DWORD*)(a2 + 80);
		v75 = v73;
		LODWORD(v124) = v73;
		sub_140452AD0(v76, v74, (__int64)&v123);
		sub_1400FB2A0(a1, (__int64)L"tUnlockSet", v75);
		v77 = sub_14044F9A0(qword_140C65908, *(_DWORD*)(a2 + 56));
		if (v77)
		{
			sub_14034BDD0(v79, *(_DWORD*)(*(_QWORD*)v77 + 16i64));
			v80 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
			v82 = *(_QWORD*)(v81 + 16);
			*(_QWORD*)v82 = *v80;
			v83 = *((unsigned int*)v80 + 2);
			*(_DWORD*)(v82 + 8) = v83;
			*(_QWORD*)(v81 + 16) += 16i64;
			sub_1400F0870(*(_QWORD*)(a1 + 16), v83, L"name", v84);
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		}
		sub_1400579E0(v69, v78, v75);
	}
	v85 = *(unsigned int*)(a2 + 48);
	v86 = qword_140C65898;
	if ((_DWORD)v85)
	{
		if (qword_140C65898)
		{
			v87 = *(_QWORD*)(qword_140C65898 + 120);
			if (v87)
			{
				v88 = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
					+ 24i64))(
						qword_140C659A0,
						v87,
						v85,
						0i64,
						0i64,
						0);
				v86 = qword_140C65898;
				if (!v88)
					v16 = 0;
			}
		}
	}
	if (*(_DWORD*)(a2 + 28) == 5)
	{
		if (v86 && (unsigned int)sub_1403D2140(v86, 0x31u))
			goto LABEL_56;
		v89 = *(_QWORD*)(qword_140C635F0 + 5584);
		v90 = 0i64;
		v91 = *(_QWORD*)(v89 + 160);
		if (v91)
		{
			v92 = *(_QWORD*)(v89 + 152);
			v93 = (_DWORD*)(v92 + 8);
			while (*v93 != 49)
			{
				++v90;
				v93 += 4;
				if (v90 >= v91)
					goto LABEL_57;
			}
			if (*(_DWORD*)(v92 + 16 * v90 + 12))
				LABEL_56:
			v16 = 0;
		}
	}
LABEL_57:
	v94 = *(_QWORD*)(qword_140C635F0 + 5584);
	v95 = 0i64;
	v96 = *(_QWORD*)(v94 + 144);
	if (!v96)
		goto LABEL_61;
	v97 = *(_DWORD**)(v94 + 136);
	v98 = v97;
	while (*(_DWORD*)(a2 + 52) != *v98)
	{
		++v95;
		v98 += 2;
		if (v95 >= v96)
			goto LABEL_61;
	}
	v111 = &v97[2 * v95];
	if (v111)
	{
		v99 = 0;
		if (v111[1] - dword_140C636A8 > 0)
			v99 = v111[1] - dword_140C636A8;
	}
	else
	{
	LABEL_61:
		v99 = 0;
	}
	v100 = v99 != 0;
	v101 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v103 = *(_QWORD*)(v102 + 16);
	*(_QWORD*)v103 = *v101;
	*(_DWORD*)(v103 + 8) = *((_DWORD*)v101 + 2);
	*(_QWORD*)(v102 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v103, L"cooldown", v104);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	if (!v16 || (v105 = 1, v100))
		v105 = 0;
	v106 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v108 = *(_QWORD*)(v107 + 16);
	*(_QWORD*)v108 = *v106;
	*(_DWORD*)(v108 + 8) = *((_DWORD*)v106 + 2);
	*(_QWORD*)(v107 + 16) += 16i64;
	v109 = *(_QWORD*)(a1 + 16);
	v110 = (unsigned __int64*)sub_14018F0E0(&v123, L"canClaim")[1];
	if (v110)
	{
		do
			++v9;
		while (*((_BYTE*)v110 + v9));
		sub_140058710(v109, v110, v9);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v109 + 16) + 8i64) = 0;
		*(_QWORD*)(v109 + 16) += 16i64;
	}
	if (v124)
		sub_14018B900(v124, 0);
	v112 = *(_DWORD**)(v109 + 16);
	v112[2] = 1;
	*v112 = v105 != 0;
	*(_QWORD*)(v109 + 16) += 16i64;
	v113 = (__int64*)sub_1400580E0(v109, -3);
	sub_14005EA50(v109, v113, (int*)(*(_QWORD*)(v109 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v109 + 16) - 16i64));
	*(_QWORD*)(v109 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v114 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v116 = *(_QWORD*)(v115 + 16);
	*(_QWORD*)v116 = *v114;
	*(_DWORD*)(v116 + 8) = *((_DWORD*)v114 + 2);
	*(_QWORD*)(v115 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v116, L"prereqId", v117);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v118 = *(_QWORD*)(a2 + 40);
	if (v118 && v118 <= qword_140C3FE70)
		v10 = (unsigned __int16*)(v118 + qword_140C3FE68);
	v119 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v121 = *(_QWORD*)(v120 + 16);
	*(_QWORD*)v121 = *v119;
	*(_DWORD*)(v121 + 8) = *((_DWORD*)v119 + 2);
	*(_QWORD*)(v120 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a1 + 16), v121, L"icon", v10);
	result = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	return result;
}
// 1404E34F5: variable 'v6' is possibly undefined
// 1404E3604: variable 'v19' is possibly undefined
// 1404E3679: variable 'v27' is possibly undefined
// 1404E36B5: variable 'v30' is possibly undefined
// 1404E36C3: variable 'v31' is possibly undefined
// 1404E36FF: variable 'v34' is possibly undefined
// 1404E3730: variable 'v36' is possibly undefined
// 1404E3742: variable 'v37' is possibly undefined
// 1404E3742: variable 'v38' is possibly undefined
// 1404E3773: variable 'v40' is possibly undefined
// 1404E3785: variable 'v41' is possibly undefined
// 1404E3785: variable 'v42' is possibly undefined
// 1404E37DB: variable 'v44' is possibly undefined
// 1404E37ED: variable 'v45' is possibly undefined
// 1404E37ED: variable 'v46' is possibly undefined
// 1404E3875: variable 'v48' is possibly undefined
// 1404E3906: variable 'v59' is possibly undefined
// 1404E392B: variable 'v60' is possibly undefined
// 1404E3A53: variable 'v76' is possibly undefined
// 1404E3A85: variable 'v79' is possibly undefined
// 1404E3AA4: variable 'v81' is possibly undefined
// 1404E3AC8: variable 'v84' is possibly undefined
// 1404E3ADC: variable 'v78' is possibly undefined
// 1404E3BF8: variable 'v102' is possibly undefined
// 1404E3C1B: variable 'v104' is possibly undefined
// 1404E3C55: variable 'v107' is possibly undefined
// 1404E3D53: variable 'v115' is possibly undefined
// 1404E3D76: variable 'v117' is possibly undefined
// 1404E3DCC: variable 'v120' is possibly undefined
// 140B0B7B0: using guessed type wchar_t aName_23[5];
// 140B0B7C0: using guessed type wchar_t aDescription_2[12];
// 140B0B7D8: using guessed type wchar_t aCount_3[6];
// 140B0B840: using guessed type wchar_t aMultiredeem_0[12];
// 140B0B958: using guessed type wchar_t aCooldown[9];
// 140B0B970: using guessed type wchar_t aCanclaim_0[9];
// 140B0B988: using guessed type wchar_t aPrereqid[9];
// 140B0B9A0: using guessed type wchar_t aIcon_5[5];
// 140B0B9B0: using guessed type wchar_t aInstantevent_0[13];
// 140B0B9E8: using guessed type wchar_t aTunlockset[11];
// 140B0BA00: using guessed type wchar_t aName_24[5];
// 140B0BA10: using guessed type wchar_t aMaxcount_0[9];
// 140B0BA28: using guessed type wchar_t aIcon_4[5];
// 140B0BA38: using guessed type wchar_t aEntitlement_1[12];
// 140B0BA50: using guessed type wchar_t aEventenum_0[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65908: using guessed type __int64 qword_140C65908;
// 140C659A0: using guessed type __int64 qword_140C659A0;

