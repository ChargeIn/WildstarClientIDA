//----- (000000014002E180) ----------------------------------------------------
__int64 __fastcall sub_14002E180(__int64 a1, unsigned __int16** a2)
{
	unsigned __int16* v2; // rsi
	unsigned __int64 v4; // rdi
	__int64 v6; // rcx
	unsigned __int16* v7; // r12
	int v8; // ebx
	unsigned __int64 v9; // rdx
	unsigned __int16 v10; // cx
	unsigned int v11; // ebx
	__int64 v12; // rdi
	__int64 v13; // r13
	int* v14; // r15
	__int64 v15; // rcx
	__int64 v16; // rbp
	int* v17; // rdi
	__int64 v18; // rcx
	int* v19; // rax
	int* v20; // rdi
	__int64 v21; // r12
	unsigned int v22; // ebx
	char v23; // [rsp+58h] [rbp+10h] BYREF

	v2 = *a2;
	v4 = *((_QWORD*)*a2 - 1);
	if ((v4 & 3) != 0)
		return 0i64;
	v6 = 0i64;
	if (v4)
	{
		if (v2[v4 - 1] == 61)
			v6 = 1i64;
		if (v2[v4 - 2] == 61)
			++v6;
	}
	*(_QWORD*)(a1 + 8) = 0i64;
	sub_140030D40(a1, 3 * (v4 >> 2) - v6);
	v7 = &v2[v4];
	v8 = 0;
	if (v2 >= v7)
		return 1i64;
LABEL_9:
	v9 = 0i64;
	while (1)
	{
		v10 = *v2;
		v11 = v8 << 6;
		if ((unsigned __int16)(*v2 - 65) > 0x19u)
			break;
		v8 = (v10 - 65) | v11;
	LABEL_20:
		++v9;
		++v2;
		if (v9 >= 4)
		{
			v12 = *(_QWORD*)(a1 + 8);
			v13 = v12 + 1;
			v14 = sub_14018DB00(*(_QWORD*)a1, v12 + 1, 1i64);
			*((_BYTE*)v14 + v12) = BYTE2(v8);
			if (*(int**)a1 != v14)
			{
				sub_1407DB590(v14, *(int**)a1, *(_QWORD*)(a1 + 8));
				if (*(_QWORD*)a1)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 - 16i64) + 8i64))(*(_QWORD*)a1 - 16i64);
				*(_QWORD*)a1 = v14;
			}
			v15 = *(_QWORD*)a1;
			v16 = v12 + 2;
			*(_QWORD*)(a1 + 8) = v13;
			v17 = sub_14018DB00(v15, v12 + 2, 1i64);
			*((_BYTE*)v17 + v13) = BYTE1(v8);
			if (*(int**)a1 != v17)
			{
				sub_1407DB590(v17, *(int**)a1, *(_QWORD*)(a1 + 8));
				if (*(_QWORD*)a1)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 - 16i64) + 8i64))(*(_QWORD*)a1 - 16i64);
				*(_QWORD*)a1 = v17;
			}
			v18 = *(_QWORD*)a1;
			*(_QWORD*)(a1 + 8) = v16;
			v19 = sub_14018DB00(v18, v13 + 2, 1i64);
			v20 = v19;
			*((_BYTE*)v19 + v16) = v8;
			if (*(int**)a1 != v19)
			{
				sub_1407DB590(v19, *(int**)a1, *(_QWORD*)(a1 + 8));
				if (*(_QWORD*)a1)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a1 - 16i64) + 8i64))(*(_QWORD*)a1 - 16i64);
				*(_QWORD*)a1 = v20;
			}
			*(_QWORD*)(a1 + 8) = v13 + 2;
			if (v2 >= v7)
				return 1i64;
			goto LABEL_9;
		}
	}
	if ((unsigned __int16)(v10 - 97) <= 0x19u)
	{
		v8 = (v10 - 71) | v11;
		goto LABEL_20;
	}
	if ((unsigned __int16)(v10 - 48) <= 9u)
	{
		v8 = (v10 + 4) | v11;
		goto LABEL_20;
	}
	if (v10 == 43)
	{
		v8 = v11 | 0x3E;
		goto LABEL_20;
	}
	if (v10 == 47)
	{
		v8 = v11 | 0x3F;
		goto LABEL_20;
	}
	if (*v2 == 61)
	{
		v21 = v7 - v2 - 1;
		if (!v21)
		{
			v23 = BYTE2(v11);
			sub_140030DA0(a1, &v23);
			v22 = v11 >> 8;
			goto LABEL_39;
		}
		if (v21 == 1)
		{
			v22 = v11 >> 10;
		LABEL_39:
			v23 = v22;
			sub_140030DA0(a1, &v23);
			return 1i64;
		}
	}
	return 0i64;
}

