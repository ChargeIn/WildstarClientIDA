//----- (00000001402196A0) ----------------------------------------------------
__int64 __fastcall sub_1402196A0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B8D0, a1, qword_140C63858);
	if (dword_140C64DB0 || (int)sub_1402193E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65100 + 32i64))(qword_140C65100, a1);
}
// 140A6B8D0: using guessed type wchar_t *off_140A6B8D0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64DB0: using guessed type int dword_140C64DB0;
// 140C65100: using guessed type __int64 qword_140C65100;

