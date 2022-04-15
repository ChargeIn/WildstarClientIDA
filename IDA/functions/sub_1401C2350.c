//----- (00000001401C2350) ----------------------------------------------------
__int64 __fastcall sub_1401C2350(_QWORD* a1, int** a2)
{
	unsigned __int64 v5; // rbx
	int* v6; // rdi

	if (!a2)
		return 2147942487i64;
	v5 = 0i64;
	v6 = sub_14018B280(32i64, 0);
	if (v6)
	{
		*(_QWORD*)v6 = off_140B5F348;
		*((_QWORD*)v6 + 2) = 0i64;
		*((_QWORD*)v6 + 1) = 0i64;
		v6[6] = 1;
	}
	else
	{
		v6 = 0i64;
	}
	sub_1401C3160((__int64*)v6 + 1, a1[10]);
	if (a1[10])
	{
		do
			sub_1401C31D0((__int64*)v6 + 1, 32i64 * *(unsigned int*)(a1[9] + 4 * v5++) + a1[7] + 4i64);
		while (v5 < a1[10]);
	}
	*a2 = v6;
	return 0i64;
}
// 140B5F348: using guessed type __int64 (__fastcall *off_140B5F348[6])();

