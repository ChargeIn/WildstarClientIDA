//----- (0000000140249C20) ----------------------------------------------------
__int64 __fastcall sub_140249C20(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6E0A0, a1, qword_140C63858);
	if (dword_140C652B4 || (int)sub_140249960() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64100 + 32i64))(qword_140C64100, a1);
}
// 140A6E0A0: using guessed type wchar_t *off_140A6E0A0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64100: using guessed type __int64 qword_140C64100;
// 140C652B4: using guessed type int dword_140C652B4;
