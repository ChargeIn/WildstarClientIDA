//----- (00000001401FDC40) ----------------------------------------------------
__int64 __fastcall sub_1401FDC40(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6A210, a1, qword_140C63858);
	if (dword_140C64648 || (int)sub_1401FD980() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64040 + 32i64))(qword_140C64040, a1);
}
// 140A6A210: using guessed type wchar_t *off_140A6A210[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64040: using guessed type __int64 qword_140C64040;
// 140C64648: using guessed type int dword_140C64648;

