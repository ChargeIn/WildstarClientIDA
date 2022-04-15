#include "../winhttp.h"

//----- (0000000140025070) ----------------------------------------------------
__int64 __fastcall sub_140025070(__int64 a1, _DWORD* a2)
{
	int v4; // r12d
	_QWORD* v5; // rax
	__int64 v6; // r10
	__int64 v7; // rdx
	int v8; // r11d
	_QWORD* v9; // rax
	__int64 v10; // r10
	__int64 v11; // rdx
	int v12; // r11d
	_QWORD* v13; // rax
	__int64 v14; // r10
	__int64 v15; // rdx
	int v16; // r11d
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	int v20; // r11d
	_QWORD* v21; // rax
	__int64 v22; // r10
	__int64 v23; // rdx
	int v24; // r11d
	_QWORD* v25; // rax
	__int64 v26; // r10
	__int64 v27; // rdx
	_QWORD* v28; // rax
	__int64 v29; // r10
	__int64 v30; // rdx
	int v31; // r11d
	int v32; // r14d
	_QWORD* v33; // rsi
	int v34; // eax
	__int64 v35; // rdi
	_QWORD* v36; // rax
	__int64 v37; // rdi
	__int64 v38; // rax
	__int64 v39; // r9
	unsigned __int64 v40; // rbp
	__int64 v41; // rax
	int v42; // r8d
	__int64 v43; // rcx
	unsigned __int64 v44; // rax
	unsigned __int64 v45; // rdx
	__int64 v46; // r9
	_DWORD* v47; // rcx
	int v48; // ecx
	int v49; // r11d
	_QWORD* v50; // rax
	__int64 v51; // r10
	__int64 v52; // rdx
	int v53; // r11d
	int v54; // edx
	__int64 v55; // rcx
	unsigned __int64 v56; // rax
	unsigned __int64 v57; // r8
	__int64 v58; // r9
	_DWORD* v59; // rcx
	int v60; // esi
	_QWORD* v61; // rax
	__int64 v62; // r10
	__int64 v63; // rdx
	__int64 v64; // rdi
	unsigned __int64* v65; // rdx
	unsigned __int64 v66; // r8
	_DWORD* v67; // rcx
	__int64* v68; // rax
	_QWORD* v69; // rax
	__int64 v70; // r10
	__int64 v71; // rdx
	int v72; // r11d
	__int64 v73; // rcx
	__int64 v74; // rsi
	__int64 v75; // rdi
	__int64 v76; // rax
	_QWORD* v77; // rax
	__int64 v78; // rdx
	int v79; // r10d
	__int64* v80; // rax
	int v81; // r11d
	__int64 v82; // rdx
	__int64 v83; // r10
	__int64 v84; // rdx
	_QWORD* v85; // rax
	__int64 v86; // r10
	__int64 v87; // rdx
	__int64 v88; // rdi
	unsigned __int64* v89; // rdx
	unsigned __int64 v90; // r8
	_DWORD* v91; // rax
	__int64* v92; // rax
	_QWORD* v93; // rax
	__int64 v94; // r10
	__int64 v95; // rdx
	_QWORD* v96; // rax
	__int64 v97; // r10
	__int64 v98; // rdx
	int v99; // r11d
	_QWORD* v100; // rax
	__int64 v101; // r10
	__int64 v102; // rdx
	int v103; // r11d
	_QWORD* v104; // rax
	__int64 v105; // r10
	__int64 v106; // rdx
	int v107; // r11d
	_QWORD* v108; // rax
	__int64 v109; // r10
	__int64 v110; // rdx
	int v111; // r11d
	_QWORD* v112; // rax
	__int64 v113; // r10
	__int64 v114; // rdx
	int v115; // r11d
	_QWORD* v116; // rax
	__int64 v117; // r10
	__int64 v118; // rdx
	__int64 v119; // rdi
	unsigned __int64* v120; // rdx
	_DWORD* v121; // rax
	__int64* v122; // rax
	_QWORD* v123; // rax
	__int64 v124; // r10
	__int64 v125; // rdx
	int v126; // r11d
	_QWORD* v127; // rax
	__int64 v128; // r10
	__int64 v129; // rdx
	int v130; // r11d
	__int64 result; // rax
	__int64 v132; // [rsp+20h] [rbp-48h] BYREF
	__int64 v133; // [rsp+28h] [rbp-40h]
	__int64 v134; // [rsp+30h] [rbp-38h]

	v4 = sub_140029E20(qword_140C66DA8, a2);
	v5 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v7 = *(_QWORD*)(v6 + 16);
	*(_QWORD*)v7 = *v5;
	*(_DWORD*)(v7 + 8) = *((_DWORD*)v5 + 2);
	*(_QWORD*)(v6 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v7, L"characterCreateId", v8);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v9 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v11 = *(_QWORD*)(v10 + 16);
	*(_QWORD*)v11 = *v9;
	*(_DWORD*)(v11 + 8) = *((_DWORD*)v9 + 2);
	*(_QWORD*)(v10 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v11, L"factionId", v12);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v15 = *(_QWORD*)(v14 + 16);
	*(_QWORD*)v15 = *v13;
	*(_DWORD*)(v15 + 8) = *((_DWORD*)v13 + 2);
	*(_QWORD*)(v14 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v15, L"classId", v16);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v19 = *(_QWORD*)(v18 + 16);
	*(_QWORD*)v19 = *v17;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v17 + 2);
	*(_QWORD*)(v18 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v19, L"raceId", v20);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v23 = *(_QWORD*)(v22 + 16);
	*(_QWORD*)v23 = *v21;
	*(_DWORD*)(v23 + 8) = *((_DWORD*)v21 + 2);
	*(_QWORD*)(v22 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v23, L"genderId", v24);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v27 = *(_QWORD*)(v26 + 16);
	*(_QWORD*)v27 = *v25;
	*(_DWORD*)(v27 + 8) = *((_DWORD*)v25 + 2);
	*(_QWORD*)(v26 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v27, L"enabled", v4);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v30 = *(_QWORD*)(v29 + 16);
	*(_QWORD*)v30 = *v28;
	*(_DWORD*)(v30 + 8) = *((_DWORD*)v28 + 2);
	*(_QWORD*)(v29 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v30, L"xp", v31);
	v32 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v33 = *(_QWORD**)(a1 + 16);
	v34 = a2[25];
	v35 = (unsigned int)a2[26];
	v133 = 15i64;
	LODWORD(v134) = 0;
	HIDWORD(v134) = v34;
	v36 = (_QWORD*)sub_140059170(v33, 0x18ui64);
	*v36 = v35;
	v36[1] = 15i64;
	v36[2] = v134;
	v37 = v33[4];
	v38 = sub_140062650((__int64)v33, (unsigned __int64*)"Game.Money", 0xAui64);
	v39 = v33[2];
	v132 = v38;
	LODWORD(v133) = 4;
	sub_14005E8E0((__int64)v33, v37 + 160, (int*)&v132, v39);
	v33[2] += 16i64;
	sub_140058BF0((__int64)v33, -2);
	sub_1400FB540(a1);
	v40 = -1i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	if (a2[23] != 5 || !a2[26] || !*(_DWORD*)(qword_140C66DA8 + 576))
		goto LABEL_22;
	if (qword_140C63840)
	{
		v41 = qword_140C63840(off_140A6A248, 73i64, qword_140C63858);
	LABEL_9:
		if (v41)
		{
			v42 = *(_DWORD*)(v41 + 4);
			if (v42)
				goto LABEL_12;
		}
		goto LABEL_11;
	}
	if (!dword_140C63F1C && (int)sub_1401FDDC0() >= 0)
	{
		v41 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C64018 + 24i64))(qword_140C64018, 73i64);
		goto LABEL_9;
	}
