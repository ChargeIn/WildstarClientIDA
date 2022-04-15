//----- (0000000140857FD0) ----------------------------------------------------
__int64 __fastcall sub_140857FD0(_QWORD* a1, __int64 a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax

	v2 = a2;
	if (*(_BYTE*)(a2 + 29))
	{
		LOBYTE(a2) = *(_DWORD*)a2 == 1;
		(*(void(__fastcall**)(_QWORD*, __int64))(*a1 + 344i64))(a1, a2);
	}
	v4 = a1[7];
	if (!v4 || !*(_WORD*)(v4 + 72))
		return 1i64;
	switch (*(_DWORD*)v2)
	{
	case 0:
		return sub_140844AA0((__int64)a1, *(_QWORD*)(v2 + 8), v2 + 20, *(unsigned int*)(v2 + 16));
	case 1:
		return sub_140844120((__int64)a1, *(_QWORD*)(v2 + 8), (__int64*)(v2 + 20), *(_DWORD*)(v2 + 16));
	case 2:
		return sub_140844A10(
			(__int64)a1,
			*(_QWORD*)(v2 + 8),
			(__int64*)(v2 + 20),
			*(_BYTE*)(v2 + 30),
			*(_DWORD*)(v2 + 16));
	}
	if (*(_DWORD*)v2 != 3)
	{
		if (*(_DWORD*)v2 == 4)
			sub_1408581D0((__int64)a1, *(_QWORD*)(v2 + 8), v2);
		return 1i64;
	}
	(*(void(__fastcall**)(_QWORD*, _QWORD, _QWORD, _QWORD))(*a1 + 152i64))(
		a1,
		*(_QWORD*)(v2 + 8),
		*(_QWORD*)(v2 + 32),
		*(unsigned int*)(v2 + 16));
	return 1i64;
}

