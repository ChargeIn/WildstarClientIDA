//----- (000000014029C330) ----------------------------------------------------
_BOOL8 __fastcall sub_14029C330(__int64 a1)
{
	signed __int32 v2; // r8d
	__int64 v4; // rcx
	int v5; // eax
	signed __int32 v6; // ecx
	int v7; // edi
	__int64 v8; // rcx

	if (!*(_QWORD*)(a1 + 80))
		return 1i64;
	v2 = *(_DWORD*)(a1 + 72);
	if (!v2)
		return 1i64;
	while (v2 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 72), v2 + 1, v2))
	{
		v2 = *(_DWORD*)(a1 + 72);
		if (!v2)
			return 1i64;
	}
	v4 = *(_QWORD*)(a1 + 80);
	if (!v4)
		return 1i64;
	v5 = (*(__int64 (**)(void))(*(_QWORD*)v4 + 32i64))();
	v6 = *(_DWORD*)(a1 + 72);
	v7 = v5;
	if (v6)
	{
		while (v6 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 72), v6 - 1, v6))
		{
			v6 = *(_DWORD*)(a1 + 72);
			if (!v6)
				return v7 != 0;
		}
		if (v6 == 1)
		{
			v8 = *(_QWORD*)(a1 + 80);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				*(_QWORD*)(a1 + 80) = 0i64;
			}
		}
	}
	return v7 != 0;
}

