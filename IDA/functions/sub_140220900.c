//----- (0000000140220900) ----------------------------------------------------
__int64 __fastcall sub_140220900(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6BEB8, a1, qword_140C63858);
	if (dword_140C6453C || (int)sub_1402206A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65520 + 24i64))(qword_140C65520, a1);
}
// 140A6BEB8: using guessed type wchar_t *off_140A6BEB8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6453C: using guessed type int dword_140C6453C;
// 140C65520: using guessed type __int64 qword_140C65520;

