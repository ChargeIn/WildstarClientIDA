//----- (0000000140103FD0) ----------------------------------------------------
__int64 __fastcall sub_140103FD0(__int64 a1, __int64 a2, int* a3)
{
	__int64 v3; // rbx
	int* v6; // rax

	v3 = 0i64;
	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a2;
	*(_QWORD*)a1 = off_140B56C50;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	v6 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 32) = v6;
	*(_QWORD*)(a1 + 40) = v6;
	*(_QWORD*)(a1 + 48) = v6 + 4;
	if (v6)
		*(_WORD*)v6 = 0;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	if (*(_WORD*)a3)
	{
		do
			++v3;
		while (*((_WORD*)a3 + v3));
	}
	sub_14001C480(a1 + 24, a3, (int*)((char*)a3 + 2 * v3));
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B56C50: using guessed type __int64 (__fastcall *off_140B56C50[9])();

