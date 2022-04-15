//----- (0000000140218DC0) ----------------------------------------------------
__int64 __fastcall sub_140218DC0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6B860, a1, qword_140C63858);
	if (dword_140C6466C || (int)sub_140218B60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63EB8 + 24i64))(qword_140C63EB8, a1);
}
// 140A6B860: using guessed type wchar_t *off_140A6B860[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63EB8: using guessed type __int64 qword_140C63EB8;
// 140C6466C: using guessed type int dword_140C6466C;

