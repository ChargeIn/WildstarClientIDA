//----- (00000001401F5000) ----------------------------------------------------
__int64 __fastcall sub_1401F5000(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69AD8, a1, qword_140C63858);
	if (dword_140C64E70 || (int)sub_1401F4D40() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64B78 + 32i64))(qword_140C64B78, a1);
}
// 140A69AD8: using guessed type wchar_t *off_140A69AD8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64B78: using guessed type __int64 qword_140C64B78;
// 140C64E70: using guessed type int dword_140C64E70;

