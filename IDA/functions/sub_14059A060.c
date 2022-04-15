//----- (000000014059A060) ----------------------------------------------------
__int64 __fastcall sub_14059A060(__int64 a1)
{
	unsigned __int64 v2; // rdx
	unsigned int v3; // ecx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rdi
	unsigned int v7; // eax
	_DWORD* v8; // rdx
	unsigned int v9; // r10d
	__int64 v10; // rax
	unsigned __int64 v11; // rcx
	int v12; // eax
	BOOL v13; // eax
	bool v14; // r15
	__int64 v15; // rax
	int v16; // r10d
	unsigned __int64 v17; // r8
	__int64 v18; // rsi
	unsigned int v19; // ecx
	__int64 v20; // rdx
	__int64 v21; // rax
	__int64 v22; // r14
	__int64 v24; // rcx
	unsigned __int64 v25; // rax
	__int64 v26; // rdi
	__int64 v27; // rax
	__int64 v28; // rax
	_DWORD* v29; // r13
	unsigned int v30; // edi
	__int64 v31; // rax
	__int64 v32; // rsi
	int* v33; // rcx
	__int64 v34; // rdi
	__int64 v35; // rax
	_QWORD* v36; // rax
	__int64 v37; // rcx
	__int64 v38; // rdx
	int v39; // r11d
	void* v40; // r8
	__int64* v41; // rax
	__int64 v42; // rcx
	unsigned __int64 v43; // rax
	__int64 v44; // rdi
	__int64 v45; // rax
	unsigned int* v46; // rsi
	__int64 v47; // r12
	unsigned int v48; // edi
	__int64 v49; // rax
	__int64 v50; // r14
	__int64 v51; // rdi
	__int64 v52; // rax
	int v53; // r15d
	_QWORD* v54; // rax
	__int64 v55; // rcx
	__int64 v56; // rdx
	int v57; // r11d
	BOOL v58; // edi
	_QWORD* v59; // rax
	__int64 v60; // r11
	unsigned __int64* v61; // rdx
	unsigned __int64 v62; // r8
	BOOL* v63; // rcx
	__int64* v64; // rax
	__int64 v65; // rdi
	_QWORD* v66; // rax
	__int64 v67; // rdx
	unsigned __int16* v68; // r11
	__int64 v69; // rcx
	_QWORD* v70; // rax
	__int64 v71; // rcx
	__int64 v72; // rdx
	unsigned __int16* v73; // r11
	__int64 v74; // rcx
	_QWORD* v75; // rax
	__int64 v76; // rcx
	__int64 v77; // rdx
	unsigned __int16* v78; // r11
	__int64 v79; // rdx
	void* v80; // r8
	_QWORD* v81; // rax
	_QWORD* v82; // rax
	__int64 v83; // rcx
	unsigned __int64* v84; // r14
	unsigned __int64 v85; // rsi
	__int64 v86; // rdi
	__int64 v87; // rax
	int v88; // esi
	_QWORD* v89; // rax
	__int64 v90; // rcx
	__int64 v91; // r8
	__int64 v92; // rdx
	int* v93; // rdi
	_QWORD* v94; // rax
	__int64 v95; // r11
	__int64 v96; // r9
	int v97; // r8d
	__int64 v98; // rdx
	__int64 v99; // [rsp+30h] [rbp-69h]
	__int64 v100; // [rsp+38h] [rbp-61h]
	__int64 v101; // [rsp+40h] [rbp-59h] BYREF
	__int64 v102; // [rsp+48h] [rbp-51h]
	__int64 v103; // [rsp+60h] [rbp-39h] BYREF
	int* v104; // [rsp+68h] [rbp-31h]
	int* v105; // [rsp+70h] [rbp-29h]
	int* v106; // [rsp+78h] [rbp-21h]
	__int64(__fastcall * *v107)(); // [rsp+80h] [rbp-19h] BYREF
	int v108; // [rsp+88h] [rbp-11h]
	__int64 v109; // [rsp+90h] [rbp-9h]
	int v110; // [rsp+98h] [rbp-1h]
	__int64(__fastcall * *v111)(); // [rsp+A0h] [rbp+7h] BYREF
	int v112; // [rsp+A8h] [rbp+Fh]
	__int64 v113; // [rsp+B0h] [rbp+17h]
	int v114; // [rsp+B8h] [rbp+1Fh]
	bool v115; // [rsp+108h] [rbp+6Fh]
	unsigned int v116; // [rsp+110h] [rbp+77h]
	int v117; // [rsp+118h] [rbp+7Fh]

	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	v8 = dword_140A12138;
	v9 = v7;
	v10 = *(_QWORD*)(v6 + 400);
	v11 = *(_QWORD*)(v10 + 24) + 16i64;
	if (v11 < *(_QWORD*)(v10 + 16))
		v8 = (_DWORD*)(*(_QWORD*)(v10 + 24) + 16i64);
	v12 = v8[2];
	v13 = v12 && (v12 != 1 || *v8);
	v14 = v13;
	v115 = v13;
	v15 = sub_1405BE150(v11, v9);
	v17 = *(_QWORD*)(qword_140C65898 + 5792);
	v18 = v15;
	v19 = 0;
	if (v17)
	{
		v20 = *(_QWORD*)(qword_140C65898 + 5784);
		v21 = 0i64;
		while (*(_DWORD*)(*(_QWORD*)(v20 + 8 * v21) + 8i64) != v16)
		{
			v21 = ++v19;
			if (v19 >= v17)
				goto LABEL_18;
		}
		v22 = *(_QWORD*)(v20 + 8i64 * v19);
	}
	else
	{
	LABEL_18:
		v22 = 0i64;
	}
	v99 = v22;
	if (!v18)
		return 0i64;
	v24 = *(_QWORD*)(a1 + 32);
	v107 = off_140B569F0;
	v25 = *(_QWORD*)(v24 + 112);
	v109 = a1;
	v110 = 1;
	if (*(_QWORD*)(v24 + 120) >= v25)
		sub_14005E2C0(a1);
	v26 = *(_QWORD*)(a1 + 16);
	v27 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v26 + 8) = 5;
	*(_QWORD*)v26 = v27;
	*(_QWORD*)(a1 + 16) += 16i64;
	v108 = sub_1400578C0(a1);
	v116 = 0;
	v28 = v18 - v22 + 504;
	v29 = (_DWORD*)(v22 + 24);
	v100 = v28;
	do
	{
		v30 = *(_DWORD*)((char*)v29 + v28);
		if (!v30)
			break;
		if (qword_140C63840)
		{
			v31 = qword_140C63840(off_140A6DD90, v30, qword_140C63858);
		}
		else
		{
			if (dword_140C64D74 || (int)sub_140245DE0() < 0)
				break;
			v31 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B08 + 24i64))(qword_140C63B08, v30);
		}
		v32 = v31;
		if (!v31)
			break;
		v33 = sub_14018B280(16i64, 0);
		v104 = v33;
		v105 = v33;
		v106 = v33 + 4;
		if (v33)
			*(_WORD*)v33 = 0;
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v34 = *(_QWORD*)(a1 + 16);
		v35 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v34 + 8) = 5;
		*(_QWORD*)v34 = v35;
		*(_QWORD*)(a1 + 16) += 16i64;
		v117 = sub_1400578C0(a1);
		v36 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v117);
		v37 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v37 = *v36;
		*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v38, L"nPointsRequired", v39);
		*(_QWORD*)(a1 + 16) -= 16i64;
		if (v14)
		{
			if (!v22 || (v40 = &unk_1409F3134, *(_DWORD*)(v22 + 20) < *(_DWORD*)(v32 + 8)))
				v40 = &unk_1409F3114;
			v41 = sub_14018EFA0(&v101, (__int64)L"%s%d:", v40, *(unsigned int*)(v32 + 8));
			if (v41 != &v103)
				sub_14001C480((__int64)&v103, (int*)v41[1], (int*)v41[2]);
			if (v102)
				sub_14018B900(v102, 0);
		}
		v42 = *(_QWORD*)(a1 + 32);
		v113 = a1;
		v111 = off_140B569F0;
		v43 = *(_QWORD*)(v42 + 112);
		v114 = 1;
		if (*(_QWORD*)(v42 + 120) >= v43)
			sub_14005E2C0(a1);
		v44 = *(_QWORD*)(a1 + 16);
		v45 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v44 + 8) = 5;
		*(_QWORD*)v44 = v45;
		*(_QWORD*)(a1 + 16) += 16i64;
		v112 = sub_1400578C0(a1);
		v46 = (unsigned int*)(v32 + 16);
		v47 = 5i64;
		do
		{
			v48 = *v46;
			if (!*v46)
				goto LABEL_74;
			if (qword_140C63840)
			{
				v49 = qword_140C63840(off_140A6DBD0, v48, qword_140C63858);
			}
			else
			{
				if (dword_140C65174 || (int)sub_140243BE0() < 0)
					goto LABEL_74;
				v49 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E30 + 24i64))(qword_140C64E30, v48);
			}
			v50 = v49;
			if (v49)
			{
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v51 = *(_QWORD*)(a1 + 16);
				v52 = sub_14005C1B0(a1, 0, 0);
				*(_DWORD*)(v51 + 8) = 5;
				*(_QWORD*)v51 = v52;
				*(_QWORD*)(a1 + 16) += 16i64;
				v53 = sub_1400578C0(a1);
				v54 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v53);
				v55 = *(_QWORD*)(a1 + 16);
				*(_QWORD*)v55 = *v54;
				*(_DWORD*)(v55 + 8) = *((_DWORD*)v54 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				sub_1400F06F0(a1, v56, L"nTalentId", v57);
				*(_QWORD*)(a1 + 16) -= 16i64;
				v58 = v99 && *v29 == *v46;
				v59 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v53);
				*(_QWORD*)v60 = *v59;
				*(_DWORD*)(v60 + 8) = *((_DWORD*)v59 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				v61 = (unsigned __int64*)sub_14018F0E0(&v101, L"bActive")[1];
				if (v61)
				{
					v62 = -1i64;
					do
						++v62;
					while (*((_BYTE*)v61 + v62));
					sub_140058710(a1, v61, v62);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					*(_QWORD*)(a1 + 16) += 16i64;
				}
				if (v102)
					sub_14018B900(v102, 0);
				v63 = *(BOOL**)(a1 + 16);
				v63[2] = 1;
				*v63 = v58;
				*(_QWORD*)(a1 + 16) += 16i64;
				v64 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v64, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				v65 = *(_QWORD*)(a1 + 16) - 48i64;
				*(_QWORD*)(a1 + 16) = v65;
				v66 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v53);
				*(_QWORD*)v65 = *v66;
				*(_DWORD*)(v65 + 8) = *((_DWORD*)v66 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				sub_1400F0870(a1, v67, L"strIcon", v68);
				*(_QWORD*)(a1 + 16) -= 16i64;
				sub_14034BDD0(v69, *(_DWORD*)(v50 + 24));
				v70 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v53);
				v71 = *(_QWORD*)(a1 + 16);
				*(_QWORD*)v71 = *v70;
				*(_DWORD*)(v71 + 8) = *((_DWORD*)v70 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				sub_1400F0870(a1, v72, L"strName", v73);
				*(_QWORD*)(a1 + 16) -= 16i64;
				sub_14034BDD0(v74, *(_DWORD*)(v50 + 28));
				v75 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v53);
				v76 = *(_QWORD*)(a1 + 16);
				*(_QWORD*)v76 = *v75;
				*(_DWORD*)(v76 + 8) = *((_DWORD*)v75 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				sub_1400F0870(a1, v77, L"strTooltip", v78);
				*(_QWORD*)(a1 + 16) -= 16i64;
				sub_1400FB1D0((__int64)&v111);
				if (v115)
				{
					if (!v99 || (v80 = &unk_1409F30EC, *v29 != *v46))
						v80 = &unk_1409F30BC;
					v81 = sub_14018EFA0(&v101, (__int64)L"  %s%d", v80, *v46);
					sub_14001C310(&v103, (int*)v81[1], (int*)v81[2]);
					if (v102)
						sub_14018B900(v102, 0);
				}
				sub_1400579E0(a1, v79, v53);
			}
		LABEL_74:
			++v46;
			--v47;
		} while (v47);
		v82 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v117);
		v83 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v83 = *v82;
		*(_DWORD*)(v83 + 8) = *((_DWORD*)v82 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		v84 = (unsigned __int64*)sub_14018F0E0(&v101, L"tTalents")[1];
		if (v84)
		{
			v85 = -1i64;
			do
				++v85;
			while (*((_BYTE*)v84 + v85));
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v86 = *(_QWORD*)(a1 + 16);
			v87 = sub_140062650(a1, v84, v85);
			*(_DWORD*)(v86 + 8) = 4;
			*(_QWORD*)v86 = v87;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		if (v102)
			sub_14018B900(v102, 0);
		v88 = v112;
		v89 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v112);
		v90 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v90 = *v89;
		*(_DWORD*)(v90 + 8) = *((_DWORD*)v89 + 2);
		v91 = *(_QWORD*)(a1 + 16) + 16i64;
		*(_QWORD*)(a1 + 16) = v91;
		sub_14005EA50(a1, (__int64*)(v91 - 48), (int*)(v91 - 32), (unsigned int*)(v91 - 16));
		*(_QWORD*)(a1 + 16) -= 48i64;
		sub_1400FB1D0((__int64)&v107);
		v93 = v104;
		if (v115)
			sub_140003890((__int64*)qword_140C658A0, 3u, 0i64, v104, 0, 0i64);
		if (v113)
			sub_1400579E0(v113, v92, v88);
		sub_1400579E0(a1, v92, v117);
		if (v93)
			sub_14018B900((__int64)v93, 0);
		v22 = v99;
		v14 = v115;
		++v29;
		++v116;
		v28 = v100;
	} while (v116 < 0xA);
	v94 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v109 + 32) + 160i64), v108);
	v96 = *(_QWORD*)(v95 + 16);
	v97 = v108;
	*(_QWORD*)v96 = *v94;
	v98 = *((unsigned int*)v94 + 2);
	*(_DWORD*)(v96 + 8) = v98;
	*(_QWORD*)(v95 + 16) += 16i64;
	sub_1400579E0(v95, v98, v97);
	return 1i64;
}
// 14059A158: variable 'v16' is possibly undefined
// 14059A2F7: variable 'v38' is possibly undefined
// 14059A2F7: variable 'v39' is possibly undefined
// 14059A49C: variable 'v56' is possibly undefined
// 14059A49C: variable 'v57' is possibly undefined
// 14059A4E9: variable 'v60' is possibly undefined
// 14059A5E6: variable 'v67' is possibly undefined
// 14059A5E6: variable 'v68' is possibly undefined
// 14059A5F4: variable 'v69' is possibly undefined
// 14059A635: variable 'v72' is possibly undefined
// 14059A635: variable 'v73' is possibly undefined
// 14059A643: variable 'v74' is possibly undefined
// 14059A684: variable 'v77' is possibly undefined
// 14059A684: variable 'v78' is possibly undefined
// 14059A6F9: variable 'v79' is possibly undefined
// 14059A854: variable 'v92' is possibly undefined
// 14059A8AC: variable 'v95' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6DBD0: using guessed type wchar_t *off_140A6DBD0[2];
// 140A6DD90: using guessed type wchar_t *off_140A6DD90[2];
// 140B1FB70: using guessed type wchar_t aNpointsrequire[16];
// 140B1FD40: using guessed type wchar_t aTtalents[9];
// 140B1FD58: using guessed type wchar_t aSD_9[7];
// 140B1FD68: using guessed type wchar_t aStricon_1[8];
// 140B1FD78: using guessed type wchar_t aBactive[8];
// 140B1FD88: using guessed type wchar_t aStrtooltip[11];
// 140B1FDA0: using guessed type wchar_t aStrname_36[8];
// 140B1FDB0: using guessed type wchar_t aNtalentid[10];
// 140B1FDC8: using guessed type wchar_t aSD_8[6];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B08: using guessed type __int64 qword_140C63B08;
// 140C64D74: using guessed type int dword_140C64D74;
// 140C64E30: using guessed type __int64 qword_140C64E30;
// 140C65174: using guessed type int dword_140C65174;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

