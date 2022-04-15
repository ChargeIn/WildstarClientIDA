#include "../winhttp.h"

//----- (000000014063F320) ----------------------------------------------------
void __fastcall sub_14063F320(__int64 a1)
{
	int* v2; // rdi
	__int64 v3; // rax
	__int64 v5; // r14
	__int64 v6; // rdi
	__int64 v7; // rsi
	unsigned __int64 v8; // rax
	WCHAR* v9; // rcx
	unsigned int v10; // eax
	__int64 i; // rbx
	__int64 v12; // rcx
	__int64 j; // rbx
	__int64 v14; // rcx
	__int64 v15[2]; // [rsp+30h] [rbp-78h] BYREF
	__int64 v16; // [rsp+40h] [rbp-68h]
	__int64 v17; // [rsp+48h] [rbp-60h]
	char v18[8]; // [rsp+50h] [rbp-58h] BYREF
	int* v19; // [rsp+58h] [rbp-50h]
	__int64 v21; // [rsp+68h] [rbp-40h]
	char v22[8]; // [rsp+70h] [rbp-38h] BYREF
	__int64 v23; // [rsp+78h] [rbp-30h]
	__int64 v24; // [rsp+80h] [rbp-28h]

	v15[0] = 0i64;
	v15[1] = 0i64;
	v16 = 0i64;
	v17 = 0i64;
	if (((*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) & 0xFFFFFFFFFFFFFFFEui64) == 0)
	{
		v16 = 0x6400000001i64;
	LABEL_22:
		sub_1403F4740(qword_140C65898, 0x71Bu, (__int64)v15);
		return;
	}
	v2 = 0i64;
	v19 = 0i64;
	v21 = 0i64;
	v3 = 0i64;
	while (*(_WORD*)&asc_1409F3FD4[2 * v3++ + 2] != 0)
		;
	v5 = (2 * v3) >> 1;
	if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v2 = sub_14018B280(2 * (v5 + 1), 0);
		v19 = v2;
		v21 = (__int64)v2 + 2 * v5 + 2;
	}
	sub_1407DB590(v2, (int*)" ", 2 * v5);
	if ((int*)((char*)v2 + 2 * v5))
		*((_WORD*)v2 + v5) = 0;
	sub_14018F570((__int64)v22, a1, (__int64)v18, 34, 92);
	if (v2)
		sub_14018B900((__int64)v2, 0);
	v6 = v24;
	v7 = v23;
	v8 = (v24 - v23) >> 5;
	if (v8 <= 2)
	{
		if (v8 == 1)
		{
			LODWORD(v16) = 1;
			v9 = *(WCHAR**)(v23 + 8);
		}
		else
		{
			LODWORD(v16) = sub_1407DF510(*(WCHAR**)(v23 + 8));
			v9 = *(WCHAR**)(v7 + 40);
		}
		v10 = sub_1407DF510(v9);
		HIDWORD(v16) = v10;
		if ((unsigned int)v16 <= v10 && v10 <= 0xF4240)
		{
			for (i = v7; i != v6; i += 32i64)
			{
				v12 = *(_QWORD*)(i + 8);
				if (v12)
					sub_14018B900(v12, 0);
			}
			sub_14018B900(v7, 0);
			goto LABEL_22;
		}
	}
	for (j = v7; j != v6; j += 32i64)
	{
		v14 = *(_QWORD*)(j + 8);
		if (v14)
			sub_14018B900(v14, 0);
	}
	if (v7)
		sub_14018B900(v7, 0);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 14063F320: using guessed type char var_58[8];
// 14063F320: using guessed type char var_38[8];

