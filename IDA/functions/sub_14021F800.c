//----- (000000014021F800) ----------------------------------------------------
__int64 __fastcall sub_14021F800(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6BDD8, a1, qword_140C63858);
	if (dword_140C64B5C || (int)sub_14021F5A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64A70 + 24i64))(qword_140C64A70, a1);
}
// 140A6BDD8: using guessed type wchar_t *off_140A6BDD8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64A70: using guessed type __int64 qword_140C64A70;
// 140C64B5C: using guessed type int dword_140C64B5C;

