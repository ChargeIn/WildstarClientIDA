//----- (0000000140207980) ----------------------------------------------------
__int64 __fastcall sub_140207980(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6AA28, a1, qword_140C63858);
	if (dword_140C6542C || (int)sub_1402076C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64E88 + 32i64))(qword_140C64E88, a1);
}
// 140A6AA28: using guessed type wchar_t *off_140A6AA28[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64E88: using guessed type __int64 qword_140C64E88;
// 140C6542C: using guessed type int dword_140C6542C;

