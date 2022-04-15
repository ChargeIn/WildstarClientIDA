//----- (00000001400EEED0) ----------------------------------------------------
int** __fastcall sub_1400EEED0(__int64 a1, int** a2, __int64 a3, __int64 a4, __int64 a5)
{
	__int64 v8; // rcx
	int* v9; // rax
	int* v10; // rbx
	__int64 v11; // rax
	int* v12; // rax
	int* v13; // rbp
	__int64 v14; // rax

	if (a4 == *(_QWORD*)(a1 + 8) || a3 || (int)sub_14018E2C0(*(_QWORD*)(a5 + 8), *(unsigned __int16**)(a4 + 40)) < 0)
	{
		v12 = sub_14018B280(72i64, 0);
		v10 = v12;
		v13 = v12 + 8;
		if (v12 != (int*)-32i64)
		{
			*((_QWORD*)v12 + 5) = 0i64;
			*((_QWORD*)v12 + 6) = 0i64;
			*((_QWORD*)v12 + 7) = 0i64;
			sub_14001C1B0((_QWORD*)v12 + 4, *(int**)(a5 + 8), *(_QWORD*)(a5 + 16));
			*((_QWORD*)v13 + 4) = *(_QWORD*)(a5 + 32);
		}
		*(_QWORD*)(a4 + 16) = v10;
		v14 = *(_QWORD*)(a1 + 8);
		if (a4 == v14)
		{
			*(_QWORD*)(v14 + 8) = v10;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v10;
		}
		else if (a4 == *(_QWORD*)(v14 + 16))
		{
			*(_QWORD*)(v14 + 16) = v10;
		}
	}
	else
	{
		v9 = sub_1400EFA70(v8, a5);
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
// 1400EEF19: variable 'v8' is possibly undefined

