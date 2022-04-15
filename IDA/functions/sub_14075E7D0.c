//----- (000000014075E7D0) ----------------------------------------------------
__int64 __fastcall sub_14075E7D0(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64* v3; // r15
	_DWORD* v4; // rax
	int v5; // esi
	_QWORD* v7; // rdi
	_DWORD* v8; // rax
	_DWORD* v9; // rax
	unsigned __int64 v10; // rdx
	_DWORD* v11; // rcx
	int v12; // eax
	_QWORD* v13; // r10
	_QWORD* v14; // rax
	__int64 v15; // r10
	__int64 v16; // rdx
	int v17; // r11d
	int v18; // ecx
	_DWORD* v19; // rax
	int v20; // r12d
	_QWORD* v21; // rax
	int v22; // r11d
	__int64 v23; // r10
	__int64 v24; // rdx
	_DWORD* v25; // rax
	_DWORD* v26; // rax
	__int64 v27; // rcx
	const char* v28; // r9
	const char* v29; // rax
	unsigned int v30; // ecx
	unsigned __int64 v31; // rdx
	__int64 v32; // r8
	__int64 v33; // rax
	__int64 v34; // rcx
	__int64 v35; // rax
	unsigned int v36; // ecx
	__int64 v37; // r8
	__int64 v38; // rax
	__int64 v39; // rcx
	_QWORD* v40; // rax
	char* v41; // rdx
	_DWORD* v42; // rax
	__int64 v43; // rcx
	unsigned __int64 v44; // rax
	__int64 v45; // rbx
	__int64 v46; // rax
	int v47; // ebx
	unsigned __int16* v48; // rax
	__int64 v49; // rax
	int v50; // eax
	unsigned int v51; // r8d
	__int64* v52; // rcx
	__int64 v53; // r13
	_QWORD* v54; // rax
	__int64 v55; // rdx
	unsigned int** v56; // r13
	__int64 v57; // r10
	int v58; // eax
	unsigned int* v59; // r12
	int* v60; // rax
	int* v61; // rax
	__int64 v62; // r14
	int v63; // ebx
	unsigned __int16* v64; // r14
	unsigned int v65; // edx
	int* v66; // rax
	__int64 v67; // rbx
	__int64 v68; // rax
	_QWORD* v69; // rax
	__int64 v70; // rdx
	int v71; // r10d
	_QWORD* v72; // rax
	__int64 v73; // r10
	__int64 v74; // rdx
	_QWORD* v75; // rax
	__int64 v76; // r11
	__int64 v77; // rdx
	unsigned __int16* v78; // r10
	__int64 v79; // rdx
	_QWORD* v80; // rax
	int v81; // r10d
	_DWORD* v82; // rax
	int v84; // [rsp+48h] [rbp-C0h]
	__int64 v85; // [rsp+50h] [rbp-B8h]
	int v86; // [rsp+58h] [rbp-B0h] BYREF
	int v87; // [rsp+5Ch] [rbp-ACh]
	__int64(__fastcall * *v88)(); // [rsp+60h] [rbp-A8h] BYREF
	__int64 v89; // [rsp+68h] [rbp-A0h]
	_QWORD* v90; // [rsp+70h] [rbp-98h]
	LARGE_INTEGER* v91; // [rsp+78h] [rbp-90h]
	__int64(__fastcall * *v92)(); // [rsp+80h] [rbp-88h] BYREF
	__int64 v93; // [rsp+88h] [rbp-80h]
	_QWORD* v94; // [rsp+90h] [rbp-78h]
	int v95; // [rsp+98h] [rbp-70h]
	__int64 v96; // [rsp+A0h] [rbp-68h]
	__int64 v97; // [rsp+A8h] [rbp-60h]
	unsigned __int16* v98; // [rsp+B0h] [rbp-58h]
	__int64 v99; // [rsp+B8h] [rbp-50h] BYREF
	unsigned __int16* v100; // [rsp+C0h] [rbp-48h]
	__int64 v101; // [rsp+C8h] [rbp-40h]
	__int64 v102[24]; // [rsp+D8h] [rbp-30h] BYREF
	__int128 v103; // [rsp+198h] [rbp+90h]
	int* v104; // [rsp+1A8h] [rbp+A0h]
	int v105; // [rsp+1F8h] [rbp+F0h]
	unsigned int v107; // [rsp+210h] [rbp+108h]

	v3 = a1 + 2;
	v4 = (_DWORD*)(a1[3] + 16i64);
	v5 = 0;
	v7 = a1;
	if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
		v105 = 0;
	else
		v105 = sub_140056D60(a1, 2u);
	v8 = (_DWORD*)(v7[3] + 32i64);
	if ((unsigned __int64)v8 >= *v3 || v8 == dword_140A12138 || *(int*)(v7[3] + 40i64) <= 0)
		v87 = 0;
	else
		v87 = sub_140056D60(v7, 3u);
	v9 = (_DWORD*)(v7[3] + 48i64);
	if ((unsigned __int64)v9 >= *v3 || v9 == dword_140A12138 || *(int*)(v7[3] + 56i64) <= 0)
		v107 = 0;
	else
		v107 = sub_140056D60(v7, 4u);
	v90 = v7;
	LODWORD(v89) = -2;
	v88 = off_140B56A08;
	sub_1400579E0((__int64)v7, a2, -2);
	v10 = v7[2];
	v11 = dword_140A12138;
	if (v7[3] + 64i64 < v10)
		v11 = (_DWORD*)(v90[3] + 64i64);
	*(_QWORD*)v10 = *(_QWORD*)v11;
	*(_DWORD*)(v10 + 8) = v11[2];
	v7[2] += 16i64;
	v12 = sub_1400578C0((__int64)v90);
	v13 = v90;
	LODWORD(v89) = v12;
	if (!v90 || v12 == -2)
		goto LABEL_25;
	v14 = sub_14005C3C0(*(_QWORD*)(v90[4] + 160i64), v12);
	v16 = *(_QWORD*)(v15 + 16);
	*(_QWORD*)v16 = *v14;
	v18 = v17;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v14 + 2);
	*(_QWORD*)(v15 + 16) += 16i64;
	v19 = (_DWORD*)(v90[2] - 16i64);
	if (v19 != dword_140A12138)
		v18 = v19[2];
	v90[2] = v19;
	v13 = v90;
	if (v18 != 6)
	{
		v12 = v89;
	LABEL_25:
		v20 = 0;
		if (v13 && v12 != -2)
		{
			v21 = sub_14005C3C0(*(_QWORD*)(v13[4] + 160i64), v12);
			v24 = *(_QWORD*)(v23 + 16);
			*(_QWORD*)v24 = *v21;
			*(_DWORD*)(v24 + 8) = *((_DWORD*)v21 + 2);
			*(_QWORD*)(v23 + 16) += 16i64;
			v25 = (_DWORD*)(v90[2] - 16i64);
			if (v25 != dword_140A12138)
				v22 = v25[2];
			v90[2] = v25;
			if (v22 > 0)
			{
				v26 = (_DWORD*)(v7[3] + 64i64);
				if ((unsigned __int64)v26 >= *v3
					|| v26 == dword_140A12138
					|| (v27 = *(int*)(v7[3] + 72i64), (_DWORD)v27 == -1))
				{
					v28 = aNoValue;
				}
				else
				{
					v28 = off_140A123B0[v27];
				}
				v29 = (const char*)sub_140058780((__int64)v7, (unsigned __int64*)"%s expected, got %s", aFunction_3, v28);
				sub_140056570(v7, 5u, v29);
			}
			v13 = v90;
		}
		goto LABEL_37;
	}
	v20 = 1;
