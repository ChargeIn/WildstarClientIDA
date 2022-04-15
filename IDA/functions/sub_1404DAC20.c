//----- (00000001404DAC20) ----------------------------------------------------
_BOOL8 __fastcall sub_1404DAC20(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	_BOOL8 result; // rax

	result = 1;
	if (!sub_14039E1A0(a1)
		&& (!(unsigned int)sub_14055A260((_DWORD*)(a1 + 29488)) || sub_14055A370())
		&& (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			32i64)
			|| *(_DWORD*)(a1 + 29232) != 2)
		&& (!(*(unsigned int(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 30088) + 200i64))(
			*(_QWORD*)(a1 + 30088),
			47i64)
			|| *(_DWORD*)(a1 + 29236) != 2)
		&& (!*(_DWORD*)(a1 + 28848) || !sub_1404DAF50(a1)))
	{
		v2 = *(_QWORD*)(a1 + 25744);
		if ((!v2 || !*(_DWORD*)(v2 + 5664)) && !*(_DWORD*)(a1 + 31000))
		{
			v3 = *(_QWORD*)(a1 + 29080);
			if (!v3 || !*(_DWORD*)(v3 + 80))
				return 0;
		}
	}
	return result;
}

