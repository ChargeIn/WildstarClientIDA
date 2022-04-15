//----- (0000000140196620) ----------------------------------------------------
int** __fastcall sub_140196620(__int64 a1, int** a2, __int64 a3, __int64 a4, int* a5)
{
	int* v8; // rax
	int* v9; // rbx
	__int64 v10; // rax
	int* v11; // rax
	int* v12; // r8
	int** v13; // rax
	__int64 v14; // rax

	if (a4 == *(_QWORD*)(a1 + 8) || a3 || *a5 - *(_DWORD*)(a4 + 32) < 0)
	{
		v11 = sub_14018B280(64i64, 0);
		v9 = v11;
		if (v11 != (int*)-32i64)
		{
			v11[8] = *a5;
			*((_QWORD*)v11 + 5) = 0i64;
			*((_QWORD*)v11 + 7) = 0i64;
			v12 = v11 + 14;
			*((_QWORD*)v11 + 6) = v11 + 10;
			*((_QWORD*)v11 + 7) = *((_QWORD*)v11 + 5);
			*((_QWORD*)v11 + 5) = v11 + 12;
			v13 = (int**)*((_QWORD*)v11 + 7);
			if (v13)
				*v13 = v12;
		}
		*(_QWORD*)(a4 + 16) = v9;
		v14 = *(_QWORD*)(a1 + 8);
		if (a4 == v14)
		{
			*(_QWORD*)(v14 + 8) = v9;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v9;
		}
		else if (a4 == *(_QWORD*)(v14 + 16))
		{
			*(_QWORD*)(v14 + 16) = v9;
		}
	}
	else
	{
		v8 = sub_140196830(a1, a5);
		*(_QWORD*)(a4 + 24) = v8;
		v9 = v8;
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

