//----- (000000014013D390) ----------------------------------------------------
int* __fastcall sub_14013D390(__int64 a1, __int64 a2, __int64 a3)
{
	int* v6; // rax
	int* v7; // rsi
	__int64 v8; // rdx
	__int64 v9; // rdi
	int* v10; // rbp
	int* v11; // rbx
	__int64 v12; // rdx
	int* v15; // [rsp+48h] [rbp+10h]

	v6 = sub_14013D6C0(a1, (char*)a2);
	v7 = v6;
	v15 = v6;
	*((_QWORD*)v6 + 1) = a3;
	v8 = *(_QWORD*)(a2 + 24);
	if (v8)
		*((_QWORD*)v6 + 3) = sub_14013D390(a1, v8, v6);
	v9 = *(_QWORD*)(a2 + 16);
	v10 = v7;
	if (!v9)
		return v7;
	do
	{
		v11 = sub_14018B280(72i64, 0);
		if (v11 != (int*)-32i64)
		{
			*((_QWORD*)v11 + 5) = 0i64;
			*((_QWORD*)v11 + 6) = 0i64;
			*((_QWORD*)v11 + 7) = 0i64;
			sub_14001C1B0((_QWORD*)v11 + 4, *(int**)(v9 + 40), *(_QWORD*)(v9 + 48));
			v11[16] = *(_DWORD*)(v9 + 64);
		}
		*(_BYTE*)v11 = *(_BYTE*)v9;
		*((_QWORD*)v11 + 2) = 0i64;
		*((_QWORD*)v11 + 3) = 0i64;
		*((_QWORD*)v10 + 2) = v11;
		*((_QWORD*)v11 + 1) = v10;
		v12 = *(_QWORD*)(v9 + 24);
		if (v12)
			*((_QWORD*)v11 + 3) = sub_14013D390(a1, v12, v11);
		v9 = *(_QWORD*)(v9 + 16);
		v10 = v11;
	} while (v9);
	return v15;
}

