//----- (00000001401F07C0) ----------------------------------------------------
__int64 __fastcall sub_1401F07C0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A69720, a1, qword_140C63858);
	if (dword_140C6548C || (int)sub_1401F0500() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A08 + 32i64))(qword_140C64A08, a1);
}
// 140A69720: using guessed type wchar_t *off_140A69720[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A08: using guessed type __int64 qword_140C64A08;
// 140C6548C: using guessed type int dword_140C6548C;

