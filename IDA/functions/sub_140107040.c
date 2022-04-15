//----- (0000000140107040) ----------------------------------------------------
_QWORD* __fastcall sub_140107040(_QWORD* a1, char a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx

	v3 = a1[12];
	if (v3)
		sub_14018B900(v3, 0);
	v5 = a1[8];
	if (v5)
		sub_14018B900(v5, 0);
	*a1 = off_140B56BD0;
	sub_140104BC0((__int64)a1);
	v6 = a1[4];
	if (v6)
		sub_14018B900(v6, 0);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B56BD0: using guessed type __int64 (__fastcall *off_140B56BD0[25])();

