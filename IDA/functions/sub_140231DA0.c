//----- (0000000140231DA0) ----------------------------------------------------
__int64 __fastcall sub_140231DA0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CCF0, a1, qword_140C63858);
	if (dword_140C647D8 || (int)sub_140231AE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63920 + 32i64))(qword_140C63920, a1);
}
// 140A6CCF0: using guessed type wchar_t *off_140A6CCF0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63920: using guessed type __int64 qword_140C63920;
// 140C647D8: using guessed type int dword_140C647D8;

