//----- (0000000140106D70) ----------------------------------------------------
void __fastcall sub_140106D70(__int64 a1)
{
	_QWORD* v1; // r12
	_QWORD* v3; // r15
	int* v4; // rax
	__int64 i; // r14
	unsigned __int16* v6; // rbp
	__int64 v7; // rsi
	__int64 v8; // rdi
	__int64 v9; // rsi
	__int64 v10; // rbx
	_QWORD* v11; // rax
	void(__fastcall * **v12)(_QWORD); // rbx
	int* v13; // rdx
	int* v14; // rdx
	char v15; // [rsp+70h] [rbp+8h]
	_QWORD* v16; // [rsp+78h] [rbp+10h] BYREF
	void(__fastcall * **v17)(_QWORD); // [rsp+80h] [rbp+18h] BYREF

	v1 = (_QWORD*)(a1 + 24);
	v15 = 0;
	if ((int)((__int64)(*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 3) <= 0)
		v3 = 0i64;
	else
		v3 = **(_QWORD***)(a1 + 32);
	v16 = v3;
	if (v3)
	{
		sub_140101710((__int64)v3);
		sub_140100CD0((__int64)v3, *(_QWORD*)(a1 + 8), *(int**)(a1 + 72));
	}
	else
	{
		v15 = 1;
		v4 = sub_14018B280(120i64, 0);
		if (v4)
		{
			v3 = (_QWORD*)sub_140100930(
				(__int64)v4,
				*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64),
				*(_QWORD*)(a1 + 8),
				*(int**)(a1 + 72),
				2);
			v16 = v3;
		}
		else
		{
			v3 = 0i64;
			v16 = 0i64;
		}
	}
	for (i = *(_QWORD*)(a1 + 104); i != *(_QWORD*)(a1 + 112); i += 32i64)
	{
		v6 = *(unsigned __int16**)(i + 8);
		v7 = *(_QWORD*)(a1 + 8);
		if (!v6 || (v8 = *(_QWORD*)(v7 + 64), v9 = *(_QWORD*)(v7 + 72), v8 == v9))
		{
		LABEL_15:
			v12 = 0i64;
		}
		else
		{
			while (1)
			{
				v10 = *(_QWORD*)(*(_QWORD*)v8 + 40i64);
				v11 = sub_14010A540(*(_QWORD**)(*(_QWORD*)v8 + 32i64), v10, v6);
				if (v11 != (_QWORD*)v10)
				{
					v12 = (void(__fastcall***)(_QWORD)) * v11;
					if (*v11)
						break;
				}
				v8 += 8i64;
				if (v8 == v9)
					goto LABEL_15;
			}
		}
		v17 = v12;
		if (v12 != v3 && v12)
		{
			(**v12)(v12);
			v13 = (int*)v3[12];
			if (v13 == (int*)v3[13])
			{
				sub_1400B9430(v3 + 10, v13, &v17);
			}
			else
			{
				if (v13)
					*(_QWORD*)v13 = v12;
				v3[12] += 8i64;
			}
		}
	}
	if (v15)
	{
		v14 = (int*)v1[2];
		if (v14 == (int*)v1[3])
		{
			sub_1400B9430(v1, v14, &v16);
		}
		else
		{
			if (v14)
				*(_QWORD*)v14 = v3;
			v1[2] += 8i64;
		}
	}
}

