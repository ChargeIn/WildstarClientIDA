//----- (0000000140219AE0) ----------------------------------------------------
__int64 __fastcall sub_140219AE0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B908, a1, qword_140C63858);
	if (dword_140C64B48 || (int)sub_140219820() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C641B0 + 32i64))(qword_140C641B0, a1);
}
// 140A6B908: using guessed type wchar_t *off_140A6B908[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C641B0: using guessed type __int64 qword_140C641B0;
// 140C64B48: using guessed type int dword_140C64B48;
