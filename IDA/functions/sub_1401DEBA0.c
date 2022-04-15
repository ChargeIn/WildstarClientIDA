//----- (00000001401DEBA0) ----------------------------------------------------
int** __fastcall sub_1401DEBA0(__int64 a1, int** a2, __int64 a3, __int64 a4, __int64 a5)
{
	int v8; // eax
	int v9; // ecx
	int v10; // eax
	int v11; // ecx
	int v12; // eax
	int v13; // ecx
	int* v14; // rbx
	__int64 v15; // rax
	int* v16; // rax
	__int64 v17; // rax

	if (a4 == *(_QWORD*)(a1 + 8)
		|| a3
		|| (v8 = *(_DWORD*)(a5 + 8), v9 = *(_DWORD*)(a4 + 40), v8 < v9)
		|| v8 == v9
		&& ((v10 = *(_DWORD*)(a5 + 12), v11 = *(_DWORD*)(a4 + 44), v10 < v11)
			|| v10 == v11
			&& ((v12 = *(_DWORD*)(a5 + 16), v13 = *(_DWORD*)(a4 + 48), v12 < v13)
				|| v12 == v13 && (int)sub_14018E2C0(*(_QWORD*)a5, *(unsigned __int16**)(a4 + 32)) < 0)))
	{
		v16 = sub_14018B280(56i64, 0);
		v14 = v16;
		if (v16 != (int*)-32i64)
		{
			*((_QWORD*)v16 + 4) = *(_QWORD*)a5;
			*((_QWORD*)v16 + 5) = *(_QWORD*)(a5 + 8);
			*((_QWORD*)v16 + 6) = *(_QWORD*)(a5 + 16);
		}
		*(_QWORD*)(a4 + 16) = v16;
		v17 = *(_QWORD*)(a1 + 8);
		if (a4 == v17)
		{
			*(_QWORD*)(v17 + 8) = v14;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v14;
		}
		else if (a4 == *(_QWORD*)(v17 + 16))
		{
			*(_QWORD*)(v17 + 16) = v14;
		}
	}
	else
	{
		v14 = sub_14018B280(56i64, 0);
		if (v14 != (int*)-32i64)
		{
			*((_QWORD*)v14 + 4) = *(_QWORD*)a5;
			*((_QWORD*)v14 + 5) = *(_QWORD*)(a5 + 8);
			*((_QWORD*)v14 + 6) = *(_QWORD*)(a5 + 16);
		}
		*(_QWORD*)(a4 + 24) = v14;
		v15 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD*)(v15 + 24))
			*(_QWORD*)(v15 + 24) = v14;
	}
	*((_QWORD*)v14 + 1) = a4;
	*((_QWORD*)v14 + 2) = 0i64;
	*((_QWORD*)v14 + 3) = 0i64;
	sub_1400081C0((__int64)v14, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v14;
	return a2;
}

