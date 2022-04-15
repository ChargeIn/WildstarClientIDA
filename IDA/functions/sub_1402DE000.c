//----- (00000001402DE000) ----------------------------------------------------
__int64 __fastcall sub_1402DE000(int a1, int* a2, __int64 a3, void(__fastcall*** a4)(_QWORD), int** a5)
{
	__int64 v8; // rbp
	int* v10; // rax
	int* v11; // rbx
	int v12; // ecx
	int v13; // eax

	v8 = a1;
	if (!a5)
		return 2147942487i64;
	v10 = sub_14018B280(56i64, 1u);
	v11 = v10;
	if (!v10)
		return 2147942414i64;
	v10[2] = 1;
	*((_QWORD*)v10 + 6) = 0i64;
	*(_QWORD*)v10 = off_140B62E50;
	v10[3] = v8;
	v10[4] = dword_140AF0ED8[v8];
	v10[5] = *a2;
	v10[6] = a2[1];
	v12 = dword_140AF06A0[2 * v10[4]];
	v10[7] = v12;
	v13 = *a2;
	*((_QWORD*)v11 + 6) = a4;
	v11[8] = v12 * v13;
	(**a4)(a4);
	*((_QWORD*)v11 + 5) = a3;
	*a5 = v11;
	return 0i64;
}
// 140AF06A0: using guessed type int dword_140AF06A0[];
// 140AF0ED8: using guessed type int dword_140AF0ED8[];
// 140B62E50: using guessed type __int64 (__fastcall *off_140B62E50[49])();

