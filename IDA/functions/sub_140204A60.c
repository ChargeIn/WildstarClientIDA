//----- (0000000140204A60) ----------------------------------------------------
__int64 __fastcall sub_140204A60(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6A7C0, a1, qword_140C63858);
	if (dword_140C639D4 || (int)sub_140204800() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A70 + 24i64))(qword_140C63A70, a1);
}
// 140A6A7C0: using guessed type wchar_t *off_140A6A7C0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639D4: using guessed type int dword_140C639D4;
// 140C63A70: using guessed type __int64 qword_140C63A70;

