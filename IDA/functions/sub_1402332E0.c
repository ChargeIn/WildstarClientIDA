//----- (00000001402332E0) ----------------------------------------------------
__int64 __fastcall sub_1402332E0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6CE08, a1, qword_140C63858);
	if (dword_140C646C8 || (int)sub_140233020() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C638A0 + 32i64))(qword_140C638A0, a1);
}
// 140A6CE08: using guessed type wchar_t *off_140A6CE08[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638A0: using guessed type __int64 qword_140C638A0;
// 140C646C8: using guessed type int dword_140C646C8;
