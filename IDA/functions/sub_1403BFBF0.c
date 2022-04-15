//----- (00000001403BFBF0) ----------------------------------------------------
__int64 __fastcall sub_1403BFBF0(_QWORD* a1, unsigned int a2)
{
	__int64 v2; // rax
	unsigned int v3; // ebx
	BOOL v5; // r8d
	__int64 v6; // rcx
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	int v11; // r8d
	__int64 v12; // rax
	unsigned int v13; // ebx
	__int64 v14; // rsi
	__int64 v15; // rax
	int v16; // edx
	__int64 v17; // r9
	__int64 v18; // [rsp+40h] [rbp+8h]

	v2 = a1[3218];
	v3 = a2;
	if (!a2)
		return 0i64;
	if (!v2)
	{
	LABEL_11:
		if (sub_1407A0FD0(qword_140C65B70, a2))
			goto LABEL_12;
		return 0i64;
	}
	v5 = *(_QWORD*)(qword_140C65898 + 120) == v2 || *(_QWORD*)(qword_140C65898 + 25744) == v2;
	v6 = 0i64;
	if (v5)
		v6 = qword_140C65898;
	if (!v6 || !sub_1405A5B90(v6, a2))
	{
		a2 = v3;
		goto LABEL_11;
	}
LABEL_12:
	v7 = a1[689];
	v8 = v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < v3)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == v7 || (v18 = v8, v3 < *(_DWORD*)(v8 + 32)))
		v18 = a1[689];
	if (v18 == v7)
		return v3;
	v11 = **(_DWORD**)(v18 + 40);
	if (v11 == -1)
		return v3;
	v12 = sub_140564F40(qword_140C65B70, v3, v11);
	if (!v12)
		return 0i64;
	v13 = *(_DWORD*)(v12 + 4);
	v14 = a1[3506];
	if (v14)
	{
		v15 = a1[3218];
		if (v15 && (v16 = *(_DWORD*)(v15 + 264)) != 0)
			v17 = sub_1403D90D0((__int64)a1, v16);
		else
			v17 = 0i64;
		return (*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD*)v14 + 16i64))(
			v14,
			v13,
			a1[15],
			v17,
			0i64);
	}
	return v13;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

