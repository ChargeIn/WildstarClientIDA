#include "../winhttp.h"

//----- (0000000140199F80) ----------------------------------------------------
__int64 __fastcall sub_140199F80(__int64 a1, __int64 a2)
{
	__int64 v2; // r15
	_QWORD* v3; // rbx
	__int64 v6; // rsi
	_QWORD* v7; // rdi
	__int64 v8; // rbp
	unsigned __int16* v9; // rdi
	__int64 v10; // rbx
	__int64 i; // rax
	__int64 v12; // rcx
	__int64 j; // rcx
	__int64 k; // rcx
	__int64 v16; // [rsp+50h] [rbp+8h] BYREF
	__int64 v17; // [rsp+60h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v3 = *(_QWORD**)(v2 + 8);
	v6 = v2;
	v7 = v3;
	if (v3)
	{
		v8 = *(_QWORD*)(a2 + 8);
		do
		{
			if ((int)sub_14018E2C0(v8, (unsigned __int16*)v7[5]) >= 0)
			{
				v7 = (_QWORD*)v7[3];
			}
			else
			{
				v6 = (__int64)v7;
				v7 = (_QWORD*)v7[2];
			}
		} while (v7);
		v9 = *(unsigned __int16**)(a2 + 8);
		do
		{
			if ((int)sub_14018E2C0(v3[5], v9) < 0)
			{
				v3 = (_QWORD*)v3[3];
			}
			else
			{
				v2 = (__int64)v3;
				v3 = (_QWORD*)v3[2];
			}
		} while (v3);
	}
	v10 = 0i64;
	for (i = v2; i != v6; ++v10)
	{
		v12 = *(_QWORD*)(i + 24);
		if (v12)
		{
			i = *(_QWORD*)(i + 24);
			for (j = *(_QWORD*)(v12 + 16); j; j = *(_QWORD*)(j + 16))
				i = j;
		}
		else
		{
			for (k = *(_QWORD*)(i + 8); i == *(_QWORD*)(k + 24); k = *(_QWORD*)(k + 8))
				i = k;
			if (*(_QWORD*)(i + 24) != k)
				i = k;
		}
	}
	v16 = v6;
	v17 = v2;
	sub_14019A270(a1, &v17, &v16);
	return v10;
}
// 140199FEA: conditional instruction was optimized away because rbx.8!=0

