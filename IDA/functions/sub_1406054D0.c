//----- (00000001406054D0) ----------------------------------------------------
__int64 __fastcall sub_1406054D0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
	_QWORD* v3; // rax
	int v4; // ebp
	unsigned __int64 v7; // rsi
	__int64 v8; // rsi
	__int64 v9; // rax
	__int64 v10; // rcx
	int v11; // edx
	__int16* v12; // r13
	__int64 v13; // rax
	__int64 v14; // rcx
	int v15; // edx
	__int16* v16; // rax
	__int64 v17; // rcx
	unsigned __int16* v18; // r12
	__int64 v19; // rbx
	__int64 v20; // rax
	int v21; // r14d
	__int64 v22; // rcx
	_QWORD* v23; // rax
	__int64 v24; // rdx
	_QWORD* v25; // rax
	int v26; // r11d
	__int64 v27; // r10
	__int64 v28; // rdx
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx
	int v32; // r11d
	_QWORD* v33; // rax
	__int64 v34; // r10
	__int64 v35; // rdx
	int v36; // r11d
	_QWORD* v37; // rax
	__int64 v38; // r10
	__int64 v39; // rdx
	_QWORD* v40; // rax
	__int64 v41; // r10
	__int64 v42; // rdx
	_QWORD* v43; // rax
	__int64 v44; // r10
	__int64 v45; // rdx
	_QWORD* v46; // rax
	__int64 v47; // r10
	__int64 v48; // rdx
	int v49; // r11d
	int v50; // ebx
	_QWORD* v51; // rax
	__int64 v52; // r10
	unsigned __int64* v53; // rdx
	int v54; // r13d
	unsigned __int64 v55; // rbp
	unsigned __int64 v56; // r8
	_DWORD* v57; // rcx
	__int64* v58; // rax
	BOOL v59; // ebx
	_QWORD* v60; // rax
	__int64 v61; // r10
	unsigned __int64* v62; // rdx
	unsigned __int64 v63; // r8
	BOOL* v64; // rcx
	__int64* v65; // rax
	__int64 v66; // rcx
	int v67; // r12d
	int v68; // eax
	__int64 v69; // rcx
	float* v70; // rax
	float* v71; // rbx
	int v72; // ecx
	int v73; // eax
	__int64 v74; // r9
	unsigned __int64 v75; // rdx
	unsigned __int64 v76; // rcx
	__int64 v77; // r10
	_DWORD* v78; // rax
	int v79; // eax
	int v80; // ebx
	_QWORD* v81; // rax
	__int64 v82; // rdx
	_QWORD* v83; // rax
	__int64 v84; // r10
	__int64 v85; // rdx
	_QWORD* v86; // rax
	__int64 v87; // r10
	__int64 v88; // rdx
	_QWORD* v89; // rax
	__int64 v90; // r10
	__int64 v91; // rdx
	_QWORD* v92; // rax
	__int64 v93; // r10
	__int64 v94; // rdx
	_QWORD* v95; // rax
	__int64 v96; // r10
	__int64 v97; // rdx
	_QWORD* v98; // rax
	__int64 v99; // r10
	__int64 v100; // rdx
	_QWORD* v101; // rax
	__int64 v102; // r10
	__int64 v103; // rdx
	_QWORD* v104; // rax
	__int64 v105; // r10
	__int64 v106; // rdx
	_QWORD* v107; // rax
	__int64 v108; // r10
	__int64 v109; // rdx
	_QWORD* v110; // rax
	__int64 v111; // r10
	__int64 v112; // rdx
	_QWORD* v113; // rax
	__int64 v114; // r10
	__int64 v115; // rdx
	_QWORD* v116; // rax
	__int64 v117; // r10
	__int64 v118; // rdx
	_QWORD* v119; // rax
	__int64 v120; // r10
	__int64 v121; // rdx
	_QWORD* v122; // rax
	__int64 v123; // r10
	__int64 v124; // rdx
	__int64 v125; // r12
	_QWORD* v126; // rax
	__int64 v127; // rdx
	int v128; // r10d
	_QWORD* v129; // rax
	unsigned __int8 v130; // r10
	__int64 v131; // r11
	__int64 v132; // rdx
	_QWORD* v133; // rax
	__int64 v134; // r10
	__int64 v135; // r11
	__int64 v136; // rdx
	__int64 v137; // rbx
	int v138; // ebx
	_QWORD* v139; // rax
	__int64 v140; // rdx
	__int64 v141; // rcx
	int v143; // [rsp+20h] [rbp-A8h]
	int v144; // [rsp+24h] [rbp-A4h]
	int v145; // [rsp+28h] [rbp-A0h]
	int v146; // [rsp+2Ch] [rbp-9Ch]
	int v147; // [rsp+30h] [rbp-98h]
	int v148; // [rsp+34h] [rbp-94h]
	int v149; // [rsp+38h] [rbp-90h]
	int v150; // [rsp+40h] [rbp-88h]
	int v151; // [rsp+48h] [rbp-80h]
	__int64 v152; // [rsp+50h] [rbp-78h] BYREF
	__int64 v153; // [rsp+58h] [rbp-70h]
	__int64 v154; // [rsp+60h] [rbp-68h]
	__int64(__fastcall * *v155)(); // [rsp+70h] [rbp-58h] BYREF
	int v156; // [rsp+78h] [rbp-50h]
	__int64 v157; // [rsp+80h] [rbp-48h]
	int v158; // [rsp+88h] [rbp-40h]
	int v159; // [rsp+D0h] [rbp+8h]
	int v160; // [rsp+E0h] [rbp+18h]
	int v161; // [rsp+E8h] [rbp+20h]

	v3 = *(_QWORD**)(a1 + 64);
	v4 = a3;
	v7 = a3;
	if (!v3 || a3 >= v3[12])
		return 0i64;
	if (a3)
	{
		if (a3 <= v3[13])
			v7 = a3 - 1;
	}
	else
	{
		v7 = v3[13];
	}
	v8 = *(_QWORD*)(v3[11] + 8 * v7);
	if (!v8)
		return 0i64;
	v9 = sub_14022D500(*(_DWORD*)(v8 + 104));
	if (v9)
	{
		if (*(_DWORD*)(v8 + 116) == 1)
			v11 = *(_DWORD*)(v9 + 20);
		else
			v11 = *(_DWORD*)(v9 + 16);
	}
	else
	{
		v11 = 249090;
	}
	v12 = sub_14034BDD0(v10, v11);
	v13 = sub_1401F31E0(*(_DWORD*)(v8 + 108));
	if (v13)
	{
		if (*(_DWORD*)(v8 + 116) == 1)
			v15 = *(_DWORD*)(v13 + 20);
		else
			v15 = *(_DWORD*)(v13 + 16);
	}
	else
	{
		v15 = 249089;
	}
	v16 = sub_14034BDD0(v14, v15);
	v17 = *(_QWORD*)(a2 + 32);
	v157 = a2;
	v18 = (unsigned __int16*)v16;
	v158 = 1;
	v155 = off_140B569F0;
	if (*(_QWORD*)(v17 + 120) >= *(_QWORD*)(v17 + 112))
		sub_14005E2C0(a2);
	v19 = *(_QWORD*)(a2 + 16);
	v20 = sub_14005C1B0(a2, 0, 0);
	*(_DWORD*)(v19 + 8) = 5;
	*(_QWORD*)v19 = v20;
	*(_QWORD*)(a2 + 16) += 16i64;
	v21 = sub_1400578C0(a2);
	v22 = *(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64);
	v156 = v21;
	v23 = sub_14005C3C0(v22, v21);
	v24 = *(_QWORD*)(a2 + 16);
	*(_QWORD*)v24 = *v23;
	*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v24, L"nMemberIdx", v4 + 1);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v27 = *v25;
	*(_DWORD*)(v27 + 8) = *((_DWORD*)v25 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v28, L"nOrder", v26 + 1);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v30 = *v29;
	*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v31, L"eRaceId", v32);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v34 = *v33;
	*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v35, L"eClassId", v36);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v37 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v38 = *v37;
	*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F0870(a2, v39, L"strCharacterName", (unsigned __int16*)(v8 + 32));
	*(_QWORD*)(a2 + 16) -= 16i64;
	v40 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v41 = *v40;
	*(_DWORD*)(v41 + 8) = *((_DWORD*)v40 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F0870(a2, v42, L"strRaceName", (unsigned __int16*)v12);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v43 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v44 = *v43;
	*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F0870(a2, v45, L"strClassName", v18);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v47 = *v46;
	*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v48, L"ePathType", v49);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v50 = *(_DWORD*)(v8 + 304);
	v51 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v52 = *v51;
	*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	v53 = (unsigned __int64*)sub_14018F0E0(&v152, L"bIsLeader")[1];
	v54 = -1;
	v55 = 0i64;
	if (v53)
	{
		v56 = -1i64;
		do
			++v56;
		while (*((_BYTE*)v53 + v56));
		sub_140058710(a2, v53, v56);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a2 + 16) + 8i64) = 0;
		*(_QWORD*)(a2 + 16) += 16i64;
	}
	if (v153)
		sub_14018B900(v153, 0);
	v57 = *(_DWORD**)(a2 + 16);
	v57[2] = 1;
	*v57 = v50 != 0;
	*(_QWORD*)(a2 + 16) += 16i64;
	v58 = (__int64*)sub_1400580E0(a2, -3);
	sub_14005EA50(a2, v58, (int*)(*(_QWORD*)(a2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
	*(_QWORD*)(a2 + 16) -= 48i64;
	v59 = (*(_DWORD*)(v8 + 8) & 8) == 0;
	v60 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v61 = *v60;
	*(_DWORD*)(v61 + 8) = *((_DWORD*)v60 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	v62 = (unsigned __int64*)sub_14018F0E0(&v152, L"bIsOnline")[1];
	if (v62)
	{
		v63 = -1i64;
		do
			++v63;
		while (*((_BYTE*)v62 + v63));
		sub_140058710(a2, v62, v63);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a2 + 16) + 8i64) = 0;
		*(_QWORD*)(a2 + 16) += 16i64;
	}
	if (v153)
		sub_14018B900(v153, 0);
	v64 = *(BOOL**)(a2 + 16);
	v64[2] = 1;
	*v64 = v59;
	*(_QWORD*)(a2 + 16) += 16i64;
	v65 = (__int64*)sub_1400580E0(a2, -3);
	sub_14005EA50(a2, v65, (int*)(*(_QWORD*)(a2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
	v66 = qword_140C65898;
	*(_QWORD*)(a2 + 16) -= 48i64;
	v67 = 0;
	v68 = sub_1403D9500(v66, (int*)(v8 + 16));
	v70 = (float*)sub_1403D90D0(v69, v68);
	v71 = v70;
	if (v70)
	{
		v159 = *((_DWORD*)v70 + 14);
		v160 = *((_DWORD*)v70 + 15);
		v161 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)v70 + 64i64))(v70);
		v144 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)v71 + 72i64))(v71);
		v147 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)v71 + 112i64))(v71);
		v146 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)v71 + 120i64))(v71);
		v72 = (int)v71[457];
		v149 = *((_DWORD*)v71 + 300);
		if (v72 != -1)
			v54 = v72 + (int)v71[805];
		v148 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)v71 + 136i64))(v71);
		v73 = (*(__int64(__fastcall**)(float*))(*(_QWORD*)v71 + 144i64))(v71);
		v74 = *(_QWORD*)(qword_140C65898 + 27728);
		v143 = v73;
		if (v74)
		{
			v75 = *(_QWORD*)(v74 + 120);
			v76 = 0i64;
			if (v75)
			{
				v77 = *(_QWORD*)(v74 + 112);
				v78 = (_DWORD*)(v77 + 4);
				while (*v78 != *((_DWORD*)v71 + 2))
				{
					++v76;
					v78 += 2;
					if (v76 >= v75)
						goto LABEL_45;
				}
				if (*(_DWORD*)(v77 + 8 * v76))
					v67 = *(_DWORD*)(v77 + 8 * v76);
			}
		}
	LABEL_45:
		v150 = (int)v71[134];
		v151 = (int)v71[379];
		v79 = *((_DWORD*)v71 + 20);
		v80 = (int)v71[815];
	}
	else
	{
		v54 = *(_DWORD*)(v8 + 180);
		v80 = *(_DWORD*)(v8 + 248);
		v159 = *(_DWORD*)(v8 + 120);
		v160 = *(_DWORD*)(v8 + 124);
		v161 = *(_DWORD*)(v8 + 160);
		v144 = *(_DWORD*)(v8 + 164);
		v147 = *(_DWORD*)(v8 + 168);
		v146 = *(_DWORD*)(v8 + 172);
		v149 = *(_DWORD*)(v8 + 176);
		v148 = *(_DWORD*)(v8 + 184);
		v143 = *(_DWORD*)(v8 + 188);
		v150 = (int)*(float*)(v8 + 192);
		v151 = (int)*(float*)(v8 + 196);
		v79 = *(_DWORD*)(v8 + 244);
	}
	v145 = v79;
	v81 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	v82 = *(_QWORD*)(a2 + 16);
	*(_QWORD*)v82 = *v81;
	*(_DWORD*)(v82 + 8) = *((_DWORD*)v81 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v82, L"nLevel", v159);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v83 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v84 = *v83;
	*(_DWORD*)(v84 + 8) = *((_DWORD*)v83 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v85, L"nEffectiveLevel", v160);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v86 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v87 = *v86;
	*(_DWORD*)(v87 + 8) = *((_DWORD*)v86 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v88, L"nHealth", v161);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v89 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v90 = *v89;
	*(_DWORD*)(v90 + 8) = *((_DWORD*)v89 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v91, L"nHealthMax", v144);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v92 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v93 = *v92;
	*(_DWORD*)(v93 + 8) = *((_DWORD*)v92 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v94, L"nShield", v147);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v95 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v96 = *v95;
	*(_DWORD*)(v96 + 8) = *((_DWORD*)v95 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v97, L"nShieldMax", v146);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v98 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v99 = *v98;
	*(_DWORD*)(v99 + 8) = *((_DWORD*)v98 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v100, L"nInterruptArmor", v149);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v101 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v102 = *v101;
	*(_DWORD*)(v102 + 8) = *((_DWORD*)v101 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v103, L"nInterruptArmorMax", v54);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v104 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v105 = *v104;
	*(_DWORD*)(v105 + 8) = *((_DWORD*)v104 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v106, L"nAbsorption", v148);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v107 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v108 = *v107;
	*(_DWORD*)(v108 + 8) = *((_DWORD*)v107 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v109, L"nAbsorptionMax", v143);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v110 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v111 = *v110;
	*(_DWORD*)(v111 + 8) = *((_DWORD*)v110 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v112, L"nMana", v150);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v113 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v114 = *v113;
	*(_DWORD*)(v114 + 8) = *((_DWORD*)v113 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v115, L"nManaMax", v151);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v116 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v117 = *v116;
	*(_DWORD*)(v117 + 8) = *((_DWORD*)v116 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v118, L"nMarkerId", v67);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v119 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v120 = *v119;
	*(_DWORD*)(v120 + 8) = *((_DWORD*)v119 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v121, L"nHealingAbsorb", v145);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v122 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v123 = *v122;
	*(_DWORD*)(v123 + 8) = *((_DWORD*)v122 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v124, L"nHealingAbsorbMax", v80);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v125 = *(_QWORD*)(a2 + 16);
	if (*(_DWORD*)(v8 + 272) && *(_QWORD*)(v8 + 280))
		sub_140605420(a1, (int*)(v8 + 272));
	v126 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v125 = *v126;
	*(_DWORD*)(v125 + 8) = *((_DWORD*)v126 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F06F0(a2, v127, L"nMenteeIdx", v128);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v129 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v131 = *v129;
	*(_DWORD*)(v131 + 8) = *((_DWORD*)v129 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F0630(a2, v132, L"bIsMentoring", v130);
	*(_QWORD*)(a2 + 16) -= 16i64;
	v133 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	*(_QWORD*)v134 = *v133;
	*(_DWORD*)(v134 + 8) = *((_DWORD*)v133 + 2);
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F0630(a2, v136, L"bIsMentored", v135 != 0);
	*(_QWORD*)(a2 + 16) -= 16i64;
	sub_1400FA0F0((__int64)&v152, a2, 1);
	if (*(_QWORD*)(v8 + 296))
	{
		v137 = 0i64;
		do
		{
			sub_140605420(a1, (int*)(v137 + *(_QWORD*)(v8 + 288)));
			sub_1400FA9E0((__int64)&v152);
			++v55;
			v137 += 16i64;
		} while (v55 < *(_QWORD*)(v8 + 296));
	}
	v138 = v153;
	sub_1400FB2A0((__int64)&v155, (__int64)L"tMentoredBy", v153);
	sub_1400FAFE0((__int64)&v155, *(unsigned int*)(v8 + 8), (__int64)&off_140C39100, 0xFui64);
	v139 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v21);
	v140 = *(_QWORD*)(a2 + 16);
	*(_QWORD*)v140 = *v139;
	*(_DWORD*)(v140 + 8) = *((_DWORD*)v139 + 2);
	v141 = v154;
	*(_QWORD*)(a2 + 16) += 16i64;
	if (v141)
		sub_1400579E0(v141, v140, v138);
	sub_1400579E0(a2, v140, v21);
	return 1i64;
}
// 140605568: variable 'v10' is possibly undefined
// 140605592: variable 'v14' is possibly undefined
// 140605666: variable 'v27' is possibly undefined
// 140605678: variable 'v28' is possibly undefined
// 140605658: variable 'v26' is possibly undefined
// 1406056AA: variable 'v30' is possibly undefined
// 1406056BC: variable 'v31' is possibly undefined
// 1406056BC: variable 'v32' is possibly undefined
// 1406056EE: variable 'v34' is possibly undefined
// 140605700: variable 'v35' is possibly undefined
// 140605700: variable 'v36' is possibly undefined
// 140605724: variable 'v38' is possibly undefined
// 140605741: variable 'v39' is possibly undefined
// 14060576F: variable 'v41' is possibly undefined
// 140605781: variable 'v42' is possibly undefined
// 1406057AF: variable 'v44' is possibly undefined
// 1406057C1: variable 'v45' is possibly undefined
// 1406057F3: variable 'v47' is possibly undefined
// 140605805: variable 'v48' is possibly undefined
// 140605805: variable 'v49' is possibly undefined
// 140605836: variable 'v52' is possibly undefined
// 140605900: variable 'v61' is possibly undefined
// 1406059AC: variable 'v69' is possibly undefined
// 140605BBB: variable 'v84' is possibly undefined
// 140605BCD: variable 'v85' is possibly undefined
// 140605C00: variable 'v87' is possibly undefined
// 140605C12: variable 'v88' is possibly undefined
// 140605C42: variable 'v90' is possibly undefined
// 140605C54: variable 'v91' is possibly undefined
// 140605C84: variable 'v93' is possibly undefined
// 140605C96: variable 'v94' is possibly undefined
// 140605CC6: variable 'v96' is possibly undefined
// 140605CD8: variable 'v97' is possibly undefined
// 140605D08: variable 'v99' is possibly undefined
// 140605D1A: variable 'v100' is possibly undefined
// 140605D48: variable 'v102' is possibly undefined
// 140605D5A: variable 'v103' is possibly undefined
// 140605D8A: variable 'v105' is possibly undefined
// 140605D9C: variable 'v106' is possibly undefined
// 140605DCC: variable 'v108' is possibly undefined
// 140605DDE: variable 'v109' is possibly undefined
// 140605E07: variable 'v111' is possibly undefined
// 140605E20: variable 'v112' is possibly undefined
// 140605E50: variable 'v114' is possibly undefined
// 140605E62: variable 'v115' is possibly undefined
// 140605E90: variable 'v117' is possibly undefined
// 140605EA2: variable 'v118' is possibly undefined
// 140605ED2: variable 'v120' is possibly undefined
// 140605EE4: variable 'v121' is possibly undefined
// 140605F12: variable 'v123' is possibly undefined
// 140605F24: variable 'v124' is possibly undefined
// 140605F95: variable 'v127' is possibly undefined
// 140605F95: variable 'v128' is possibly undefined
// 140605FE6: variable 'v131' is possibly undefined
// 140605FF8: variable 'v132' is possibly undefined
// 140605FDF: variable 'v130' is possibly undefined
// 14060602D: variable 'v134' is possibly undefined
// 140606046: variable 'v136' is possibly undefined
// 140606042: variable 'v135' is possibly undefined
// 140606111: variable 'v140' is possibly undefined
// 140B24A90: using guessed type wchar_t aEclassid_0[9];
// 140B24AA8: using guessed type wchar_t aStrcharacterna_5[17];
// 140B24AD0: using guessed type wchar_t aNorder_0[7];
// 140B24AE0: using guessed type wchar_t aEraceid_0[8];
// 140B24B10: using guessed type wchar_t aNmemberidx[11];
// 140B24BE8: using guessed type wchar_t aNabsorptionmax[15];
// 140B24C08: using guessed type wchar_t aNmana[6];
// 140B24C18: using guessed type wchar_t aNinterruptarmo_0[19];
// 140B24C40: using guessed type wchar_t aNabsorption[12];
// 140B24C58: using guessed type wchar_t aNshieldmax[11];
// 140B24C70: using guessed type wchar_t aNinterruptarmo[16];
// 140B24C90: using guessed type wchar_t aNhealthmax[11];
// 140B24CA8: using guessed type wchar_t aNshield[8];
// 140B24CB8: using guessed type wchar_t aNeffectiveleve[16];
// 140B24CD8: using guessed type wchar_t aNhealth[8];
// 140B24CE8: using guessed type wchar_t aBisonline[10];
// 140B24D00: using guessed type wchar_t aNlevel_10[7];
// 140B24D10: using guessed type wchar_t aEpathtype_0[10];
// 140B24D28: using guessed type wchar_t aBisleader[10];
// 140B24D40: using guessed type wchar_t aStrracename[12];
// 140B24D58: using guessed type wchar_t aStrclassname[13];
// 140B24E40: using guessed type wchar_t aBismentored[12];
// 140B24E58: using guessed type wchar_t aTmentoredby[12];
// 140B24E70: using guessed type wchar_t aNmenteeidx[11];
// 140B24E88: using guessed type wchar_t aBismentoring[13];
// 140B24EA8: using guessed type wchar_t aNhealingabsorb[15];
// 140B24EC8: using guessed type wchar_t aNhealingabsorb_0[18];
// 140B24EF0: using guessed type wchar_t aNmanamax[9];
// 140B24F08: using guessed type wchar_t aNmarkerid[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C39100: using guessed type void *off_140C39100;
// 140C65898: using guessed type __int64 qword_140C65898;

