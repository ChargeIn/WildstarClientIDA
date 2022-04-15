//----- (00000001402092A0) ----------------------------------------------------
__int64 __fastcall sub_1402092A0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6AB78, a1, qword_140C63858);
	if (dword_140C643A8 || (int)sub_140209040() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63CA0 + 24i64))(qword_140C63CA0, a1);
}
// 140A6AB78: using guessed type wchar_t *off_140A6AB78[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63CA0: using guessed type __int64 qword_140C63CA0;
// 140C643A8: using guessed type int dword_140C643A8;

