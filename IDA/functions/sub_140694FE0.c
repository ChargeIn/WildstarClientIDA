//----- (0000000140694FE0) ----------------------------------------------------
__int64 __fastcall sub_140694FE0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64* v4; // rax
	__int64 v5; // rsi
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rax
	int v11; // eax
	int v12; // r10d
	int v13; // edi
	_QWORD* v14; // rax
	__int64 v15; // rdx
	int v16; // r10d
	_QWORD* v17; // rax
	__int64 v18; // r10
	__int64 v19; // rdx
	int v20; // r11d
	_QWORD* v21; // rax
	__int64 v22; // rdx
	int v23; // r10d
	__int64 v24; // rcx
	unsigned __int64 v25; // rax
	__int64 v26; // rdi
	__int64 v27; // rax
	unsigned int* v28; // rsi
	__int64 v29; // r15
	__int64 v30; // rax
	int* v31; // r14
	__int64 v32; // rdx
	unsigned __int64 v33; // rcx
	__int64 v34; // rdi
	__int64 v35; // rax
	int v36; // eax
	__int64 v37; // rcx
	int v38; // edi
	_QWORD* v39; // rax
	__int64 v40; // rdx
	int v41; // r10d
	__int64 v42; // rdx
	__int64 v43; // rcx
	unsigned __int64 v44; // rax
	__int64 v45; // r12
	__int64 v46; // rdi
	__int64 v47; // rax
	int v48; // r13d
	unsigned int* v49; // rcx
	__int64 v50; // r9
	unsigned int v51; // r8d
	__int64 v52; // rcx
	__int64 v53; // rdx
	_QWORD* v54; // r15
	unsigned __int64 v55; // rsi
	__int64 v56; // r14
	__int64 v57; // rdi
	__int64 v58; // rax
	_QWORD* v59; // rax
	__int64 v60; // rdx
	unsigned __int16* v61; // r10
	__int64 v62; // rcx
	_QWORD* v63; // rax
	__int64 v64; // rdx
	unsigned __int16* v65; // r10
	__int64 v66; // rcx
	_QWORD* v67; // rax
	__int64 v68; // rdx
	unsigned __int16* v69; // r10
	__int64 v70; // rdx
	int v71; // r15d
	_QWORD* v72; // rax
	__int64 v73; // rdx
	unsigned __int64* v74; // r14
	unsigned __int64 v75; // rsi
	__int64 v76; // rdi
	__int64 v77; // rax
	__int64 v78; // rcx
	_QWORD* v79; // rax
	__int64 v80; // rdx
	__int64* v81; // rax
	__int64 v82; // rdx
	__int64 v83; // r10
	__int64(__fastcall * *v84)(); // [rsp+20h] [rbp-29h] BYREF
	int v85; // [rsp+28h] [rbp-21h]
	_QWORD* v86; // [rsp+30h] [rbp-19h]
	int v87; // [rsp+38h] [rbp-11h]
	__int64(__fastcall * *v88)(); // [rsp+40h] [rbp-9h] BYREF
	int v89; // [rsp+48h] [rbp-1h]
	_QWORD* v90; // [rsp+50h] [rbp+7h]
	int v91; // [rsp+58h] [rbp+Fh]
	__int64(__fastcall * *v92)(); // [rsp+60h] [rbp+17h] BYREF
	__int64 v93; // [rsp+68h] [rbp+1Fh]
	_QWORD* v94; // [rsp+70h] [rbp+27h]
	int v95; // [rsp+78h] [rbp+2Fh]
	__int64* v96; // [rsp+B8h] [rbp+6Fh]
	__int64 v97; // [rsp+B8h] [rbp+6Fh]

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0 && (v4 = *(__int64**)(v3 + 8), (v96 = v4) != 0i64))
	{
		v5 = sub_1405BE1B0(*v4, *(_DWORD*)*v4);
		if (v5)
		{
			v7 = a1[4];
			v8 = *(_QWORD*)(v7 + 112);
			v92 = off_140B569F0;
			v94 = a1;
			v95 = 1;
			if (*(_QWORD*)(v7 + 120) >= v8)
				sub_14005E2C0((__int64)a1);
			v9 = a1[2];
			v10 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v9 + 8) = 5;
			*(_QWORD*)v9 = v10;
			a1[2] += 16i64;
			v11 = sub_1400578C0((__int64)a1);
			v12 = *(_DWORD*)(v5 + 8);
			v13 = v11;
			LODWORD(v93) = v11;
			if (v12)
			{
				v14 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v11);
				v15 = a1[2];
				*(_QWORD*)v15 = *v14;
				*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v15, L"idFaction", v16);
				a1[2] -= 16i64;
				v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
				*(_QWORD*)v18 = *v17;
				*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v19, L"nFactionAmount", v20);
				a1[2] -= 16i64;
			}
			v21 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v13);
			v22 = a1[2];
			*(_QWORD*)v22 = *v21;
			*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
			a1[2] += 16i64;
			sub_1400F06F0((__int64)a1, v22, L"nTalentPoints", v23);
			a1[2] -= 16i64;
			v24 = a1[4];
			v84 = off_140B569F0;
			v25 = *(_QWORD*)(v24 + 112);
			v86 = a1;
			v87 = 1;
			if (*(_QWORD*)(v24 + 120) >= v25)
				sub_14005E2C0((__int64)a1);
			v26 = a1[2];
			v27 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v26 + 8) = 5;
			*(_QWORD*)v26 = v27;
			a1[2] += 16i64;
			v85 = sub_1400578C0((__int64)a1);
			v28 = (unsigned int*)(v5 + 20);
			v29 = 8i64;
			do
			{
				if (*v28)
				{
					v30 = sub_140245C00(*v28);
					if (v30)
					{
						v31 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v30 + 12), 0i64);
						if (v31)
						{
							v32 = a1[4];
							v88 = off_140B569F0;
							v90 = a1;
							v33 = *(_QWORD*)(v32 + 112);
							v91 = 1;
							if (*(_QWORD*)(v32 + 120) >= v33)
								sub_14005E2C0((__int64)a1);
							v34 = a1[2];
							v35 = sub_14005C1B0((__int64)a1, 0, 0);
							*(_DWORD*)(v34 + 8) = 5;
							*(_QWORD*)v34 = v35;
							a1[2] += 16i64;
							v36 = sub_1400578C0((__int64)a1);
							v37 = *(_QWORD*)(a1[4] + 160i64);
							v38 = v36;
							v89 = v36;
							v39 = sub_14005C3C0(v37, v36);
							v40 = a1[2];
							*(_QWORD*)v40 = *v39;
							*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
							a1[2] += 16i64;
							sub_1400F06F0((__int64)a1, v40, L"idSchematic", v41);
							a1[2] -= 16i64;
							if ((unsigned int)sub_140415C70(a1, (__int64)v31))
							{
								sub_1400FB540((__int64)&v88);
								a1[2] -= 16i64;
							}
							sub_1400FB1D0((__int64)&v84);
							sub_1400579E0((__int64)a1, v42, v38);
						}
					}
				}
				++v28;
				--v29;
			} while (v29);
			sub_1400FB2A0((__int64)&v92, (__int64)L"arSchematics", v85);
			v43 = a1[4];
			v88 = off_140B569F0;
			v44 = *(_QWORD*)(v43 + 112);
			v45 = (__int64)a1;
			v90 = a1;
			v91 = 1;
			if (*(_QWORD*)(v43 + 120) >= v44)
				sub_14005E2C0((__int64)a1);
			v46 = a1[2];
			v47 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v46 + 8) = 5;
			*(_QWORD*)v46 = v47;
			a1[2] += 16i64;
			v48 = sub_1400578C0((__int64)a1);
			v49 = (unsigned int*)*v96;
			v50 = *(_QWORD*)(qword_140C65B90 + 80);
			v89 = v48;
			v51 = *v49;
			v52 = *(_QWORD*)(v50 + 8);
			v53 = v50;
			while (v52)
			{
				if (*(_DWORD*)(v52 + 32) < v51)
				{
					v52 = *(_QWORD*)(v52 + 24);
				}
				else
				{
					v53 = v52;
					v52 = *(_QWORD*)(v52 + 16);
				}
			}
			if (v53 == v50 || (v97 = v53, v51 < *(_DWORD*)(v53 + 32)))
				v97 = v50;
			if (v97 != v50)
			{
				v54 = *(_QWORD**)(v97 + 40);
				if (v54)
				{
					v55 = 0i64;
					if (v54[1])
					{
						do
						{
							v56 = *(_QWORD*)(*v54 + 8 * v55);
							if (v56)
							{
								if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
									sub_14005E2C0((__int64)a1);
								v57 = a1[2];
								v58 = sub_14005C1B0((__int64)a1, 0, 0);
								*(_DWORD*)(v57 + 8) = 5;
								*(_QWORD*)v57 = v58;
								a1[2] += 16i64;
								LODWORD(v57) = sub_1400578C0((__int64)a1);
								v59 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v57);
								v60 = a1[2];
								*(_QWORD*)v60 = *v59;
								*(_DWORD*)(v60 + 8) = *((_DWORD*)v59 + 2);
								a1[2] += 16i64;
								sub_1400F0870((__int64)a1, v60, L"strIcon", v61);
								a1[2] -= 16i64;
								sub_14034BDD0(v62, *(_DWORD*)(v56 + 24));
								v63 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v57);
								v64 = a1[2];
								*(_QWORD*)v64 = *v63;
								*(_DWORD*)(v64 + 8) = *((_DWORD*)v63 + 2);
								a1[2] += 16i64;
								sub_1400F0870((__int64)a1, v64, L"strName", v65);
								a1[2] -= 16i64;
								sub_14034BDD0(v66, *(_DWORD*)(v56 + 28));
								v67 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v57);
								v68 = a1[2];
								*(_QWORD*)v68 = *v67;
								*(_DWORD*)(v68 + 8) = *((_DWORD*)v67 + 2);
								a1[2] += 16i64;
								sub_1400F0870((__int64)a1, v68, L"strTooltip", v69);
								a1[2] -= 16i64;
								sub_1400FB1D0((__int64)&v88);
								sub_1400579E0((__int64)a1, v70, v57);
							}
							++v55;
						} while (v55 < v54[1]);
						v45 = (__int64)v90;
						v48 = v89;
					}
				}
			}
			v71 = v93;
			v72 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v93);
			v73 = a1[2];
			*(_QWORD*)v73 = *v72;
			*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
			a1[2] += 16i64;
			v74 = (unsigned __int64*)sub_14018F0E0(&v92, L"arBonuses")[1];
			if (v74)
			{
				v75 = -1i64;
				do
					++v75;
				while (*((_BYTE*)v74 + v75));
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v76 = a1[2];
				v77 = sub_140062650((__int64)a1, v74, v75);
				*(_DWORD*)(v76 + 8) = 4;
				*(_QWORD*)v76 = v77;
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
			}
			v78 = v93;
			a1[2] += 16i64;
			if (v78)
				sub_14018B900(v78, 0);
			v79 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v48);
			v80 = a1[2];
			*(_QWORD*)v80 = *v79;
			*(_DWORD*)(v80 + 8) = *((_DWORD*)v79 + 2);
			a1[2] += 16i64;
			sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 48i64;
			v81 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v71);
			v82 = *v81;
			*(_QWORD*)v83 = *v81;
			*(_DWORD*)(v83 + 8) = *((_DWORD*)v81 + 2);
			a1[2] += 16i64;
			if (v45)
				sub_1400579E0(v45, v82, v48);
			if (v86)
				sub_1400579E0((__int64)v86, v82, v85);
			sub_1400579E0((__int64)a1, v82, v71);
			return 1i64;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140695127: variable 'v16' is possibly undefined
