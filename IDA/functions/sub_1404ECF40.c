//----- (00000001404ECF40) ----------------------------------------------------
__int64 __fastcall sub_1404ECF40(__int64 a1)
{
	int v1; // esi
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // eax
	__int64 v9; // r14
	__int64 result; // rax
	__int64 v11; // rcx
	unsigned __int64 v12; // rax
	__int64 v13; // rdi
	__int64 v14; // rax
	int v15; // eax
	__int64 v16; // rcx
	int v17; // ebp
	_QWORD* v18; // rax
	__int64 v19; // rdx
	int v20; // r10d
	_QWORD* v21; // rax
	__int64 v22; // r10
	__int64 v23; // rdx
	unsigned __int16* v24; // r11
	_QWORD* v25; // rax
	__int64 v26; // r10
	__int64 v27; // rdx
	unsigned __int16* v28; // r11
	int v29; // ecx
	_QWORD* v30; // rax
	__int64 v31; // r10
	__int64 v32; // rdx
	_QWORD* v33; // rax
	__int64 v34; // r10
	__int64 v35; // rdx
	int v36; // r11d
	_QWORD* v37; // rax
	__int64 v38; // r11
	__int64 v39; // rdx
	int v40; // r10d
	__int64 v41; // rcx
	unsigned __int64 v42; // rax
	__int64 v43; // rdi
	__int64 v44; // rax
	int v45; // eax
	__int64 v46; // rdx
	_QWORD* v47; // rax
	__int64 v48; // rdx
	__int64 v49; // rdx
	__int64(__fastcall * *v50)(); // [rsp+20h] [rbp-58h] BYREF
	int v51; // [rsp+28h] [rbp-50h]
	__int64 v52; // [rsp+30h] [rbp-48h]
	int v53; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v54)(); // [rsp+40h] [rbp-38h] BYREF
	int v55; // [rsp+48h] [rbp-30h]
	__int64 v56; // [rsp+50h] [rbp-28h]
	int v57; // [rsp+58h] [rbp-20h]

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = sub_14044F8C0(qword_140C65908, v8);
	if (v9)
	{
		v11 = *(_QWORD*)(a1 + 32);
		v12 = *(_QWORD*)(v11 + 112);
		v54 = off_140B569F0;
		v56 = a1;
		v57 = 1;
		if (*(_QWORD*)(v11 + 120) >= v12)
			sub_14005E2C0(a1);
		v13 = *(_QWORD*)(a1 + 16);
		v14 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v13 + 8) = 5;
		*(_QWORD*)v13 = v14;
		*(_QWORD*)(a1 + 16) += 16i64;
		v15 = sub_1400578C0(a1);
		v16 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		v17 = v15;
		v55 = v15;
		v18 = sub_14005C3C0(v16, v15);
		v19 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v19 = *v18;
		*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v19, L"nId", v20);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v17);
		*(_QWORD*)v22 = *v21;
		*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F0870(a1, v23, L"strName", v24);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v17);
		*(_QWORD*)v26 = *v25;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F0870(a1, v27, L"strDescription", v28);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v29 = -1;
		if (*(_DWORD*)(v9 + 72) != -1)
			v29 = *(_DWORD*)(v9 + 72);
		if (v29)
			v1 = v29;
		v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v17);
		*(_QWORD*)v31 = *v30;
		*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v32, L"nNumVariants", v1);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v17);
		*(_QWORD*)v34 = *v33;
		*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v35, L"nDisplayInfoOverride", v36);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v37 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v17);
		*(_QWORD*)v38 = *v37;
		*(_DWORD*)(v38 + 8) = *((_DWORD*)v37 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F06F0(a1, v39, L"nFlags", v40);
		*(_QWORD*)(a1 + 16) -= 16i64;
		v41 = *(_QWORD*)(a1 + 32);
		v50 = off_140B569F0;
		v42 = *(_QWORD*)(v41 + 112);
		v52 = a1;
		v53 = 1;
		if (*(_QWORD*)(v41 + 120) >= v42)
			sub_14005E2C0(a1);
		v43 = *(_QWORD*)(a1 + 16);
		v44 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v43 + 8) = 5;
		*(_QWORD*)v43 = v44;
		*(_QWORD*)(a1 + 16) += 16i64;
		v45 = sub_1400578C0(a1);
		v46 = *(unsigned int*)(v9 + 8);
		LODWORD(v43) = v45;
		v51 = v45;
		sub_1400FAFE0((__int64)&v50, v46, (__int64)off_140C389F8, 4ui64);
		sub_1400FB2A0((__int64)&v54, (__int64)L"tFlags", v43);
		v47 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v17);
		v48 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v48 = *v47;
		*(_DWORD*)(v48 + 8) = *((_DWORD*)v47 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400579E0(a1, v48, v43);
		sub_1400579E0(a1, v49, v17);
		return 1i64;
	}
	else
	{
		result = 1i64;
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	return result;
}
// 1404ED07F: variable 'v20' is possibly undefined
// 1404ED0B0: variable 'v22' is possibly undefined
// 1404ED0C2: variable 'v23' is possibly undefined
// 1404ED0C2: variable 'v24' is possibly undefined
// 1404ED0F3: variable 'v26' is possibly undefined
// 1404ED105: variable 'v27' is possibly undefined
// 1404ED105: variable 'v28' is possibly undefined
// 1404ED143: variable 'v31' is possibly undefined
// 1404ED155: variable 'v32' is possibly undefined
// 1404ED186: variable 'v34' is possibly undefined
// 1404ED198: variable 'v35' is possibly undefined
// 1404ED198: variable 'v36' is possibly undefined
// 1404ED1C9: variable 'v38' is possibly undefined
// 1404ED1DB: variable 'v39' is possibly undefined
// 1404ED1DB: variable 'v40' is possibly undefined
// 1404ED2AA: variable 'v49' is possibly undefined
// 140B0D568: using guessed type wchar_t aNdisplayinfoov[21];
// 140B0D598: using guessed type wchar_t aNflags[7];
// 140B0D5A8: using guessed type wchar_t aTflags[7];
// 140B0D5D8: using guessed type wchar_t aNid_12[4];
// 140B0D5E0: using guessed type wchar_t aStrname_22[8];
// 140B0D5F0: using guessed type wchar_t aStrdescription_7[15];
// 140B0D610: using guessed type wchar_t aNnumvariants[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C389F8: using guessed type wchar_t *off_140C389F8[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65908: using guessed type __int64 qword_140C65908;

