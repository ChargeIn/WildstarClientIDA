//----- (000000014024B100) ----------------------------------------------------
__int64 __fastcall sub_14024B100(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6E1B8, a1, qword_140C63858);
	if (dword_140C64E10 || (int)sub_14024AEA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65348 + 24i64))(qword_140C65348, a1);
}
// 140A6E1B8: using guessed type wchar_t *off_140A6E1B8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64E10: using guessed type int dword_140C64E10;
// 140C65348: using guessed type __int64 qword_140C65348;

