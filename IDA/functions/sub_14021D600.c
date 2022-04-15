//----- (000000014021D600) ----------------------------------------------------
__int64 __fastcall sub_14021D600(unsigned int a1)
{
	if (qword_140C63840)
		return qword_140C63840(off_140A6BC18, a1, qword_140C63858);
	if (dword_140C6467C || (int)sub_14021D3A0() < 0)
		return 0i64;
	return (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64F68 + 24i64))(qword_140C64F68, a1);
}
// 140A6BC18: using guessed type wchar_t *off_140A6BC18[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6467C: using guessed type int dword_140C6467C;
// 140C64F68: using guessed type __int64 qword_140C64F68;

