//----- (000000014023A980) ----------------------------------------------------
__int64 __fastcall sub_14023A980(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6D428, a1, qword_140C63858);
	if (dword_140C63AB0 || (int)sub_14023A720() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64198 + 24i64))(qword_140C64198, a1);
}
// 140A6D428: using guessed type wchar_t *off_140A6D428[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AB0: using guessed type int dword_140C63AB0;
// 140C64198: using guessed type __int64 qword_140C64198;

