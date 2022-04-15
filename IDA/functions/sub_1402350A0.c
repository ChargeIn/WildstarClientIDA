//----- (00000001402350A0) ----------------------------------------------------
__int64 __fastcall sub_1402350A0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CF90, a1, qword_140C63858);
	if (dword_140C63C9C || (int)sub_140234DE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64D40 + 32i64))(qword_140C64D40, a1);
}
// 140A6CF90: using guessed type wchar_t *off_140A6CF90[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C9C: using guessed type int dword_140C63C9C;
// 140C64D40: using guessed type __int64 qword_140C64D40;

