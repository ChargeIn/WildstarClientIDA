#include "../winhttp.h"

//----- (00000001401526C0) ----------------------------------------------------
__int64 __fastcall sub_1401526C0(__int64 a1, __int64 a2, int a3)
{
	int* v5; // rax
	_QWORD* v6; // r14
	int* v8; // rdi
	__int64 v9; // rax
	int* v10; // rsi
	__int64 v11; // rbx
	unsigned __int64 v12; // rbx
	_WORD* v13; // r15
	_QWORD* v14; // rbp
	_QWORD* v15; // rdi
	_QWORD* v16; // rbx
	void(__fastcall * **v17)(_QWORD, __int64); // rcx
	int* v18; // rdi
	__int64 v19; // rax
	int* v20; // rsi
	__int64 v21; // r15
	_WORD* v22; // rax
	char v23[8]; // [rsp+20h] [rbp-58h] BYREF
	int* v24; // [rsp+28h] [rbp-50h]
	_WORD* v25; // [rsp+30h] [rbp-48h]
	__int64 v26; // [rsp+38h] [rbp-40h]
	_QWORD* v28; // [rsp+98h] [rbp+20h]

	v5 = sub_14018B280(216i64, 0);
	if (v5)
		v6 = (_QWORD*)sub_140186660((__int64)v5);
	else
		v6 = 0i64;
	if ((*(int(__fastcall**)(_QWORD*, __int64))(*v6 + 16i64))(v6, a2) < 0)
	{
		(*(void(__fastcall**)(_QWORD*, __int64)) * v6)(v6, 1i64);
		return 13i64;
	}
	v8 = (int*)v6[2];
	v9 = 0i64;
	v10 = 0i64;
	if (*(_WORD*)v8)
	{
		do
			++v9;
		while (*((_WORD*)v8 + v9));
	}
	v11 = (2 * v9) >> 1;
	if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v10 = sub_14018B280(2 * (v11 + 1), 0);
	v12 = 2 * v11;
	sub_1407DB590(v10, v8, v12);
	v13 = (_WORD*)((char*)v10 + v12);
	if ((int*)((char*)v10 + v12))
		*v13 = 0;
	v14 = *(_QWORD**)(a1 + 24);
	v15 = v14;
	v16 = (_QWORD*)v14[1];
	while (v16)
	{
		if ((int)sub_1400454D0(v16[5], v16[6], (unsigned __int16*)v10, (__int64)v13) < 0)
		{
			v16 = (_QWORD*)v16[3];
		}
		else
		{
			v15 = v16;
			v16 = (_QWORD*)v16[2];
		}
	}
	if (v15 == v14 || (v28 = v15, (int)sub_1400454D0((__int64)v10, (__int64)v13, (unsigned __int16*)v15[5], v15[6]) < 0))
		v28 = v14;
	if (v10)
		sub_14018B900((__int64)v10, 0);
	if (v28 != *(_QWORD**)(a1 + 24))
	{
		if (!a3)
		{
			sub_1400035B0();
			(*(void(__fastcall**)(_QWORD*)) * v6)(v6);
			return 183i64;
		}
		v17 = (void(__fastcall***)(_QWORD, __int64))v28[8];
		if (v17)
			(**v17)(v17, 1i64);
	}
	v18 = (int*)v6[2];
	v19 = 0i64;
	v20 = 0i64;
	v24 = 0i64;
	v26 = 0i64;
	if (*(_WORD*)v18)
	{
		do
			++v19;
		while (*((_WORD*)v18 + v19));
	}
	v21 = (2 * v19) >> 1;
	if ((unsigned __int64)(v21 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v20 = sub_14018B280(2 * (v21 + 1), 0);
		v24 = v20;
		v26 = (__int64)v20 + 2 * v21 + 2;
	}
	sub_1407DB590(v20, v18, 2 * v21);
	v22 = (_WORD*)v20 + v21;
	v25 = v22;
	if (v22)
		*v22 = 0;
	*(_QWORD*)sub_1400EDA60(a1 + 16, (__int64)v23) = v6;
	if (v20)
		sub_14018B900((__int64)v20, 0);
	return 0i64;
}
// 1401526C0: using guessed type char var_58[8];

