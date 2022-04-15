//----- (00000001401519B0) ----------------------------------------------------
char __fastcall sub_1401519B0(__int64 a1, int* a2, __int64 a3, __int64 a4, __int64* a5)
{
	__int64 v8; // rax
	int* v9; // rbp
	__int64 v10; // rbx
	unsigned __int64 v11; // rbx
	_WORD* v12; // r14
	_QWORD* v13; // r15
	_QWORD* v14; // rbx
	_QWORD* v15; // rsi
	int* v16; // rax
	_QWORD* v17; // rax
	bool v18; // zf
	int* v19; // rsi
	__int64 v20; // rax
	__int64 v21; // r14
	_WORD* v22; // rax
	__int64 v23; // rbx
	char v24[8]; // [rsp+30h] [rbp-58h] BYREF
	int* v25; // [rsp+38h] [rbp-50h]
	_WORD* v26; // [rsp+40h] [rbp-48h]
	__int64 v27; // [rsp+48h] [rbp-40h]
	_QWORD* v28; // [rsp+98h] [rbp+10h]

	if (!*(_WORD*)a2)
		return 0;
	if (!*(_QWORD*)(a1 + 8) || !a3 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a4 + 8i64))(a4) || !a5)
		return 0;
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
	v12 = (_WORD*)((char*)v9 + v11);
	if ((int*)((char*)v9 + v11))
		*v12 = 0;
	v13 = *(_QWORD**)(a1 + 24);
	v14 = (_QWORD*)v13[1];
	v15 = v13;
	while (v14)
	{
		if ((int)sub_1400454D0(v14[5], v14[6], (unsigned __int16*)v9, (__int64)v12) < 0)
		{
			v14 = (_QWORD*)v14[3];
		}
		else
		{
			v15 = v14;
			v14 = (_QWORD*)v14[2];
		}
	}
	if (v15 == v13 || (v28 = v15, (int)sub_1400454D0((__int64)v9, (__int64)v12, (unsigned __int16*)v15[5], v15[6]) < 0))
		v28 = v13;
	if (v9)
		sub_14018B900((__int64)v9, 0);
	if (v28 != *(_QWORD**)(a1 + 24))
		return 0;
	v16 = sub_14018B280(112i64, 0);
	if (v16)
		v17 = sub_1401515C0(v16, *(_QWORD*)(a1 + 8), a2, a3, a4);
	else
		v17 = 0i64;
	v18 = *(_WORD*)a2 == 0;
	*a5 = (__int64)v17;
	v19 = 0i64;
	v20 = 0i64;
	v25 = 0i64;
	v27 = 0i64;
	if (!v18)
	{
		do
			++v20;
		while (*((_WORD*)a2 + v20));
	}
	v21 = (2 * v20) >> 1;
	if ((unsigned __int64)(v21 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v19 = sub_14018B280(2 * (v21 + 1), 0);
		v25 = v19;
		v27 = (__int64)v19 + 2 * v21 + 2;
	}
	sub_1407DB590(v19, a2, 2 * v21);
	v22 = (_WORD*)v19 + v21;
	v26 = v22;
	if (v22)
		*v22 = 0;
	v23 = *a5;
	*(_QWORD*)sub_1400EDA60(a1 + 16, (__int64)v24) = v23;
	if (v19)
		sub_14018B900((__int64)v19, 0);
	return 1;
}
// 1401519B0: using guessed type char var_58[8];

