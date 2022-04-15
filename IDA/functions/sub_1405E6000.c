//----- (00000001405E6000) ----------------------------------------------------
int* __fastcall sub_1405E6000(__int64* a1, int a2, int a3)
{
	unsigned __int64 v3; // r10
	unsigned int v6; // r9d
	__int64 v7; // rcx
	__int64 v8; // rax
	int* v9; // rax
	int* v10; // rdi
	int* result; // rax
	__int64 v12; // rbx
	int* v13; // rax
	int* v14; // r14

	v3 = a1[1];
	v6 = 0;
	if (v3)
	{
		v7 = *a1;
		v8 = 0i64;
		while (*(_DWORD*)(*(_QWORD*)(v7 + 8 * v8) + 8i64) != a2)
		{
			v8 = ++v6;
			if (v6 >= v3)
				goto LABEL_5;
		}
		return *(int**)(v7 + 8i64 * v6);
	}
	else
	{
	LABEL_5:
		if (a3)
		{
			v9 = sub_14018B280(136i64, 0);
			v10 = v9;
			if (v9)
			{
				*((_QWORD*)v9 + 9) = 0i64;
				*((_QWORD*)v9 + 8) = 0i64;
				sub_1407E4830(v9, 0i64, 0x58ui64);
				*((_QWORD*)v10 + 12) = 0i64;
				*((_QWORD*)v10 + 11) = 0i64;
				*((_QWORD*)v10 + 14) = 0i64;
				*((_QWORD*)v10 + 13) = 0i64;
				*((_QWORD*)v10 + 16) = 0i64;
				*((_QWORD*)v10 + 15) = 0i64;
			}
			else
			{
				v10 = 0i64;
			}
			v10[2] = a2;
			*((_QWORD*)v10 + 10) = 0i64;
			v10[3] = 0;
			v12 = a1[1];
			v13 = sub_14018DB00(*a1, v12 + 1, 8i64);
			v14 = v13;
			*(_QWORD*)&v13[2 * v12] = v10;
			if ((int*)*a1 != v13)
			{
				sub_1407DB590(v13, (int*)*a1, 8 * a1[1]);
				if (*a1)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
				*a1 = (__int64)v14;
			}
			result = v10;
			a1[1] = v12 + 1;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}

