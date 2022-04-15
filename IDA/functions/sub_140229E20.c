//----- (0000000140229E20) ----------------------------------------------------
__int64 __fastcall sub_140229E20(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6C660, a1, qword_140C63858);
	if (dword_140C63D4C || (int)sub_140229B60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C649A8 + 32i64))(qword_140C649A8, a1);
}
// 140A6C660: using guessed type wchar_t *off_140A6C660[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63D4C: using guessed type int dword_140C63D4C;
// 140C649A8: using guessed type __int64 qword_140C649A8;

