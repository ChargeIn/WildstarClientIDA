//----- (00000001400FE080) ----------------------------------------------------
__int64 __fastcall sub_1400FE080(__int64 a1, int* a2)
{
	__int64 v2; // rbx
	int* v5; // rax
	int* v6; // rdx

	v2 = 0i64;
	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)a1 = off_140B56C80;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 56) = 0i64;
	v5 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 40) = v5;
	*(_QWORD*)(a1 + 48) = v5;
	*(_QWORD*)(a1 + 56) = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	v6 = (int*)&unk_1409D4BF4;
	*(_WORD*)(a1 + 64) = 0;
	if (a2)
		v6 = a2;
	*(_BYTE*)(a1 + 66) = 1;
	if (*(_WORD*)v6)
	{
		do
			++v2;
		while (*((_WORD*)v6 + v2));
	}
	sub_14001C480(a1 + 32, v6, (int*)((char*)v6 + 2 * v2));
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B56C80: using guessed type __int64 (__fastcall *off_140B56C80[3])();