// 140695158: variable 'v18' is possibly undefined
// 14069516A: variable 'v19' is possibly undefined
// 14069516A: variable 'v20' is possibly undefined
// 1406951AC: variable 'v23' is possibly undefined
// 1406952CF: variable 'v41' is possibly undefined
// 14069530E: variable 'v42' is possibly undefined
// 1406954BA: variable 'v61' is possibly undefined
// 1406954C8: variable 'v62' is possibly undefined
// 140695504: variable 'v65' is possibly undefined
// 140695512: variable 'v66' is possibly undefined
// 14069554E: variable 'v69' is possibly undefined
// 140695569: variable 'v70' is possibly undefined
// 140695696: variable 'v83' is possibly undefined
// 1406956D2: variable 'v82' is possibly undefined
// 140B33DD0: using guessed type wchar_t aStrtooltip_1[11];
// 140B33DE8: using guessed type wchar_t aArbonuses_0[10];
// 140B33E00: using guessed type wchar_t aStricon_13[8];
// 140B33E10: using guessed type wchar_t aStrname_73[8];
// 140B33E38: using guessed type wchar_t aArschematics[13];
// 140B33E58: using guessed type wchar_t aNtalentpoints_1[14];
// 140B33E78: using guessed type wchar_t aIdschematic_1[12];
// 140B33E90: using guessed type wchar_t aIdfaction_0[10];
// 140B33EA8: using guessed type wchar_t aNfactionamount[15];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B90: using guessed type __int64 qword_140C65B90;

