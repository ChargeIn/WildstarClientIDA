//----- (000000014001F550) ----------------------------------------------------
int** __fastcall sub_14001F550(__int64 a1, int** a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v8; // rcx
	int* v9; // rax
	int* v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rax

	if (a4 == *(_QWORD*)(a1 + 8)
		|| a3
		|| (v8 = *(unsigned int*)(a4 + 32), *(_DWORD*)a5 < (int)v8)
		|| (int)v8 >= *(_DWORD*)a5 && *(_DWORD*)(a5 + 4) < *(_DWORD*)(a4 + 36))
	{
		v10 = sub_14018B280(72i64, 0);
		if (v10 != (int*)-32i64)
		{
			*((_QWORD*)v10 + 4) = *(_QWORD*)a5;
			sub_14001E1E0((__int64)(v10 + 10), a5 + 8);
		}
		*(_QWORD*)(a4 + 16) = v10;
		v12 = *(_QWORD*)(a1 + 8);
		if (a4 == v12)
		{
			*(_QWORD*)(v12 + 8) = v10;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v10;
		}
		else if (a4 == *(_QWORD*)(v12 + 16))
		{
			*(_QWORD*)(v12 + 16) = v10;
		}
	}
	else
	{
		v9 = sub_14001F440(v8, (_QWORD*)a5);
		*(_QWORD*)(a4 + 24) = v9;
		v10 = v9;
		v11 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD*)(v11 + 24))
			*(_QWORD*)(v11 + 24) = v10;
	}
	*((_QWORD*)v10 + 1) = a4;
	*((_QWORD*)v10 + 2) = 0i64;
	*((_QWORD*)v10 + 3) = 0i64;
	sub_1400081C0((__int64)v10, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v10;
	return a2;
}

