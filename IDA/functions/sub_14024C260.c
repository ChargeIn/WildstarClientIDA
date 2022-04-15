//----- (000000014024C260) ----------------------------------------------------
__int64 __fastcall sub_14024C260(unsigned int a1)
{
	if (qword_140C63848)
		return qword_140C63848(off_140A6E298, a1, qword_140C63858);
	if (dword_140C63AB4 || (int)sub_14024BFA0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C643C8 + 32i64))(qword_140C643C8, a1);
}
// 140A6E298: using guessed type wchar_t *off_140A6E298[2];
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AB4: using guessed type int dword_140C63AB4;
// 140C643C8: using guessed type __int64 qword_140C643C8;

