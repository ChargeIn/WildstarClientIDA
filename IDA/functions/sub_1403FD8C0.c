//----- (00000001403FD8C0) ----------------------------------------------------
int** __fastcall sub_1403FD8C0(__int64 a1, int** a2, __int64* a3, int* a4)
{
	__int64 v4; // rbx
	__int64 v5; // rdi
	__int64 v9; // rdi
	__int64 v10; // rcx
	__int64 v11; // rcx
	int* v12; // rax
	int* v13; // rbx
	__int64 v14; // rax
	int* v15; // rax
	__int64 v16; // rax
	__int64 v17; // rbx
	__int64 i; // rax
	__int64 v19; // rax
	__int64 v20; // rcx
	char v22[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v5 = *a3;
	if (*a3 == *(_QWORD*)(v4 + 16))
	{
		if (*(_QWORD*)(a1 + 16) && sub_1403FB770(a1, (float*)a4, (float*)(v5 + 32)))
		{
		LABEL_4:
			sub_1403FECE0(a1, a2, v5, v5, a4);
			return a2;
		}
		goto LABEL_32;
	}
	if (v5 != v4)
	{
		if (*(_BYTE*)v5 || *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64) != v5)
		{
			v17 = *(_QWORD*)(v5 + 16);
			if (v17)
			{
				for (i = *(_QWORD*)(v17 + 24); i; i = *(_QWORD*)(i + 24))
					v17 = i;
			}
			else
			{
				v17 = *(_QWORD*)(v5 + 8);
				if (v5 == *(_QWORD*)(v17 + 16))
				{
					do
					{
						v19 = v17;
						v17 = *(_QWORD*)(v17 + 8);
					} while (v19 == *(_QWORD*)(v17 + 16));
				}
			}
		}
		else
		{
			v17 = *(_QWORD*)(v5 + 24);
		}
		if (sub_1403FB770(a1, (float*)(v17 + 32), (float*)a4) && sub_1403FB770(v20, (float*)a4, (float*)(v5 + 32)))
		{
			if (!*(_QWORD*)(v17 + 24))
			{
				sub_1403FECE0(a1, a2, 0i64, v17, a4);
				return a2;
			}
			goto LABEL_4;
		}
	LABEL_32:
		*a2 = *(int**)sub_1403FEDF0(a1, (__int64)v22, (float*)a4);
		return a2;
	}
	v9 = *(_QWORD*)(v4 + 24);
	if (!sub_1403FB770(a1, (float*)(v9 + 32), (float*)a4))
		goto LABEL_32;
	if (v9 == v4 || sub_1403FB770(v10, (float*)a4, (float*)(v9 + 32)))
	{
		v15 = sub_14018B280(80i64, 0);
		v13 = v15;
		if (v15 != (int*)-32i64)
		{
			v15[8] = *a4;
			v15[9] = a4[1];
			v15[10] = a4[2];
			v15[11] = a4[3];
			sub_1403FB870((__int64)(v15 + 12), (__int64)(a4 + 4));
		}
		*(_QWORD*)(v9 + 16) = v13;
		v16 = *(_QWORD*)(a1 + 8);
		if (v9 == v16)
		{
			*(_QWORD*)(v16 + 8) = v13;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v13;
		}
		else if (v9 == *(_QWORD*)(v16 + 16))
		{
			*(_QWORD*)(v16 + 16) = v13;
		}
	}
	else
	{
		v12 = sub_1403FF580(v11, a4);
		*(_QWORD*)(v9 + 24) = v12;
		v13 = v12;
		v14 = *(_QWORD*)(a1 + 8);
		if (v9 == *(_QWORD*)(v14 + 24))
			*(_QWORD*)(v14 + 24) = v13;
	}
	*((_QWORD*)v13 + 1) = v9;
	*((_QWORD*)v13 + 2) = 0i64;
	*((_QWORD*)v13 + 3) = 0i64;
	sub_1400081C0((__int64)v13, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v13;
	return a2;
}
// 1403FD957: variable 'v10' is possibly undefined
// 1403FD963: variable 'v11' is possibly undefined
// 1403FDA74: variable 'v20' is possibly undefined
// 1403FD8C0: using guessed type char var_18[24];

