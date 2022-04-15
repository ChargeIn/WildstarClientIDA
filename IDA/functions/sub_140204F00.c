//----- (0000000140204F00) ----------------------------------------------------
__int64 __fastcall sub_140204F00(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6A7F8, a1, qword_140C63858);
	if (dword_140C63E00 || (int)sub_140204C40() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64C88 + 32i64))(qword_140C64C88, a1);
}
// 140A6A7F8: using guessed type wchar_t *off_140A6A7F8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E00: using guessed type int dword_140C63E00;
// 140C64C88: using guessed type __int64 qword_140C64C88;

