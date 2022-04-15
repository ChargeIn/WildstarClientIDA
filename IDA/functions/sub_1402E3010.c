//----- (00000001402E3010) ----------------------------------------------------
__int64 __fastcall sub_1402E3010(__int64 a1, __int64 a2, void(__fastcall*** a3)(_QWORD), int** a4)
{
	int* v9; // rax
	int* v10; // rbx

	if (!a4)
		return 2147942487i64;
	v9 = sub_14018B280(40i64, 1u);
	v10 = v9;
	if (!v9)
		return 2147942414i64;
	v9[2] = 1;
	*(_QWORD*)v9 = off_140B63120;
	*((_QWORD*)v9 + 2) = 0i64;
	*((_QWORD*)v9 + 3) = 0i64;
	*((_QWORD*)v9 + 4) = 0i64;
	if (a3)
	{
		*((_QWORD*)v9 + 2) = a2;
		*((_QWORD*)v9 + 3) = a1;
		*((_QWORD*)v9 + 4) = a3;
		(**a3)(a3);
		*a4 = v10;
		return 0i64;
	}
	else
	{
		sub_1402E2C80(v9);
		return 2147942487i64;
	}
}
// 140B63120: using guessed type __int64 (__fastcall *off_140B63120[7])();

