//----- (0000000140499210) ----------------------------------------------------
int** __fastcall sub_140499210(__int64 a1, int** a2, __int64 a3, __int64 a4, __int64 a5)
{
	unsigned int v8; // ecx
	int* v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rax

	if (a4 == *(_QWORD*)(a1 + 8)
		|| a3
		|| (v8 = *(_DWORD*)(a4 + 32), *(_DWORD*)a5 < v8)
		|| v8 >= *(_DWORD*)a5 && *(_DWORD*)(a5 + 4) < *(_DWORD*)(a4 + 36))
	{
		v9 = sub_14018B280(48i64, 0);
		if (v9 != (int*)-32i64)
		{
			*((_QWORD*)v9 + 4) = *(_QWORD*)a5;
			*((_QWORD*)v9 + 5) = *(_QWORD*)(a5 + 8);
		}
		*(_QWORD*)(a4 + 16) = v9;
		v11 = *(_QWORD*)(a1 + 8);
		if (a4 == v11)
		{
			*(_QWORD*)(v11 + 8) = v9;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v9;
		}
		else if (a4 == *(_QWORD*)(v11 + 16))
		{
			*(_QWORD*)(v11 + 16) = v9;
		}
	}
	else
	{
		v9 = sub_14018B280(48i64, 0);
		if (v9 != (int*)-32i64)
		{
			*((_QWORD*)v9 + 4) = *(_QWORD*)a5;
			*((_QWORD*)v9 + 5) = *(_QWORD*)(a5 + 8);
		}
		*(_QWORD*)(a4 + 24) = v9;
		v10 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD*)(v10 + 24))
			*(_QWORD*)(v10 + 24) = v9;
	}
	*((_QWORD*)v9 + 1) = a4;
	*((_QWORD*)v9 + 2) = 0i64;
	*((_QWORD*)v9 + 3) = 0i64;
	sub_1400081C0((__int64)v9, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v9;
	return a2;
}

