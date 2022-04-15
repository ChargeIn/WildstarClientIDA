//----- (000000014010A310) ----------------------------------------------------
_QWORD* __fastcall sub_14010A310(_QWORD* a1, int* a2, __int64 a3)
{
	__int64 v5; // rbx
	__int64 v7; // rdi
	unsigned __int64 v8; // rdi
	__int64 v9; // rdi
	int* v10; // rax
	_WORD* v11; // rax

	v5 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v5;
		while (*((_WORD*)a2 + v5));
	}
	v7 = *(_QWORD*)(a3 + 16) - *(_QWORD*)(a3 + 8);
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	v8 = v5 + (v7 >> 1) + 1;
	if (v8 <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v9 = 2 * v8;
		v10 = sub_14018B280(v9, 0);
		a1[1] = v10;
		a1[2] = v10;
		a1[3] = (char*)v10 + v9;
	}
	v11 = (_WORD*)a1[2];
	if (v11)
		*v11 = 0;
	sub_14001C310(a1, a2, (int*)((char*)a2 + 2 * v5));
	sub_14001C310(a1, *(int**)(a3 + 8), *(int**)(a3 + 16));
	return a1;
}

