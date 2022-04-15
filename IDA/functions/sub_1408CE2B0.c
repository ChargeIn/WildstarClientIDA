//----- (00000001408CE2B0) ----------------------------------------------------
__int64 __fastcall sub_1408CE2B0(__int64 a1, __int64 a2)
{
	sub_1408ACA90((_QWORD*)(a1 + 72), a2);
	if (a1)
	{
		(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 16i64))(a2, a1);
	}
	return 1i64;
}

