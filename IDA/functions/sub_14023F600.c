//----- (000000014023F600) ----------------------------------------------------
__int64 __fastcall sub_14023F600(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6D818, a1, qword_140C63858);
	if (dword_140C65298 || (int)sub_14023F3A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C650F8 + 24i64))(qword_140C650F8, a1);
}
// 140A6D818: using guessed type wchar_t *off_140A6D818[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C650F8: using guessed type __int64 qword_140C650F8;
// 140C65298: using guessed type int dword_140C65298;
