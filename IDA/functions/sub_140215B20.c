//----- (0000000140215B20) ----------------------------------------------------
__int64 __fastcall sub_140215B20(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B5C0, a1, qword_140C63858);
	if (dword_140C64CA8 || (int)sub_140215860() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63930 + 32i64))(qword_140C63930, a1);
}
// 140A6B5C0: using guessed type wchar_t *off_140A6B5C0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63930: using guessed type __int64 qword_140C63930;
// 140C64CA8: using guessed type int dword_140C64CA8;

