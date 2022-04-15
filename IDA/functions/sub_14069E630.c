//----- (000000014069E630) ----------------------------------------------------
__int64 __fastcall sub_14069E630(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	unsigned __int64 v4; // rdx
	__int64 v5; // rcx
	_QWORD* v6; // rax
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // eax
	__int64 v12; // rcx
	int v13; // esi
	_QWORD* v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rdx
	unsigned __int16* v17; // r11
	double v18; // xmm6_8
	_QWORD* v19; // rax
	__int64 v20; // r11
	unsigned __int64* v21; // rdx
	unsigned __int64 v22; // rbx
	unsigned __int64 v23; // r8
	__int64 v24; // rax
	__int64* v25; // rax
	int v26; // r14d
	_QWORD* v27; // rax
	__int64 v28; // r11
	unsigned __int64* v29; // rdx
	_DWORD* v30; // rcx
	__int64* v31; // rax
	int v32; // ebx
	_QWORD* v33; // rax
	__int64 v34; // r11
	__int64 v35; // rdx
	__int64 v36; // rbx
	__int64 v37; // rax
	int v38; // r12d
	_QWORD* v39; // rax
	__int64 v40; // rcx
	__int64 v41; // rdx
	int v42; // r11d
	_QWORD* v43; // rax
	__int64 v44; // r11
	__int64 v45; // rdx
	_QWORD* v46; // rax
	__int64 v47; // r11
	__int64 v48; // rdx
	_QWORD* v49; // rax
	__int64 v50; // r11
	__int64 v51; // rdx
	_QWORD* v52; // rax
	__int64 v53; // r11
	__int64 v54; // rdx
	_QWORD* v55; // rax
	__int64 v56; // r11
	__int64 v57; // rdx
	_QWORD* v58; // rax
	__int64 v59; // r11
	__int64 v60; // rdx
	_QWORD* v61; // rax
	__int64 v62; // r11
	__int64 v63; // rdx
	_QWORD* v64; // rax
	__int64 v65; // r11
	__int64 v66; // rdx
	_QWORD* v67; // rax
	__int64 v68; // r11
	__int64 v69; // rdx
	_QWORD* v70; // rax
	__int64 v71; // r11
	__int64 v72; // rdx
	_QWORD* v73; // rax
	__int64 v74; // r11
	__int64 v75; // rdx
	__int64 v76; // rcx
	unsigned __int64 v77; // rax
	__int64 v78; // r15
	__int64 v79; // rbx
	__int64 v80; // rax
	int v81; // r14d
	__int64 v82; // rbx
	__int64 v83; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v86; // rax
	__int64 v87; // rdx
	__int64 v88; // rdx
	__int64 v90; // [rsp+20h] [rbp-99h]
	__int64(__fastcall * *v91)(); // [rsp+28h] [rbp-91h] BYREF
	__int64 v92; // [rsp+30h] [rbp-89h]
	_QWORD* v93; // [rsp+38h] [rbp-81h]
	int v94; // [rsp+40h] [rbp-79h]
	__int64(__fastcall * *v95)(); // [rsp+48h] [rbp-71h] BYREF
	int v96; // [rsp+50h] [rbp-69h]
	_QWORD* v97; // [rsp+58h] [rbp-61h]
	int v98; // [rsp+60h] [rbp-59h]
	__int64 v99; // [rsp+70h] [rbp-49h] BYREF
	__int64 v100; // [rsp+78h] [rbp-41h]
	char v101[8]; // [rsp+88h] [rbp-31h] BYREF
	__int64 v102; // [rsp+90h] [rbp-29h]
	__int64 v103; // [rsp+98h] [rbp-21h]
	__int64 v104; // [rsp+A8h] [rbp-11h]
	float v105; // [rsp+B0h] [rbp-9h]
	int v106; // [rsp+B4h] [rbp-5h]
	int v107; // [rsp+B8h] [rbp-1h]
	unsigned __int8 v108; // [rsp+BDh] [rbp+4h]
	unsigned __int8 v109; // [rsp+BEh] [rbp+5h]
	unsigned __int8 v110; // [rsp+BFh] [rbp+6h]
	unsigned __int8 v111; // [rsp+C0h] [rbp+7h]
	unsigned __int8 v112; // [rsp+C1h] [rbp+8h]
	unsigned __int8 v113; // [rsp+C2h] [rbp+9h]
	unsigned __int8 v114; // [rsp+C3h] [rbp+Ah]
	unsigned __int8 v115; // [rsp+C4h] [rbp+Bh]
	unsigned __int8 v116; // [rsp+C5h] [rbp+Ch]
	unsigned __int8 v117; // [rsp+C6h] [rbp+Dh]
	unsigned __int8 v118; // [rsp+C7h] [rbp+Eh]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
		v4 = *(_QWORD*)(v3 + 8);
	else
		v4 = 0i64;
	v5 = qword_140C7DE58;
	v6 = *(_QWORD**)(qword_140C7DE58 + 8);
	if (!v6)
		goto LABEL_12;
	do
	{
		if (v6[4] < v4)
		{
			v6 = (_QWORD*)v6[3];
		}
		else
		{
			v5 = (__int64)v6;
			v6 = (_QWORD*)v6[2];
		}
	} while (v6);
	if (v5 == qword_140C7DE58 || (v90 = v5, v4 < *(_QWORD*)(v5 + 32)))
		LABEL_12:
	v90 = qword_140C7DE58;
	if (v90 == qword_140C7DE58 || !*(_QWORD*)(v90 + 96))
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	else
	{
		sub_14058FA40((__int64)&v99, v90 + 40);
		v7 = a1[4];
		v8 = *(_QWORD*)(v7 + 112);
		v97 = a1;
		v95 = off_140B569F0;
		v98 = 1;
		if (*(_QWORD*)(v7 + 120) >= v8)
			sub_14005E2C0((__int64)a1);
		v9 = a1[2];
		v10 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v9 + 8) = 5;
		*(_QWORD*)v9 = v10;
		a1[2] += 16i64;
		v11 = sub_1400578C0((__int64)a1);
		v12 = *(_QWORD*)(a1[4] + 160i64);
		v13 = v11;
		v96 = v11;
		v14 = sub_14005C3C0(v12, v11);
		v15 = a1[2];
		*(_QWORD*)v15 = *v14;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v16, L"strGuildDescription", v17);
		a1[2] -= 16i64;
		v18 = v105;
		v19 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		*(_QWORD*)v20 = *v19;
		*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
		a1[2] += 16i64;
		v21 = (unsigned __int64*)sub_14018F0E0(&v91, L"nGuildCreationDate")[1];
		v22 = -1i64;
		if (v21)
		{
			v23 = -1i64;
			do
				++v23;
			while (*((_BYTE*)v21 + v23));
			sub_140058710((__int64)a1, v21, v23);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v92)
			sub_14018B900(v92, 0);
		v24 = a1[2];
		*(_DWORD*)(v24 + 8) = 3;
		*(double*)v24 = v18;
		a1[2] += 16i64;
		v25 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v25, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v26 = v106;
		v27 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		*(_QWORD*)v28 = *v27;
		*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
		a1[2] += 16i64;
		v29 = (unsigned __int64*)sub_14018F0E0(&v91, L"bTax")[1];
		if (v29)
		{
			do
				++v22;
			while (*((_BYTE*)v29 + v22));
			sub_140058710((__int64)a1, v29, v22);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v92)
			sub_14018B900(v92, 0);
		v30 = (_DWORD*)a1[2];
		v30[2] = 1;
		*v30 = v26 != 0;
		a1[2] += 16i64;
		v31 = (__int64*)sub_1400580E0((__int64)a1, -3);
		sub_14005EA50((__int64)a1, v31, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		a1[2] -= 48i64;
		v32 = v107;
		v33 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		*(_QWORD*)v34 = *v33;
		*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v35, L"nRecruitmentMinLevel", v32);
		a1[2] -= 16i64;
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v36 = a1[2];
		v37 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v36 + 8) = 5;
		*(_QWORD*)v36 = v37;
		a1[2] += 16i64;
		v38 = sub_1400578C0((__int64)a1);
		v39 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v38);
		v40 = a1[2];
		*(_QWORD*)v40 = *v39;
		*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v41, L"eWarriorAssault", v42);
		a1[2] -= 16i64;
		LODWORD(v36) = v108;
		v43 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v38);
		*(_QWORD*)v44 = *v43;
		*(_DWORD*)(v44 + 8) = *((_DWORD*)v43 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v45, L"eWarriorSupport", v36);
		a1[2] -= 16i64;
		LODWORD(v36) = v109;
		v46 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v38);
		*(_QWORD*)v47 = *v46;
		*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v48, L"eEngineerAssault", v36);
		a1[2] -= 16i64;
		LODWORD(v36) = v110;
		v49 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v38);
		*(_QWORD*)v50 = *v49;
		*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v51, L"eEngineerSupport", v36);
		a1[2] -= 16i64;
		LODWORD(v36) = v111;
		v52 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v38);
		*(_QWORD*)v53 = *v52;
		*(_DWORD*)(v53 + 8) = *((_DWORD*)v52 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v54, L"eEsperAssault", v36);
		a1[2] -= 16i64;
		LODWORD(v36) = v112;
		v55 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v38);
		*(_QWORD*)v56 = *v55;
		*(_DWORD*)(v56 + 8) = *((_DWORD*)v55 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v57, L"eEsperSupport", v36);
		a1[2] -= 16i64;
		LODWORD(v36) = v113;
		v58 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v38);
		*(_QWORD*)v59 = *v58;
		*(_DWORD*)(v59 + 8) = *((_DWORD*)v58 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v60, L"eMedicAssault", v36);
		a1[2] -= 16i64;
		LODWORD(v36) = v114;
		v61 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v38);
		*(_QWORD*)v62 = *v61;
		*(_DWORD*)(v62 + 8) = *((_DWORD*)v61 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v63, L"eMedicSupport", v36);
		a1[2] -= 16i64;
		LODWORD(v36) = v115;
		v64 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v38);
		*(_QWORD*)v65 = *v64;
		*(_DWORD*)(v65 + 8) = *((_DWORD*)v64 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v66, L"eStalkerAssault", v36);
		a1[2] -= 16i64;
		LODWORD(v36) = v116;
		v67 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v38);
		*(_QWORD*)v68 = *v67;
		*(_DWORD*)(v68 + 8) = *((_DWORD*)v67 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v69, L"eStalkerSupport", v36);
		a1[2] -= 16i64;
		LODWORD(v36) = v117;
		v70 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v38);
		*(_QWORD*)v71 = *v70;
		*(_DWORD*)(v71 + 8) = *((_DWORD*)v70 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v72, L"eSpellslingerAssault", v36);
		a1[2] -= 16i64;
		LODWORD(v36) = v118;
		v73 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v38);
		*(_QWORD*)v74 = *v73;
		*(_DWORD*)(v74 + 8) = *((_DWORD*)v73 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v75, L"eSpellslingerSupport", v36);
		a1[2] -= 16i64;
		sub_1400FB2A0((__int64)&v95, (__int64)L"tRecruitmentDemands", v38);
		v76 = a1[4];
		v91 = off_140B569F0;
		v77 = *(_QWORD*)(v76 + 112);
		v78 = (__int64)a1;
		v93 = a1;
		v94 = 1;
		if (*(_QWORD*)(v76 + 120) >= v77)
			sub_14005E2C0((__int64)a1);
		v79 = a1[2];
		v80 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v79 + 8) = 5;
		*(_QWORD*)v79 = v80;
		a1[2] += 16i64;
		v81 = sub_1400578C0((__int64)a1);
		LODWORD(v92) = v81;
		v82 = *(_QWORD*)(v102 + 16);
		if (v82 != v102)
		{
			do
			{
				sub_1400FAD30((__int64)&v91);
				v83 = *(_QWORD*)(v82 + 24);
				if (v83)
				{
					v82 = *(_QWORD*)(v82 + 24);
					for (i = *(_QWORD*)(v83 + 16); i; i = *(_QWORD*)(i + 16))
						v82 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v82 + 8); v82 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v82 = j;
					if (*(_QWORD*)(v82 + 24) != j)
						v82 = j;
				}
			} while (v82 != v102);
			v78 = (__int64)v93;
			v81 = v92;
		}
		sub_1400FB2A0((__int64)&v95, (__int64)L"arRecruiters", v81);
		v86 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		v87 = a1[2];
		*(_QWORD*)v87 = *v86;
		*(_DWORD*)(v87 + 8) = *((_DWORD*)v86 + 2);
		a1[2] += 16i64;
		if (v78)
			sub_1400579E0(v78, v87, v81);
		sub_1400579E0((__int64)a1, v87, v38);
		sub_1400579E0((__int64)a1, v88, v13);
		if (v104)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v104 - 16) + 8i64))(v104 - 16);
		if (v103)
		{
			sub_140590310((__int64)v101, *(_QWORD**)(v102 + 8));
			*(_QWORD*)(v102 + 16) = v102;
			*(_QWORD*)(v102 + 8) = 0i64;
			*(_QWORD*)(v102 + 24) = v102;
			v103 = 0i64;
		}
		sub_14018B900(v102, 0);
		if (v100)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v100 - 16) + 8i64))(v100 - 16);
		if (v99)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v99 - 16) + 8i64))(v99 - 16);
	}
	return 1i64;
}
// 14069E7AA: variable 'v16' is possibly undefined
// 14069E7AA: variable 'v17' is possibly undefined
// 14069E7E4: variable 'v20' is possibly undefined
// 14069E8AB: variable 'v28' is possibly undefined
// 14069E975: variable 'v34' is possibly undefined
// 14069E985: variable 'v35' is possibly undefined
// 14069EA0D: variable 'v41' is possibly undefined
// 14069EA0D: variable 'v42' is possibly undefined
// 14069EA45: variable 'v44' is possibly undefined
// 14069EA55: variable 'v45' is possibly undefined
// 14069EA8D: variable 'v47' is possibly undefined
// 14069EA9D: variable 'v48' is possibly undefined
// 14069EAD5: variable 'v50' is possibly undefined
// 14069EAE5: variable 'v51' is possibly undefined
// 14069EB1D: variable 'v53' is possibly undefined
// 14069EB2D: variable 'v54' is possibly undefined
// 14069EB65: variable 'v56' is possibly undefined
// 14069EB75: variable 'v57' is possibly undefined
// 14069EBAD: variable 'v59' is possibly undefined
// 14069EBBD: variable 'v60' is possibly undefined
// 14069EBF5: variable 'v62' is possibly undefined
// 14069EC05: variable 'v63' is possibly undefined
// 14069EC3D: variable 'v65' is possibly undefined
// 14069EC4D: variable 'v66' is possibly undefined
// 14069EC85: variable 'v68' is possibly undefined
// 14069EC95: variable 'v69' is possibly undefined
// 14069ECCD: variable 'v71' is possibly undefined
// 14069ECDD: variable 'v72' is possibly undefined
// 14069ED15: variable 'v74' is possibly undefined
// 14069ED25: variable 'v75' is possibly undefined
// 14069EE71: variable 'v87' is possibly undefined
// 14069EE7C: variable 'v88' is possibly undefined
// 140B34D98: using guessed type wchar_t aEengineerassau_0[17];
// 140B34DC0: using guessed type wchar_t aEengineersuppo_0[17];
// 140B34DE8: using guessed type wchar_t aEwarriorassaul_0[16];
// 140B34E08: using guessed type wchar_t aEwarriorsuppor_0[16];
// 140B34E28: using guessed type wchar_t aBtax[5];
// 140B34E38: using guessed type wchar_t aNrecruitmentmi[21];
// 140B34E68: using guessed type wchar_t aStrguilddescri[20];
// 140B34E90: using guessed type wchar_t aNguildcreation[19];
// 140B34F38: using guessed type wchar_t aTrecruitmentde[20];
// 140B34F60: using guessed type wchar_t aArrecruiters[13];
// 140B34F80: using guessed type wchar_t aEspellslingera_0[21];
// 140B34FB0: using guessed type wchar_t aEspellslingers_0[21];
// 140B34FE0: using guessed type wchar_t aEstalkerassaul_0[16];
// 140B35000: using guessed type wchar_t aEstalkersuppor_0[16];
// 140B35020: using guessed type wchar_t aEmedicassault_0[14];
// 140B35040: using guessed type wchar_t aEmedicsupport_0[14];
// 140B35060: using guessed type wchar_t aEesperassault_0[14];
// 140B35080: using guessed type wchar_t aEespersupport_0[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C7DE58: using guessed type __int64 qword_140C7DE58;
// 14069E630: using guessed type char var_88[8];

