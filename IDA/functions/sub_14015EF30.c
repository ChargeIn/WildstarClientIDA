//----- (000000014015EF30) ----------------------------------------------------
char __fastcall sub_14015EF30(__int64 a1, int a2, int a3)
{
	__int64 v4; // rcx

	v4 = *(_QWORD*)(a1 + 664);
	if ((v4 & 0x10) != 0)
		return *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 1152) + 8i64 * a2) + 9i64);
	if ((v4 & 8) != 0)
	{
		if (*(_DWORD*)(a1 + 1032) == a2)
			return 1;
	}
	else if (*(_DWORD*)(a1 + 1032) == a2 && *(_DWORD*)(a1 + 1036) == a3)
	{
		return 1;
	}
	return 0;
}

