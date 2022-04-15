//----- (00000001400EE900) ----------------------------------------------------
int** __fastcall sub_1400EE900(__int64 a1, int** a2, __int64* a3, __int64 a4)
{
	_QWORD* v4; // rbx
	__int64 v5; // rdi
	_QWORD* v9; // rdi
	__int64 v10; // rcx
	int* v11; // rax
	int* v12; // rbx
	__int64 v13; // rax
	_QWORD* v14; // rax
	_QWORD* v15; // rbx
	_QWORD* i; // rax
	_QWORD* v17; // rax
	char v19[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *(_QWORD**)(a1 + 8);
	v5 = *a3;
	if (*a3 == v4[2])
	{
		if (*(_QWORD*)(a1 + 16) && (int)sub_14018E2C0(*(_QWORD*)(a4 + 8), *(unsigned __int16**)(v5 + 40)) < 0)
		{
		LABEL_4:
			sub_1400EF7E0(a1, a2, v5, v5, a4);
			return a2;
		}
		goto LABEL_30;
	}
	if ((_QWORD*)v5 != v4)
	{
		if (*(_BYTE*)v5 || *(_QWORD*)(*(_QWORD*)(v5 + 8) + 8i64) != v5)
		{
			v15 = *(_QWORD**)(v5 + 16);
			if (v15)
			{
				for (i = (_QWORD*)v15[3]; i; i = (_QWORD*)i[3])
					v15 = i;
			}
			else
			{
				v15 = *(_QWORD**)(v5 + 8);
				if (v5 == v15[2])
				{
					do
					{
						v17 = v15;
						v15 = (_QWORD*)v15[1];
					} while (v17 == (_QWORD*)v15[2]);
				}
			}
		}
		else
		{
			v15 = *(_QWORD**)(v5 + 24);
		}
		if ((int)sub_14018E2C0(v15[5], *(unsigned __int16**)(a4 + 8)) < 0
			&& (int)sub_14018E2C0(*(_QWORD*)(a4 + 8), *(unsigned __int16**)(v5 + 40)) < 0)
		{
			if (!v15[3])
			{
				sub_1400EF7E0(a1, a2, 0i64, (__int64)v15, a4);
				return a2;
			}
			goto LABEL_4;
		}
	LABEL_30:
		*a2 = *(int**)sub_1400EF8B0(a1, (__int64)v19, a4);
		return a2;
	}
	v9 = (_QWORD*)v4[3];
	if ((int)sub_14018E2C0(v9[5], *(unsigned __int16**)(a4 + 8)) >= 0)
		goto LABEL_30;
	if (v9 == v4 || (int)sub_14018E2C0(*(_QWORD*)(a4 + 8), (unsigned __int16*)v9[5]) < 0)
	{
		v12 = sub_1400EFB50(v10, a4);
		v9[2] = v12;
		v14 = *(_QWORD**)(a1 + 8);
		if (v9 == v14)
		{
			v14[1] = v12;
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v12;
		}
		else if (v9 == (_QWORD*)v14[2])
		{
			v14[2] = v12;
		}
	}
	else
	{
		v11 = sub_1400EFB50(v10, a4);
		v9[3] = v11;
		v12 = v11;
		v13 = *(_QWORD*)(a1 + 8);
		if (v9 == *(_QWORD**)(v13 + 24))
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
// 1400EE9A6: variable 'v10' is possibly undefined
// 1400EE900: using guessed type char var_18[24];

