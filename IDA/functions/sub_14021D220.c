//----- (000000014021D220) ----------------------------------------------------
__int64 __fastcall sub_14021D220(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6BBE0, a1, qword_140C63858);
	if (dword_140C65148 || (int)sub_14021CF60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64720 + 32i64))(qword_140C64720, a1);
}
// 140A6BBE0: using guessed type wchar_t *off_140A6BBE0[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64720: using guessed type __int64 qword_140C64720;
// 140C65148: using guessed type int dword_140C65148;
