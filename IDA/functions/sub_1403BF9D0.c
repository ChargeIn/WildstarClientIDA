//----- (00000001403BF9D0) ----------------------------------------------------
__int64 __fastcall sub_1403BF9D0(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v3; // rbp
	int v5; // eax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rbx
	int v11; // esi
	int v12; // edi
	__int64 v13; // rax
	int v14; // edi
	__int64 v15; // rbx
	int v16; // esi
	__int64 v17; // rbx
	__int64 v18; // rax

	v3 = qword_140C65898;
	v5 = dword_140C45E80;
	if (*(_DWORD*)qword_140C63750 < dword_140C45E80)
		v5 = *(_DWORD*)qword_140C63750;
	if (!*((_BYTE*)&dword_140C45E90 + v5))
		return 0i64;
	v7 = sub_1403ACD90(qword_140C65B70, a2, *(_QWORD*)(qword_140C65898 + 120));
	if (!v7)
		return 0i64;
	v8 = *(_QWORD*)(v7 + 112);
	if (*(_DWORD*)(v8 + 24) != 7 || *(_DWORD*)(v8 + 388))
		return 0i64;
	v9 = *(_QWORD*)(v3 + 120);
	v10 = *(_QWORD*)(v9 + 5576);
	v11 = *(_DWORD*)(a3 + 112);
	v12 = *(_DWORD*)(v9 + 8);
	if (!v10)
		goto LABEL_14;
	while (1)
	{
		if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v10 + 56) + 8i64))(*(_QWORD*)(v10 + 56)) == v11)
		{
			v13 = *(_QWORD*)(v10 + 56);
			if (*(_DWORD*)(v13 + 132) == v12)
				break;
		}
		v10 = *(_QWORD*)(v10 + 24);
		if (!v10)
			goto LABEL_14;
	}
	if (!v13)
	{
	LABEL_14:
		v14 = *(_DWORD*)(a3 + 180);
		if (!v14)
			return 1i64;
		v15 = *(_QWORD*)(v3 + 120);
		v16 = *(_DWORD*)(v15 + 8);
		v17 = *(_QWORD*)(v15 + 5576);
		if (!v17)
			return 1i64;
		while (1)
		{
			if ((*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(v17 + 56) + 8i64))(*(_QWORD*)(v17 + 56)) == v14)
			{
				v18 = *(_QWORD*)(v17 + 56);
				if (*(_DWORD*)(v18 + 132) == v16)
					break;
			}
			v17 = *(_QWORD*)(v17 + 24);
			if (!v17)
				return 1i64;
		}
		if (!v18)
			return 1i64;
	}
	return 0i64;
}
// 140C45E80: using guessed type int dword_140C45E80;
// 140C45E90: using guessed type int dword_140C45E90;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

