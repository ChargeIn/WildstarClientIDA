//----- (0000000140198D60) ----------------------------------------------------
__int64 __fastcall sub_140198D60(__int64 a1, int* a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rdi
	__int64 v5; // rax
	int* v8; // r14
	__int64 v9; // rbx
	unsigned __int64 v10; // rbx
	_QWORD* v11; // r15
	__int64 v12; // r13
	_QWORD* v13; // rdi
	_QWORD* v14; // rbp
	__int64 v16; // rax
	int* v17; // rdi
	__int64 v18; // r14
	_WORD* v19; // rax
	int* v20; // rax
	char v21[8]; // [rsp+20h] [rbp-58h] BYREF
	int* v22; // [rsp+28h] [rbp-50h]
	_WORD* v23; // [rsp+30h] [rbp-48h]
	__int64 v24; // [rsp+38h] [rbp-40h]
	_QWORD* v25; // [rsp+80h] [rbp+8h]

	v4 = qword_140C63748;
	v5 = 0i64;
	v8 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v5;
		while (*((_WORD*)a2 + v5));
	}
	v9 = (2 * v5) >> 1;
	if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v8 = sub_14018B280(2 * (v9 + 1), 0);
	v10 = 2 * v9;
	sub_1407DB590(v8, a2, v10);
	if ((int*)((char*)v8 + v10))
		*(_WORD*)((char*)v8 + v10) = 0;
	v11 = *(_QWORD**)(v4 + 24);
	v12 = v4 + 16;
	v13 = (_QWORD*)v11[1];
	v14 = v11;
	while (v13)
	{
		if ((int)sub_14018E2C0(v13[5], (unsigned __int16*)v8) < 0)
		{
			v13 = (_QWORD*)v13[3];
		}
		else
		{
			v14 = v13;
			v13 = (_QWORD*)v13[2];
		}
	}
	if (v14 == v11 || (v25 = v14, (int)sub_14018E2C0((__int64)v8, (unsigned __int16*)v14[5]) < 0))
		v25 = v11;
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v25 != v11)
		return 2147942583i64;
	v16 = 0i64;
	v17 = 0i64;
	v22 = 0i64;
	v24 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v16;
		while (*((_WORD*)a2 + v16));
	}
	v18 = (2 * v16) >> 1;
	if ((unsigned __int64)(v18 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v17 = sub_14018B280(2 * (v18 + 1), 0);
		v22 = v17;
		v24 = (__int64)v17 + 2 * v18 + 2;
	}
	sub_1407DB590(v17, a2, 2 * v18);
	v19 = (_WORD*)v17 + v18;
	v23 = v19;
	if (v19)
		*v19 = 0;
	v20 = sub_1400EDB70(v12, (__int64)v21);
	*(_QWORD*)v20 = a3;
	*((_QWORD*)v20 + 1) = a4;
	if (v17)
		sub_14018B900((__int64)v17, 0);
	return 0i64;
}
// 140C63748: using guessed type __int64 qword_140C63748;
// 140198D60: using guessed type char var_58[8];

