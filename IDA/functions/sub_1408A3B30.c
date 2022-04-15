//----- (00000001408A3B30) ----------------------------------------------------
__int64 __fastcall sub_1408A3B30(__int64 a1, __int64 a2)
{
	unsigned int i; // edi

	if (*(_QWORD*)(a1 + 8))
	{
		for (i = 0; i < *(_DWORD*)(a1 + 184); ++i)
			sub_1408A6450(*(_QWORD*)(a1 + 8) + 56i64 * i, *(_QWORD*)(a1 + 32));
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 32) + 16i64))(*(_QWORD*)(a1 + 32), *(_QWORD*)(a1 + 8));
		*(_QWORD*)(a1 + 8) = 0i64;
	}
	if (*(_QWORD*)(a1 + 16))
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 16i64))(*(_QWORD*)(a1 + 32));
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 16i64))(a2, a1);
	return 1i64;
}

