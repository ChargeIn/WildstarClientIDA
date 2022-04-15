//----- (0000000140884740) ----------------------------------------------------
__int64 __fastcall sub_140884740(__int64 a1, __int64* a2, _DWORD* a3, char a4)
{
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 result; // rax

	*a2 = 0i64;
	*a3 = 0;
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	v8 = sub_140884A40(a1 - 120, a3);
	*a2 = v8;
	if (!v8 && (*(_BYTE*)(a1 + 74) & 2) == 0 && (sub_140884880(a1 - 120, a2, a3) || a4) && !*a2)
	{
		do
		{
			if ((*(_BYTE*)(a1 + 74) & 2) != 0 || (*(_BYTE*)(a1 - 3) & 0x20) == 0 && !*(_DWORD*)(a1 + 36))
				break;
			sub_140889400(a1 - 120);
			LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
			sub_140889590(*(_QWORD*)(a1 - 24), a1 - 120);
			EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
			v9 = sub_140884A40(a1 - 120, a3);
			*a2 = v9;
		} while (!v9);
	}
	LeaveCriticalSection((LPCRITICAL_SECTION)(a1 - 72));
	if ((*(_BYTE*)(a1 + 74) & 2) != 0)
		return 2i64;
	if (*a2)
	{
		if ((*(_BYTE*)(a1 - 3) & 4) == 0)
			return 45i64;
		result = 17i64;
		if (*(_QWORD*)(a1 + 8) < **(_QWORD**)(a1 - 80))
			return 45i64;
	}
	else if ((*(_BYTE*)(a1 - 3) & 4) != 0 && *(_QWORD*)(a1 + 8) >= **(_QWORD**)(a1 - 80))
	{
		return 17i64;
	}
	else
	{
		return 46i64;
	}
	return result;
}

