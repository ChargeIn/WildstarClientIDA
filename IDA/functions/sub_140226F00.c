//----- (0000000140226F00) ----------------------------------------------------
__int64 __fastcall sub_140226F00(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C3F8, a1, qword_140C63858);
	if (dword_140C63E2C || (int)sub_140226CA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63BE0 + 24i64))(qword_140C63BE0, a1);
}
// 140A6C3F8: using guessed type wchar_t *off_140A6C3F8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BE0: using guessed type __int64 qword_140C63BE0;
// 140C63E2C: using guessed type int dword_140C63E2C;
