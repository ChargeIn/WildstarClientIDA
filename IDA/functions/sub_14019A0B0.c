//----- (000000014019A0B0) ----------------------------------------------------
char* __fastcall sub_14019A0B0(_QWORD* a1, char* a2, _QWORD* a3)
{
	_QWORD* v3; // r9
	char* result; // rax
	__int64 v8; // r9
	__int64 v9; // r10
	char* v10; // rcx
	char* v11; // r8
	__int64 j; // rdx
	__int64 v13; // rax
	__int64 v14; // r9
	__int64 v15; // rcx
	__int64 v16; // r14
	int* v17; // rax
	char* v18; // rdx
	int* v19; // rbp
	int* i; // rcx
	char* v21; // rdx
	_QWORD* v22; // rbx
	signed __int64 v23; // rdi
	signed __int64 v24; // rcx
	signed __int64 v25; // rdi
	__int64 v26; // rcx

	v3 = (_QWORD*)a1[2];
	if (v3 == (_QWORD*)a1[3])
	{
		v14 = ((__int64)v3 - a1[1]) >> 4;
		v15 = 2 * v14;
		if (!v14)
			v15 = 1i64;
		v16 = sub_14018A3E0(16 * v15) & 0xFFFFFFFFFFFFFFF0ui64;
		v17 = sub_14018B280(v16, 0);
		v18 = (char*)a1[1];
		v19 = v17;
		for (i = v17; v18 != a2; i += 4)
		{
			if (i)
			{
				*(_QWORD*)i = 0i64;
				*((_QWORD*)i + 1) = 0i64;
				*((_QWORD*)i + 1) = *((_QWORD*)v18 + 1);
				*(_QWORD*)i = *(_QWORD*)v18;
			}
			v18 += 16;
		}
		if (i)
		{
			*(_QWORD*)i = 0i64;
			*((_QWORD*)i + 1) = 0i64;
			*((_QWORD*)i + 1) = a3[1];
			*(_QWORD*)i = *a3;
		}
		v21 = (char*)a1[2];
		v22 = i + 4;
		if (a2 != v21)
		{
			v23 = a2 - (char*)i;
			v24 = v23 - 16;
			v25 = v23 - 24;
			do
			{
				if (v22)
				{
					*v22 = 0i64;
					v22[1] = 0i64;
					v22[1] = *(_QWORD*)((char*)v22 + v24 + 8);
					*v22 = *(_QWORD*)((char*)v22 + v25 + 8);
				}
				v22 += 2;
			} while ((char*)v22 + v25 + 8 != v21);
		}
		v26 = a1[1];
		if (v26)
			sub_14018B900(v26, 0);
		result = (char*)v19 + v16;
		a1[1] = v19;
		a1[2] = v22;
		a1[3] = (char*)v19 + v16;
	}
	else
	{
		if (v3)
		{
			*v3 = 0i64;
			v3[1] = 0i64;
			v3[1] = *(v3 - 1);
			*v3 = *(v3 - 2);
		}
		a1[2] += 16i64;
		result = (char*)a1[2];
		v8 = a3[1];
		v9 = *a3;
		v10 = result - 32;
		v11 = result - 16;
		for (j = (result - 32 - a2) >> 4; j > 0; *(_QWORD*)v11 = *(_QWORD*)v10)
		{
			v13 = *((_QWORD*)v10 - 1);
			v10 -= 16;
			v11 -= 16;
			*((_QWORD*)v11 + 1) = v13;
			result = *(char**)v10;
			--j;
		}
		*((_QWORD*)a2 + 1) = v8;
		*(_QWORD*)a2 = v9;
	}
	return result;
}

