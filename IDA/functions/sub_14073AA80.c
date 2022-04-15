//----- (000000014073AA80) ----------------------------------------------------
__int64 __fastcall sub_14073AA80(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // r15d
	__int64 v4; // r12
	__int64 v5; // rcx
	int v6; // esi
	int v7; // r14d
	__int64 v8; // rax
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rdi
	__int64 v12; // rax
	int v13; // r13d
	int* v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // r8
	__int64 v17; // rdx
	unsigned __int16* v18; // r10
	int* v19; // rax
	_QWORD* v20; // rax
	__int64 v21; // rdx
	unsigned __int16* v22; // r10
	_QWORD* v23; // rax
	__int64 v24; // r11
	__int64 v25; // rdx
	int v26; // r10d
	__int64 v27; // rax
	int v28; // edi
	__int64 v29; // rax
	_QWORD* v30; // rax
	__int64 v31; // rdx
	_QWORD* v32; // rax
	__int64 v33; // r10
	__int64 v34; // rdx
	int v35; // r11d
	_QWORD* v36; // rax
	__int64 v37; // r11
	__int64 v38; // rdx
	int v39; // r10d
	_QWORD* v40; // rax
	__int64 v41; // r11
	__int64 v42; // rdx
	int v43; // r10d
	_QWORD* v44; // rax
	__int64 v45; // r11
	__int64 v46; // rdx
	int v47; // r10d
	__int64 v48; // rcx
	unsigned __int64 v49; // rax
	__int64 v50; // r14
	__int64 v51; // rdi
	__int64 v52; // rax
	int v53; // edi
	__int64 v54; // rax
	unsigned int v55; // eax
	unsigned int v56; // esi
	unsigned int v57; // r13d
	__int64 v58; // rdi
	__int64 v59; // rax
	_QWORD* v60; // rax
	__int64 v61; // rdx
	int v62; // r10d
	_QWORD* v63; // rax
	__int64 v64; // r10
	__int64 v65; // rdx
	int v66; // r11d
	__int64 v67; // rdx
	__int64 v68; // rax
	_QWORD* v69; // rax
	__int64 v70; // rdx
	_QWORD* v71; // rax
	__int64 v72; // r10
	__int64 v73; // rdx
	int v74; // r11d
	__int64* v75; // rax
	__int64 v76; // rdx
	__int64 v77; // r10
	__int64 v78; // rdx
	__int64(__fastcall * *v80)(); // [rsp+20h] [rbp-E0h] BYREF
	int v81; // [rsp+28h] [rbp-D8h]
	_QWORD* v82; // [rsp+30h] [rbp-D0h]
	int v83; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v84)(); // [rsp+40h] [rbp-C0h] BYREF
	int v85; // [rsp+48h] [rbp-B8h]
	_QWORD* v86; // [rsp+50h] [rbp-B0h]
	int v87; // [rsp+58h] [rbp-A8h]
	__int64 v88[24]; // [rsp+60h] [rbp-A0h] BYREF
	__int128 v89; // [rsp+120h] [rbp+20h]
	int* v90; // [rsp+130h] [rbp+30h]
	__int64 v91[24]; // [rsp+140h] [rbp+40h] BYREF
	__int128 v92; // [rsp+200h] [rbp+100h]
	int* v93; // [rsp+210h] [rbp+110h]
	__int64 v94; // [rsp+270h] [rbp+170h]
	__int64 v95; // [rsp+278h] [rbp+178h]

	v2 = sub_140056AB0(a1, 0xFFFFFFFF);
	v3 = 0;
	v4 = v2;
	v95 = v2;
	if (v2)
	{
		v5 = *(_QWORD*)(v2 + 16);
		v6 = 0;
		v7 = 0;
		if (v5 || *(_QWORD*)(v2 + 24))
		{
			if (((*(_DWORD*)v2 - 3) & 0xFFFFFFFC) != 0 || *(_DWORD*)v2 == 5)
			{
				if (v5)
				{
					v7 = *(_DWORD*)(v5 + 12);
					v6 = *(_DWORD*)(v5 + 8);
				}
			}
			else
			{
				v8 = *(_QWORD*)(v2 + 24);
				if (v8)
				{
					v7 = *(_DWORD*)(v8 + 8);
					v6 = *(_DWORD*)(v8 + 4);
				}
			}
		}
		else
		{
			switch (*(_DWORD*)v2)
			{
			case 0:
				v6 = 224480;
				v7 = 442840;
				break;
			case 1:
				if (*(_DWORD*)(v2 + 4))
				{
					v6 = 442843;
					v7 = 442841;
				}
				else
				{
					v6 = 766871;
					v7 = 766870;
				}
				break;
			case 2:
				v6 = 768238;
				v7 = 442842;
				break;
			case 5:
				v6 = 224480;
				v7 = 224665;
				break;
			case 8:
				if (*(_DWORD*)(v2 + 4))
				{
					v6 = 639329;
					v7 = 639333;
				}
				else
				{
					v6 = 639328;
					v7 = 639332;
				}
				break;
			case 0xD:
				v6 = 766859;
				v7 = 766863;
				break;
			case 0xE:
				v6 = 766860;
				v7 = 766862;
				break;
			case 0xF:
				v6 = 766858;
				v7 = 766861;
				break;
			default:
				break;
			}
		}
		v9 = a1[4];
		v86 = a1;
		v84 = off_140B569F0;
		v10 = *(_QWORD*)(v9 + 112);
		v87 = 1;
		if (*(_QWORD*)(v9 + 120) >= v10)
			sub_14005E2C0((__int64)a1);
		v11 = a1[2];
		v12 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v11 + 8) = 5;
		*(_QWORD*)v11 = v12;
		a1[2] += 16i64;
		v13 = sub_1400578C0((__int64)a1);
		v85 = v13;
		sub_1400B7090((__int64)v91, v7);
		v93 = 0i64;
		v92 = 0i64;
		v91[0] = (__int64)off_140B69230;
		v14 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v92 = v14;
		*((_QWORD*)&v92 + 1) = v14;
		v93 = v14 + 4;
		if (v14)
			*(_WORD*)v14 = 0;
		sub_1400B7660(v91);
		v15 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		v16 = a1[2];
		*(_QWORD*)v16 = *v15;
		*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v17, L"strDescription", v18);
		a1[2] -= 16i64;
		sub_1400B7090((__int64)v88, v6);
		v88[0] = (__int64)off_140B69230;
		v90 = 0i64;
		v89 = 0i64;
		v19 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v89 = v19;
		*((_QWORD*)&v89 + 1) = v19;
		v90 = v19 + 4;
		if (v19)
			*(_WORD*)v19 = 0;
		sub_1400B7660(v88);
		v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		v21 = a1[2];
		*(_QWORD*)v21 = *v20;
		*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
		a1[2] += 16i64;
		sub_1400F0870((__int64)a1, v21, L"strName", v22);
		a1[2] -= 16i64;
		v23 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		*(_QWORD*)v24 = *v23;
		*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v25, L"nGameId", v26);
		a1[2] -= 16i64;
		v27 = *(_QWORD*)(v4 + 16);
		v28 = 0;
		if (v27)
		{
			v29 = sub_14024ACC0(*(_DWORD*)(v27 + 20));
			if (v29)
				v28 = *(_DWORD*)(v29 + 88);
		}
		v30 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		v31 = a1[2];
		*(_QWORD*)v31 = *v30;
		*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v31, L"nRewardRotationContentId", v28);
		a1[2] -= 16i64;
		v32 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		*(_QWORD*)v33 = *v32;
		*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v34, L"eMatchType", v35);
		a1[2] -= 16i64;
		v36 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		*(_QWORD*)v37 = *v36;
		*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v38, L"nTeamSize", v39);
		a1[2] -= 16i64;
		v40 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		*(_QWORD*)v41 = *v40;
		*(_DWORD*)(v41 + 8) = *((_DWORD*)v40 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v42, L"nMaxLevel", v43);
		a1[2] -= 16i64;
		v44 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		*(_QWORD*)v45 = *v44;
		*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v46, L"nMinLevel", v47);
		a1[2] -= 16i64;
		v48 = a1[4];
		v80 = off_140B569F0;
		v49 = *(_QWORD*)(v48 + 112);
		v50 = (__int64)a1;
		v82 = a1;
		v83 = 1;
		if (*(_QWORD*)(v48 + 120) >= v49)
			sub_14005E2C0((__int64)a1);
		v51 = a1[2];
		v52 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v51 + 8) = 5;
		*(_QWORD*)v51 = v52;
		a1[2] += 16i64;
		v53 = sub_1400578C0((__int64)a1);
		v81 = v53;
		if (*(_DWORD*)(v4 + 4))
		{
			v54 = *(_QWORD*)(v4 + 16);
			if (v54)
			{
				v94 = sub_14024ACC0(*(_DWORD*)(v54 + 20));
				if (v94)
				{
					v55 = sub_140248630();
					v56 = 0;
					if (v55)
					{
						v57 = v55;
						do
						{
							if (*(_DWORD*)(v94 + 80) == *(_DWORD*)(sub_1402486E0(v56) + 8))
							{
								if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
									sub_14005E2C0((__int64)a1);
								v58 = a1[2];
								v59 = sub_14005C1B0((__int64)a1, 0, 0);
								*(_DWORD*)(v58 + 8) = 5;
								*(_QWORD*)v58 = v59;
								a1[2] += 16i64;
								LODWORD(v58) = sub_1400578C0((__int64)a1);
								v60 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v58);
								v61 = a1[2];
								*(_QWORD*)v61 = *v60;
								*(_DWORD*)(v61 + 8) = *((_DWORD*)v60 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v61, L"nPrimeLevel", v62);
								a1[2] -= 16i64;
								v63 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v58);
								*(_QWORD*)v64 = *v63;
								*(_DWORD*)(v64 + 8) = *((_DWORD*)v63 + 2);
								a1[2] += 16i64;
								sub_1400F06F0((__int64)a1, v65, L"nRecommendedHeroism", v66);
								a1[2] -= 16i64;
								sub_1400FB1D0((__int64)&v80);
								sub_1400579E0((__int64)a1, v67, v58);
							}
							++v56;
						} while (v56 < v57);
						v50 = (__int64)v82;
						v53 = v81;
						v4 = v95;
						v13 = v85;
					}
				}
			}
		}
		sub_1400FB2A0((__int64)&v84, (__int64)L"tPrimeLevels", v53);
		v68 = *(_QWORD*)(v4 + 16);
		if (v68)
			v3 = *(_DWORD*)(v68 + 24);
		v69 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		v70 = a1[2];
		*(_QWORD*)v70 = *v69;
		*(_DWORD*)(v70 + 8) = *((_DWORD*)v69 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v70, L"nRecommendedItemLevel", v3);
		a1[2] -= 16i64;
		v71 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		*(_QWORD*)v72 = *v71;
		*(_DWORD*)(v72 + 8) = *((_DWORD*)v71 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v73, L"nMaxPrimeLevel", v74);
		a1[2] -= 16i64;
		v75 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
		v76 = *v75;
		*(_QWORD*)v77 = *v75;
		*(_DWORD*)(v77 + 8) = *((_DWORD*)v75 + 2);
		a1[2] += 16i64;
		if (v50)
			sub_1400579E0(v50, v76, v53);
		if ((_QWORD)v89)
			sub_14018B900(v89, 0);
		sub_1400B7390(v88);
		if ((_QWORD)v92)
			sub_14018B900(v92, 0);
		sub_1400B7390(v91);
		sub_1400579E0((__int64)a1, v78, v13);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 14073ACD9: variable 'v17' is possibly undefined
