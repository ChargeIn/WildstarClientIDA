//----- (0000000140590B50) ----------------------------------------------------
int** __fastcall sub_140590B50(__int64 a1, int** a2, __int64 a3, _QWORD* a4, _QWORD* a5)
{
	int* v8; // rax
	int* v9; // rbx
	__int64 v10; // rax
	_QWORD* v11; // rax

	if (a4 == *(_QWORD**)(a1 + 8) || a3 || *a5 < a4[4])
	{
		v9 = sub_1405911C0(a1, a5);
		a4[2] = v9;
		v11 = *(_QWORD**)(a1 + 8);
		if (a4 == v11)
		{
			v11[1] = v9;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v9;
		}
		else if (a4 == (_QWORD*)v11[2])
		{
			v11[2] = v9;
		}
	}
	else
	{
		v8 = sub_1405911C0(a1, a5);
		a4[3] = v8;
		v9 = v8;
		v10 = *(_QWORD*)(a1 + 8);
		if (a4 == *(_QWORD**)(v10 + 24))
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

