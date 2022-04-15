//----- (00000001407B22A0) ----------------------------------------------------
__int64 __fastcall sub_1407B22A0(int a1, int** a2)
{
	int* v5; // rax

	if (!a2)
		return 2147942487i64;
	v5 = sub_14018B280(16i64, 1u);
	if (!v5)
		return 2147942414i64;
	*(_QWORD*)v5 = off_140B78EF0;
	v5[2] = 1;
	v5[3] = a1;
	*a2 = v5;
	return 0i64;
}
// 140B78EF0: using guessed type __int64 (__fastcall *off_140B78EF0[95])();

