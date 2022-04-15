//----- (0000000140334B60) ----------------------------------------------------
_QWORD* __fastcall sub_140334B60(_QWORD* a1, char a2)
{
	__int64 v4; // rcx

	*a1 = off_140B64918;
	v4 = a1[6];
	if (v4)
	{
		sub_14018B900(v4, 0);
		a1[6] = 0i64;
	}
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B64918: using guessed type __int64 (__fastcall *off_140B64918[12])();

