//----- (0000000140104B70) ----------------------------------------------------
_QWORD* __fastcall sub_140104B70(_QWORD* a1, char a2)
{
	__int64 v4; // rcx

	*a1 = off_140B56BD0;
	sub_140104BC0((__int64)a1);
	v4 = a1[4];
	if (v4)
		sub_14018B900(v4, 0);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B56BD0: using guessed type __int64 (__fastcall *off_140B56BD0[25])();

