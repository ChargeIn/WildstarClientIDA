//----- (00000001402DE370) ----------------------------------------------------
__int64 __fastcall sub_1402DE370(__int64 a1, __int64 a2, __int64 a3, void(__fastcall*** a4)(_QWORD), int** a5)
{
	__int64 result; // rax
	int* v10; // rax
	int* v11; // rbx

	if (!a5)
		return 2147942487i64;
	v10 = sub_14018B280(48i64, 1u);
	v11 = v10;
	if (!v10)
		return 2147942414i64;
	*((_QWORD*)v10 + 2) = 0i64;
	v10[2] = 1;
	*((_QWORD*)v10 + 2) = a4;
	*(_QWORD*)v10 = off_140B62EA8;
	(**a4)(a4);
	*((_QWORD*)v11 + 3) = a1;
	*((_QWORD*)v11 + 4) = a2;
	*((_QWORD*)v11 + 5) = a3;
	result = 0i64;
	*a5 = v11;
	return result;
}
// 140B62EA8: using guessed type __int64 (__fastcall *off_140B62EA8[38])();

