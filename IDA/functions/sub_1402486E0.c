//----- (00000001402486E0) ----------------------------------------------------
__int64 __fastcall sub_1402486E0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6DF88, a1, qword_140C63858);
	if (dword_140C63E88 || (int)sub_140248420() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63AA0 + 32i64))(qword_140C63AA0, a1);
}
// 140A6DF88: using guessed type wchar_t *off_140A6DF88[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AA0: using guessed type __int64 qword_140C63AA0;
// 140C63E88: using guessed type int dword_140C63E88;

