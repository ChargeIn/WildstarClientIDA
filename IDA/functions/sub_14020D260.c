//----- (000000014020D260) ----------------------------------------------------
__int64 __fastcall sub_14020D260(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6AEC0, a1, qword_140C63858);
	if (dword_140C63F84 || (int)sub_14020D000() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64608 + 24i64))(qword_140C64608, a1);
}
// 140A6AEC0: using guessed type wchar_t *off_140A6AEC0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F84: using guessed type int dword_140C63F84;
// 140C64608: using guessed type __int64 qword_140C64608;
