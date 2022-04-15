//----- (000000014046A5F0) ----------------------------------------------------
__int64 __fastcall sub_14046A5F0(__int64 a1, unsigned int a2)
{
	__int64 v4; // rsi
	__int64 v5; // rax
	int v6; // edx
	__int64 v7; // r9
	__int64 result; // rax

	if (*(_QWORD*)(qword_140C65898 + 120) == a1)
	{
		v4 = *(_QWORD*)(qword_140C65898 + 28048);
		if (v4)
		{
			v5 = *(_QWORD*)(qword_140C65898 + 25744);
			if (v5 && (v6 = *(_DWORD*)(v5 + 264)) != 0)
				v7 = sub_1403D90D0(qword_140C65898, v6);
			else
				v7 = 0i64;
			a2 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD*)v4 + 16i64))(
				v4,
				a2,
				a1,
				v7,
				0i64);
		}
	}
	result = *(_QWORD*)(a1 + 5640);
	if (!result)
		return 0i64;
	while (*(_DWORD*)(result + 4) != 1 || *(_DWORD*)(result + 8) != a2)
	{
		result = *(_QWORD*)(result + 136);
		if (!result)
			return 0i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

