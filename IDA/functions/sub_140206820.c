//----- (0000000140206820) ----------------------------------------------------
__int64 __fastcall sub_140206820(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6A948, a1, qword_140C63858);
	if (dword_140C646DC || (int)sub_1402065C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C60 + 24i64))(qword_140C63C60, a1);
}
// 140A6A948: using guessed type wchar_t *off_140A6A948[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C60: using guessed type __int64 qword_140C63C60;
// 140C646DC: using guessed type int dword_140C646DC;

