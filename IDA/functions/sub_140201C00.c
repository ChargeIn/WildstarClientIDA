//----- (0000000140201C00) ----------------------------------------------------
__int64 __fastcall sub_140201C00(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6A558, a1, qword_140C63858);
	if (dword_140C64744 || (int)sub_140201940() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63ED8 + 32i64))(qword_140C63ED8, a1);
}
// 140A6A558: using guessed type wchar_t *off_140A6A558[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63ED8: using guessed type __int64 qword_140C63ED8;
// 140C64744: using guessed type int dword_140C64744;

