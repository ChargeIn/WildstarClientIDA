//----- (000000014014E400) ----------------------------------------------------
__int64 __fastcall sub_14014E400(__int64 a1, int* a2, float a3, int a4, char a5)
{
	int* v8; // rbp
	__int64 v9; // rax
	bool v10; // zf
	__int64 v11; // rbx
	unsigned __int64 v12; // rbx
	_WORD* v13; // r14
	_QWORD* v14; // r15
	_QWORD* v15; // rsi
	_QWORD* v16; // rbx
	__int64 result; // rax
	int* v18; // rax
	__int64 v19; // rbp
	int* v20; // rsi
	__int64 v21; // rax
	__int64 v22; // r14
	_WORD* v23; // rax
	char v24[8]; // [rsp+20h] [rbp-58h] BYREF
	int* v25; // [rsp+28h] [rbp-50h]
	_WORD* v26; // [rsp+30h] [rbp-48h]
	__int64 v27; // [rsp+38h] [rbp-40h]
	_QWORD* v28; // [rsp+88h] [rbp+10h]

	if (!a2 || !*(_WORD*)a2)
		return 0i64;
	v8 = 0i64;
	v9 = 0i64;
	do
		v10 = *((_WORD*)a2 + ++v9) == 0;
	while (!v10);
	v11 = (2 * v9) >> 1;
	if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v8 = sub_14018B280(2 * (v11 + 1), 0);
	v12 = 2 * v11;
	sub_1407DB590(v8, a2, v12);
	v13 = (_WORD*)((char*)v8 + v12);
	if ((int*)((char*)v8 + v12))
		*v13 = 0;
	v14 = *(_QWORD**)(a1 + 16);
	v15 = v14;
	v16 = (_QWORD*)v14[1];
	while (v16)
	{
		if ((int)sub_1400454D0(v16[5], v16[6], (unsigned __int16*)v8, (__int64)v13) < 0)
		{
			v16 = (_QWORD*)v16[3];
		}
		else
		{
			v15 = v16;
			v16 = (_QWORD*)v16[2];
		}
	}
	if (v15 == v14 || (v28 = v15, (int)sub_1400454D0((__int64)v8, (__int64)v13, (unsigned __int16*)v15[5], v15[6]) < 0))
		v28 = v14;
	if (v8)
		sub_14018B900((__int64)v8, 0);
	if (v28 == *(_QWORD**)(a1 + 16))
	{
		v18 = sub_14018B280(56i64, 0);
		if (v18)
			v19 = sub_14014E0D0((__int64)v18, a2, a3, a4);
		else
			v19 = 0i64;
		v10 = *(_WORD*)a2 == 0;
		v20 = 0i64;
		v25 = 0i64;
		v27 = 0i64;
		v21 = 0i64;
		if (!v10)
		{
			do
				++v21;
			while (*((_WORD*)a2 + v21));
		}
		v22 = (2 * v21) >> 1;
		if ((unsigned __int64)(v22 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v20 = sub_14018B280(2 * (v22 + 1), 0);
			v25 = v20;
			v27 = (__int64)v20 + 2 * v22 + 2;
		}
		sub_1407DB590(v20, a2, 2 * v22);
		v23 = (_WORD*)v20 + v22;
		v26 = v23;
		if (v23)
			*v23 = 0;
		*(_QWORD*)sub_1400EDA60(a1 + 8, (__int64)v24) = v19;
		if (v20)
			sub_14018B900((__int64)v20, 0);
		return v19;
	}
	else
	{
		result = v28[8];
		if (a5)
		{
			*(float*)(result + 32) = a3;
			*(_DWORD*)(result + 36) = a4;
		}
	}
	return result;
}
// 14014E400: using guessed type char var_58[8];

