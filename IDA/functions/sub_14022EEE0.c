//----- (000000014022EEE0) ----------------------------------------------------
__int64 __fastcall sub_14022EEE0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CA88, a1, qword_140C63858);
	if (dword_140C654FC || (int)sub_14022EC20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64838 + 32i64))(qword_140C64838, a1);
}
// 140A6CA88: using guessed type wchar_t *off_140A6CA88[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64838: using guessed type __int64 qword_140C64838;
// 140C654FC: using guessed type int dword_140C654FC;

