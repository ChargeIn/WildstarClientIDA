//----- (000000014021A360) ----------------------------------------------------
__int64 __fastcall sub_14021A360(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B978, a1, qword_140C63858);
	if (dword_140C640D4 || (int)sub_14021A0A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64860 + 32i64))(qword_140C64860, a1);
}
// 140A6B978: using guessed type wchar_t *off_140A6B978[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C640D4: using guessed type int dword_140C640D4;
// 140C64860: using guessed type __int64 qword_140C64860;

