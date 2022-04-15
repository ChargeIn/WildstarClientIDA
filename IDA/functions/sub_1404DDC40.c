#include "../winhttp.h"

//----- (00000001404DDC40) ----------------------------------------------------
__int64 __fastcall sub_1404DDC40(__int64 a1, int* a2, int a3)
{
	__int64 v6; // rax
	int* v7; // rbp
	__int64 v8; // r14
	int* v9; // rax
	__int64 result; // rax
	char v11[8]; // [rsp+20h] [rbp-38h] BYREF
	int* v12; // [rsp+28h] [rbp-30h]
	int* v13; // [rsp+30h] [rbp-28h]
	__int64 v14; // [rsp+38h] [rbp-20h]

	sub_1400B6390((_QWORD*)a1);
	*(_QWORD*)a1 = off_140B69170;
	v6 = 0i64;
	*(_DWORD*)(a1 + 88) = 1;
	v7 = 0i64;
	v12 = 0i64;
	v13 = 0i64;
	v14 = 0i64;
	if (*(_WORD*)a2)
	{
		do
			++v6;
		while (*((_WORD*)a2 + v6));
	}
	v8 = (2 * v6) >> 1;
	if ((unsigned __int64)(v8 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v7 = sub_14018B280(2 * (v8 + 1), 0);
		v12 = v7;
		v13 = v7;
		v14 = (__int64)v7 + 2 * v8 + 2;
	}
	sub_1407DB590(v7, a2, 2 * v8);
	v9 = (int*)((char*)v7 + 2 * v8);
	v13 = v9;
	if (v9)
		*(_WORD*)v9 = 0;
	sub_1400B68F0(a1, (__int64)v11);
	if (v12)
		sub_14018B900((__int64)v12, 0);
	*(_DWORD*)(a1 + 8) = a3;
	result = a1;
	*(float*)(a1 + 12) = (float)a3;
	return result;
}
// 140B69170: using guessed type __int64 (__fastcall *off_140B69170[23])();
// 1404DDC40: using guessed type char var_38[8];

