//----- (00000001401174A0) ----------------------------------------------------
_QWORD* __fastcall sub_1401174A0(_QWORD* a1, int* a2, int* a3, int* a4)
{
	__int64 v4; // rbx
	int* v9; // rax
	int* v10; // rax
	int* v11; // rax
	__int64 v12; // rax
	__int64 v13; // rax

	v4 = 0i64;
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	v9 = sub_14018B280(16i64, 0);
	a1[1] = v9;
	a1[2] = v9;
	a1[3] = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	a1[5] = 0i64;
	a1[6] = 0i64;
	a1[7] = 0i64;
	v10 = sub_14018B280(16i64, 0);
	a1[5] = v10;
	a1[6] = v10;
	a1[7] = v10 + 4;
	if (v10)
		*(_WORD*)v10 = 0;
	a1[9] = 0i64;
	a1[10] = 0i64;
	a1[11] = 0i64;
	v11 = sub_14018B280(16i64, 0);
	a1[9] = v11;
	a1[10] = v11;
	a1[11] = v11 + 4;
	if (v11)
		*(_WORD*)v11 = 0;
	v12 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v12;
		while (*((_WORD*)a2 + v12));
	}
	sub_14001C480((__int64)a1, a2, (int*)((char*)a2 + 2 * v12));
	v13 = 0i64;
	if (*(_WORD*)a3)
	{
		do
			++v13;
		while (*((_WORD*)a3 + v13));
	}
	sub_14001C480((__int64)(a1 + 4), a3, (int*)((char*)a3 + 2 * v13));
	if (*(_WORD*)a4)
	{
		do
			++v4;
		while (*((_WORD*)a4 + v4));
	}
	sub_14001C480((__int64)(a1 + 8), a4, (int*)((char*)a4 + 2 * v4));
	return a1;
}

