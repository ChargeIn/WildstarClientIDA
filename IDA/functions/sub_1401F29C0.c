//----- (00000001401F29C0) ----------------------------------------------------
__int64 __fastcall sub_1401F29C0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A698E0, a1, qword_140C63858);
	if (dword_140C644E8 || (int)sub_1401F2700() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63BC0 + 32i64))(qword_140C63BC0, a1);
}
// 140A698E0: using guessed type wchar_t *off_140A698E0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63BC0: using guessed type __int64 qword_140C63BC0;
// 140C644E8: using guessed type int dword_140C644E8;

