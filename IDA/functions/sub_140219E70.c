//----- (0000000140219E70) ----------------------------------------------------
__int64 sub_140219E70()
{
	if (qword_140C63838)
		return qword_140C63838(off_140A6B940, qword_140C63858);
	if (dword_140C64010 || (int)sub_140219C60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64788 + 40i64))(qword_140C64788);
}
// 140A6B940: using guessed type wchar_t *off_140A6B940[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64010: using guessed type int dword_140C64010;
// 140C64788: using guessed type __int64 qword_140C64788;
