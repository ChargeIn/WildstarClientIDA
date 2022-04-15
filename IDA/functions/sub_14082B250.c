//----- (000000014082B250) ----------------------------------------------------
__int64 __fastcall sub_14082B250(__int64 a1, int a2, int a3, unsigned int a4)
{
	__int64* i; // rbx

	if (a3 == a4)
		return 1i64;
	for (i = *(__int64**)(a1 + 24); i; i = (__int64*)*i)
	{
		if (*((_DWORD*)i + 4) == a2)
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)i[1] + 8i64))(i[1], a4, 0i64);
	}
	return 1i64;
}

