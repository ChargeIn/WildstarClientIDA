//----- (0000000140031EF0) ----------------------------------------------------
int* __fastcall sub_140031EF0(_QWORD* a1, int** a2, int** a3)
{
	_QWORD* v3; // r9
	__int64 v7; // rcx
	int* result; // rax
	__int64 v9; // r8
	_QWORD* v10; // r9
	__int64 j; // rdx
	__int64 v12; // rcx
	__int64 v13; // r9
	__int64 v14; // rcx
	__int64 v15; // r14
	int* v16; // rax
	int** v17; // r8
	int* v18; // rbp
	int* i; // rdx
	int** v20; // r8
	int** v21; // rbx
	int** v22; // rcx
	__int64 v23; // rcx

	v3 = (_QWORD*)a1[2];
	if (v3 == (_QWORD*)a1[3])
	{
		v13 = ((__int64)v3 - a1[1]) >> 3;
		v14 = 2 * v13;
		if (!v13)
			v14 = 1i64;
		v15 = 2 * ((unsigned __int64)sub_14018A3E0(8 * v14) >> 3);
		v16 = sub_14018B280(v15 * 4, 0);
		v17 = (int**)a1[1];
		v18 = v16;
		for (i = v16; v17 != a2; i += 2)
		{
			if (i)
				*(_QWORD*)i = *v17;
			++v17;
		}
		if (i)
			*(_QWORD*)i = *a3;
		v20 = (int**)a1[2];
		v21 = (int**)(i + 2);
		if (a2 != v20)
		{
			v22 = a2;
			do
			{
				if (v21)
					*v21 = *v22;
				++v22;
				++v21;
			} while (v22 != v20);
		}
		v23 = a1[1];
		if (v23)
			sub_14018B900(v23, 0);
		result = &v18[v15];
		a1[1] = v18;
		a1[2] = v21;
		a1[3] = &v18[v15];
	}
	else
	{
		if (v3)
			*v3 = *(v3 - 1);
		a1[2] += 8i64;
		v7 = a1[2];
		result = *a3;
		v9 = v7 - 16;
		v10 = (_QWORD*)(v7 - 8);
		for (j = (v7 - 16 - (__int64)a2) >> 3; j > 0; *v10 = v12)
		{
			v12 = *(_QWORD*)(v9 - 8);
			v9 -= 8i64;
			--v10;
			--j;
		}
		*a2 = result;
	}
	return result;
}

