//----- (00000001401FD800) ----------------------------------------------------
__int64 __fastcall sub_1401FD800(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6A1D8, a1, qword_140C63858);
	if (dword_140C65444 || (int)sub_1401FD540() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C653A0 + 32i64))(qword_140C653A0, a1);
}
// 140A6A1D8: using guessed type wchar_t *off_140A6A1D8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C653A0: using guessed type __int64 qword_140C653A0;
// 140C65444: using guessed type int dword_140C65444;