LABEL_37:
	v96 = 0i64;
	v91 = 0i64;
	if (v20)
	{
		v30 = 0;
		v31 = *(_QWORD*)(qword_140C63650 + 768);
		if (v31)
		{
			v32 = *(_QWORD*)(qword_140C63650 + 760);
			v33 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v32 + 8 * v33) + 400i64) != v13)
			{
				v33 = ++v30;
				if (v30 >= v31)
					goto LABEL_42;
			}
			v34 = *(_QWORD*)(v32 + 8i64 * v30);
		}
		else
		{
		LABEL_42:
			v34 = 0i64;
		}
		v35 = v34 + 384;
		v36 = 0;
		v96 = v35;
		if (v31)
		{
			v37 = *(_QWORD*)(qword_140C63650 + 760);
			v38 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v37 + 8 * v38) + 400i64) != v7)
			{
				v38 = ++v36;
				if (v36 >= v31)
					goto LABEL_47;
			}
			v39 = *(_QWORD*)(v37 + 8i64 * v36);
		}
		else
		{
		LABEL_47:
			v39 = 0i64;
		}
		v40 = *(_QWORD**)(v39 + 2480);
		if ((_QWORD*)*v40 == v40)
			v91 = 0i64;
		else
			v91 = *(LARGE_INTEGER**)(v40[1] + 16i64);
	}
	v41 = (char*)sub_14018F0E0(&v92, word_1409F9774)[1];
	v42 = (_DWORD*)v7[3];
	if ((unsigned __int64)v42 < *v3 && v42 != dword_140A12138 && (int)v42[2] > 0)
		v41 = (char*)sub_140056BB0(v7, 1u, 0i64);
	sub_14018F2D0(&v99, v41);
	if (v93)
		sub_14018B900(v93, 0);
	v43 = v7[4];
	v94 = v7;
	v92 = off_140B569F0;
	v44 = *(_QWORD*)(v43 + 112);
	v95 = 1;
	if (*(_QWORD*)(v43 + 120) >= v44)
		sub_14005E2C0((__int64)v7);
	v45 = *v3;
	v46 = sub_14005C1B0((__int64)v7, 0, 0);
	*(_DWORD*)(v45 + 8) = 5;
	*(_QWORD*)v45 = v46;
	*v3 += 16i64;
	v47 = sub_1400578C0((__int64)v7);
	LODWORD(v93) = v47;
	v48 = 0i64;
	if ((v101 - (__int64)v100) >> 1)
		v48 = v100;
	v98 = v48;
	if ((dword_140DC4D70 & 1) == 0)
	{
		dword_140DC4D70 |= 1u;
		v49 = sub_140200220(0x447u);
		if (v49)
			v50 = *(_DWORD*)(v49 + 4);
		else
			v50 = 50;
		dword_140DC4D74 = v50;
	}
	v51 = v107;
	v84 = 0;
	if (v107)
	{
		v52 = *(__int64**)(*(_QWORD*)(a2 + 184)
			+ 8 * (v107 % (unsigned __int64)((__int64)(*(_QWORD*)(a2 + 192) - *(_QWORD*)(a2 + 184)) >> 3)));
		if (v52)
		{
			while (*((_DWORD*)v52 + 2) != v107)
			{
				v52 = (__int64*)*v52;
				if (!v52)
					goto LABEL_72;
			}
			v53 = (__int64)(v52 + 2);
		}
		else
		{
		LABEL_72:
			v53 = 0i64;
		}
	}
	else
	{
		v53 = a2 + 8;
	}
	v85 = v53;
	if (!v53)
	{
		v54 = sub_14005C3C0(*(_QWORD*)(v7[4] + 160i64), v47);
		v55 = *v3;
		*(_QWORD*)v55 = *v54;
		*(_DWORD*)(v55 + 8) = *((_DWORD*)v54 + 2);
		*v3 += 16i64;
		goto LABEL_110;
	}
	v56 = *(unsigned int***)(v53 + 8);
	v97 = v20;
	if (v56 == *(unsigned int***)(v85 + 16))
		goto LABEL_109;
	v57 = v85;
	v58 = v105;
	while (1)
	{
		v59 = *v56;
		if (v58 && v59[7] != v58)
			goto LABEL_103;
		if ((!v87 || v59[8] == v87) && (!v51 || v59[9] == v51))
			break;
	LABEL_102:
		v58 = v105;
	LABEL_103:
		if (++v56 == *(unsigned int***)(v57 + 16))
			goto LABEL_108;
	}
	sub_1400B7210((__int64)v102, (int*)L"$1n");
	v102[0] = (__int64)off_140B69230;
	v104 = 0i64;
	v103 = 0i64;
	v60 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v103 = v60;
	*((_QWORD*)&v103 + 1) = v60;
	v104 = v60 + 4;
	if (v60)
		*(_WORD*)v60 = 0;
	v61 = sub_14018B280(96i64, 0);
	v62 = (__int64)v61;
	if (v61)
	{
		v63 = v59[44];
		sub_1400B6390(v61);
		*(_QWORD*)v62 = off_140B69170;
		*(_DWORD*)(v62 + 88) = 1;
		sub_1400B6D70(v62, (__int64)L"name", v63);
	}
	else
	{
		v62 = 0i64;
	}
	sub_1400B7480((__int64)v102, (_QWORD*)v62);
	v64 = *(unsigned __int16**)(sub_1400B7660(v102) + 8);
	if (v98 && !sub_14018E5E0(v64, v98))
		goto LABEL_99;
	if (v97)
	{
		v65 = *v59;
		v86 = 0;
		v66 = sub_1400B5DF0(qword_140C658F0, v65, 0i64);
		if (!sub_1400F2AD0(v96, a3, v91[6], (__int64)&v88, "o>b", v66, &v86))
			goto LABEL_105;
		if (!v86)
		{
		LABEL_99:
			if ((_QWORD)v103)
				sub_14018B900(v103, 0);
			sub_1400B7390(v102);
			v51 = v107;
			v57 = v85;
			goto LABEL_102;
		}
	}
	if (++v84 <= dword_140DC4D74)
	{
		if (*(_QWORD*)(v7[4] + 120i64) >= *(_QWORD*)(v7[4] + 112i64))
			sub_14005E2C0((__int64)v7);
		v67 = *v3;
		v68 = sub_14005C1B0((__int64)v7, 0, 0);
		*(_DWORD*)(v67 + 8) = 5;
		*(_QWORD*)v67 = v68;
		*v3 += 16i64;
		LODWORD(v67) = sub_1400578C0((__int64)v7);
		v69 = sub_14005C3C0(*(_QWORD*)(v7[4] + 160i64), v67);
		v70 = *v3;
		*(_QWORD*)v70 = *v69;
		*(_DWORD*)(v70 + 8) = *((_DWORD*)v69 + 2);
		*v3 += 16i64;
		sub_1400F06F0((__int64)v7, v70, L"nId", v71);
		*v3 -= 16i64;
		v72 = sub_14005C3C0(*(_QWORD*)(v7[4] + 160i64), v67);
		*(_QWORD*)v73 = *v72;
		*(_DWORD*)(v73 + 8) = *((_DWORD*)v72 + 2);
		*v3 += 16i64;
		sub_1400F0870((__int64)v7, v74, L"strName", v64);
		*v3 -= 16i64;
		v75 = sub_14005C3C0(*(_QWORD*)(v7[4] + 160i64), v67);
		*(_QWORD*)v76 = *v75;
		*(_DWORD*)(v76 + 8) = *((_DWORD*)v75 + 2);
		*v3 += 16i64;
		sub_1400F0870((__int64)v7, v77, L"strIcon", v78);
		*v3 -= 16i64;
		sub_1400FB1D0((__int64)&v92);
		sub_1400579E0((__int64)v7, v79, v67);
		goto LABEL_99;
	}
