#include "../winhttp.h"

//----- (00000001405E34C0) ----------------------------------------------------
void __fastcall sub_1405E34C0(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rdi
	__int64 v5; // rax
	__int64 v7; // rsi
	_WORD* v8; // rax
	WCHAR* v9; // rbx
	int v10; // eax
	char v11[8]; // [rsp+20h] [rbp-78h] BYREF
	int* v12; // [rsp+28h] [rbp-70h]
	_WORD* v13; // [rsp+30h] [rbp-68h]
	__int64 v14; // [rsp+38h] [rbp-60h]
	__int64 v15; // [rsp+40h] [rbp-58h] BYREF
	WCHAR* v16; // [rsp+48h] [rbp-50h]
	int* v17; // [rsp+50h] [rbp-48h]
	int* v18; // [rsp+58h] [rbp-40h]
	__int64 v19; // [rsp+60h] [rbp-38h] BYREF
	int* v20; // [rsp+68h] [rbp-30h]
	int* v21; // [rsp+70h] [rbp-28h]
	int* v22; // [rsp+78h] [rbp-20h]

	v2 = sub_14018B280(16i64, 0);
	v16 = (WCHAR*)v2;
	v17 = v2;
	v18 = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	v3 = sub_14018B280(16i64, 0);
	v20 = v3;
	v21 = v3;
	v22 = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	v4 = 0i64;
	v12 = 0i64;
	v14 = 0i64;
	v5 = 0i64;
	while (asc_140B22F10[++v5] != 0)
		;
	v7 = (2 * v5) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v4 = sub_14018B280(2 * (v7 + 1), 0);
		v12 = v4;
		v14 = (__int64)v4 + 2 * v7 + 2;
	}
	sub_1407DB590(v4, (int*)L" \t\r\n", 2 * v7);
	v8 = (_WORD*)v4 + v7;
	v13 = v8;
	if (v8)
		*v8 = 0;
	sub_14018FBD0(a1, &v15, &v19, (__int64)v11);
	if (v4)
		sub_14018B900((__int64)v4, 0);
	v9 = v16;
	v10 = sub_14018E820(v16);
	sub_1405DE7A0(qword_140C65898 + 26680, v10, 1);
	if (v20)
		sub_14018B900((__int64)v20, 0);
	if (v9)
		sub_14018B900((__int64)v9, 0);
}
// 140B22F10: using guessed type wchar_t asc_140B22F10[5];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405E34C0: using guessed type char var_78[8];

