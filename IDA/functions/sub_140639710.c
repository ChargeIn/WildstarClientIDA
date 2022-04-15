//----- (0000000140639710) ----------------------------------------------------
__int64 __fastcall sub_140639710(__int64 a1, __int64 a2, int a3)
{
	unsigned __int16* v4; // rbp
	__int64 v5; // rcx
	unsigned int v7; // eax
	_QWORD* v9; // rax
	__int64 v10; // r10
	__int64 v11; // rdx
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	int v15; // r11d
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	unsigned __int16* v19; // r11
	int v20; // eax
	__int64 v21; // rbx
	_QWORD* v22; // rdi
	_QWORD* v23; // rax
	__int64 v24; // rbx
	__int64 v25; // rax
	__int64 v26; // r9
	int* v27; // rbx
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx
	_QWORD* v32; // rax
	__int64 v33; // r10
	__int64 v34; // rdx
	int v35; // r11d
	unsigned __int64 v36; // rcx
	_QWORD* v37; // rax
	__int64 v38; // r10
	__int64 v39; // rdx
	_QWORD* v40; // rax
	__int64 v41; // r10
	__int64 v42; // rdx
	int v43; // r11d
	_QWORD* v44; // rax
	__int64 v45; // r10
	__int64 v46; // rdx
	_QWORD* v47; // rax
	__int64 v48; // r10
	__int64 v49; // rdx
	int v50; // r11d
	_QWORD* v51; // rax
	__int64 v52; // r10
	__int64 v53; // rdx
	unsigned __int16* v54; // r11
	int v55; // eax
	__int64 v56; // rbx
	_QWORD* v57; // rdi
	_QWORD* v58; // rax
	__int64 v59; // rcx
	__int64 v60; // rbx
	__int64 v61; // rax
	__int64 v62; // r9
	__int64 v63; // [rsp+20h] [rbp-28h] BYREF
	__int128 v64; // [rsp+28h] [rbp-20h]

	v4 = 0i64;
	v5 = *(_QWORD*)(qword_140C65898 + 120);
	if (v5)
		v7 = *(_DWORD*)(v5 + 56);
	else
		v7 = 0;
	if (*(_DWORD*)(a1 + 24) > v7)
		return 0i64;
	if (a3 ? (*(_BYTE*)(a1 + 28) & 2) == 0 : (*(_BYTE*)(a1 + 28) & 1) == 0)
		return 0i64;
	if (*(_DWORD*)(a1 + 4) == 1)
	{
		v44 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v46 = *(_QWORD*)(v45 + 16);
		*(_QWORD*)v46 = *v44;
		*(_DWORD*)(v46 + 8) = *((_DWORD*)v44 + 2);
		*(_QWORD*)(v45 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v46, L"nRewardType", 1);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v47 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v49 = *(_QWORD*)(v48 + 16);
		*(_QWORD*)v49 = *v47;
		*(_DWORD*)(v49 + 8) = *((_DWORD*)v47 + 2);
		*(_QWORD*)(v48 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v49, L"nRewardItemType", v50);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v51 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v53 = *(_QWORD*)(v52 + 16);
		*(_QWORD*)v53 = *v51;
		*(_DWORD*)(v53 + 8) = *((_DWORD*)v51 + 2);
		*(_QWORD*)(v52 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a2 + 16), v53, L"strIcon", v54);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v55 = *(_DWORD*)(a1 + 8);
		v56 = *(unsigned int*)(a1 + 12);
		v57 = *(_QWORD**)(a2 + 16);
		LODWORD(v64) = v55;
		*(_QWORD*)((char*)&v64 + 4) = 0i64;
		HIDWORD(v64) = 0;
		v58 = (_QWORD*)sub_140059170(v57, 0x18ui64);
		v59 = (unsigned int)v64;
		*v58 = v56;
		v58[1] = v59;
		v58[2] = *((_QWORD*)&v64 + 1);
		v60 = v57[4];
		v61 = sub_140062650((__int64)v57, (unsigned __int64*)"Game.Money", 0xAui64);
		v62 = v57[2];
		v63 = v61;
		LODWORD(v64) = 4;
		sub_14005E8E0((__int64)v57, v60 + 160, (int*)&v63, v62);
		v57[2] += 16i64;
		sub_140058BF0((__int64)v57, -2);
		sub_1400FB540(a2);
		goto LABEL_21;
	}
	if (*(_DWORD*)(a1 + 4) == 2)
	{
		v27 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(a1 + 8), 0i64);
		if (!v27)
			return 0i64;
		v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v31 = *(_QWORD*)(v30 + 16);
		*(_QWORD*)v31 = *v29;
		*(_DWORD*)(v31 + 8) = *((_DWORD*)v29 + 2);
		*(_QWORD*)(v30 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v31, L"nRewardType", 1);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v34 = *(_QWORD*)(v33 + 16);
		*(_QWORD*)v34 = *v32;
		*(_DWORD*)(v34 + 8) = *((_DWORD*)v32 + 2);
		*(_QWORD*)(v33 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v34, L"nRewardItemType", v35);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		v36 = *(_QWORD*)(a1 + 16);
		if (v36 && v36 <= qword_140C3FE70)
			v4 = (unsigned __int16*)(v36 + qword_140C3FE68);
		v37 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v39 = *(_QWORD*)(v38 + 16);
		*(_QWORD*)v39 = *v37;
		*(_DWORD*)(v39 + 8) = *((_DWORD*)v37 + 2);
		*(_QWORD*)(v38 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a2 + 16), v39, L"strIcon", v4);
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		if ((unsigned int)sub_140415C70(*(_QWORD**)(a2 + 16), (__int64)v27))
		{
			sub_1400FB540(a2);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		}
		v40 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
		v42 = *(_QWORD*)(v41 + 16);
		*(_QWORD*)v42 = *v40;
		*(_DWORD*)(v42 + 8) = *((_DWORD*)v40 + 2);
		*(_QWORD*)(v41 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a2 + 16), v42, L"nCount", v43);
	LABEL_21:
		*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
		return 1i64;
	}
	if (*(_DWORD*)(a1 + 4) != 3)
		return 0i64;
	v9 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v11 = *(_QWORD*)(v10 + 16);
	*(_QWORD*)v11 = *v9;
	*(_DWORD*)(v11 + 8) = *((_DWORD*)v9 + 2);
	*(_QWORD*)(v10 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v11, L"nRewardType", 1);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v14 = *(_QWORD*)(v13 + 16);
	*(_QWORD*)v14 = *v12;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(v13 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v14, L"nRewardItemType", v15);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v18 = *(_QWORD*)(v17 + 16);
	*(_QWORD*)v18 = *v16;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v16 + 2);
	*(_QWORD*)(v17 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v18, L"strIcon", v19);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v20 = *(_DWORD*)(a1 + 8);
	v21 = *(unsigned int*)(a1 + 12);
	v22 = *(_QWORD**)(a2 + 16);
	*(_QWORD*)&v64 = 15i64;
	DWORD2(v64) = 0;
	HIDWORD(v64) = v20;
	v23 = (_QWORD*)sub_140059170(v22, 0x18ui64);
	*v23 = v21;
	v23[1] = 15i64;
	v23[2] = *((_QWORD*)&v64 + 1);
	v24 = v22[4];
	v25 = sub_140062650((__int64)v22, (unsigned __int64*)"Game.Money", 0xAui64);
	v26 = v22[2];
	v63 = v25;
	LODWORD(v64) = 4;
	sub_14005E8E0((__int64)v22, v24 + 160, (int*)&v63, v26);
	v22[2] += 16i64;
	sub_140058BF0((__int64)v22, -2);
	sub_1400FB540(a2);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	return 1i64;
}
// 140639793: variable 'v10' is possibly undefined
// 1406397E2: variable 'v13' is possibly undefined
// 140639805: variable 'v15' is possibly undefined
// 14063984B: variable 'v17' is possibly undefined
// 14063986E: variable 'v19' is possibly undefined
// 14063995E: variable 'v30' is possibly undefined
// 1406399AD: variable 'v33' is possibly undefined
// 1406399D0: variable 'v35' is possibly undefined
// 140639A11: variable 'v38' is possibly undefined
// 140639A85: variable 'v41' is possibly undefined
// 140639AA8: variable 'v43' is possibly undefined
// 140639AE7: variable 'v45' is possibly undefined
// 140639B36: variable 'v48' is possibly undefined
// 140639B59: variable 'v50' is possibly undefined
// 140639B9F: variable 'v52' is possibly undefined
// 140639BC2: variable 'v54' is possibly undefined
// 140B288F8: using guessed type wchar_t aNrewarditemtyp_1[16];
// 140B28918: using guessed type wchar_t aStricon_5[8];
// 140B28940: using guessed type wchar_t aNrewardtype_1[12];
// 140B28B40: using guessed type wchar_t aNcount_31[7];
// 140B28B50: using guessed type wchar_t aNrewarditemtyp_0[16];
// 140B28B70: using guessed type wchar_t aStricon_4[8];
// 140B28B98: using guessed type wchar_t aNrewardtype_0[12];
// 140B28BB0: using guessed type wchar_t aNrewarditemtyp[16];
// 140B28BD0: using guessed type wchar_t aStricon_3[8];
// 140B28BF8: using guessed type wchar_t aNrewardtype[12];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

