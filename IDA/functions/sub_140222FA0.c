//----- (0000000140222FA0) ----------------------------------------------------
__int64 __fastcall sub_140222FA0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6C0B0, a1, qword_140C63858);
	if (dword_140C642D4 || (int)sub_140222CE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64008 + 32i64))(qword_140C64008, a1);
}
// 140A6C0B0: using guessed type wchar_t *off_140A6C0B0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64008: using guessed type __int64 qword_140C64008;
// 140C642D4: using guessed type int dword_140C642D4;
