//----- (0000000140229160) ----------------------------------------------------
__int64 __fastcall sub_140229160(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6C5B8, a1, qword_140C63858);
	if (dword_140C63DDC || (int)sub_140228EA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64C98 + 32i64))(qword_140C64C98, a1);
}
// 140A6C5B8: using guessed type wchar_t *off_140A6C5B8[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DDC: using guessed type int dword_140C63DDC;
// 140C64C98: using guessed type __int64 qword_140C64C98;

