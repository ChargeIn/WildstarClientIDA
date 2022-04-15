//----- (00000001403B4560) ----------------------------------------------------
__int64 __fastcall sub_1403B4560(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
	__int64 result; // rax
	__int64 v9; // rcx
	int v10; // eax
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rax
	__int64 v14; // rcx

	if (a3 == a4 || !a4)
		return 0i64;
	if ((unsigned int)sub_14045A950(a3, *(_DWORD*)(a4 + 8)) != 2)
	{
		if (a5 && (*(_DWORD*)(a2 + 28388) != 3 || *(_DWORD*)(a4 + 8) != *(_DWORD*)(a2 + 28384)))
		{
			result = 99i64;
			if ((*(_DWORD*)(*(_QWORD*)(a1 + 112) + 268i64) & 0x4000000) != 0)
				return 0i64;
			return result;
		}
		if (!sub_1403B48B0(a4))
			return 322i64;
		v14 = *(_QWORD*)(a2 + 120);
		if (v14 && sub_1403B48B0(v14))
		{
		LABEL_7:
			v9 = *(_QWORD*)(a1 + 112);
			v10 = *(_DWORD*)(v9 + 272);
			if ((v10 & 0x10) == 0 && (*(_DWORD*)(v9 + 268) & 0x4000000) != 0 && (v10 & 1) == 0)
				return 99i64;
			return 0i64;
		}
		return 323i64;
	}
	if (*(_DWORD*)(a2 + 28388) == 3 && *(_DWORD*)(a4 + 8) == *(_DWORD*)(a2 + 28384))
		goto LABEL_7;
	if (sub_1403B48B0(a4))
	{
		v11 = *(_QWORD*)(a2 + 120);
		if (!v11 || !sub_1403B48B0(v11))
		{
			v12 = *(_QWORD*)(qword_140C65898 + 29272);
			if (!v12 || !*(_DWORD*)(v12 + 20))
				return 323i64;
		}
	}
	v13 = *(_QWORD*)(a1 + 112);
	if ((*(_BYTE*)(v13 + 272) & 0x10) != 0 || *(int*)(v13 + 268) < 0)
		return 0i64;
	return 99i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

