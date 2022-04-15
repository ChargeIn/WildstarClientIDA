//----- (000000014001A660) ----------------------------------------------------
_QWORD* __fastcall sub_14001A660(_QWORD* a1, char a2)
{
	bool v2; // zf

	v2 = a1[1] == 0i64;
	*a1 = &off_140B5E6E8;
	if (!v2)
		sub_14019D990(qword_140C63750 + 8, a1 + 1);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B5E6E8: using guessed type __int64 (__fastcall *off_140B5E6E8)();
// 140C63750: using guessed type __int64 qword_140C63750;

