//----- (0000000140230420) ----------------------------------------------------
__int64 __fastcall sub_140230420(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CBA0, a1, qword_140C63858);
	if (dword_140C641BC || (int)sub_140230160() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64FF8 + 32i64))(qword_140C64FF8, a1);
}
// 140A6CBA0: using guessed type wchar_t *off_140A6CBA0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C641BC: using guessed type int dword_140C641BC;
// 140C64FF8: using guessed type __int64 qword_140C64FF8;

