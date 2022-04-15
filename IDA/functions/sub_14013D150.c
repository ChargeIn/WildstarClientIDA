//----- (000000014013D150) ----------------------------------------------------
int** __fastcall sub_14013D150(__int64 a1, int** a2, __int64* a3, __int64 a4)
{
	_QWORD* v4; // rbx
	__int64 v5; // rdi
	_QWORD* v9; // rdi
	int* v10; // rbx
	__int64 v11; // rax
	_QWORD* v12; // rax
	_QWORD* v13; // rbx
	_QWORD* i; // rax
	_QWORD* v15; // rax
	char v17[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *(_QWORD**)(a1 + 8);
	v5 = *a3;
	if (*a3 == v4[2])
	{
		if (*(_QWORD*)(a1 + 16)
			&& (int)sub_1400454D0(
				*(_QWORD*)(a4 + 8),
				*(_QWORD*)(a4 + 16),
				*(unsigned __int16**)(v5 + 40),
				*(_QWORD*)(v5 + 48)) < 0)
		{
		LABEL_4:
			sub_14013D480(a1, a2, v5, v5, a4);
			return a2;
		}
		goto LABEL_30;
	}
	if ((_QWORD*)v5 != v4)
	{
		if (*(_BYTE*)v5 || *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64) != v5)
		{
			v13 = *(_QWORD**)(v5 + 16);
			if (v13)
			{
				for (i = (_QWORD*)v13[3]; i; i = (_QWORD*)i[3])
					v13 = i;
			}
			else
			{
				v13 = *(_QWORD**)(v5 + 8);
				if (v5 == v13[2])
				{
					do
					{
						v15 = v13;
						v13 = (_QWORD*)v13[1];
					} while (v15 == (_QWORD*)v13[2]);
				}
			}
		}
		else
		{
			v13 = *(_QWORD**)(v5 + 24);
		}
		if ((int)sub_1400454D0(v13[5], v13[6], *(unsigned __int16**)(a4 + 8), *(_QWORD*)(a4 + 16)) < 0
			&& (int)sub_1400454D0(
				*(_QWORD*)(a4 + 8),
				*(_QWORD*)(a4 + 16),
				*(unsigned __int16**)(v5 + 40),
				*(_QWORD*)(v5 + 48)) < 0)
		{
			if (!v13[3])
			{
				sub_14013D480(a1, a2, 0i64, (__int64)v13, a4);
				return a2;
			}
			goto LABEL_4;
		}
	LABEL_30:
		*a2 = *(int**)sub_14013D580(a1, (__int64)v17, a4);
		return a2;
	}
	v9 = (_QWORD*)v4[3];
	if ((int)sub_1400454D0(v9[5], v9[6], *(unsigned __int16**)(a4 + 8), *(_QWORD*)(a4 + 16)) >= 0)
		goto LABEL_30;
	if (v9 == v4 || (int)sub_1400454D0(*(_QWORD*)(a4 + 8), *(_QWORD*)(a4 + 16), (unsigned __int16*)v9[5], v9[6]) < 0)
	{
		v10 = sub_14018B280(96i64, 0);
		sub_1400B9C20((_QWORD*)v10 + 4, a4);
		v9[2] = v10;
		v12 = *(_QWORD**)(a1 + 8);
		if (v9 == v12)
		{
			v12[1] = v10;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v10;
		}
		else if (v9 == (_QWORD*)v12[2])
		{
			v12[2] = v10;
		}
	}
	else
	{
		v10 = sub_14018B280(96i64, 0);
		sub_1400B9C20((_QWORD*)v10 + 4, a4);
		v9[3] = v10;
		v11 = *(_QWORD*)(a1 + 8);
		if (v9 == *(_QWORD**)(v11 + 24))
			*(_QWORD*)(v11 + 24) = v10;
	}
	*((_QWORD*)v10 + 1) = v9;
	*((_QWORD*)v10 + 2) = 0i64;
	*((_QWORD*)v10 + 3) = 0i64;
	sub_1400081C0((__int64)v10, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
	++* (_QWORD*)(a1 + 16);
	*a2 = v10;
	return a2;
}
// 14013D150: using guessed type char var_18[24];

