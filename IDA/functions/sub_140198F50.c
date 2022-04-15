//----- (0000000140198F50) ----------------------------------------------------
__int64 __fastcall sub_140198F50(__int64 a1, int* a2)
{
	__int64 v2; // rdi
	__int64 v4; // rax
	int* v5; // r14
	__int64 v6; // rbx
	unsigned __int64 v7; // rbx
	_QWORD* v8; // r15
	__int64 v9; // r13
	_QWORD* v10; // rdi
	_QWORD* v11; // rbp
	__int64 v13; // rax
	int* v14; // rdi
	__int64 v15; // r14
	_WORD* v16; // rax
	char v17[8]; // [rsp+20h] [rbp-48h] BYREF
	int* v18; // [rsp+28h] [rbp-40h]
	_WORD* v19; // [rsp+30h] [rbp-38h]
	__int64 v20; // [rsp+38h] [rbp-30h]
	_QWORD* v21; // [rsp+70h] [rbp+8h]

	v2 = qword_140C63748;
	v4 = 0i64;
	v5 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v4;
		while (*((_WORD*)a2 + v4));
	}
	v6 = (2 * v4) >> 1;
	if ((unsigned __int64)(v6 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v5 = sub_14018B280(2 * (v6 + 1), 0);
	v7 = 2 * v6;
	sub_1407DB590(v5, a2, v7);
	if ((int*)((char*)v5 + v7))
		*(_WORD*)((char*)v5 + v7) = 0;
	v8 = *(_QWORD**)(v2 + 24);
	v9 = v2 + 16;
	v10 = (_QWORD*)v8[1];
	v11 = v8;
	while (v10)
	{
		if ((int)sub_14018E2C0(v10[5], (unsigned __int16*)v5) < 0)
		{
			v10 = (_QWORD*)v10[3];
		}
		else
		{
			v11 = v10;
			v10 = (_QWORD*)v10[2];
		}
	}
	if (v11 == v8 || (v21 = v11, (int)sub_14018E2C0((__int64)v5, (unsigned __int16*)v11[5]) < 0))
		v21 = v8;
	if (v5)
		sub_14018B900((__int64)v5, 0);
	if (v21 == v8)
		return 2147943568i64;
	v13 = 0i64;
	v14 = 0i64;
	v18 = 0i64;
	v20 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v13;
		while (*((_WORD*)a2 + v13));
	}
	v15 = (2 * v13) >> 1;
	if ((unsigned __int64)(v15 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v14 = sub_14018B280(2 * (v15 + 1), 0);
		v18 = v14;
		v20 = (__int64)v14 + 2 * v15 + 2;
	}
	sub_1407DB590(v14, a2, 2 * v15);
	v16 = (_WORD*)v14 + v15;
	v19 = v16;
	if (v16)
		*v16 = 0;
	sub_140199F80(v9, (__int64)v17);
	if (v14)
		sub_14018B900((__int64)v14, 0);
	return 0i64;
}
// 140C63748: using guessed type __int64 qword_140C63748;
// 140198F50: using guessed type char var_48[8];

