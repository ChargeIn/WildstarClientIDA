//----- (00000001400EE370) ----------------------------------------------------
int** __fastcall sub_1400EE370(__int64 a1, int** a2, __int64* a3, __int64 a4)
{
	__int64 v4; // rbx
	__int64 v5; // rdi
	__int64 v9; // rdi
	__int64 v10; // rcx
	int* v11; // rax
	int* v12; // rbx
	__int64 v13; // rax
	int* v14; // rax
	int* v15; // r15
	__int64 v16; // rax
	_QWORD* v17; // rbx
	_QWORD* i; // rax
	_QWORD* v19; // rax
	char v21[40]; // [rsp+30h] [rbp-28h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v5 = *a3;
	if (*a3 == *(_QWORD*)(v4 + 16))
	{
		if (*(_QWORD*)(a1 + 16) && sub_1400E1180(a4, v5 + 32))
		{
		LABEL_4:
			sub_1400EF110(a1, a2, v5, v5, a4);
			return a2;
		}
		goto LABEL_32;
	}
	if (v5 != v4)
	{
		if (*(_BYTE*)v5 || *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64) != v5)
		{
			v17 = *(_QWORD**)(v5 + 16);
			if (v17)
			{
				for (i = (_QWORD*)v17[3]; i; i = (_QWORD*)i[3])
					v17 = i;
			}
			else
			{
				v17 = *(_QWORD**)(v5 + 8);
				if (v5 == v17[2])
				{
					do
					{
						v19 = v17;
						v17 = (_QWORD*)v17[1];
					} while (v19 == (_QWORD*)v17[2]);
				}
			}
		}
		else
		{
			v17 = *(_QWORD**)(v5 + 24);
		}
		if (sub_1400E1180((__int64)(v17 + 4), a4) && sub_1400E1180(a4, v5 + 32))
		{
			if (!v17[3])
			{
				sub_1400EF110(a1, a2, 0i64, (__int64)v17, a4);
				return a2;
			}
			goto LABEL_4;
		}
	LABEL_32:
		*a2 = *(int**)sub_1400EF220(a1, (__int64)v21, a4);
		return a2;
	}
	v9 = *(_QWORD*)(v4 + 24);
	if (!sub_1400E1180(v9 + 32, a4))
		goto LABEL_32;
	if (v9 == v4 || sub_1400E1180(a4, v9 + 32))
	{
		v14 = sub_14018B280(72i64, 0);
		v12 = v14;
		v15 = v14 + 8;
		if (v14 != (int*)-32i64)
		{
			*((_QWORD*)v14 + 5) = 0i64;
			*((_QWORD*)v14 + 6) = 0i64;
			*((_QWORD*)v14 + 7) = 0i64;
			sub_14001B240((_QWORD*)v14 + 4, *(int**)(a4 + 8), *(_QWORD*)(a4 + 16));
			*((_QWORD*)v15 + 4) = *(_QWORD*)(a4 + 32);
		}
		*(_QWORD*)(v9 + 16) = v12;
		v16 = *(_QWORD*)(a1 + 8);
		if (v9 == v16)
		{
			*(_QWORD*)(v16 + 8) = v12;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v12;
		}
		else if (v9 == *(_QWORD*)(v16 + 16))
		{
			*(_QWORD*)(v16 + 16) = v12;
		}
	}
	else
	{
		v11 = sub_1400EFAE0(v10, a4);
		*(_QWORD*)(v9 + 24) = v11;
		v12 = v11;
		v13 = *(_QWORD*)(a1 + 8);
		if (v9 == *(_QWORD*)(v13 + 24))
			*(_QWORD*)(v13 + 24) = v12;
	}
	*((_QWORD*)v12 + 1) = v9;
	*((_QWORD*)v12 + 2) = 0i64;
	*((_QWORD*)v12 + 3) = 0i64;
	sub_1400081C0((__int64)v12, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v12;
	return a2;
}
// 1400EE413: variable 'v10' is possibly undefined
// 1400EE370: using guessed type char var_28[40];

