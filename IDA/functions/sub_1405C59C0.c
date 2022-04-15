//----- (00000001405C59C0) ----------------------------------------------------
int* __fastcall sub_1405C59C0(__int64 a1, char* a2, __int64 a3)
{
	int* v6; // rax
	int* v7; // rbp
	char v8; // al
	__int64 v9; // rdx
	__int64 v10; // rdi
	int* v11; // rsi
	int* v12; // rax
	int* v13; // rbx
	__int64 v14; // rdx
	int* v17; // [rsp+48h] [rbp+10h]

	v6 = sub_14018B280(56i64, 0);
	v7 = v6;
	v17 = v6;
	if (v6 != (int*)-32i64)
	{
		v6[8] = *((_DWORD*)a2 + 8);
		v6[9] = *((_DWORD*)a2 + 9);
		v6[10] = *((_DWORD*)a2 + 10);
		v6[11] = *((_DWORD*)a2 + 11);
		v6[12] = *((_DWORD*)a2 + 12);
		v6[13] = *((_DWORD*)a2 + 13);
	}
	v8 = *a2;
	*((_QWORD*)v7 + 1) = a3;
	*(_BYTE*)v7 = v8;
	*((_QWORD*)v7 + 2) = 0i64;
	*((_QWORD*)v7 + 3) = 0i64;
	v9 = *((_QWORD*)a2 + 3);
	if (v9)
		*((_QWORD*)v7 + 3) = sub_1405C59C0(a1, v9, v7);
	v10 = *((_QWORD*)a2 + 2);
	v11 = v7;
	if (!v10)
		return v7;
	do
	{
		v12 = sub_14018B280(56i64, 0);
		v13 = v12;
		if (v12 != (int*)-32i64)
		{
			v12[8] = *(_DWORD*)(v10 + 32);
			v12[9] = *(_DWORD*)(v10 + 36);
			v12[10] = *(_DWORD*)(v10 + 40);
			v12[11] = *(_DWORD*)(v10 + 44);
			v12[12] = *(_DWORD*)(v10 + 48);
			v12[13] = *(_DWORD*)(v10 + 52);
		}
		*(_BYTE*)v12 = *(_BYTE*)v10;
		*((_QWORD*)v12 + 2) = 0i64;
		*((_QWORD*)v12 + 3) = 0i64;
		*((_QWORD*)v11 + 2) = v12;
		*((_QWORD*)v12 + 1) = v11;
		v14 = *(_QWORD*)(v10 + 24);
		if (v14)
			*((_QWORD*)v12 + 3) = sub_1405C59C0(a1, v14, v12);
		v10 = *(_QWORD*)(v10 + 16);
		v11 = v13;
	} while (v10);
	return v17;
}

