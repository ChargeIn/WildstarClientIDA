//----- (000000014086F520) ----------------------------------------------------
__int64 __fastcall sub_14086F520(_QWORD* a1, __int64 a2)
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
	if (!*(_DWORD*)v2)
		return sub_140844AA0((__int64)a1, *(_QWORD*)(v2 + 8), v2 + 20, *(unsigned int*)(v2 + 16));
	if (*(_DWORD*)v2 == 1)
		return sub_140844120((__int64)a1, *(_QWORD*)(v2 + 8), (__int64*)(v2 + 20), *(_DWORD*)(v2 + 16));
	if (*(_DWORD*)v2 != 2)
	{
		if (*(_DWORD*)v2 == 3)
			(*(void(__fastcall**)(_QWORD*, _QWORD, _QWORD, _QWORD))(*a1 + 152i64))(
				a1,
				*(_QWORD*)(v2 + 8),
				*(_QWORD*)(v2 + 32),
				*(unsigned int*)(v2 + 16));
		return 1i64;
	}
	return sub_140844A10(
		(__int64)a1,
		*(_QWORD*)(v2 + 8),
		(__int64*)(v2 + 20),
		*(_BYTE*)(v2 + 30),
		*(_DWORD*)(v2 + 16));
}

