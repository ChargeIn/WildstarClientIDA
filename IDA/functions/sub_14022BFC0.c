//----- (000000014022BFC0) ----------------------------------------------------
__int64 __fastcall sub_14022BFC0(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6C820, a1, qword_140C63858);
	if (dword_140C649E4 || (int)sub_14022BD60() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65188 + 24i64))(qword_140C65188, a1);
}
// 140A6C820: using guessed type wchar_t *off_140A6C820[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C649E4: using guessed type int dword_140C649E4;
// 140C65188: using guessed type __int64 qword_140C65188;
