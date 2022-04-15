//----- (000000014001BC60) ----------------------------------------------------
void __fastcall sub_14001BC60(__int64 a1, int a2)
{
	unsigned __int64 v2; // r15
	__int64 v4; // rdi
	unsigned __int64 v5; // rsi
	__int64 v6; // rcx
	__int64 v7; // rcx
	int* v8; // rbp
	int* v9; // r13
	__int64 v10; // r12
	int* v11; // rdx
	__int64 v12; // rbx
	unsigned __int64 v13; // rbp
	__int64 v14; // r9
	unsigned __int64 v15; // rdx
	__int64 v16; // rbx
	__int64 v17; // rdi
	_WORD* v18; // rax
	__int64 v19; // rcx
	void(__fastcall * v20)(char*, __int64); // rax
	char v21[8]; // [rsp+20h] [rbp-48h] BYREF
	int* v22; // [rsp+28h] [rbp-40h]
	int* v23; // [rsp+30h] [rbp-38h]
	__int64 v24; // [rsp+38h] [rbp-30h]

	v2 = a2;
	if (a2)
		v4 = a1 + 32 * (a2 - 1 + 1i64);
	else
		v4 = a1 + 256;
	v5 = 0i64;
	v6 = *(int*)qword_140C63750;
	v22 = 0i64;
	v23 = 0i64;
	v24 = 0i64;
	v7 = 32 * (v6 + 1);
	v8 = 0i64;
	v9 = *(int**)(v7 + a1 + 8);
	v10 = (__int64)(*(_QWORD*)(v7 + a1 + 16) - (_QWORD)v9) >> 1;
	if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v8 = sub_14018B280(2 * (v10 + 1), 0);
		v22 = v8;
		v23 = v8;
		v24 = (__int64)v8 + 2 * v10 + 2;
	}
	sub_1407DB590(v8, v9, 2 * v10);
	v11 = (int*)((char*)v8 + 2 * v10);
	v23 = v11;
	if (v11)
	{
		*(_WORD*)v11 = 0;
		v11 = v23;
	}
	if (v2 < 5)
	{
		v12 = a1 + 32 * (v2 + 1);
		v13 = 5 - v2;
		do
		{
			if (v4 != v12)
				sub_14001C480(v12, *(int**)(v4 + 8), *(int**)(v4 + 16));
			v12 += 32i64;
			--v13;
		} while (v13);
		v11 = v23;
	}
	v14 = (__int64)v22;
	v15 = ((char*)v11 - (char*)v22) >> 1;
	*(_DWORD*)(a1 + 24) &= (1 << v2) - 1;
	v16 = a1 + 32 * (*(int*)qword_140C63750 + 1i64);
	v17 = *(_QWORD*)(v16 + 8);
	if (v15 == (*(_QWORD*)(v16 + 16) - v17) >> 1)
	{
		if (!v15)
			goto LABEL_25;
		v18 = (_WORD*)v14;
		while (*v18 == *(_WORD*)((char*)v18 + v17 - v14))
		{
			++v5;
			++v18;
			if (v5 >= v15)
				goto LABEL_25;
		}
	}
	v19 = *(_QWORD*)(a1 + 288);
	if (v19 && v16 != v19)
	{
		sub_14001C480(v19, *(int**)(v16 + 8), *(int**)(v16 + 16));
		v14 = (__int64)v22;
	}
	v20 = *(void(__fastcall**)(char*, __int64))(a1 + 304);
	if (v20)
	{
		v20(v21, v16);
		v14 = (__int64)v22;
	}
LABEL_25:
	if (v14)
		sub_14018B900(v14, 0);
}
// 14001BDFA: conditional instruction was optimized away because r11d.4 is in (==1|==FFFFFFFF)
// 140C63750: using guessed type __int64 qword_140C63750;
// 14001BC60: using guessed type char var_48[8];

