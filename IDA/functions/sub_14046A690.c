//----- (000000014046A690) ----------------------------------------------------
__int64 __fastcall sub_14046A690(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v6; // r14
	__int64 v7; // rax
	int v8; // edx
	__int64 v9; // r9
	__int64 v10; // rax

	if (*(_QWORD*)(qword_140C65898 + 120) == a1)
	{
		v6 = *(_QWORD*)(qword_140C65898 + 28048);
		if (v6)
		{
			v7 = *(_QWORD*)(qword_140C65898 + 25744);
			if (v7 && (v8 = *(_DWORD*)(v7 + 264)) != 0)
				v9 = sub_1403D90D0(qword_140C65898, v8);
			else
				v9 = 0i64;
			a2 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD*)v6 + 16i64))(
				v6,
				a2,
				a1,
				v9,
				0i64);
		}
	}
	v10 = *(_QWORD*)(a1 + 5640);
	if (!v10)
		return 0i64;
	while (a3 && *(_DWORD*)(a3 + 8) == *(_DWORD*)(v10 + 4) && *(_DWORD*)(a3 + 4) == *(_DWORD*)(v10 + 12)
		|| *(_DWORD*)(v10 + 8) != a2 && *(_DWORD*)(v10 + 4))
	{
		v10 = *(_QWORD*)(v10 + 136);
		if (!v10)
			return 0i64;
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

