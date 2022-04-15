//----- (00000001403D78A0) ----------------------------------------------------
int** __fastcall sub_1403D78A0(__int64 a1, int** a2, __int64 a3, __int64 a4, __int64 a5)
{
	unsigned int v8; // ecx
	bool v9; // cf
	int v10; // eax
	int v11; // ecx
	bool v12; // al
	int* v13; // rbx
	__int64 v14; // rax
	int* v15; // rax
	__int64 v16; // rax

	if (a4 == *(_QWORD*)(a1 + 8) || a3)
		goto LABEL_13;
	v8 = *(_DWORD*)(a4 + 32);
	v9 = *(_DWORD*)a5 < v8;
	if (*(_DWORD*)a5 == v8)
	{
		v10 = *(_DWORD*)(a5 + 4);
		v11 = *(_DWORD*)(a4 + 36);
		if (v10 != v11)
		{
			v12 = v10 < v11;
			goto LABEL_8;
		}
		v9 = *(_DWORD*)(a5 + 8) < *(_DWORD*)(a4 + 40);
	}
	v12 = v9;
LABEL_8:
	if (!v12)
	{
		v13 = sub_14018B280(56i64, 0);
		if (v13 != (int*)-32i64)
		{
			*((_QWORD*)v13 + 4) = *(_QWORD*)a5;
			*((_QWORD*)v13 + 5) = *(_QWORD*)(a5 + 8);
			*((_QWORD*)v13 + 6) = *(_QWORD*)(a5 + 16);
		}
		*(_QWORD*)(a4 + 24) = v13;
		v14 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD*)(v14 + 24))
			*(_QWORD*)(v14 + 24) = v13;
		goto LABEL_19;
	}
LABEL_13:
	v15 = sub_14018B280(56i64, 0);
	v13 = v15;
	if (v15 != (int*)-32i64)
	{
		*((_QWORD*)v15 + 4) = *(_QWORD*)a5;
		*((_QWORD*)v15 + 5) = *(_QWORD*)(a5 + 8);
		*((_QWORD*)v15 + 6) = *(_QWORD*)(a5 + 16);
	}
	*(_QWORD*)(a4 + 16) = v15;
	v16 = *(_QWORD*)(a1 + 8);
	if (a4 == v16)
	{
		*(_QWORD*)(v16 + 8) = v13;
		*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v13;
	}
	else if (a4 == *(_QWORD*)(v16 + 16))
	{
		*(_QWORD*)(v16 + 16) = v13;
	}
LABEL_19:
	*((_QWORD*)v13 + 1) = a4;
	*((_QWORD*)v13 + 2) = 0i64;
	*((_QWORD*)v13 + 3) = 0i64;
	sub_1400081C0((__int64)v13, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v13;
	return a2;
}

