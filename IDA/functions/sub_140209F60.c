//----- (0000000140209F60) ----------------------------------------------------
__int64 __fastcall sub_140209F60(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6AC20, a1, qword_140C63858);
	if (dword_140C63A54 || (int)sub_140209D00() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65060 + 24i64))(qword_140C65060, a1);
}
// 140A6AC20: using guessed type wchar_t *off_140A6AC20[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63A54: using guessed type int dword_140C63A54;
// 140C65060: using guessed type __int64 qword_140C65060;

