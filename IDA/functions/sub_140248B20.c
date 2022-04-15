//----- (0000000140248B20) ----------------------------------------------------
__int64 __fastcall sub_140248B20(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6DFC0, a1, qword_140C63858);
	if (dword_140C63B58 || (int)sub_140248860() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64810 + 32i64))(qword_140C64810, a1);
}
// 140A6DFC0: using guessed type wchar_t *off_140A6DFC0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B58: using guessed type int dword_140C63B58;
// 140C64810: using guessed type __int64 qword_140C64810;

