//----- (00000001400EC4B0) ----------------------------------------------------
__int64 __fastcall sub_1400EC4B0(__int64 a1, int* a2, __int64 a3, __int64 a4)
{
	__int64 v8; // rax
	int* v9; // r14
	__int64 v10; // rbx
	unsigned __int64 v11; // rbx
	_QWORD* v12; // rbx
	__int64 v13; // r13
	_QWORD* v14; // rbp
	_QWORD* v15; // rdi
	bool v16; // bl
	__int64 v17; // rax
	int* v18; // rdi
	__int64 v19; // r14
	_WORD* v20; // rax
	int* v21; // rax
	char v23[8]; // [rsp+28h] [rbp-50h] BYREF
	int* v24; // [rsp+30h] [rbp-48h]
	_WORD* v25; // [rsp+38h] [rbp-40h]
	__int64 v26; // [rsp+40h] [rbp-38h]
	_QWORD* v27; // [rsp+88h] [rbp+10h]

	if (!a2)
		return 0i64;
	v8 = 0i64;
	v9 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v8;
		while (*((_WORD*)a2 + v8));
	}
	v10 = (2 * v8) >> 1;
	if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v9 = sub_14018B280(2 * (v10 + 1), 0);
	v11 = 2 * v10;
	sub_1407DB590(v9, a2, v11);
	if ((int*)((char*)v9 + v11))
		*(_WORD*)((char*)v9 + v11) = 0;
	v12 = *(_QWORD**)(a1 + 3600);
	v13 = a1 + 3592;
	v14 = v12;
	v15 = (_QWORD*)v12[1];
	while (v15)
	{
		if ((int)sub_14018E2C0(v15[5], (unsigned __int16*)v9) < 0)
		{
			v15 = (_QWORD*)v15[3];
		}
		else
		{
			v14 = v15;
			v15 = (_QWORD*)v15[2];
		}
	}
	if (v14 == v12 || (v27 = v14, (int)sub_14018E2C0((__int64)v9, (unsigned __int16*)v14[5]) < 0))
		v27 = v12;
	v16 = v27 != v12;
	if (v9)
		sub_14018B900((__int64)v9, 0);
	if (v16)
		return 2147942583i64;
	v17 = 0i64;
	v18 = 0i64;
	v24 = 0i64;
	v26 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v17;
		while (*((_WORD*)a2 + v17));
	}
	v19 = (2 * v17) >> 1;
	if ((unsigned __int64)(v19 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v18 = sub_14018B280(2 * (v19 + 1), 0);
		v24 = v18;
		v26 = (__int64)v18 + 2 * v19 + 2;
	}
	sub_1407DB590(v18, a2, 2 * v19);
	v20 = (_WORD*)v18 + v19;
	v25 = v20;
	if (v20)
		*v20 = 0;
	v21 = sub_1400EDB70(v13, (__int64)v23);
	*(_QWORD*)v21 = a3;
	*((_QWORD*)v21 + 1) = a4;
	if (v18)
		sub_14018B900((__int64)v18, 0);
	return 0i64;
}
// 1400EC4B0: using guessed type char var_50[8];

