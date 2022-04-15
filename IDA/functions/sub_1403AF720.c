//----- (00000001403AF720) ----------------------------------------------------
int** __fastcall sub_1403AF720(__int64 a1, int** a2, __int64 a3, __int64 a4, int* a5)
{
	int* v8; // rbx
	__int64 v9; // rax
	int* v10; // rax
	__int64 v11; // rax

	if (a4 == *(_QWORD*)(a1 + 8) || a3 || (unsigned int)*a5 < *(_DWORD*)(a4 + 32))
	{
		v10 = sub_14018B280(48i64, 0);
		v8 = v10;
		if (v10 != (int*)-32i64)
		{
			v10[8] = *a5;
			v10[9] = a5[1];
			v10[10] = a5[2];
			v10[11] = a5[3];
		}
		*(_QWORD*)(a4 + 16) = v10;
		v11 = *(_QWORD*)(a1 + 8);
		if (a4 == v11)
		{
			*(_QWORD*)(v11 + 8) = v8;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v8;
		}
		else if (a4 == *(_QWORD*)(v11 + 16))
		{
			*(_QWORD*)(v11 + 16) = v8;
		}
	}
	else
	{
		v8 = sub_14018B280(48i64, 0);
		if (v8 != (int*)-32i64)
		{
			v8[8] = *a5;
			v8[9] = a5[1];
			v8[10] = a5[2];
			v8[11] = a5[3];
		}
		*(_QWORD*)(a4 + 24) = v8;
		v9 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD*)(v9 + 24))
			*(_QWORD*)(v9 + 24) = v8;
	}
	*((_QWORD*)v8 + 1) = a4;
	*((_QWORD*)v8 + 2) = 0i64;
	*((_QWORD*)v8 + 3) = 0i64;
	sub_1400081C0((__int64)v8, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v8;
	return a2;
}

