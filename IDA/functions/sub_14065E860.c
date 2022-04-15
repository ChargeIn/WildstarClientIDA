//----- (000000014065E860) ----------------------------------------------------
__int64 __fastcall sub_14065E860(__int64 a1)
{
	_QWORD* v1; // rsi
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	unsigned int v6; // edx
	__int64 v7; // rax
	__int64 v8; // r12
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // r10d
	_QWORD* v14; // rax
	_QWORD* v15; // rbx
	__int64* v16; // r15
	__int64 v17; // r14
	__int64 v18; // rcx
	unsigned __int64 v19; // rax
	__int64 v20; // rdi
	__int64 v21; // rax
	int v22; // eax
	__int64 v23; // rcx
	int v24; // ebp
	_QWORD* v25; // rax
	__int64 v26; // rcx
	__int64 v27; // rdx
	int v28; // r11d
	unsigned int v29; // ecx
	__int64 v30; // rdi
	int* v31; // rax
	__int64 v32; // rdx
	__int64 v33; // rdi
	_QWORD* v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rdx
	unsigned __int16* v37; // r11
	__int64 v38; // rcx
	_QWORD* v39; // rax
	__int64 v40; // rcx
	__int64 v41; // rdx
	unsigned __int16* v42; // r11
	_QWORD* v43; // rax
	__int64 v44; // rdx
	int v45; // r11d
	_QWORD* v46; // rax
	__int64 v47; // rcx
	__int64 v48; // rdx
	int v49; // r11d
	_QWORD* v50; // rax
	__int64 v51; // rcx
	__int64 v52; // rdx
	int v53; // r11d
	__int64 v54; // rdi
	_QWORD* v55; // rax
	__int64 v56; // rdx
	int v57; // r11d
	__int64 v58; // rdi
	int v59; // eax
	int* v60; // rax
	_QWORD* v61; // rax
	__int64 v62; // rdx
	int v63; // r11d
	__int64 v64; // rax
	__int64 v65; // rcx
	int v66; // edx
	_QWORD* v67; // rax
	__int64 v68; // rcx
	__int64 v69; // rdx
	unsigned __int16* v70; // r11
	_QWORD* v71; // rax
	__int64 v72; // rcx
	__int64 v73; // rdx
	int v74; // r11d
	__int64 v75; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v78; // rax
	__int64 v79; // r8
	__int64 v80; // rdx
	int v81; // r10d
	__int64(__fastcall * *v83)(); // [rsp+20h] [rbp-68h] BYREF
	int v84; // [rsp+28h] [rbp-60h]
	_QWORD* v85; // [rsp+30h] [rbp-58h]
	int v86; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v87)(); // [rsp+40h] [rbp-48h] BYREF
	int v88; // [rsp+48h] [rbp-40h]
	_QWORD* v89; // [rsp+50h] [rbp-38h]
	int v90; // [rsp+58h] [rbp-30h]

	v1 = (_QWORD*)a1;
	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2
		&& (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0
		&& (v5 = *(_QWORD*)(v3 + 24)) != 0
		&& (v6 = *(_DWORD*)(v5 + 112)) != 0)
	{
		v7 = sub_1403AC530(v4, v6);
		v8 = v7;
		if (!v7 || (*(_BYTE*)(*(_QWORD*)v7 + 4i64) & 4) != 0)
		{
			*(_DWORD*)(v1[2] + 8i64) = 0;
			v1[2] += 16i64;
			return 1i64;
		}
		else
		{
			v9 = v1[4];
			v10 = *(_QWORD*)(v9 + 112);
			v85 = v1;
			v83 = off_140B569F0;
			v86 = 1;
			if (*(_QWORD*)(v9 + 120) >= v10)
				sub_14005E2C0((__int64)v1);
			v11 = v1[2];
			v12 = sub_14005C1B0((__int64)v1, 0, 0);
			*(_DWORD*)(v11 + 8) = 5;
			*(_QWORD*)v11 = v12;
			v1[2] += 16i64;
			v13 = sub_1400578C0((__int64)v1);
			v84 = v13;
			v14 = *(_QWORD**)(v8 + 16);
			v15 = (_QWORD*)v14[2];
			if (v15 != v14)
			{
				while (1)
				{
					v16 = (__int64*)v15[5];
					v17 = *v16;
					if (*v16)
						break;
				LABEL_31:
					v75 = v15[3];
					if (v75)
					{
						v15 = (_QWORD*)v15[3];
						for (i = *(_QWORD**)(v75 + 16); i; i = (_QWORD*)i[2])
							v15 = i;
					}
					else
					{
						for (j = v15[1]; v15 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
							v15 = (_QWORD*)j;
						if (v15[3] != j)
							v15 = (_QWORD*)j;
					}
					if (v15 == *(_QWORD**)(v8 + 16))
					{
						v1 = v85;
						v13 = v84;
						goto LABEL_41;
					}
				}
				v18 = v1[4];
				v87 = off_140B569F0;
				v89 = v1;
				v19 = *(_QWORD*)(v18 + 112);
				v90 = 1;
				if (*(_QWORD*)(v18 + 120) >= v19)
					sub_14005E2C0((__int64)v1);
				v20 = v1[2];
				v21 = sub_14005C1B0((__int64)v1, 0, 0);
				*(_DWORD*)(v20 + 8) = 5;
				*(_QWORD*)v20 = v21;
				v1[2] += 16i64;
				v22 = sub_1400578C0((__int64)v1);
				v23 = *(_QWORD*)(v1[4] + 160i64);
				v24 = v22;
				v88 = v22;
				v25 = sub_14005C3C0(v23, v22);
				v26 = v1[2];
				*(_QWORD*)v26 = *v25;
				*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
				v1[2] += 16i64;
				sub_1400F06F0((__int64)v1, v27, L"idConversion", v28);
				v1[2] -= 16i64;
				v29 = *(_DWORD*)(*v16 + 4);
				v30 = v1[2];
				if (v29 > 1)
				{
					if (v29 == 3)
					{
						v33 = sub_1401E87E0(*(_DWORD*)(v17 + 8));
						if (!v33)
						{
						LABEL_30:
							sub_1400579E0((__int64)v1, v32, v24);
							goto LABEL_31;
						}
						v34 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v24);
						v35 = v1[2];
						*(_QWORD*)v35 = *v34;
						*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
						v1[2] += 16i64;
						sub_1400F0870((__int64)v1, v36, L"accountCurrencySprite", v37);
						v1[2] -= 16i64;
						sub_14034BDD0(v38, *(_DWORD*)(v33 + 4));
						v39 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v24);
						v40 = v1[2];
						*(_QWORD*)v40 = *v39;
						*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
						v1[2] += 16i64;
						sub_1400F0870((__int64)v1, v41, L"accountCurrencyTooltip", v42);
					}
					else
					{
						v43 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v24);
						*(_QWORD*)v30 = *v43;
						*(_DWORD*)(v30 + 8) = *((_DWORD*)v43 + 2);
						v1[2] += 16i64;
						sub_1400F06F0((__int64)v1, v44, L"idSource", v45);
					}
				}
				else
				{
					v31 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v17 + 8), 0i64);
					if (!(unsigned int)sub_140415C70(v1, (__int64)v31))
						goto LABEL_21;
					sub_1400FB540((__int64)&v87);
				}
				v1[2] -= 16i64;
			LABEL_21:
				v46 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v24);
				v47 = v1[2];
				*(_QWORD*)v47 = *v46;
				*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
				v1[2] += 16i64;
				sub_1400F06F0((__int64)v1, v48, L"nSourceCount", v49);
				v1[2] -= 16i64;
				sub_1404AB2B0(v16);
				v50 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v24);
				v51 = v1[2];
				*(_QWORD*)v51 = *v50;
				*(_DWORD*)(v51 + 8) = *((_DWORD*)v50 + 2);
				v1[2] += 16i64;
				sub_1400F06F0((__int64)v1, v52, L"nAvailableCount", v53);
				v1[2] -= 16i64;
				v54 = v1[2];
				v55 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v24);
				*(_QWORD*)v54 = *v55;
				*(_DWORD*)(v54 + 8) = *((_DWORD*)v55 + 2);
				v1[2] += 16i64;
				sub_1400F06F0((__int64)v1, v56, L"eType", v57);
				v1[2] -= 16i64;
				v58 = v1[2];
				v59 = *(_DWORD*)(*v16 + 4);
				if (v59)
				{
					if ((unsigned int)(v59 - 1) > 2)
						goto LABEL_29;
					v61 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v24);
					*(_QWORD*)v58 = *v61;
					*(_DWORD*)(v58 + 8) = *((_DWORD*)v61 + 2);
					v1[2] += 16i64;
					sub_1400F06F0((__int64)v1, v62, L"idTarget", v63);
					v1[2] -= 16i64;
					v64 = sub_1401FF120(*(_DWORD*)(v17 + 16));
					if (!v64)
						goto LABEL_29;
					v66 = *(_DWORD*)(v64 + 12);
					if (!v66)
						goto LABEL_29;
					sub_14034BDD0(v65, v66);
					v67 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v24);
					v68 = v1[2];
					*(_QWORD*)v68 = *v67;
					*(_DWORD*)(v68 + 8) = *((_DWORD*)v67 + 2);
					v1[2] += 16i64;
					sub_1400F0870((__int64)v1, v69, L"strName", v70);
				}
				else
				{
					v60 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v17 + 16), 0i64);
					if (!(unsigned int)sub_140415C70(v1, (__int64)v60))
					{
					LABEL_29:
						v71 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v24);
						v72 = v1[2];
						*(_QWORD*)v72 = *v71;
						*(_DWORD*)(v72 + 8) = *((_DWORD*)v71 + 2);
						v1[2] += 16i64;
						sub_1400F06F0((__int64)v1, v73, L"nTargetCount", v74);
						v1[2] -= 16i64;
						sub_1400FB1D0((__int64)&v83);
						goto LABEL_30;
					}
					sub_1400FB540((__int64)&v87);
				}
				v1[2] -= 16i64;
				goto LABEL_29;
			}
		LABEL_41:
			v78 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v13);
			v79 = v1[2];
			*(_QWORD*)v79 = *v78;
			v80 = *((unsigned int*)v78 + 2);
			*(_DWORD*)(v79 + 8) = v80;
			v1[2] += 16i64;
			sub_1400579E0((__int64)v1, v80, v81);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		v1[2] += 16i64;
		return 1i64;
	}
}
// 14065E8B3: variable 'v4' is possibly undefined
// 14065EA11: variable 'v27' is possibly undefined
// 14065EA11: variable 'v28' is possibly undefined
// 14065EAE2: variable 'v36' is possibly undefined
// 14065EAE2: variable 'v37' is possibly undefined
// 14065EAEF: variable 'v38' is possibly undefined
// 14065EB2F: variable 'v41' is possibly undefined
// 14065EB2F: variable 'v42' is possibly undefined
// 14065EB6E: variable 'v44' is possibly undefined
// 14065EB6E: variable 'v45' is possibly undefined
// 14065EBB4: variable 'v48' is possibly undefined
// 14065EBB4: variable 'v49' is possibly undefined
// 14065EC01: variable 'v52' is possibly undefined
// 14065EC01: variable 'v53' is possibly undefined
// 14065EC4A: variable 'v56' is possibly undefined
// 14065EC4A: variable 'v57' is possibly undefined
// 14065ECE1: variable 'v62' is possibly undefined
// 14065ECE1: variable 'v63' is possibly undefined
// 14065ED00: variable 'v65' is possibly undefined
// 14065ED40: variable 'v69' is possibly undefined
// 14065ED40: variable 'v70' is possibly undefined
// 14065ED86: variable 'v73' is possibly undefined
// 14065ED86: variable 'v74' is possibly undefined
// 14065EDA2: variable 'v32' is possibly undefined
// 14065EE53: variable 'v81' is possibly undefined
// 140B2D738: using guessed type wchar_t aAccountcurrenc_5[23];
// 140B2D768: using guessed type wchar_t aIdsource[9];
// 140B2D798: using guessed type wchar_t aAccountcurrenc_4[22];
// 140B2D7D8: using guessed type wchar_t aIdconversion[13];
// 140B2D978: using guessed type wchar_t aNtargetcount_0[13];
// 140B2D9B8: using guessed type wchar_t aIdtarget_0[9];
// 140B2D9D0: using guessed type wchar_t aStrname_50[8];
// 140B2D9E0: using guessed type wchar_t aEtype_14[6];
// 140B2DA08: using guessed type wchar_t aNsourcecount[13];
// 140B2DA28: using guessed type wchar_t aNavailablecoun[16];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

