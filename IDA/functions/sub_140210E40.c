//----- (0000000140210E40) ----------------------------------------------------
__int64 __fastcall sub_140210E40(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6B1D0, a1, qword_140C63858);
	if (dword_140C63DD0 || (int)sub_140210BE0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64378 + 24i64))(qword_140C64378, a1);
}
// 140A6B1D0: using guessed type wchar_t *off_140A6B1D0[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DD0: using guessed type int dword_140C63DD0;
// 140C64378: using guessed type __int64 qword_140C64378;

