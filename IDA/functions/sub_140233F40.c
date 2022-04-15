//----- (0000000140233F40) ----------------------------------------------------
__int64 __fastcall sub_140233F40(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6CEB0, a1, qword_140C63858);
	if (dword_140C64614 || (int)sub_140233CE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C638E8 + 24i64))(qword_140C638E8, a1);
}
// 140A6CEB0: using guessed type wchar_t *off_140A6CEB0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638E8: using guessed type __int64 qword_140C638E8;
// 140C64614: using guessed type int dword_140C64614;

