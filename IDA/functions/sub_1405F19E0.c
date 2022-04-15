//----- (00000001405F19E0) ----------------------------------------------------
_BOOL8 __fastcall sub_1405F19E0(__int64 a1)
{
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 336i64))(a1) == 20
		|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 336i64))(a1) == 19)
	{
		return 0i64;
	}
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 336i64))(a1) == 23
		|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 336i64))(a1) == 27
		|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 336i64))(a1) == 32)
	{
		return 1i64;
	}
	return (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 240i64))(a1) != 0;
}

