#include "../winhttp.h"

//----- (000000014014E670) ----------------------------------------------------
__int64 __fastcall sub_14014E670(_QWORD* a1, int* a2)
{
	int* v4; // rbp
	__int64 v5; // rax
	bool v6; // zf
	__int64 v7; // rbx
	unsigned __int64 v8; // rbx
	_WORD* v9; // r14
	_QWORD* v10; // r15
	_QWORD* v11; // rsi
	_QWORD* v12; // rbx
	int v14; // xmm6_4
	int* v15; // rax
	__int64 v16; // rbp
	int* v17; // rsi
	__int64 v18; // rax
	__int64 v19; // r14
	_WORD* v20; // rax
	char v21[8]; // [rsp+20h] [rbp-58h] BYREF
	int* v22; // [rsp+28h] [rbp-50h]
	_WORD* v23; // [rsp+30h] [rbp-48h]
	__int64 v24; // [rsp+38h] [rbp-40h]
	_QWORD* v25; // [rsp+88h] [rbp+10h]

	if (!a2 || !*(_WORD*)a2)
		return 0i64;
	v4 = 0i64;
	v5 = 0i64;
	do
		v6 = *((_WORD*)a2 + ++v5) == 0;
	while (!v6);
	v7 = (2 * v5) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		v4 = sub_14018B280(2 * (v7 + 1), 0);
	v8 = 2 * v7;
	sub_1407DB590(v4, a2, v8);
	v9 = (_WORD*)((char*)v4 + v8);
	if ((int*)((char*)v4 + v8))
		*v9 = 0;
	v10 = (_QWORD*)a1[2];
	v11 = v10;
	v12 = (_QWORD*)v10[1];
	while (v12)
	{
		if ((int)sub_1400454D0(v12[5], v12[6], (unsigned __int16*)v4, (__int64)v9) < 0)
		{
			v12 = (_QWORD*)v12[3];
		}
		else
		{
			v11 = v12;
			v12 = (_QWORD*)v12[2];
		}
	}
	if (v11 == v10 || (v25 = v11, (int)sub_1400454D0((__int64)v4, (__int64)v9, (unsigned __int16*)v11[5], v11[6]) < 0))
		v25 = v10;
	if (v4)
		sub_14018B900((__int64)v4, 0);
	if (v25 != (_QWORD*)a1[2])
		return v25[8];
	v14 = 0;
	if (*(_BYTE*)(*a1 + 2825i64))
		v14 = 1056964608;
	v15 = sub_14018B280(56i64, 0);
	if (v15)
		v16 = sub_14014E0D0((__int64)v15, a2, *(float*)&v14, 0);
	else
		v16 = 0i64;
	v6 = *(_WORD*)a2 == 0;
	v17 = 0i64;
	v22 = 0i64;
	v24 = 0i64;
	v18 = 0i64;
	if (!v6)
	{
		do
			++v18;
		while (*((_WORD*)a2 + v18));
	}
	v19 = (2 * v18) >> 1;
	if ((unsigned __int64)(v19 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v17 = sub_14018B280(2 * (v19 + 1), 0);
		v22 = v17;
		v24 = (__int64)v17 + 2 * v19 + 2;
	}
	sub_1407DB590(v17, a2, 2 * v19);
	v20 = (_WORD*)v17 + v19;
	v23 = v20;
	if (v20)
		*v20 = 0;
	*(_QWORD*)sub_1400EDA60((__int64)(a1 + 1), (__int64)v21) = v16;
	if (v17)
		sub_14018B900((__int64)v17, 0);
	return v16;
}
// 14014E670: using guessed type char var_58[8];

