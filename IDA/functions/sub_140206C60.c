//----- (0000000140206C60) ----------------------------------------------------
__int64 __fastcall sub_140206C60(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6A980, a1, qword_140C63858);
	if (dword_140C65068 || (int)sub_140206A00() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64258 + 24i64))(qword_140C64258, a1);
}
// 140A6A980: using guessed type wchar_t *off_140A6A980[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64258: using guessed type __int64 qword_140C64258;
// 140C65068: using guessed type int dword_140C65068;
