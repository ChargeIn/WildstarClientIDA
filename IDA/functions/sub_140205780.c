//----- (0000000140205780) ----------------------------------------------------
__int64 __fastcall sub_140205780(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6A868, a1, qword_140C63858);
	if (dword_140C648BC || (int)sub_1402054C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63938 + 32i64))(qword_140C63938, a1);
}
// 140A6A868: using guessed type wchar_t *off_140A6A868[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63938: using guessed type __int64 qword_140C63938;
// 140C648BC: using guessed type int dword_140C648BC;

