//----- (00000001401C5810) ----------------------------------------------------
__int64 __fastcall sub_1401C5810(__int64 a1, __int64 a2, int** a3)
{
	int* v7; // rax

	if (!a1 && a2 || !a3)
		return 2147942487i64;
	v7 = sub_14018B280(32i64, 1u);
	if (!v7)
		return 2147942414i64;
	v7[2] = 1;
	*(_QWORD*)v7 = off_140B5F4F0;
	*((_QWORD*)v7 + 2) = a1;
	*((_QWORD*)v7 + 3) = a2;
	*a3 = v7;
	return 0i64;
}
// 140B5F4F0: using guessed type __int64 (__fastcall *off_140B5F4F0[37])();