// 14073ACD9: variable 'v18' is possibly undefined
// 14073AD66: variable 'v22' is possibly undefined
// 14073ADA7: variable 'v24' is possibly undefined
// 14073ADB9: variable 'v25' is possibly undefined
// 14073ADB9: variable 'v26' is possibly undefined
// 14073AE47: variable 'v33' is possibly undefined
// 14073AE59: variable 'v34' is possibly undefined
// 14073AE59: variable 'v35' is possibly undefined
// 14073AE9A: variable 'v37' is possibly undefined
// 14073AEAC: variable 'v38' is possibly undefined
// 14073AEAC: variable 'v39' is possibly undefined
// 14073AEED: variable 'v41' is possibly undefined
// 14073AEFF: variable 'v42' is possibly undefined
// 14073AEFF: variable 'v43' is possibly undefined
// 14073AF40: variable 'v45' is possibly undefined
// 14073AF52: variable 'v46' is possibly undefined
// 14073AF52: variable 'v47' is possibly undefined
// 14073B097: variable 'v62' is possibly undefined
// 14073B0C8: variable 'v64' is possibly undefined
// 14073B0DA: variable 'v65' is possibly undefined
// 14073B0DA: variable 'v66' is possibly undefined
// 14073B0F6: variable 'v67' is possibly undefined
// 14073B1AD: variable 'v72' is possibly undefined
// 14073B1BF: variable 'v73' is possibly undefined
// 14073B1BF: variable 'v74' is possibly undefined
// 14073B1E3: variable 'v77' is possibly undefined
// 14073B24E: variable 'v78' is possibly undefined
// 140B489F0: using guessed type wchar_t aNrecommendedit[22];
// 140B48A20: using guessed type wchar_t aTprimelevels[13];
// 140B48A40: using guessed type wchar_t aNrecommendedhe[20];
// 140B48A68: using guessed type wchar_t aNprimelevel_1[12];
// 140B48A80: using guessed type wchar_t aNminlevel_0[10];
// 140B48A98: using guessed type wchar_t aNmaxlevel_0[10];
// 140B48AB0: using guessed type wchar_t aNteamsize[10];
// 140B48AC8: using guessed type wchar_t aEmatchtype_2[11];
// 140B48AE0: using guessed type wchar_t aNrewardrotatio[25];
// 140B48B18: using guessed type wchar_t aNgameid[8];
// 140B48B28: using guessed type wchar_t aStrname_97[8];
// 140B48B38: using guessed type wchar_t aStrdescription_19[15];
// 140B48C40: using guessed type wchar_t aNmaxprimelevel_1[15];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();

