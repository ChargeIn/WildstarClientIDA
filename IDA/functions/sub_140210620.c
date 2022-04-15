//----- (0000000140210620) ----------------------------------------------------
__int64 __fastcall sub_140210620(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B160, a1, qword_140C63858);
	if (dword_140C655A8 || (int)sub_140210360() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64408 + 32i64))(qword_140C64408, a1);
}
// 140A6B160: using guessed type wchar_t *off_140A6B160[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64408: using guessed type __int64 qword_140C64408;
// 140C655A8: using guessed type int dword_140C655A8;

