//----- (0000000140244B60) ----------------------------------------------------
__int64 __fastcall sub_140244B60(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6DC78, a1, qword_140C63858);
	if (dword_140C65320 || (int)sub_1402448A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C646E0 + 32i64))(qword_140C646E0, a1);
}
// 140A6DC78: using guessed type wchar_t *off_140A6DC78[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C646E0: using guessed type __int64 qword_140C646E0;
// 140C65320: using guessed type int dword_140C65320;

