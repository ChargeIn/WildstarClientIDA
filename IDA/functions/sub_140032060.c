//----- (0000000140032060) ----------------------------------------------------
int* __fastcall sub_140032060(__int64 a1, char* a2, __int64 a3)
{
	int* v6; // rbp
	char v7; // cl
	__int64 v8; // rdx
	__int64 v9; // rdi
	int* v10; // rsi
	int* v11; // rbx
	__int64 v12; // rdx

	v6 = sub_14018B280(40i64, 0);
	if (v6 != (int*)-32i64)
		*((_QWORD*)v6 + 4) = *((_QWORD*)a2 + 4);
	v7 = *a2;
	*((_QWORD*)v6 + 1) = a3;
	*((_QWORD*)v6 + 2) = 0i64;
	*((_QWORD*)v6 + 3) = 0i64;
	*(_BYTE*)v6 = v7;
	v8 = *((_QWORD*)a2 + 3);
	if (v8)
		*((_QWORD*)v6 + 3) = sub_140032060(a1, v8, v6);
	v9 = *((_QWORD*)a2 + 2);
	v10 = v6;
	if (!v9)
		return v6;
	do
	{
		v11 = sub_14018B280(40i64, 0);
		if (v11 != (int*)-32i64)
			*((_QWORD*)v11 + 4) = *(_QWORD*)(v9 + 32);
		*(_BYTE*)v11 = *(_BYTE*)v9;
		*((_QWORD*)v11 + 2) = 0i64;
		*((_QWORD*)v11 + 3) = 0i64;
		*((_QWORD*)v10 + 2) = v11;
		*((_QWORD*)v11 + 1) = v10;
		v12 = *(_QWORD*)(v9 + 24);
		if (v12)
			*((_QWORD*)v11 + 3) = sub_140032060(a1, v12, v11);
		v9 = *(_QWORD*)(v9 + 16);
		v10 = v11;
	} while (v9);
	return v6;
}

