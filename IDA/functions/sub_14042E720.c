#include "../winhttp.h"

//----- (000000014042E720) ----------------------------------------------------
void __fastcall sub_14042E720(__int64 a1, _DWORD* a2)
{
	__int64 v2; // rdi
	__int64 v3; // r8
	unsigned __int64 v4; // rax
	_DWORD* v5; // rsi
	__int64 v6; // rbx
	__int64 v7; // rax
	unsigned int v8; // ebx
	__int64 v9; // rax
	_DWORD* v10; // rbx
	unsigned int v11; // esi
	__int64 v12; // rax
	__int64 v13; // rbp
	unsigned int v14; // esi
	__int64 v15; // rax
	__int64 v16; // rsi
	unsigned int v17; // r14d
	__int64 v18; // rax
	__int64 v19; // r15
	unsigned int v20; // r14d
	__int64 v21; // rax
	__int64 v22; // r14
	__int64 v23; // rcx
	__int16* v24; // r12
	int v25; // edx
	int v26; // edx
	__int64 v27; // rcx
	int v28; // edx
	__int16* v29; // rax
	__int64 v30; // rcx
	int v31; // edx
	unsigned __int16* v32; // r13
	__int64 v33; // rcx
	__int16* v34; // r15
	__int16* v35; // rbp
	unsigned __int16* v36; // rsi
	unsigned int i; // ebx
	__int64 v38; // rax
	__int64 v39; // rcx
	__int64 v40; // rbx
	__int16* v41; // rax
	__int64 v42; // rbx
	__int64 v43; // rax
	int v44; // ebx
	_QWORD* v45; // rax
	__int64 v46; // rdx
	unsigned __int16* v47; // r10
	_QWORD* v48; // rax
	__int64 v49; // r11
	__int64 v50; // rdx
	int v51; // r10d
	_QWORD* v52; // rax
	__int64 v53; // r11
	__int64 v54; // rdx
	int v55; // r10d
	_QWORD* v56; // rax
	__int64 v57; // r11
	__int64 v58; // rdx
	int v59; // r10d
	_QWORD* v60; // rax
	__int64 v61; // r11
	__int64 v62; // rdx
	int v63; // r10d
	_QWORD* v64; // rax
	__int64 v65; // r11
	__int64 v66; // rdx
	int v67; // r10d
	_QWORD* v68; // rax
	__int64 v69; // r11
	__int64 v70; // rdx
	int v71; // r10d
	_QWORD* v72; // rax
	__int64 v73; // r10
	__int64 v74; // rdx
	_QWORD* v75; // rax
	__int64 v76; // r10
	__int64 v77; // rdx
	_QWORD* v78; // rax
	__int64 v79; // r10
	__int64 v80; // rdx
	__int64 v81; // rcx
	_QWORD* v82; // rax
	__int64 v83; // rdx
	__int64 v84; // r10
	__int64 v85; // r8
	int v86; // edx
	int v87; // eax
	_QWORD* v88; // rax
	__int64 v89; // rdx
	__int64 v90; // r10
	unsigned __int16* v91; // r9
	unsigned __int16* v92; // r8
	_QWORD* v93; // rax
	__int64 v94; // r10
	__int64 v95; // rdx
	__int64 v96; // rdx
	__int64 v97; // rdx
	__int64(__fastcall * *v98)(); // [rsp+38h] [rbp-70h] BYREF
	unsigned int v99; // [rsp+40h] [rbp-68h]
	__int64 v100; // [rsp+48h] [rbp-60h]
	int v101; // [rsp+50h] [rbp-58h]
	int v104; // [rsp+C0h] [rbp+18h]
	__int16* v105; // [rsp+C8h] [rbp+20h]

	v2 = *(_QWORD*)(a1 + 400);
	v3 = *(_QWORD*)(v2 + 32);
	v98 = off_140B569F0;
	v100 = v2;
	v4 = *(_QWORD*)(v3 + 112);
	v5 = a2;
	v101 = 1;
	if (*(_QWORD*)(v3 + 120) >= v4)
		sub_14005E2C0(v2);
	v6 = *(_QWORD*)(v2 + 16);
	v7 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(v2 + 16) += 16i64;
	v8 = sub_1400578C0(v2);
	v99 = v8;
	v9 = 0i64;
	v104 = 0;
	if (*v5)
	{
		while (1)
		{
			v10 = (_DWORD*)(48 * v9 + *((_QWORD*)v5 + 1));
			v11 = v10[5];
			if (qword_140C63840)
			{
				v12 = qword_140C63840(off_140A6C938, v11, qword_140C63858);
			}
			else
			{
				if (dword_140C64C3C)
				{
					v13 = 0i64;
					goto LABEL_12;
				}
				if ((int)sub_14022D2A0() < 0)
				{
					v13 = 0i64;
					goto LABEL_12;
				}
				v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63918 + 24i64))(qword_140C63918, v11);
			}
			v13 = v12;
		LABEL_12:
			v14 = v10[6];
			if (qword_140C63840)
			{
				v15 = qword_140C63840(off_140A69950, v14, qword_140C63858);
			}
			else
			{
				if (dword_140C65254)
				{
					v16 = 0i64;
					goto LABEL_20;
				}
				if ((int)sub_1401F2F80() < 0)
				{
					v16 = 0i64;
					goto LABEL_20;
				}
				v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C28 + 24i64))(qword_140C63C28, v14);
			}
			v16 = v15;
		LABEL_20:
			v17 = v10[8];
			if (qword_140C63840)
			{
				v18 = qword_140C63840(off_140A6A328, v17, qword_140C63858);
			}
			else
			{
				if (dword_140C6546C)
				{
					v19 = 0i64;
					goto LABEL_28;
				}
				if ((int)sub_1401FEEC0() < 0)
				{
					v19 = 0i64;
					goto LABEL_28;
				}
				v18 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64D20 + 24i64))(qword_140C64D20, v17);
			}
			v19 = v18;
		LABEL_28:
			v20 = v10[10];
			if (qword_140C63840)
			{
				v21 = qword_140C63840(off_140A6E3E8, v20, qword_140C63858);
			}
			else
			{
				if (dword_140C64634)
				{
					v22 = 0i64;
					goto LABEL_36;
				}
				if ((int)sub_14024D920() < 0)
				{
					v22 = 0i64;
					goto LABEL_36;
				}
				v21 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v20);
			}
			v22 = v21;
		LABEL_36:
			v23 = (unsigned int)v10[9];
			if ((_DWORD)v23)
			{
				v23 = (unsigned int)(v23 - 1);
				if ((_DWORD)v23)
				{
					v23 = (unsigned int)(v23 - 1);
					if ((_DWORD)v23)
					{
						v23 = (unsigned int)(v23 - 1);
						if ((_DWORD)v23)
						{
							v24 = 0i64;
							goto LABEL_46;
						}
						v25 = 110931;
					}
					else
					{
						v25 = 110930;
					}
				}
				else
				{
					v25 = 110929;
				}
			}
			else
			{
				v25 = 110928;
			}
			v24 = sub_14034BDD0(v23, v25);
		LABEL_46:
			if (v13)
			{
				if (v10[7] == 1)
					v26 = *(_DWORD*)(v13 + 20);
				else
					v26 = *(_DWORD*)(v13 + 16);
			}
			else
			{
				v26 = 249090;
			}
			v105 = sub_14034BDD0(v23, v26);
			if (v16)
			{
				if (v10[7] == 1)
					v28 = *(_DWORD*)(v16 + 20);
				else
					v28 = *(_DWORD*)(v16 + 16);
			}
			else
			{
				v28 = 249089;
			}
			v29 = sub_14034BDD0(v27, v28);
			v31 = 769886;
			v32 = (unsigned __int16*)v29;
			if (v19)
				v31 = *(_DWORD*)(v19 + 12);
			v34 = sub_14034BDD0(v30, v31);
			if (v22)
				v35 = sub_14034BDD0(v33, *(_DWORD*)(v22 + 4));
			else
				v35 = 0i64;
			v36 = 0i64;
			if (v22)
			{
				for (i = *(_DWORD*)(v22 + 8); i; i = *(_DWORD*)(v40 + 8))
				{
					if (qword_140C63840)
					{
						v38 = qword_140C63840(off_140A6E3E8, i, qword_140C63858);
					}
					else
					{
						if (dword_140C64634 || (int)sub_14024D920() < 0)
							break;
						v38 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, i);
					}
					v40 = v38;
					if (!v38)
						break;
					v41 = sub_14034BDD0(v39, *(_DWORD*)(v38 + 4));
					if (v41 && *v41)
						v36 = (unsigned __int16*)v41;
				}
			}
			if (!v24 || !v35)
				goto LABEL_85;
			if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
				sub_14005E2C0(v2);
			v42 = *(_QWORD*)(v2 + 16);
			v43 = sub_14005C1B0(v2, 0, 0);
			*(_DWORD*)(v42 + 8) = 5;
			*(_QWORD*)v42 = v43;
			*(_QWORD*)(v2 + 16) += 16i64;
			v44 = sub_1400578C0(v2);
			v45 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v44);
			v46 = *(_QWORD*)(v2 + 16);
			*(_QWORD*)v46 = *v45;
			*(_DWORD*)(v46 + 8) = *((_DWORD*)v45 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F0870(v2, v46, L"strName", v47);
			*(_QWORD*)(v2 + 16) -= 16i64;
			v48 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v44);
			*(_QWORD*)v49 = *v48;
			*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F06F0(v2, v50, L"nLevel", v51);
			*(_QWORD*)(v2 + 16) -= 16i64;
			v52 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v44);
			*(_QWORD*)v53 = *v52;
			*(_DWORD*)(v53 + 8) = *((_DWORD*)v52 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F06F0(v2, v54, L"eRaceId", v55);
			*(_QWORD*)(v2 + 16) -= 16i64;
			v56 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v44);
			*(_QWORD*)v57 = *v56;
			*(_DWORD*)(v57 + 8) = *((_DWORD*)v56 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F06F0(v2, v58, L"eClassId", v59);
			*(_QWORD*)(v2 + 16) -= 16i64;
			v60 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v44);
			*(_QWORD*)v61 = *v60;
			*(_DWORD*)(v61 + 8) = *((_DWORD*)v60 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F06F0(v2, v62, L"eFactionId", v63);
			*(_QWORD*)(v2 + 16) -= 16i64;
			v64 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v44);
			*(_QWORD*)v65 = *v64;
			*(_DWORD*)(v65 + 8) = *((_DWORD*)v64 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F06F0(v2, v66, L"ePlayerPathType", v67);
			*(_QWORD*)(v2 + 16) -= 16i64;
			v68 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v44);
			*(_QWORD*)v69 = *v68;
			*(_DWORD*)(v69 + 8) = *((_DWORD*)v68 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F06F0(v2, v70, L"idWorldZone", v71);
			*(_QWORD*)(v2 + 16) -= 16i64;
			v72 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v44);
			*(_QWORD*)v73 = *v72;
			*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F0870(v2, v74, L"strRace", (unsigned __int16*)v105);
			*(_QWORD*)(v2 + 16) -= 16i64;
			v75 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v44);
			*(_QWORD*)v76 = *v75;
			*(_DWORD*)(v76 + 8) = *((_DWORD*)v75 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F0870(v2, v77, L"strClass", v32);
			*(_QWORD*)(v2 + 16) -= 16i64;
			v78 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v44);
			*(_QWORD*)v79 = *v78;
			*(_DWORD*)(v79 + 8) = *((_DWORD*)v78 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F0870(v2, v80, L"strFaction", (unsigned __int16*)v34);
			v81 = *(_QWORD*)(v2 + 32);
			*(_QWORD*)(v2 + 16) -= 16i64;
			v82 = sub_14005C3C0(*(_QWORD*)(v81 + 160), v44);
			*(_QWORD*)v84 = *v82;
			*(_DWORD*)(v84 + 8) = *((_DWORD*)v82 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			if (!v36)
			{
				sub_1400F0870(v2, v83, L"strZone", (unsigned __int16*)v35);
				*(_QWORD*)(v2 + 16) -= 16i64;
			LABEL_83:
				v88 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v44);
				v91 = (unsigned __int16*)&unk_1409EE8DC;
				v92 = L"strSubZone";
				goto LABEL_84;
			}
			sub_1400F0870(v2, v83, L"strZone", v36);
			v85 = 0i64;
			*(_QWORD*)(v2 + 16) -= 16i64;
			v86 = *v36;
			if (v86 == (unsigned __int16)*v35)
			{
				while ((_WORD)v86)
				{
					v86 = v36[v85 + 1];
					v87 = (unsigned __int16)v35[++v85];
					if (v86 != v87)
						goto LABEL_81;
				}
				goto LABEL_83;
			}
		LABEL_81:
			v88 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v44);
			v91 = (unsigned __int16*)v35;
			v92 = L"strSubZone";
		LABEL_84:
			*(_QWORD*)v90 = *v88;
			*(_DWORD*)(v90 + 8) = *((_DWORD*)v88 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F0870(v2, v89, v92, v91);
			*(_QWORD*)(v2 + 16) -= 16i64;
			v93 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v44);
			*(_QWORD*)v94 = *v93;
			*(_DWORD*)(v94 + 8) = *((_DWORD*)v93 + 2);
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F0870(v2, v95, L"strPath", (unsigned __int16*)v24);
			*(_QWORD*)(v2 + 16) -= 16i64;
			sub_1400FB1D0((__int64)&v98);
			sub_1400579E0(v2, v96, v44);
		LABEL_85:
			v5 = a2;
			v9 = (unsigned int)(v104 + 1);
			v104 = v9;
			if ((unsigned int)v9 >= *a2)
			{
				v2 = v100;
				v8 = v99;
				break;
			}
		}
	}
	Apollo_LUAEvent(a1, "WhoResponse", "TiS", v8, v5[4], *(_QWORD*)(qword_140C658A0 + 264));
	if (v2)
		sub_1400579E0(v2, v97, v8);
}
// 14042E97E: variable 'v23' is possibly undefined
// 14042E9A5: variable 'v27' is possibly undefined
// 14042E9BB: variable 'v30' is possibly undefined
// 14042E9CC: variable 'v33' is possibly undefined
// 14042EA3C: variable 'v39' is possibly undefined
// 14042EAF0: variable 'v47' is possibly undefined
// 14042EB2E: variable 'v49' is possibly undefined
// 14042EB40: variable 'v50' is possibly undefined
// 14042EB40: variable 'v51' is possibly undefined
// 14042EB7E: variable 'v53' is possibly undefined
// 14042EB90: variable 'v54' is possibly undefined
// 14042EB90: variable 'v55' is possibly undefined
// 14042EBCE: variable 'v57' is possibly undefined
// 14042EBE0: variable 'v58' is possibly undefined
// 14042EBE0: variable 'v59' is possibly undefined
// 14042EC1E: variable 'v61' is possibly undefined
// 14042EC30: variable 'v62' is possibly undefined
// 14042EC30: variable 'v63' is possibly undefined
// 14042EC6E: variable 'v65' is possibly undefined
// 14042EC80: variable 'v66' is possibly undefined
// 14042EC80: variable 'v67' is possibly undefined
// 14042ECBE: variable 'v69' is possibly undefined
// 14042ECD0: variable 'v70' is possibly undefined
// 14042ECD0: variable 'v71' is possibly undefined
// 14042ED02: variable 'v73' is possibly undefined
// 14042ED14: variable 'v74' is possibly undefined
// 14042ED37: variable 'v76' is possibly undefined
// 14042ED53: variable 'v77' is possibly undefined
// 14042ED80: variable 'v79' is possibly undefined
// 14042ED92: variable 'v80' is possibly undefined
// 14042EDB8: variable 'v84' is possibly undefined
// 14042EDD9: variable 'v83' is possibly undefined
// 14042EE69: variable 'v90' is possibly undefined
// 14042EE7B: variable 'v89' is possibly undefined
// 14042EEA8: variable 'v94' is possibly undefined
// 14042EEBA: variable 'v95' is possibly undefined
// 14042EED6: variable 'v96' is possibly undefined
// 14042EF6E: variable 'v97' is possibly undefined
// 140A69950: using guessed type wchar_t *off_140A69950[2];
// 140A6A328: using guessed type wchar_t *off_140A6A328[2];
// 140A6C938: using guessed type wchar_t *off_140A6C938[2];
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140B01240: using guessed type wchar_t aEraceid[8];
// 140B01250: using guessed type wchar_t aNlevel_0[7];
// 140B01260: using guessed type wchar_t aStrname_15[8];
// 140B01270: using guessed type wchar_t aIdworldzone[12];
// 140B01288: using guessed type wchar_t aEplayerpathtyp[16];
// 140B012A8: using guessed type wchar_t aEfactionid[11];
// 140B012C0: using guessed type wchar_t aEclassid[9];
// 140B012E0: using guessed type wchar_t aStrpath[8];
// 140B01330: using guessed type wchar_t aStrzone_0[8];
// 140B01340: using guessed type wchar_t aStrfaction[11];
// 140B01358: using guessed type wchar_t aStrclass[9];
// 140B01370: using guessed type wchar_t aStrrace[8];
// 140B01380: using guessed type wchar_t aStrsubzone_0[11];
// 140B01398: using guessed type wchar_t aStrsubzone[11];
// 140B013B0: using guessed type wchar_t aStrzone_1[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63918: using guessed type __int64 qword_140C63918;
// 140C63C28: using guessed type __int64 qword_140C63C28;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;
// 140C64C3C: using guessed type int dword_140C64C3C;
// 140C64D20: using guessed type __int64 qword_140C64D20;
// 140C65254: using guessed type int dword_140C65254;
// 140C6546C: using guessed type int dword_140C6546C;
// 140C658A0: using guessed type __int64 qword_140C658A0;

