//----- (000000014021EF80) ----------------------------------------------------
__int64 __fastcall sub_14021EF80(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6BD68, a1, qword_140C63858);
	if (dword_140C638B8 || (int)sub_14021ED20() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65628 + 24i64))(qword_140C65628, a1);
}
// 140A6BD68: using guessed type wchar_t *off_140A6BD68[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638B8: using guessed type int dword_140C638B8;
// 140C65628: using guessed type __int64 qword_140C65628;

