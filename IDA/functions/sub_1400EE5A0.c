//----- (00000001400EE5A0) ----------------------------------------------------
int** __fastcall sub_1400EE5A0(__int64 a1, int** a2, __int64* a3, __int64* a4)
{
	_QWORD* v4; // rbx
	__int64 v5; // rdi
	_QWORD* v9; // rdi
	__int64 v10; // r15
	__int64 v11; // rcx
	int* v12; // rax
	int* v13; // rbx
	__int64 v14; // rax
	int* v15; // rax
	int* v16; // r15
	_QWORD* v17; // rax
	_QWORD* v18; // rbx
	_QWORD* i; // rax
	_QWORD* v20; // rax
	__int64 v21; // r15
	char v23[40]; // [rsp+30h] [rbp-28h] BYREF

	v4 = *(_QWORD**)(a1 + 8);
	v5 = *a3;
	if (*a3 == v4[2])
	{
		if (*(_QWORD*)(a1 + 16)
			&& (int)sub_1400454D0(a4[1], a4[2], *(unsigned __int16**)(v5 + 40), *(_QWORD*)(v5 + 48)) < 0)
		{
		LABEL_4:
			sub_1400EF3A0(a1, a2, v5, v5, (__int64)a4);
			return a2;
		}
		goto LABEL_33;
	}
	if ((_QWORD*)v5 != v4)
	{
		if (*(_BYTE*)v5 || *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64) != v5)
		{
			v18 = *(_QWORD**)(v5 + 16);
			if (v18)
			{
				for (i = (_QWORD*)v18[3]; i; i = (_QWORD*)i[3])
					v18 = i;
			}
			else
			{
				v18 = *(_QWORD**)(v5 + 8);
				if (v5 == v18[2])
				{
					do
					{
						v20 = v18;
						v18 = (_QWORD*)v18[1];
					} while (v20 == (_QWORD*)v18[2]);
				}
			}
		}
		else
		{
			v18 = *(_QWORD**)(v5 + 24);
		}
		v21 = a4[2];
		if ((int)sub_1400454D0(v18[5], v18[6], (unsigned __int16*)a4[1], v21) < 0
			&& (int)sub_1400454D0(a4[1], v21, *(unsigned __int16**)(v5 + 40), *(_QWORD*)(v5 + 48)) < 0)
		{
			if (!v18[3])
			{
				sub_1400EF3A0(a1, a2, 0i64, (__int64)v18, (__int64)a4);
				return a2;
			}
			goto LABEL_4;
		}
	LABEL_33:
		*a2 = *(int**)sub_1400EF4C0(a1, (__int64)v23, (__int64)a4);
		return a2;
	}
	v9 = (_QWORD*)v4[3];
	v10 = a4[2];
	if ((int)sub_1400454D0(v9[5], v9[6], (unsigned __int16*)a4[1], v10) >= 0)
		goto LABEL_33;
	if (v9 == v4 || (int)sub_1400454D0(a4[1], v10, (unsigned __int16*)v9[5], v9[6]) < 0)
	{
		v15 = sub_14018B280(72i64, 0);
		v13 = v15;
		v16 = v15 + 8;
		if (v15 != (int*)-32i64)
		{
			*((_QWORD*)v15 + 5) = 0i64;
			*((_QWORD*)v15 + 6) = 0i64;
			*((_QWORD*)v15 + 7) = 0i64;
			sub_14001C1B0((_QWORD*)v15 + 4, (int*)a4[1], a4[2]);
			*((_QWORD*)v16 + 4) = a4[4];
		}
		v9[2] = v13;
		v17 = *(_QWORD**)(a1 + 8);
		if (v9 == v17)
		{
			v17[1] = v13;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v13;
		}
		else if (v9 == (_QWORD*)v17[2])
		{
			v17[2] = v13;
		}
	}
	else
	{
		v12 = sub_1400EFA70(v11, (__int64)a4);
		v9[3] = v12;
		v13 = v12;
		v14 = *(_QWORD*)(a1 + 8);
		if (v9 == *(_QWORD**)(v14 + 24))
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
// 1400EE678: variable 'v11' is possibly undefined
// 1400EE5A0: using guessed type char var_28[40];
