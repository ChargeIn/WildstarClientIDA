//----- (0000000140481980) ----------------------------------------------------
int** __fastcall sub_140481980(__int64 a1, int** a2, __int64 a3, __int64 a4, _DWORD* a5)
{
	int v8; // ecx
	bool v9; // sf
	bool v10; // of
	int v11; // eax
	int* v12; // rbx
	__int64 v13; // rax
	int* v14; // rax
	__int64 v15; // rax

	if (a4 == *(_QWORD*)(a1 + 8) || a3)
		goto LABEL_10;
	v8 = *(_DWORD*)(a4 + 32);
	v10 = __OFSUB__(*a5, v8);
	v9 = *a5 - v8 < 0;
	if (*a5 == v8)
	{
		v11 = *(_DWORD*)(a4 + 36);
		v10 = __OFSUB__(a5[1], v11);
		v9 = a5[1] - v11 < 0;
	}
	if (v9 != v10)
	{
	LABEL_10:
		v14 = sub_14018B280(48i64, 0);
		v12 = v14;
		if (v14 != (int*)-32i64)
		{
			v14[8] = *a5;
			v14[9] = a5[1];
			v14[10] = a5[2];
		}
		*(_QWORD*)(a4 + 16) = v14;
		v15 = *(_QWORD*)(a1 + 8);
		if (a4 == v15)
		{
			*(_QWORD*)(v15 + 8) = v12;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v12;
		}
		else if (a4 == *(_QWORD*)(v15 + 16))
		{
			*(_QWORD*)(v15 + 16) = v12;
		}
	}
	else
	{
		v12 = sub_14018B280(48i64, 0);
		if (v12 != (int*)-32i64)
		{
			v12[8] = *a5;
			v12[9] = a5[1];
			v12[10] = a5[2];
		}
		*(_QWORD*)(a4 + 24) = v12;
		v13 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD*)(v13 + 24))
			*(_QWORD*)(v13 + 24) = v12;
	}
	*((_QWORD*)v12 + 1) = a4;
	*((_QWORD*)v12 + 2) = 0i64;
	*((_QWORD*)v12 + 3) = 0i64;
	sub_1400081C0((__int64)v12, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v12;
	return a2;
}

