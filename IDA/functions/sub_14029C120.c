//----- (000000014029C120) ----------------------------------------------------
__int64 __fastcall sub_14029C120(__int64 a1, int a2)
{
	signed __int32 v4; // ecx
	__int64 v5; // rcx
	__int64 v6; // rcx

	if (a2 < 0)
	{
		*(_QWORD*)(a1 + 28) = 0i64;
		*(_QWORD*)(a1 + 36) = 0i64;
		*(_DWORD*)(a1 + 44) = 27;
	}
	*(_DWORD*)(a1 + 88) = a2;
	v4 = *(_DWORD*)(a1 + 72);
	if (v4)
	{
		while (v4 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 72), v4 - 1, v4))
		{
			v4 = *(_DWORD*)(a1 + 72);
			if (!v4)
				goto LABEL_10;
		}
		if (v4 == 1)
		{
			v5 = *(_QWORD*)(a1 + 80);
			if (v5)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
				*(_QWORD*)(a1 + 80) = 0i64;
			}
		}
	}
LABEL_10:
	v6 = *(_QWORD*)(a1 + 64);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 64) = 0i64;
	}
	return (unsigned int)a2;
}

