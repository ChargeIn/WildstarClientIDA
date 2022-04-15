//----- (00000001403BC9A0) ----------------------------------------------------
__int64 __fastcall sub_1403BC9A0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v12; // r9
	unsigned __int8 v13; // dl
	unsigned int v14; // r14d
	__int64 v15; // rax
	__int64 v16; // rsi
	__int64 v17; // rbx
	__int64 v18; // rdi
	int v19; // r12d
	_QWORD* v20; // rax
	__int64 v21; // rdx
	__int64 v22; // rcx
	_QWORD* v23; // rax
	__int64 v24; // rdx
	unsigned __int16* v25; // r10
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rdx
	int v29; // r11d
	_QWORD* v30; // rax
	__int64 v31; // r11
	__int64 v32; // rdx
	int v33; // r10d
	_QWORD* v34; // rax
	__int64 v35; // r11
	__int64 v36; // rdx
	int v37; // r10d
	__int64 v38; // rdx
	__int64 v39; // rax
	__int64 v40; // rcx
	_QWORD* v41; // rax
	__int64 v42; // r11
	__int64 v43; // rdx
	int v44; // r10d
	__int64 v45; // rcx
	int v46; // eax
	__int64 v47; // rcx
	unsigned __int64 v48; // r14
	int* v49; // rdx
	__int64 v50; // rax
	_QWORD* v51; // rax
	__int64 v52; // rdx
	unsigned __int16* v53; // r10
	__int64 v54; // rcx
	int* v55; // rdx
	__int64 v56; // rax
	_QWORD* v57; // rdi
	__int64 v58; // r8
	unsigned int v59; // esi
	__int64 v60; // rax
	__int64 v61; // rbx
	int v62; // r12d
	_QWORD* v63; // rbx
	_QWORD* v64; // rax
	__int64 v65; // rdx
	unsigned __int16* v66; // r10
	_QWORD* v67; // rax
	__int64 v68; // r10
	__int64 v69; // rdx
	_QWORD* v70; // rax
	__int64 v71; // r10
	__int64 v72; // rdx
	_QWORD* v73; // rax
	__int64 v74; // r10
	__int64 v75; // rdx
	_QWORD* v76; // rax
	__int64 v77; // r11
	__int64 v78; // rdx
	int v79; // r10d
	_QWORD* v80; // rax
	__int64 v81; // r11
	__int64 v82; // rdx
	int v83; // r10d
	_QWORD* v84; // rax
	__int64 v85; // r8
	__int64 v86; // rdx
	int v87; // r10d
	__int64 v88; // rcx
	int v89; // eax
	__int64 v90; // rcx
	int v91; // esi
	_QWORD* v92; // rax
	__int64 v93; // r11
	__int64 v94; // rdx
	int v95; // r10d
	int* v96; // rdx
	__int64 v97; // rax
	__int64 v98; // rdx
	int v99; // ebx
	_QWORD* v100; // rax
	__int64 v101; // rdx
	__int64 v102; // rcx
	__int64 v103; // rdx
	__int64 v104; // [rsp+28h] [rbp-D8h]
	__int64 v105[2]; // [rsp+30h] [rbp-D0h] BYREF
	char v106[8]; // [rsp+40h] [rbp-C0h] BYREF
	int v107; // [rsp+48h] [rbp-B8h]
	_QWORD* v108; // [rsp+50h] [rbp-B0h]
	__int64 v109; // [rsp+60h] [rbp-A0h]
	char v110[8]; // [rsp+68h] [rbp-98h] BYREF
	int v111; // [rsp+70h] [rbp-90h]
	__int64 v112; // [rsp+78h] [rbp-88h]
	char v113[8]; // [rsp+88h] [rbp-78h] BYREF
	int v114; // [rsp+90h] [rbp-70h]
	__int64 v115; // [rsp+98h] [rbp-68h]
	__int64 v116; // [rsp+B0h] [rbp-50h] BYREF
	char v117[8]; // [rsp+B8h] [rbp-48h] BYREF
	_WORD* v118; // [rsp+C0h] [rbp-40h]
	_WORD* v119; // [rsp+C8h] [rbp-38h]
	__int64 v120; // [rsp+170h] [rbp+70h]

	if ((unsigned int)(a4 - 3) > 2 && a4 != 10)
		return sub_1403BBB90();
	v9 = *(_QWORD*)(a1 + 2728);
	v10 = v9;
	v11 = *(_QWORD*)(v9 + 8);
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < a3)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v10 = v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v10 == v9 || (v104 = v10, a3 < *(_DWORD*)(v10 + 32)))
		v104 = v9;
	if (v104 == v9)
		return 0i64;
	v12 = *(_QWORD*)(v104 + 40);
	v13 = *(_BYTE*)(a1 + 28140);
	if (v13 > (unsigned __int8)(*(_BYTE*)(v12 + 8) - 1))
		v13 = *(_BYTE*)(v12 + 8) - 1;
	v14 = sub_1407A1440(v13, a3, 1u);
	v15 = sub_1403ACD90(qword_140C65B70, v14, *(_QWORD*)(a1 + 120));
	v16 = v15;
	v109 = v15;
	if (!v15 || a4 && !(unsigned int)sub_1403B5000(v15, a4))
		return 0i64;
	v17 = sub_1407A1500(qword_140C65B70, a3);
	if (!v17)
		return 0i64;
	sub_1400FA0F0((__int64)v110, a2, 1);
	v18 = v112;
	v19 = v111;
	v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v112 + 32) + 160i64), v111);
	v21 = *(_QWORD*)(v18 + 16);
	*(_QWORD*)v21 = *v20;
	*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
	*(_QWORD*)(v18 + 16) += 16i64;
	sub_1400F06F0(v18, v21, L"nId", a3);
	*(_QWORD*)(v18 + 16) -= 16i64;
	sub_14034BDD0(v22, *(_DWORD*)(*(_QWORD*)(v16 + 8) + 16i64));
	v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v18 + 32) + 160i64), v19);
	v24 = *(_QWORD*)(v18 + 16);
	*(_QWORD*)v24 = *v23;
	*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
	*(_QWORD*)(v18 + 16) += 16i64;
	sub_1400F0870(v18, v24, L"strName", v25);
	*(_QWORD*)(v18 + 16) -= 16i64;
	v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v18 + 32) + 160i64), v19);
	*(_QWORD*)v27 = *v26;
	*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
	*(_QWORD*)(v18 + 16) += 16i64;
	sub_1400F06F0(v18, v28, L"nMaxTiers", v29);
	*(_QWORD*)(v18 + 16) -= 16i64;
	v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v18 + 32) + 160i64), v19);
	*(_QWORD*)v31 = *v30;
	*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
	*(_QWORD*)(v18 + 16) += 16i64;
	sub_1400F0630(v18, v32, L"bIsActive", v33);
	*(_QWORD*)(v18 + 16) -= 16i64;
	v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v18 + 32) + 160i64), v19);
	*(_QWORD*)v35 = *v34;
	*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
	*(_QWORD*)(v18 + 16) += 16i64;
	sub_1400F0630(v18, v36, L"bCanUseOnSecondaryBars", v37);
	*(_QWORD*)(v18 + 16) -= 16i64;
	v38 = *(_QWORD*)(a1 + 5216);
	v39 = *(_QWORD*)(v38 + 8);
	v40 = v38;
	while (v39)
	{
		if (*(_DWORD*)(v39 + 32) < a3)
		{
			v39 = *(_QWORD*)(v39 + 24);
		}
		else
		{
			v40 = v39;
			v39 = *(_QWORD*)(v39 + 16);
		}
	}
	if (v40 == v38 || (v105[0] = v40, a3 < *(_DWORD*)(v40 + 32)))
		v105[0] = v38;
	v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v18 + 32) + 160i64), v19);
	*(_QWORD*)v42 = *v41;
	*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
	*(_QWORD*)(v18 + 16) += 16i64;
	sub_1400F06F0(v18, v43, L"nCurrentTier", v44);
	*(_QWORD*)(v18 + 16) -= 16i64;
	sub_1404DDE90(&v116);
	v46 = sub_140564760(v45, v14);
	v48 = 0i64;
	v49 = (int*)sub_14034BDD0(v47, v46);
	if (v49)
	{
		v50 = 0i64;
		if (*(_WORD*)v49)
		{
			do
				++v50;
			while (*((_WORD*)v49 + v50));
		}
		sub_14001C480((__int64)v117, v49, (int*)((char*)v49 + 2 * v50));
	}
	else if (v118 != v119)
	{
		*v118 = 0;
		v119 = v118;
	}
	sub_1400B7660(&v116);
	v51 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v18 + 32) + 160i64), v19);
	v52 = *(_QWORD*)(v18 + 16);
	*(_QWORD*)v52 = *v51;
	*(_DWORD*)(v52 + 8) = *((_DWORD*)v51 + 2);
	*(_QWORD*)(v18 + 16) += 16i64;
	sub_1400F0870(v18, v52, L"strAbilityDescription", v53);
	*(_QWORD*)(v18 + 16) -= 16i64;
	v55 = (int*)sub_14034BDD0(v54, *(_DWORD*)(*(_QWORD*)(v16 + 8) + 56i64));
	if (v55)
	{
		v56 = 0i64;
		if (*(_WORD*)v55)
		{
			do
				++v56;
			while (*((_WORD*)v55 + v56));
		}
		sub_14001C480((__int64)v117, v55, (int*)((char*)v55 + 2 * v56));
	}
	else if (v118 != v119)
	{
		*v118 = 0;
		v119 = v118;
	}
	sub_1400B7660(&v116);
	sub_1400FACC0((__int64)v110, L"strAbilityPerTierPointDescription");
	sub_1400FA0F0((__int64)v113, a2, 1);
	if (*(_QWORD*)(v17 + 8))
	{
		v57 = (_QWORD*)v17;
		do
		{
			v58 = *(_QWORD*)(a1 + 120);
			v59 = *(_DWORD*)(*v57 + 4 * v48);
			LODWORD(v105[0]) = v59;
			v60 = sub_1403ACD90(qword_140C65B70, v59, v58);
			v61 = v60;
			v105[1] = v60;
			if (v60)
			{
				v62 = *(unsigned __int8*)(*(_QWORD*)(v60 + 112) + 8i64);
				sub_1400FA0F0((__int64)v106, a2, 1);
				sub_14034BDD0(*(_QWORD*)(v61 + 8), *(_DWORD*)(*(_QWORD*)(v61 + 8) + 16i64));
				v63 = v108;
				v64 = sub_14005C3C0(*(_QWORD*)(v108[4] + 160i64), v107);
				v65 = v63[2];
				*(_QWORD*)v65 = *v64;
				*(_DWORD*)(v65 + 8) = *((_DWORD*)v64 + 2);
				v63[2] += 16i64;
				sub_1400F0870((__int64)v63, v65, L"strName", v66);
				v63[2] -= 16i64;
				v67 = sub_14005C3C0(*(_QWORD*)(v63[4] + 160i64), v107);
				*(_QWORD*)v68 = *v67;
				*(_DWORD*)(v68 + 8) = *((_DWORD*)v67 + 2);
				v63[2] += 16i64;
				sub_1400F06F0((__int64)v63, v69, L"nId", a3);
				v63[2] -= 16i64;
				v70 = sub_14005C3C0(*(_QWORD*)(v63[4] + 160i64), v107);
				*(_QWORD*)v71 = *v70;
				*(_DWORD*)(v71 + 8) = *((_DWORD*)v70 + 2);
				v63[2] += 16i64;
				sub_1400F06F0((__int64)v63, v72, L"nTierSpellId", v59);
				v63[2] -= 16i64;
				v73 = sub_14005C3C0(*(_QWORD*)(v63[4] + 160i64), v107);
				*(_QWORD*)v74 = *v73;
				*(_DWORD*)(v74 + 8) = *((_DWORD*)v73 + 2);
				v63[2] += 16i64;
				sub_1400F06F0((__int64)v63, v75, L"nTier", v62);
				v63[2] -= 16i64;
				v76 = sub_14005C3C0(*(_QWORD*)(v63[4] + 160i64), v107);
				*(_QWORD*)v77 = *v76;
				*(_DWORD*)(v77 + 8) = *((_DWORD*)v76 + 2);
				v63[2] += 16i64;
				sub_1400F06F0((__int64)v63, v78, L"nTrainingCost", v79);
				v63[2] -= 16i64;
				v80 = sub_14005C3C0(*(_QWORD*)(v63[4] + 160i64), v107);
				*(_QWORD*)v81 = *v80;
				*(_DWORD*)(v81 + 8) = *((_DWORD*)v80 + 2);
				v63[2] += 16i64;
				sub_1400F06F0((__int64)v63, v82, L"nTierPointCost", v83);
				v63[2] -= 16i64;
				sub_1403BB040(a1, v59);
				v84 = sub_14005C3C0(*(_QWORD*)(v63[4] + 160i64), v107);
				v85 = v63[2];
				*(_QWORD*)v85 = *v84;
				*(_DWORD*)(v85 + 8) = *((_DWORD*)v84 + 2);
				v63[2] += 16i64;
				sub_1400F0630((__int64)v63, v86, L"bCanPurchase", v87);
				v63[2] -= 16i64;
				if (a4 == 3)
				{
					sub_140491E90(v88, v59);
				}
				else
				{
					v89 = sub_1403C9F10(a1);
					sub_1407A1630(v90, v89, v59);
				}
				v91 = v107;
				v92 = sub_14005C3C0(*(_QWORD*)(v63[4] + 160i64), v107);
				*(_QWORD*)v93 = *v92;
				*(_DWORD*)(v93 + 8) = *((_DWORD*)v92 + 2);
				v63[2] += 16i64;
				sub_1400F06F0((__int64)v63, v94, L"nLevelReq", v95);
				v63[2] -= 16i64;
				sub_1400FAE20((__int64)v106, L"bIsActive");
				v96 = (int*)sub_14034BDD0(v109, *(_DWORD*)(*(_QWORD*)(v109 + 8) + 52i64));
				if (v96)
				{
					v97 = 0i64;
					if (*(_WORD*)v96)
					{
						do
							++v97;
						while (*((_WORD*)v96 + v97));
					}
					sub_14001C480((__int64)v117, v96, (int*)((char*)v96 + 2 * v97));
				}
				else if (v118 != v119)
				{
					*v118 = 0;
					v119 = v118;
				}
				sub_1400B7660(&v116);
				sub_1400FACC0((__int64)v106, L"strTierBonusDescription");
				sub_1403D3470(v63, (int*)v105);
				sub_1400FB540((__int64)v106);
				v63[2] -= 16i64;
				sub_1400FB1D0((__int64)v113);
				sub_1400579E0((__int64)v63, v98, v91);
			}
			++v48;
		} while (v48 < v57[1]);
		v18 = v112;
		v19 = v111;
	}
	v99 = v114;
	sub_1400FB2A0((__int64)v110, (__int64)L"tTiers", v114);
	v100 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v18 + 32) + 160i64), v19);
	v101 = *(_QWORD*)(v18 + 16);
	*(_QWORD*)v101 = *v100;
	v102 = v115;
	*(_DWORD*)(v101 + 8) = *((_DWORD*)v100 + 2);
	*(_QWORD*)(v18 + 16) += 16i64;
	if (v102)
		sub_1400579E0(v102, v101, v99);
	if (v120)
		sub_14018B900(v120, 0);
	sub_1400B7390(&v116);
	sub_1400579E0(v18, v103, v19);
	return 1i64;
}
// 1403BCB50: variable 'v22' is possibly undefined
// 1403BCB8D: variable 'v25' is possibly undefined
// 1403BCBC5: variable 'v27' is possibly undefined
// 1403BCBD7: variable 'v28' is possibly undefined
// 1403BCBD7: variable 'v29' is possibly undefined
// 1403BCC17: variable 'v31' is possibly undefined
// 1403BCC29: variable 'v32' is possibly undefined
// 1403BCC29: variable 'v33' is possibly undefined
// 1403BCC70: variable 'v35' is possibly undefined
// 1403BCC82: variable 'v36' is possibly undefined
// 1403BCC82: variable 'v37' is possibly undefined
// 1403BCD25: variable 'v42' is possibly undefined
// 1403BCD37: variable 'v43' is possibly undefined
// 1403BCD37: variable 'v44' is possibly undefined
// 1403BCD4D: variable 'v45' is possibly undefined
// 1403BCD54: variable 'v47' is possibly undefined
// 1403BCDDD: variable 'v53' is possibly undefined
// 1403BCDEE: variable 'v54' is possibly undefined
// 1403BCF15: variable 'v66' is possibly undefined
// 1403BCF44: variable 'v68' is possibly undefined
// 1403BCF56: variable 'v69' is possibly undefined
// 1403BCF85: variable 'v71' is possibly undefined
// 1403BCF97: variable 'v72' is possibly undefined
// 1403BCFC6: variable 'v74' is possibly undefined
// 1403BCFD8: variable 'v75' is possibly undefined
// 1403BD00D: variable 'v77' is possibly undefined
// 1403BD029: variable 'v78' is possibly undefined
// 1403BD029: variable 'v79' is possibly undefined
// 1403BD065: variable 'v81' is possibly undefined
// 1403BD077: variable 'v82' is possibly undefined
// 1403BD077: variable 'v83' is possibly undefined
// 1403BD0C5: variable 'v86' is possibly undefined
// 1403BD0C5: variable 'v87' is possibly undefined
// 1403BD0DE: variable 'v88' is possibly undefined
// 1403BD0F5: variable 'v90' is possibly undefined
// 1403BD14D: variable 'v93' is possibly undefined
// 1403BD15F: variable 'v94' is possibly undefined
// 1403BD15F: variable 'v95' is possibly undefined
// 1403BD22A: variable 'v98' is possibly undefined
// 1403BD2B5: variable 'v103' is possibly undefined
// 1403BBB90: using guessed type __int64 sub_1403BBB90(void);
// 140AF5E48: using guessed type wchar_t aStrname_8[8];
// 140AF5E58: using guessed type wchar_t aNmaxtiers_0[10];
// 140AF5E80: using guessed type wchar_t aNid_1[4];
// 140AF5E88: using guessed type wchar_t aNcurrenttier_0[13];
// 140AF5EA8: using guessed type wchar_t aStrabilitydesc_0[22];
// 140AF5ED8: using guessed type wchar_t aBisactive_1[10];
// 140AF5EF0: using guessed type wchar_t aBcanuseonsecon_0[23];
// 140AF6020: using guessed type wchar_t aStrtierbonusde_0[24];
// 140AF6068: using guessed type wchar_t aNlevelreq_0[10];
// 140AF6080: using guessed type wchar_t aBisactive_2[10];
// 140AF6128: using guessed type wchar_t aTtiers_0[7];
// 140AF6178: using guessed type wchar_t aNid_2[4];
// 140AF6180: using guessed type wchar_t aNtierspellid[13];
// 140AF61A0: using guessed type wchar_t aStrabilitypert_0[34];
// 140AF61E8: using guessed type wchar_t aStrname_9[8];
// 140AF61F8: using guessed type wchar_t aNtierpointcost_0[15];
// 140AF6218: using guessed type wchar_t aBcanpurchase_0[13];
// 140AF6238: using guessed type wchar_t aNtier_0[6];
// 140AF6248: using guessed type wchar_t aNtrainingcost_0[14];
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 1403BC9A0: using guessed type char var_158[8];
// 1403BC9A0: using guessed type char var_108[8];
// 1403BC9A0: using guessed type char var_138[8];
// 1403BC9A0: using guessed type char var_180[8];