LABEL_105:
	if ((_QWORD)v103)
		sub_14018B900(v103, 0);
	sub_1400B7390(v102);
LABEL_108:
	v7 = v94;
	v47 = v93;
LABEL_109:
	v80 = sub_14005C3C0(*(_QWORD*)(v7[4] + 160i64), v47);
	v55 = v7[2];
	*(_QWORD*)v55 = *v80;
	*(_DWORD*)(v55 + 8) = *((_DWORD*)v80 + 2);
	v7[2] += 16i64;
	LOBYTE(v5) = v81 > dword_140DC4D74;
LABEL_110:
	v82 = (_DWORD*)*v3;
	*v82 = v5;
	v82[2] = 1;
	*v3 += 16i64;
	if (v7)
		sub_1400579E0((__int64)v7, v55, v47);
	if (v100)
		sub_14018B900((__int64)v100, 0);
	v88 = off_140B56A08;
	if (v90)
		sub_1400579E0((__int64)v90, v55, v89);
	return 2i64;
}
// 14075EC36: conditional instruction was optimized away because rcx.8!=0
// 14075E8C1: variable 'a2' is possibly undefined
// 14075E925: variable 'v15' is possibly undefined
// 14075E932: variable 'v17' is possibly undefined
// 14075E994: variable 'v23' is possibly undefined
// 14075E9C6: variable 'v22' is possibly undefined
// 14075EE9B: variable 'v71' is possibly undefined
// 14075EEC6: variable 'v73' is possibly undefined
// 14075EED7: variable 'v74' is possibly undefined
// 14075EF2F: variable 'v76' is possibly undefined
// 14075EF40: variable 'v77' is possibly undefined
// 14075EF40: variable 'v78' is possibly undefined
// 14075EF5B: variable 'v79' is possibly undefined
// 14075EFF3: variable 'v81' is possibly undefined
// 14075F077: variable 'v55' is possibly undefined
// 1409F9774: using guessed type unsigned __int16 word_1409F9774[12];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];
// 140A13CD0: using guessed type wchar_t aName_11[5];
// 140B4CCB8: using guessed type wchar_t aStricon_20[8];
// 140B4CCC8: using guessed type wchar_t aStrname_109[8];
// 140B4CCD8: using guessed type wchar_t aNid_43[4];
// 140B4CCE0: using guessed type wchar_t a1n_18[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140B69170: using guessed type __int64 (__fastcall *off_140B69170[23])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140DC4D70: using guessed type int dword_140DC4D70;
// 140DC4D74: using guessed type int dword_140DC4D74;

