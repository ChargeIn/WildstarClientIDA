//----- (000000014021CDE0) ----------------------------------------------------
__int64 __fastcall sub_14021CDE0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6BBA8, a1, qword_140C63858);
	if (dword_140C6408C || (int)sub_14021CB20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65270 + 32i64))(qword_140C65270, a1);
}
// 140A6BBA8: using guessed type wchar_t *off_140A6BBA8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6408C: using guessed type int dword_140C6408C;
// 140C65270: using guessed type __int64 qword_140C65270;

