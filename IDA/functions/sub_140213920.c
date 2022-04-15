//----- (0000000140213920) ----------------------------------------------------
__int64 __fastcall sub_140213920(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B400, a1, qword_140C63858);
	if (dword_140C651F8 || (int)sub_140213660() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63890 + 32i64))(qword_140C63890, a1);
}
// 140A6B400: using guessed type wchar_t *off_140A6B400[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63890: using guessed type __int64 qword_140C63890;
// 140C651F8: using guessed type int dword_140C651F8;

