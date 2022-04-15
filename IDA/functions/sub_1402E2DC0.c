//----- (00000001402E2DC0) ----------------------------------------------------
__int64 __fastcall sub_1402E2DC0(int* a1, __int64 a2, int** a3)
{
	int* v7; // rax
	int* v8; // rdi
	int* v9; // rax

	if (!a3)
		return 2147942487i64;
	v7 = sub_14018B280(40i64, 1u);
	v8 = v7;
	if (!v7)
		return 2147942414i64;
	v7[2] = 1;
	*(_QWORD*)v7 = off_140B63120;
	*((_QWORD*)v7 + 2) = 0i64;
	*((_QWORD*)v7 + 3) = 0i64;
	*((_QWORD*)v7 + 4) = 0i64;
	if (a2)
	{
		if (!a1)
		{
			sub_1402E2C80(v7);
			return 2147942487i64;
		}
		*((_QWORD*)v7 + 2) = a2;
		v9 = sub_14018B280(a2, 1u);
		*((_QWORD*)v8 + 3) = v9;
		if (!v9)
		{
			sub_1402E2C80(v8);
			return 2147942414i64;
		}
		sub_1407DB590(v9, a1, *((_QWORD*)v8 + 2));
	}
	*a3 = v8;
	return 0i64;
}
// 140B63120: using guessed type __int64 (__fastcall *off_140B63120[7])();

