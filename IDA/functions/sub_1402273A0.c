//----- (00000001402273A0) ----------------------------------------------------
__int64 __fastcall sub_1402273A0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6C430, a1, qword_140C63858);
	if (dword_140C63A84 || (int)sub_1402270E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64738 + 32i64))(qword_140C64738, a1);
}
// 140A6C430: using guessed type wchar_t *off_140A6C430[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A84: using guessed type int dword_140C63A84;
// 140C64738: using guessed type __int64 qword_140C64738;

