//----- (00000001408BF480) ----------------------------------------------------
__int64 __fastcall sub_1408BF480(__int64 a1, __int64 a2)
{
	if (*(_QWORD*)(a1 + 88))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 16i64))(a2, a1);
	return 1i64;
}

