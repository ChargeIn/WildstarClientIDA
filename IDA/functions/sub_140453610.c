//----- (0000000140453610) ----------------------------------------------------
int* __fastcall sub_140453610(__int64 a1, char* a2, __int64 a3)
{
	int* v6; // rbp
	char v7; // al
	__int64 v8; // rdx
	__int64 v9; // rdi
	int* v10; // rsi
	int* v11; // rax
	int* v12; // rbx
	__int64 v13; // rdx

	v6 = sub_14018B280(48i64, 0);
	if (v6 != (int*)-32i64)
	{
		v6[8] = *((_DWORD*)a2 + 8);
		v6[9] = *((_DWORD*)a2 + 9);
		v6[10] = *((_DWORD*)a2 + 10);
		v6[11] = *((_DWORD*)a2 + 11);
	}
	v7 = *a2;
	*((_QWORD*)v6 + 1) = a3;
	*(_BYTE*)v6 = v7;
	*((_QWORD*)v6 + 2) = 0i64;
	*((_QWORD*)v6 + 3) = 0i64;
	v8 = *((_QWORD*)a2 + 3);
	if (v8)
		*((_QWORD*)v6 + 3) = sub_140453610(a1, v8, v6);
	v9 = *((_QWORD*)a2 + 2);
	v10 = v6;
	if (!v9)
		return v6;
	do
	{
		v11 = sub_14018B280(48i64, 0);
		v12 = v11;
		if (v11 != (int*)-32i64)
		{
			v11[8] = *(_DWORD*)(v9 + 32);
			v11[9] = *(_DWORD*)(v9 + 36);
			v11[10] = *(_DWORD*)(v9 + 40);
			v11[11] = *(_DWORD*)(v9 + 44);
		}
		*(_BYTE*)v11 = *(_BYTE*)v9;
		*((_QWORD*)v11 + 2) = 0i64;
		*((_QWORD*)v11 + 3) = 0i64;
		*((_QWORD*)v10 + 2) = v11;
		*((_QWORD*)v11 + 1) = v10;
		v13 = *(_QWORD*)(v9 + 24);
		if (v13)
			*((_QWORD*)v11 + 3) = sub_140453610(a1, v13, v11);
		v9 = *(_QWORD*)(v9 + 16);
		v10 = v12;
	} while (v9);
	return v6;
}

