//----- (000000014002E510) ----------------------------------------------------
__int64 __fastcall sub_14002E510(__int64 a1, __int64 a2, int a3)
{
	int* v5; // rbp
	__int64 v6; // rax
	int v7; // r8d
	int v8; // edx
	__int64 v9; // rcx
	__int64 v10; // r8
	__int64 v11; // r13
	__int64 v12; // rdi
	__int64 v13; // rbx
	int** v14; // rdx
	__int64 v15; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v18; // rdx
	__int64 v19; // r14
	int* v20; // rdi
	__int64 v21; // rbx
	int** v22; // rax
	int v23; // ebp
	__int64 v24; // r15
	int* v25; // rax
	int* v26; // rsi
	__int64 v27; // rax
	__int64 k; // rax
	__int64 m; // rax
	int* v31; // [rsp+20h] [rbp-58h] BYREF
	__int64 v32; // [rsp+28h] [rbp-50h]
	char v33[8]; // [rsp+30h] [rbp-48h] BYREF
	int* v34; // [rsp+38h] [rbp-40h]
	__int64 v35; // [rsp+40h] [rbp-38h]
	int* v36; // [rsp+80h] [rbp+8h] BYREF

	v36 = (int*)a1;
	v5 = (int*)a1;
	if (*(_QWORD*)(a1 + 4712) || !a2)
		return 2147500037i64;
	v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
	v7 = v5[1215];
	v8 = *(_DWORD*)(v6 + 12);
	v5[1213] = v8;
	sub_1400322E0(v9, v8, v7, (unsigned int*)v5 + 1212);
	v5[1214] = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2) + 16);
	sub_140030900((__int64)v5);
	v10 = v5[1214];
	if ((unsigned int)v5[1213] > 0x10 || (unsigned int)v10 > 2)
		v11 = qword_140C658E8;
	else
		v11 = *(_QWORD*)(32i64 * v5[1213] + *(_QWORD*)(qword_140C658E8 + 88) + 8) + 80 * v10;
	if (a3)
	{
		sub_140030C10((__int64)(v5 + 1204));
		sub_140030B50((_QWORD*)v5 + 602, *(_QWORD*)(v11 + 32));
		v12 = *(_QWORD*)(v11 + 24);
		v13 = *(_QWORD*)(v12 + 16);
		if (v13 != v12)
		{
			HIDWORD(v36) = 0;
			do
			{
				v14 = (int**)*((_QWORD*)v5 + 604);
				LODWORD(v36) = *(_DWORD*)(v13 + 32);
				if (v14 == *((int***)v5 + 605))
				{
					sub_140031EF0((_QWORD*)v5 + 602, v14, &v36);
				}
				else
				{
					if (v14)
						*v14 = v36;
					*((_QWORD*)v5 + 604) += 8i64;
				}
				v15 = *(_QWORD*)(v13 + 24);
				if (v15)
				{
					v13 = *(_QWORD*)(v13 + 24);
					for (i = *(_QWORD*)(v15 + 16); i; i = *(_QWORD*)(i + 16))
						v13 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v13 + 8); v13 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v13 = j;
					if (*(_QWORD*)(v13 + 24) != j)
						v13 = j;
				}
			} while (v13 != v12);
		}
	LABEL_52:
		sub_14002FE90((__int64)v5, a2);
		sub_14002E8D0((__int64)v5);
		return 0i64;
	}
	v35 = 0i64;
	v34 = sub_14018B280(40i64, 0);
	*(_BYTE*)v34 = 0;
	*((_QWORD*)v34 + 1) = 0i64;
	*((_QWORD*)v34 + 2) = v34;
	*((_QWORD*)v34 + 3) = v34;
	if (*((_QWORD*)v5 + 589))
		sub_140031C90((__int64)(v5 + 1174), (__int64)v33);
	v19 = 0i64;
	v20 = 0i64;
	v21 = *((_QWORD*)v34 + 2);
	v32 = 0i64;
	v31 = 0i64;
	if ((int*)v21 != v34)
	{
		do
		{
			v22 = (int**)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a2 + 64i64))(
				a2,
				*(unsigned int*)(v21 + 32));
			if (*v22)
				v23 = **v22;
			else
				v23 = 0;
			v24 = v19 + 1;
			v25 = sub_14018DB00((__int64)v20, v19 + 1, 4i64);
			v25[v19] = v23;
			v26 = v25;
			if (v20 != v25)
			{
				sub_1407DB590(v25, v20, 4 * v19);
				if (v20)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v20 - 2) + 8i64))(v20 - 4);
				v20 = v26;
			}
			v27 = *(_QWORD*)(v21 + 24);
			++v19;
			if (v27)
			{
				v21 = *(_QWORD*)(v21 + 24);
				for (k = *(_QWORD*)(v27 + 16); k; k = *(_QWORD*)(k + 16))
					v21 = k;
			}
			else
			{
				for (m = *(_QWORD*)(v21 + 8); v21 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
					v21 = m;
				if (*(_QWORD*)(v21 + 24) != m)
					v21 = m;
			}
		} while ((int*)v21 != v34);
		v5 = v36;
		v32 = v24;
		v31 = v20;
	}
	sub_1400314D0((__int64)(v5 + 1174), v18, &v31);
	if (!(*(unsigned int(__fastcall**)(__int64, __int64, int*))(*(_QWORD*)a2 + 336i64))(a2, v11, v5 + 1204))
	{
		if (v20)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v20 - 2) + 8i64))(v20 - 4);
		sub_140008410((__int64)v33);
		sub_14018B900((__int64)v34, 0);
		goto LABEL_52;
	}
	if (v20)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v20 - 2) + 8i64))(v20 - 4);
	sub_140008410((__int64)v33);
	sub_14018B900((__int64)v34, 0);
	return 2147500037i64;
}
// 14002E565: variable 'v9' is possibly undefined
// 14002E813: variable 'v18' is possibly undefined
// 140C658E8: using guessed type __int64 qword_140C658E8;
// 14002E510: using guessed type char var_48[8];

