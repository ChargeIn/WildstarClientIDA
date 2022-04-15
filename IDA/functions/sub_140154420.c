#include "../winhttp.h"

//----- (0000000140154420) ----------------------------------------------------
void __fastcall sub_140154420(__int64 a1, int* a2)
{
	__int64 v4; // rax
	int* v5; // r15
	__int64 v6; // rbx
	unsigned __int64 v7; // rbx
	_WORD* v8; // r14
	__int64 v9; // rbp
	__int64 v10; // r13
	_QWORD* v11; // rbx
	__int64 v12; // rsi
	_QWORD* v13; // rdi
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 i; // rcx
	__int64 j; // rdx
	__int64 v18; // [rsp+50h] [rbp+8h] BYREF
	__int64 v19; // [rsp+58h] [rbp+10h] BYREF

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
	v8 = (_WORD*)((char*)v5 + v7);
	if ((int*)((char*)v5 + v7))
		*v8 = 0;
	v9 = *(_QWORD*)(a1 + 16);
	v10 = a1 + 8;
	v11 = *(_QWORD**)(v9 + 8);
	v12 = v9;
	v13 = v11;
	if (v11)
	{
		do
		{
			if ((int)sub_1400454D0((__int64)v5, (__int64)v8, (unsigned __int16*)v13[5], v13[6]) >= 0)
			{
				v13 = (_QWORD*)v13[3];
			}
			else
			{
				v12 = (__int64)v13;
				v13 = (_QWORD*)v13[2];
			}
		} while (v13);
		do
		{
			if ((int)sub_1400454D0(v11[5], v11[6], (unsigned __int16*)v5, (__int64)v8) < 0)
			{
				v11 = (_QWORD*)v11[3];
			}
			else
			{
				v9 = (__int64)v11;
				v11 = (_QWORD*)v11[2];
			}
		} while (v11);
	}
	v14 = v9;
	while (v14 != v12)
	{
		v15 = *(_QWORD*)(v14 + 24);
		if (v15)
		{
			v14 = *(_QWORD*)(v14 + 24);
			for (i = *(_QWORD*)(v15 + 16); i; i = *(_QWORD*)(i + 16))
				v14 = i;
		}
		else
		{
			for (j = *(_QWORD*)(v14 + 8); v14 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
				v14 = j;
			if (*(_QWORD*)(v14 + 24) != j)
				v14 = j;
		}
	}
	v18 = v12;
	v19 = v9;
	sub_140155240(v10, &v19, &v18);
	if (v5)
		sub_14018B900((__int64)v5, 0);
}
// 1401544EC: conditional instruction was optimized away because rbx.8!=0

