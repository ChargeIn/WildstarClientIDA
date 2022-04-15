//----- (000000014014E0D0) ----------------------------------------------------
__int64 __fastcall sub_14014E0D0(__int64 a1, int* a2, float a3, int a4)
{
	int* v7; // rax
	int* v8; // rdx
	__int64 v9; // rax

	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	v7 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 8) = v7;
	*(_QWORD*)(a1 + 16) = v7;
	*(_QWORD*)(a1 + 24) = v7 + 4;
	if (v7)
		*(_WORD*)v7 = 0;
	v8 = (int*)&unk_1409DABEC;
	v9 = 0i64;
	if (a2)
		v8 = a2;
	if (*(_WORD*)v8)
	{
		do
			++v9;
		while (*((_WORD*)v8 + v9));
	}
	sub_14001C480(a1, v8, (int*)((char*)v8 + 2 * v9));
	*(_DWORD*)(a1 + 36) = a4;
	*(float*)(a1 + 32) = a3;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_DWORD*)(a1 + 48) = 4;
	return a1;
}

