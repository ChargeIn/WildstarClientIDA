//----- (000000014020A7E0) ----------------------------------------------------
__int64 __fastcall sub_14020A7E0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6AC90, a1, qword_140C63858);
	if (dword_140C639D8 || (int)sub_14020A580() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C644B0 + 24i64))(qword_140C644B0, a1);
}
// 140A6AC90: using guessed type wchar_t *off_140A6AC90[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639D8: using guessed type int dword_140C639D8;
// 140C644B0: using guessed type __int64 qword_140C644B0;
