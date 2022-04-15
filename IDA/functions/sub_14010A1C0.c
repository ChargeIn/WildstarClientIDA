//----- (000000014010A1C0) ----------------------------------------------------
int* __fastcall sub_14010A1C0(_QWORD* a1, int* a2, _QWORD* a3)
{
	_QWORD* v3; // r9
	__int64 v7; // rbx
	int* result; // rax
	__int64 v9; // r9
	__int64 v10; // rcx
	__int64 v11; // r15
	int* v12; // rax
	int* v13; // rdx
	int* v14; // rbp
	unsigned __int64 v15; // rbx
	int* v16; // rcx
	int* v17; // rdi
	unsigned __int64 v18; // rbx
	__int64 v19; // rcx
	int* v20; // rbx

	v3 = (_QWORD*)a1[2];
	if (v3 == (_QWORD*)a1[3])
	{
		v9 = ((__int64)v3 - a1[1]) >> 3;
		v10 = 2 * v9;
		if (!v9)
			v10 = 1i64;
		v11 = 2 * ((unsigned __int64)sub_14018A3E0(8 * v10) >> 3);
		v12 = sub_14018B280(v11 * 4, 0);
		v13 = (int*)a1[1];
		v14 = v12;
		v15 = 2 * (((char*)a2 - (char*)v13) >> 3);
		sub_1407DB590(v12, v13, v15 * 4);
		v16 = &v14[v15];
		if (&v14[v15])
			*(_QWORD*)v16 = *a3;
		v17 = v16 + 2;
		v18 = 2 * ((__int64)(a1[2] - (_QWORD)a2) >> 3);
		sub_1407DB590(v16 + 2, a2, v18 * 4);
		v19 = a1[1];
		v20 = &v17[v18];
		if (v19)
			sub_14018B900(v19, 0);
		result = &v14[v11];
		a1[1] = v14;
		a1[2] = v20;
		a1[3] = &v14[v11];
	}
	else
	{
		if (v3)
			*v3 = *(v3 - 1);
		v7 = *a3;
		a1[2] += 8i64;
		result = sub_1407DB590(
			(int*)(a1[2] - 8 * ((a1[2] - (_QWORD)a2 - 16i64) >> 3) - 8),
			a2,
			8 * ((a1[2] - (_QWORD)a2 - 16i64) >> 3));
		*(_QWORD*)a2 = v7;
	}
	return result;
}

