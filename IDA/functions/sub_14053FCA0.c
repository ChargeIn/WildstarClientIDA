//----- (000000014053FCA0) ----------------------------------------------------
_BOOL8 __fastcall sub_14053FCA0(__int64 a1)
{
	__int64 v1; // r9
	__int64 v2; // rax
	int v4; // r8d

	v1 = *(_QWORD*)(a1 + 312);
	v2 = *(_QWORD*)(v1 + 112);
	if (*(_DWORD*)(v2 + 36) > 1u)
		return 0i64;
	if (*(_DWORD*)(v2 + 24) == 7)
	{
		v4 = *(_DWORD*)(v2 + 24);
		if (((v4 - 2) & 0xFFFFFFFA) == 0 && v4 != 3 && !*(_DWORD*)(*(_QWORD*)(v1 + 112) + 388i64))
			return 0i64;
		return !*(_DWORD*)(a1 + 400);
	}
	if (*(_DWORD*)(v2 + 24) != 8)
		return !*(_DWORD*)(a1 + 400);
	if (*(_DWORD*)(a1 + 328))
		return *(_DWORD*)(a1 + 400) == 0;
	return !*(_DWORD*)(a1 + 332);
}

