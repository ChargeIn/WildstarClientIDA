//----- (00000001402237C0) ----------------------------------------------------
__int64 __fastcall sub_1402237C0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C120, a1, qword_140C63858);
	if (dword_140C638E0 || (int)sub_140223560() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64658 + 24i64))(qword_140C64658, a1);
}
// 140A6C120: using guessed type wchar_t *off_140A6C120[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638E0: using guessed type int dword_140C638E0;
// 140C64658: using guessed type __int64 qword_140C64658;

