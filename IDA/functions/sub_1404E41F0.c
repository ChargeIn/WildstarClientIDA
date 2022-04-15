//----- (00000001404E41F0) ----------------------------------------------------
__int64 __fastcall sub_1404E41F0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	__int64 v5; // rdi
	_QWORD* v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdx
	int v9; // r11d
	__int64 v10; // rcx
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	unsigned __int16* v14; // r11
	__int64 v15; // rcx
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	unsigned __int16* v19; // r11
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	int v23; // r11d
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	int v27; // r11d
	_QWORD* v28; // rax
	__int64 v29; // r10
	__int64 v30; // rdx
	unsigned __int16* v31; // r11

	if (!*(_DWORD*)(a2 + 12))
		return 0i64;
	v4 = sub_1401FE020(*(_DWORD*)(a2 + 8));
	v5 = v4;
	if (!v4 || (*(_BYTE*)(v4 + 8) & 2) != 0)
		return 0i64;
	v6 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v8 = *(_QWORD*)(v7 + 16);
	*(_QWORD*)v8 = *v6;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v6 + 2);
	*(_QWORD*)(v7 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v8, L"nId", v9);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	sub_14034BDD0(v10, *(_DWORD*)(v5 + 20));
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v13 = *(_QWORD*)(v12 + 16);
	*(_QWORD*)v13 = *v11;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(v12 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a1 + 16), v13, L"strName", v14);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	sub_14034BDD0(v15, *(_DWORD*)(v5 + 24));
	v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v18 = *(_QWORD*)(v17 + 16);
	*(_QWORD*)v18 = *v16;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v16 + 2);
	*(_QWORD*)(v17 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a1 + 16), v18, L"strDescription", v19);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v22 = *(_QWORD*)(v21 + 16);
	*(_QWORD*)v22 = *v20;
	*(_DWORD*)(v22 + 8) = *((_DWORD*)v20 + 2);
	*(_QWORD*)(v21 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v22, L"nCount", v23);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v26 = *(_QWORD*)(v25 + 16);
	*(_QWORD*)v26 = *v24;
	*(_DWORD*)(v26 + 8) = *((_DWORD*)v24 + 2);
	*(_QWORD*)(v25 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v26, L"nMaxCount", v27);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v30 = *(_QWORD*)(v29 + 16);
	*(_QWORD*)v30 = *v28;
	*(_DWORD*)(v30 + 8) = *((_DWORD*)v28 + 2);
	*(_QWORD*)(v29 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a1 + 16), v30, L"icon", v31);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	return 1i64;
}
// 1404E4250: variable 'v7' is possibly undefined
// 1404E4273: variable 'v9' is possibly undefined
// 1404E4284: variable 'v10' is possibly undefined
// 1404E42A3: variable 'v12' is possibly undefined
// 1404E42C6: variable 'v14' is possibly undefined
// 1404E42D7: variable 'v15' is possibly undefined
// 1404E42F6: variable 'v17' is possibly undefined
// 1404E4319: variable 'v19' is possibly undefined
// 1404E4342: variable 'v21' is possibly undefined
// 1404E4365: variable 'v23' is possibly undefined
// 1404E438E: variable 'v25' is possibly undefined
// 1404E43B1: variable 'v27' is possibly undefined
// 1404E43F7: variable 'v29' is possibly undefined
// 1404E441A: variable 'v31' is possibly undefined
// 140B0B940: using guessed type wchar_t aNid_8[4];
// 140B0B948: using guessed type wchar_t aStrname_18[8];
// 140B0BBD0: using guessed type wchar_t aStrdescription_2[15];
// 140B0BBF0: using guessed type wchar_t aNcount_16[7];
// 140B0BC00: using guessed type wchar_t aNmaxcount[10];
// 140B0BC18: using guessed type wchar_t aIcon_6[5];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

