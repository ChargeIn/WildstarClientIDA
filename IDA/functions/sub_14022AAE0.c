//----- (000000014022AAE0) ----------------------------------------------------
__int64 __fastcall sub_14022AAE0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6C708, a1, qword_140C63858);
	if (dword_140C64D18 || (int)sub_14022A820() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C642A8 + 32i64))(qword_140C642A8, a1);
}
// 140A6C708: using guessed type wchar_t *off_140A6C708[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C642A8: using guessed type __int64 qword_140C642A8;
// 140C64D18: using guessed type int dword_140C64D18;

