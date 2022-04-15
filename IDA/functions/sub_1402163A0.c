//----- (00000001402163A0) ----------------------------------------------------
__int64 __fastcall sub_1402163A0(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6B630, a1, qword_140C63858);
	if (dword_140C655EC || (int)sub_1402160E0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63A78 + 32i64))(qword_140C63A78, a1);
}
// 140A6B630: using guessed type wchar_t *off_140A6B630[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A78: using guessed type __int64 qword_140C63A78;
// 140C655EC: using guessed type int dword_140C655EC;

