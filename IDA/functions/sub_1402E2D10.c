//----- (00000001402E2D10) ----------------------------------------------------
__int64 __fastcall sub_1402E2D10(__int64 a1, int** a2)
{
	int* v5; // rax
	int* v6; // rbx
	int* v7; // rax

	if (!a2)
		return 2147942487i64;
	v5 = sub_14018B280(40i64, 1u);
	v6 = v5;
	if (!v5)
		return 2147942414i64;
	v5[2] = 1;
	*(_QWORD*)v5 = off_140B63120;
	*((_QWORD*)v5 + 2) = 0i64;
	*((_QWORD*)v5 + 3) = 0i64;
	*((_QWORD*)v5 + 4) = 0i64;
	if (a1)
	{
		*((_QWORD*)v5 + 2) = a1;
		v7 = sub_14018B280(a1, 1u);
		*((_QWORD*)v6 + 3) = v7;
		if (!v7)
		{
			sub_1402E2C80(v6);
			return 2147942414i64;
		}
	}
	*a2 = v6;
	return 0i64;
}
// 140B63120: using guessed type __int64 (__fastcall *off_140B63120[7])();

