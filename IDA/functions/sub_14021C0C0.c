//----- (000000014021C0C0) ----------------------------------------------------
__int64 __fastcall sub_14021C0C0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6BB00, a1, qword_140C63858);
	if (dword_140C65184 || (int)sub_14021BE60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63CE8 + 24i64))(qword_140C63CE8, a1);
}
// 140A6BB00: using guessed type wchar_t *off_140A6BB00[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63CE8: using guessed type __int64 qword_140C63CE8;
// 140C65184: using guessed type int dword_140C65184;
