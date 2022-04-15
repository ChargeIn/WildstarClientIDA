//----- (00000001405B0E40) ----------------------------------------------------
_QWORD* __fastcall sub_1405B0E40(_QWORD* a1, char a2)
{
	__int64 v4; // rcx

	*a1 = off_140B6CFF8;
	sub_1405B0EC0(a1);
	sub_140019490(a1 + 7);
	sub_14018B900(a1[9], 0);
	a1[9] = 0i64;
	v4 = a1[2];
	if (v4)
		sub_14018B900(v4, 0);
	if ((a2 & 1) != 0)
		sub_14018B900((__int64)a1, 0);
	return a1;
}
// 140B6CFF8: using guessed type __int64 (__fastcall *off_140B6CFF8[2])();

