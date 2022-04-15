//----- (0000000140407990) ----------------------------------------------------
void __fastcall sub_140407990(__int64 a1, __int64 a2, unsigned __int16* a3, int a4)
{
	__int64 v4; // rcx
	char* v7; // r13
	unsigned __int64 v8; // rsi
	int v9; // ebp
	unsigned __int64 v10; // rbx
	char* v11; // rdi
	int v12; // r14d
	int v13; // eax
	__int64 v14; // rcx
	__int64 v15; // rax
	int* v16; // rsi
	__int64 v17; // r14
	__int64 v18; // rbx
	int v19; // edx
	int v20; // r8d
	char v21[8]; // [rsp+20h] [rbp-48h] BYREF
	int* v22; // [rsp+28h] [rbp-40h]
	__int64 v24; // [rsp+38h] [rbp-30h]
	int v25; // [rsp+88h] [rbp+20h]

	v25 = a4;
	v4 = 0i64;
	if (**(_DWORD**)(a2 + 8) == 17)
	{
		v7 = (char*)&unk_140C7B310;
		v8 = 20i64;
	}
	else
	{
		v7 = 0i64;
		v8 = 0i64;
	}
	v9 = 0;
	while (1)
	{
		if (v9)
		{
			v20 = v9;
			goto LABEL_32;
		}
		if (a4)
		{
			if ((unsigned int)sub_140407600(0i64, (_QWORD*)a2, a4))
				return;
			v4 = 0i64;
		}
		if (!v7)
		{
			v4 = (unsigned int)(**(_DWORD**)(a2 + 8) - 17);
			if ((unsigned int)v4 <= 1)
				goto LABEL_33;
			v20 = 0;
		LABEL_32:
			if ((unsigned int)sub_140407600(v4, (_QWORD*)a2, v20))
				return;
			goto LABEL_33;
		}
		v10 = 0i64;
		if (!v8)
			goto LABEL_34;
		v11 = v7;
		v12 = *(_DWORD*)qword_140C63750;
		while (1)
		{
			v13 = *((_DWORD*)v11 + 4);
			if (v12 < v13)
				v13 = v12;
			if (!(unsigned int)sub_14018E2C0(*(_QWORD*)&v11[32 * v13 + 40], a3))
				break;
			++v10;
			v11 += 312;
			if (v10 >= v8)
				goto LABEL_33;
		}
		if ((unsigned int)sub_140407600(v14, (_QWORD*)a2, (int)v10 + 1))
			break;
	LABEL_33:
		v4 = 0i64;
	LABEL_34:
		if ((unsigned int)++v9 >= 0x64)
			return;
		a4 = v25;
	}
	v15 = 0i64;
	v16 = 0i64;
	v22 = 0i64;
	v24 = 0i64;
	if (*a3)
	{
		do
			++v15;
		while (a3[v15]);
	}
	v17 = (2 * v15) >> 1;
	if ((unsigned __int64)(v17 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v16 = sub_14018B280(2 * (v17 + 1), 0);
		v22 = v16;
		v24 = (__int64)v16 + 2 * v17 + 2;
	}
	sub_1407DB590(v16, (int*)a3, 2 * v17);
	if ((int*)((char*)v16 + 2 * v17))
		*((_WORD*)v16 + v17) = 0;
	v18 = 312 * v10;
	v19 = *(_DWORD*)&v7[v18 + 16];
	if (*(_DWORD*)qword_140C63750 < v19)
		v19 = *(_DWORD*)qword_140C63750;
	sub_14001A9B0((__int64)&v7[v18], v19, (__int64)v21);
	if (v16)
		sub_14018B900((__int64)v16, 0);
}
// 140407A59: conditional instruction was optimized away because rbx.8<14u
// 140407A66: variable 'v14' is possibly undefined
// 140C63750: using guessed type __int64 qword_140C63750;
// 140407990: using guessed type char var_48[8];

