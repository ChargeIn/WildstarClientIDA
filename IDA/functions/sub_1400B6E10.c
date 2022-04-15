#include "../winhttp.h"

//----- (00000001400B6E10) ----------------------------------------------------
void __fastcall sub_1400B6E10(__int64 a1, __int64 a2)
{
	int* v4; // rdi
	__int64 v5; // rax
	int* v6; // rbp
	__int64 v7; // rsi
	char v8[8]; // [rsp+20h] [rbp-58h] BYREF
	int* v9; // [rsp+28h] [rbp-50h]
	int* v10; // [rsp+30h] [rbp-48h]
	__int64 v11; // [rsp+38h] [rbp-40h]
	__int64 v12; // [rsp+40h] [rbp-38h] BYREF
	__int64 v13; // [rsp+48h] [rbp-30h]

	v4 = (int*)sub_14018EFA0(&v12, (__int64)L"%d")[1];
	v5 = 0i64;
	v9 = 0i64;
	v10 = 0i64;
	v11 = 0i64;
	v6 = 0i64;
	if (*(_WORD*)v4)
	{
		do
			++v5;
		while (*((_WORD*)v4 + v5));
	}
	v7 = (2 * v5) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v6 = sub_14018B280(2 * (v7 + 1), 0);
		v9 = v6;
		v10 = v6;
		v11 = (__int64)v6 + 2 * v7 + 2;
	}
	sub_1407DB590(v6, v4, 2 * v7);
	v10 = (int*)((char*)v6 + 2 * v7);
	if (v10)
		*((_WORD*)v6 + v7) = 0;
	(*(void(__fastcall**)(__int64, __int64, char*))(*(_QWORD*)a1 + 152i64))(a1, a2, v8);
	if (v9)
		sub_14018B900((__int64)v9, 0);
	if (v13)
		sub_14018B900(v13, 0);
}
// 1409D306C: using guessed type wchar_t aD_4[3];
// 1400B6E10: using guessed type char var_58[8];

