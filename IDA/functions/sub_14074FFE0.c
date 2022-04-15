//----- (000000014074FFE0) ----------------------------------------------------
char* __fastcall sub_14074FFE0(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
	_QWORD* v3; // r9
	__int64 v7; // rax
	__int64 v8; // rcx
	_QWORD* v9; // r8
	__int64 j; // rdx
	__int64 v11; // rax
	char* result; // rax
	__int64 v13; // r9
	__int64 v14; // rcx
	__int64 v15; // r14
	int* v16; // rax
	_QWORD* v17; // r8
	int* v18; // rbp
	int* i; // rdx
	_QWORD* v20; // r8
	_QWORD* v21; // rbx
	_QWORD* v22; // rcx
	__int64 v23; // rcx

	v3 = (_QWORD*)a1[2];
	if (v3 == (_QWORD*)a1[3])
	{
		v13 = ((__int64)v3 - a1[1]) >> 4;
		v14 = 2 * v13;
		if (!v13)
			v14 = 1i64;
		v15 = sub_14018A3E0(16 * v14) & 0xFFFFFFFFFFFFFFF0ui64;
		v16 = sub_14018B280(v15, 0);
		v17 = (_QWORD*)a1[1];
		v18 = v16;
		for (i = v16; v17 != a2; i += 4)
		{
			if (i)
			{
				*(_QWORD*)i = *v17;
				*((_QWORD*)i + 1) = v17[1];
			}
			v17 += 2;
		}
		if (i)
		{
			*(_QWORD*)i = *a3;
			*((_QWORD*)i + 1) = a3[1];
		}
		v20 = (_QWORD*)a1[2];
		v21 = i + 4;
		if (a2 != v20)
		{
			v22 = a2;
			do
			{
				if (v21)
				{
					*v21 = *v22;
					v21[1] = v22[1];
				}
				v22 += 2;
				v21 += 2;
			} while (v22 != v20);
		}
		v23 = a1[1];
		if (v23)
			sub_14018B900(v23, 0);
		result = (char*)v18 + v15;
		a1[1] = v18;
		a1[2] = v21;
		a1[3] = (char*)v18 + v15;
	}
	else
	{
		if (v3)
		{
			*v3 = *(v3 - 2);
			v3[1] = *(v3 - 1);
		}
		a1[2] += 16i64;
		v7 = a1[2];
		v8 = v7 - 32;
		v9 = (_QWORD*)(v7 - 16);
		for (j = (v7 - 32 - (__int64)a2) >> 4; j > 0; v9[1] = *(_QWORD*)(v8 + 8))
		{
			v11 = *(_QWORD*)(v8 - 16);
			v8 -= 16i64;
			v9 -= 2;
			*v9 = v11;
			--j;
		}
		*a2 = *a3;
		result = (char*)a3[1];
		a2[1] = result;
	}
	return result;
}