LABEL_11:
	v42 = -1;
LABEL_12:
	v43 = *(_QWORD*)(qword_140C635F0 + 5584);
	v44 = 0i64;
	v45 = *(_QWORD*)(v43 + 160);
	if (v45)
	{
		v46 = *(_QWORD*)(v43 + 152);
		v47 = (_DWORD*)(v46 + 8);
		while (*v47 != 73)
		{
			++v44;
			v47 += 4;
			if (v44 >= v45)
				goto LABEL_16;
		}
		v48 = *(_DWORD*)(v46 + 16 * v44 + 12);
	}
	else
	{
	LABEL_16:
		v48 = 0;
	}
	v49 = v42 - v48;
	if (v42 - v48 >= 0)
	{
		if (v49 > v42)
			v49 = v42;
		if (v49 > 0)
		{
			v50 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
			v52 = *(_QWORD*)(v51 + 16);
			*(_QWORD*)v52 = *v50;
			*(_DWORD*)(v52 + 8) = *((_DWORD*)v50 + 2);
			*(_QWORD*)(v51 + 16) += 16i64;
			sub_1400F06F0(*(_QWORD*)(a1 + 16), v52, L"nFreeCreationsRemaining", v53);
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		}
	}
LABEL_22:
	v54 = a2[27];
	if (v54)
	{
		v55 = *(_QWORD*)(qword_140C635F0 + 5584);
		v56 = 0i64;
		v57 = *(_QWORD*)(v55 + 160);
		if (v57)
		{
			v58 = *(_QWORD*)(v55 + 152);
			v59 = (_DWORD*)(v58 + 8);
			while (*v59 != v54)
			{
				++v56;
				v59 += 4;
				if (v56 >= v57)
					goto LABEL_27;
			}
			v60 = *(_DWORD*)(v58 + 16 * v56 + 12);
		}
		else
		{
		LABEL_27:
			v60 = 0;
		}
		v61 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v63 = *(_QWORD*)(v62 + 16);
		*(_QWORD*)v63 = *v61;
		*(_DWORD*)(v63 + 8) = *((_DWORD*)v61 + 2);
		*(_QWORD*)(v62 + 16) += 16i64;
		v64 = *(_QWORD*)(a1 + 16);
		v65 = (unsigned __int64*)sub_14018F0E0(&v132, L"bHasEntitlement")[1];
		if (v65)
		{
			v66 = -1i64;
			do
				++v66;
			while (*((_BYTE*)v65 + v66));
			sub_140058710(v64, v65, v66);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v64 + 16) + 8i64) = 0;
			*(_QWORD*)(v64 + 16) += 16i64;
		}
		if (v133)
			sub_14018B900(v133, 0);
		v67 = *(_DWORD**)(v64 + 16);
		v67[2] = 1;
		*v67 = v60 != 0;
		*(_QWORD*)(v64 + 16) += 16i64;
		v68 = (__int64*)sub_1400580E0(v64, -3);
		sub_14005EA50(v64, v68, (int*)(*(_QWORD*)(v64 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v64 + 16) - 16i64));
		*(_QWORD*)(v64 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		v69 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v71 = *(_QWORD*)(v70 + 16);
		*(_QWORD*)v71 = *v69;
		*(_DWORD*)(v71 + 8) = *((_DWORD*)v69 + 2);
		*(_QWORD*)(v70 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a1 + 16), v71, L"nRequiredEntitlementId", v72);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		if (sub_14044FE00(v73, a2[27]))
		{
			v74 = *(_QWORD*)(a1 + 16);
			if (*(_QWORD*)(*(_QWORD*)(v74 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v74 + 32) + 112i64))
				sub_14005E2C0(*(_QWORD*)(a1 + 16));
			v75 = *(_QWORD*)(v74 + 16);
			v76 = sub_14005C1B0(v74, 0, 0);
			*(_DWORD*)(v75 + 8) = 5;
			*(_QWORD*)v75 = v76;
			*(_QWORD*)(v74 + 16) += 16i64;
			LODWORD(v75) = sub_1400578C0(v74);
			v77 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v74 + 32) + 160i64), v75);
			v78 = *(_QWORD*)(v74 + 16);
			*(_QWORD*)v78 = *v77;
			*(_DWORD*)(v78 + 8) = *((_DWORD*)v77 + 2);
			*(_QWORD*)(v74 + 16) += 16i64;
			sub_1400F06F0(v74, v78, L"nOfferGroupId", v79);
			*(_QWORD*)(v74 + 16) -= 16i64;
			v80 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v74 + 32) + 160i64), v75);
			v82 = *v80;
			*(_QWORD*)v83 = *v80;
			*(_DWORD*)(v83 + 8) = *((_DWORD*)v80 + 2);
			*(_QWORD*)(v74 + 16) += 16i64;
			sub_1400F06F0(v74, v82, L"nVariantIndex", v81 + 1);
			*(_QWORD*)(v74 + 16) -= 16i64;
			sub_1400FB2A0(a1, (__int64)L"tLinkInfo", v75);
			sub_1400579E0(v74, v84, v75);
		}
	}
	else
	{
		v85 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v87 = *(_QWORD*)(v86 + 16);
		*(_QWORD*)v87 = *v85;
		*(_DWORD*)(v87 + 8) = *((_DWORD*)v85 + 2);
		*(_QWORD*)(v86 + 16) += 16i64;
		v88 = *(_QWORD*)(a1 + 16);
		v89 = (unsigned __int64*)sub_14018F0E0(&v132, L"bHasEntitlement")[1];
		if (v89)
		{
			v90 = -1i64;
			do
				++v90;
			while (*((_BYTE*)v89 + v90));
			sub_140058710(v88, v89, v90);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v88 + 16) + 8i64) = 0;
			*(_QWORD*)(v88 + 16) += 16i64;
		}
		if (v133)
			sub_14018B900(v133, 0);
		v91 = *(_DWORD**)(v88 + 16);
		*v91 = 1;
		v91[2] = 1;
		*(_QWORD*)(v88 + 16) += 16i64;
		v92 = (__int64*)sub_1400580E0(v88, -3);
		sub_14005EA50(v88, v92, (int*)(*(_QWORD*)(v88 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v88 + 16) - 16i64));
		*(_QWORD*)(v88 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		v93 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v95 = *(_QWORD*)(v94 + 16);
		*(_QWORD*)v95 = *v93;
		*(_DWORD*)(v95 + 8) = *((_DWORD*)v93 + 2);
		*(_QWORD*)(v94 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a1 + 16), v95, L"nRequiredEntitlementId", 0);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	}
	v96 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v98 = *(_QWORD*)(v97 + 16);
	*(_QWORD*)v98 = *v96;
	*(_DWORD*)(v98 + 8) = *((_DWORD*)v96 + 2);
	*(_QWORD*)(v97 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v98, L"nCharacterCreate", v99);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v100 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v102 = *(_QWORD*)(v101 + 16);
	*(_QWORD*)v102 = *v100;
	*(_DWORD*)(v102 + 8) = *((_DWORD*)v100 + 2);
	*(_QWORD*)(v101 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v102, L"nFaction", v103);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v104 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v106 = *(_QWORD*)(v105 + 16);
	*(_QWORD*)v106 = *v104;
	*(_DWORD*)(v106 + 8) = *((_DWORD*)v104 + 2);
	*(_QWORD*)(v105 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v106, L"nClass", v107);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v108 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v110 = *(_QWORD*)(v109 + 16);
	*(_QWORD*)v110 = *v108;
	*(_DWORD*)(v110 + 8) = *((_DWORD*)v108 + 2);
	*(_QWORD*)(v109 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v110, L"nRace", v111);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v112 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v114 = *(_QWORD*)(v113 + 16);
	*(_QWORD*)v114 = *v112;
	*(_DWORD*)(v114 + 8) = *((_DWORD*)v112 + 2);
	*(_QWORD*)(v113 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v114, L"nGender", v115);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v116 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v118 = *(_QWORD*)(v117 + 16);
	*(_QWORD*)v118 = *v116;
	*(_DWORD*)(v118 + 8) = *((_DWORD*)v116 + 2);
	*(_QWORD*)(v117 + 16) += 16i64;
	v119 = *(_QWORD*)(a1 + 16);
	v120 = (unsigned __int64*)sub_14018F0E0(&v132, L"bEnabled")[1];
	if (v120)
	{
		do
			++v40;
		while (*((_BYTE*)v120 + v40));
		sub_140058710(v119, v120, v40);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v119 + 16) + 8i64) = 0;
		*(_QWORD*)(v119 + 16) += 16i64;
	}
	if (v133)
		sub_14018B900(v133, 0);
	v121 = *(_DWORD**)(v119 + 16);
	LOBYTE(v32) = v4 != 0;
	v121[2] = 1;
	*v121 = v32;
	*(_QWORD*)(v119 + 16) += 16i64;
	v122 = (__int64*)sub_1400580E0(v119, -3);
	sub_14005EA50(v119, v122, (int*)(*(_QWORD*)(v119 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v119 + 16) - 16i64));
	*(_QWORD*)(v119 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v123 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v125 = *(_QWORD*)(v124 + 16);
	*(_QWORD*)v125 = *v123;
	*(_DWORD*)(v125 + 8) = *((_DWORD*)v123 + 2);
	*(_QWORD*)(v124 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v125, L"nXp", v126);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v127 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v129 = *(_QWORD*)(v128 + 16);
	*(_QWORD*)v129 = *v127;
	*(_DWORD*)(v129 + 8) = *((_DWORD*)v127 + 2);
	*(_QWORD*)(v128 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v129, L"eCreationStart", v130);
	result = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	return result;
}
// 1400250B6: variable 'v6' is possibly undefined
// 1400250D9: variable 'v8' is possibly undefined
// 140025102: variable 'v10' is possibly undefined
// 140025125: variable 'v12' is possibly undefined
// 14002514E: variable 'v14' is possibly undefined
// 140025171: variable 'v16' is possibly undefined
// 14002519A: variable 'v18' is possibly undefined
// 1400251BD: variable 'v20' is possibly undefined
// 1400251E6: variable 'v22' is possibly undefined
// 140025209: variable 'v24' is possibly undefined
// 14002522E: variable 'v26' is possibly undefined
// 14002527A: variable 'v29' is possibly undefined
// 14002529D: variable 'v31' is possibly undefined
// 140025443: variable 'v51' is possibly undefined
// 140025466: variable 'v53' is possibly undefined
// 1400254DA: variable 'v62' is possibly undefined
// 1400255BF: variable 'v70' is possibly undefined
// 1400255E2: variable 'v72' is possibly undefined
// 1400255F4: variable 'v73' is possibly undefined
// 140025681: variable 'v79' is possibly undefined
// 1400256B6: variable 'v83' is possibly undefined
// 1400256A5: variable 'v81' is possibly undefined
// 1400256E7: variable 'v84' is possibly undefined
// 140025708: variable 'v86' is possibly undefined
// 1400257D1: variable 'v94' is possibly undefined
// 14002581C: variable 'v97' is possibly undefined
// 14002583F: variable 'v99' is possibly undefined
// 140025868: variable 'v101' is possibly undefined
// 14002588B: variable 'v103' is possibly undefined
// 1400258B4: variable 'v105' is possibly undefined
// 1400258D7: variable 'v107' is possibly undefined
// 140025900: variable 'v109' is possibly undefined
// 140025923: variable 'v111' is possibly undefined
// 14002594C: variable 'v113' is possibly undefined
// 14002596F: variable 'v115' is possibly undefined
// 140025994: variable 'v117' is possibly undefined
// 140025A74: variable 'v124' is possibly undefined
// 140025A97: variable 'v126' is possibly undefined
// 140025AC0: variable 'v128' is possibly undefined
// 140025AE3: variable 'v130' is possibly undefined
// 1409D1E14: using guessed type wchar_t aXp[3];
// 1409EDD58: using guessed type wchar_t aCharactercreat_1[18];
// 1409EDDE8: using guessed type wchar_t aFactionid[10];
// 1409EDE00: using guessed type wchar_t aClassid[8];
// 1409EDE10: using guessed type wchar_t aRaceid[7];
// 1409EDE20: using guessed type wchar_t aGenderid[9];
// 1409EDE38: using guessed type wchar_t aEnabled[8];
// 1409EDE58: using guessed type wchar_t aNfreecreations[24];
// 1409EDE88: using guessed type wchar_t aBhasentitlemen[16];
// 1409EDEA8: using guessed type wchar_t aNrequiredentit[23];
// 1409EDED8: using guessed type wchar_t aNoffergroupid[14];
// 1409EDEF8: using guessed type wchar_t aNvariantindex[14];
// 1409EDF18: using guessed type wchar_t aTlinkinfo[10];
// 1409EDF30: using guessed type wchar_t aBhasentitlemen_0[16];
// 1409EDF50: using guessed type wchar_t aNrequiredentit_0[23];
// 1409EDF80: using guessed type wchar_t aNcharactercrea[17];
// 1409EDFA8: using guessed type wchar_t aNfaction[9];
// 1409EDFC0: using guessed type wchar_t aNclass[7];
// 1409EDFD0: using guessed type wchar_t aNrace[6];
// 1409EDFE0: using guessed type wchar_t aNgender[8];
// 1409EDFF0: using guessed type wchar_t aBenabled[9];
// 1409EE008: using guessed type wchar_t aNxp[4];
// 1409EE010: using guessed type wchar_t aEcreationstart[15];
// 140A6A248: using guessed type wchar_t *off_140A6A248[2];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F1C: using guessed type int dword_140C63F1C;
// 140C64018: using guessed type __int64 qword_140C64018;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

