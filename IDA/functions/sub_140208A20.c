//----- (0000000140208A20) ----------------------------------------------------
__int64 __fastcall sub_140208A20(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6AB08, a1, qword_140C63858);
	if (dword_140C64954 || (int)sub_1402087C0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64350 + 24i64))(qword_140C64350, a1);
}
// 140A6AB08: using guessed type wchar_t *off_140A6AB08[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64350: using guessed type __int64 qword_140C64350;
// 140C64954: using guessed type int dword_140C64954;

