//----- (0000000140590210) ----------------------------------------------------
int* __fastcall sub_140590210(__int64 a1, int** a2, __int64 a3)
{
	int* v6; // rbp
	char v7; // r9
	int* v8; // rdx
	int* v9; // rsi
	int* v10; // rdi
	int* v11; // rbx
	__int64 v12; // rdx

	v6 = sub_14018B280(40i64, 0);
	sub_14040B4C0((int**)v6 + 4, a2 + 4);
	v7 = *(_BYTE*)a2;
	*((_QWORD*)v6 + 2) = 0i64;
	*((_QWORD*)v6 + 3) = 0i64;
	*((_QWORD*)v6 + 1) = a3;
	*(_BYTE*)v6 = v7;
	v8 = a2[3];
	if (v8)
		*((_QWORD*)v6 + 3) = sub_140590210(a1, v8, v6);
	v9 = v6;
	v10 = a2[2];
	if (!v10)
		return v6;
	do
	{
		v11 = sub_14018B280(40i64, 0);
		sub_14040B4C0((int**)v11 + 4, (int**)v10 + 4);
		*(_BYTE*)v11 = *(_BYTE*)v10;
		*((_QWORD*)v11 + 2) = 0i64;
		*((_QWORD*)v11 + 3) = 0i64;
		*((_QWORD*)v9 + 2) = v11;
		*((_QWORD*)v11 + 1) = v9;
		v12 = *((_QWORD*)v10 + 3);
		if (v12)
			*((_QWORD*)v11 + 3) = sub_140590210(a1, v12, v11);
		v10 = (int*)*((_QWORD*)v10 + 2);
		v9 = v11;
	} while (v10);
	return v6;
}

