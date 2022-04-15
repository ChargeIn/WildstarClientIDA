//----- (00000001405A5010) ----------------------------------------------------
__int64 __fastcall sub_1405A5010(__int64 a1, _DWORD* a2)
{
	__int64 v2; // r10
	__int64 v4; // rbx
	unsigned int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rbp
	BOOL v9; // r8d
	__int64 v10; // rax
	unsigned int v11; // ecx
	__int64 v12; // rcx
	int v13; // eax

	v2 = qword_140C65B70;
	v4 = *(_QWORD*)(qword_140C65B70 + 1992);
	if (v4)
	{
		while (*(_DWORD*)(v4 + 96) != *a2)
		{
			v4 = *(_QWORD*)(v4 + 64);
			if (!v4)
				goto LABEL_4;
		}
	}
	else
	{
	LABEL_4:
		v4 = 0i64;
	}
	v6 = a2[1];
	v7 = *(_QWORD*)(a1 + 120);
	if (v6)
	{
		if (!v7)
			goto LABEL_15;
		v9 = *(_QWORD*)(qword_140C65898 + 120) == v7 || *(_QWORD*)(qword_140C65898 + 25744) == v7;
		v10 = 0i64;
		if (v9)
			v10 = qword_140C65898;
		if (!v10 || (v8 = sub_1405A5B90(v10, v6)) == 0)
			LABEL_15:
		v8 = sub_1407A0FD0(v2, v6);
	}
	else
	{
		v8 = 0i64;
	}
	v11 = a2[2];
	if (v11 <= 0x14B)
		sub_140237240(v11);
	sub_1400035B0();
	if (!v8)
	{
		if (!v4)
			return 0i64;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	}
	sub_1403A12A0(a1, a2[2], v8, 1);
	v12 = *(_QWORD*)(a1 + 120);
	if (v12)
	{
		v13 = dword_140C45E40;
		if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
			v13 = *(_DWORD*)qword_140C63750;
		if (!*((_BYTE*)&dword_140C45E50 + v13) || a2[2] != 13)
			sub_14046AA00(v12, 0, 0);
	}
	if (qword_140C65B70)
		sub_140561AD0(qword_140C65B70, v4);
	return 0i64;
}
// 1405A50B2: variable 'v2' is possibly undefined
// 1405A50B2: variable 'v6' is possibly undefined
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C45E40: using guessed type int dword_140C45E40;
// 140C45E50: using guessed type int dword_140C45E50;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

