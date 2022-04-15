//----- (00000001401EE5C0) ----------------------------------------------------
__int64 __fastcall sub_1401EE5C0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69560, a1, qword_140C63858);
	if (dword_140C64E58 || (int)sub_1401EE300() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C68 + 32i64))(qword_140C63C68, a1);
}
// 140A69560: using guessed type wchar_t *off_140A69560[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C68: using guessed type __int64 qword_140C63C68;
// 140C64E58: using guessed type int dword_140C64E58;

