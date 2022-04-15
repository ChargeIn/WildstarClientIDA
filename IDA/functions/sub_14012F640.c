//----- (000000014012F640) ----------------------------------------------------
_QWORD* __fastcall sub_14012F640(_QWORD* a1, char a2)
{
	__int64 v4; // rcx
	__int64 v5; // rcx

	*a1 = off_140B57B40;
	v4 = a1[34];
	if ((_QWORD*)v4 != a1 + 35)
		sub_14018B900(v4, 0);
	v5 = a1[2];
	if ((_QWORD*)v5 != a1 + 3)
		sub_14018B900(v5, 0);
	*a1 = off_140B57BA0;
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B57B40: using guessed type __int64 (__fastcall *off_140B57B40[21])();
// 140B57BA0: using guessed type __int64 (__fastcall *off_140B57BA0[9])();

