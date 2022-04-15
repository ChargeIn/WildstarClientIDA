//----- (00000001407B21F0) ----------------------------------------------------
__int64 __fastcall sub_1407B21F0(int* a1, int** a2)
{
	int* v5; // rdi
	__int64 v6; // rdx

	if (!a1 || !a2)
		return 2147942487i64;
	v5 = sub_14018B280(48i64, 1u);
	if (!v5)
		return 2147942414i64;
	v6 = 0i64;
	*(_QWORD*)v5 = off_140B79430;
	v5[2] = 1;
	*((_QWORD*)v5 + 3) = 0i64;
	*((_QWORD*)v5 + 4) = 0i64;
	*((_QWORD*)v5 + 5) = 0i64;
	if (*(_WORD*)a1)
	{
		do
			++v6;
		while (*((_WORD*)a1 + v6));
	}
	sub_14001C1B0((_QWORD*)v5 + 2, a1, (__int64)a1 + 2 * v6);
	*a2 = v5;
	return 0i64;
}
// 140B79430: using guessed type __int64 (__fastcall *off_140B79430[64])();

