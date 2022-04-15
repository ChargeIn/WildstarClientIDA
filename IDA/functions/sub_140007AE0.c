//----- (0000000140007AE0) ----------------------------------------------------
int** __fastcall sub_140007AE0(__int64 a1, int** a2, __int64 a3, _QWORD* a4, _QWORD* a5)
{
	int* v8; // rbx
	__int64 v9; // rax
	_QWORD* v10; // rax

	if (a4 == *(_QWORD**)(a1 + 8) || a3 || *a5 < a4[4])
	{
		v8 = sub_14018B280(40i64, 0);
		if (v8 != (int*)-32i64)
			*((_QWORD*)v8 + 4) = *a5;
		a4[2] = v8;
		v10 = *(_QWORD**)(a1 + 8);
		if (a4 == v10)
		{
			v10[1] = v8;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v8;
		}
		else if (a4 == (_QWORD*)v10[2])
		{
			v10[2] = v8;
		}
	}
	else
	{
		v8 = sub_14018B280(40i64, 0);
		if (v8 != (int*)-32i64)
			*((_QWORD*)v8 + 4) = *a5;
		a4[3] = v8;
		v9 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD**)(v9 + 24))
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

