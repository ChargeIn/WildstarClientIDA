//----- (00000001408A6FC0) ----------------------------------------------------
__int64 __fastcall sub_1408A6FC0(__int64 a1, __int64 a2)
{
	sub_1408A7F50((_QWORD*)(a1 + 32), a2);
	sub_1408A7F50((_QWORD*)(a1 + 56), a2);
	if (*(_QWORD*)(a1 + 24))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 16i64))(a2, a1);
	return 1i64;
}

