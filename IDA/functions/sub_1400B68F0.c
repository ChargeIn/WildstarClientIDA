//----- (00000001400B68F0) ----------------------------------------------------
void __fastcall sub_1400B68F0(__int64 a1, __int64 a2)
{
	__int64 v4; // rax
	int* v5; // rdi
	__int64 v7; // rsi
	char v8[8]; // [rsp+20h] [rbp-38h] BYREF
	int* v9; // [rsp+28h] [rbp-30h]
	int* v10; // [rsp+30h] [rbp-28h]
	__int64 v11; // [rsp+38h] [rbp-20h]

	v9 = 0i64;
	v10 = 0i64;
	v11 = 0i64;
	v4 = 0i64;
	v5 = 0i64;
	while (aName_5[++v4] != 0)
		;
	v7 = (2 * v4) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v5 = sub_14018B280(2 * (v7 + 1), 0);
		v9 = v5;
		v10 = v5;
		v11 = (__int64)v5 + 2 * v7 + 2;
	}
	sub_1407DB590(v5, (int*)L"name", 2 * v7);
	v10 = (int*)((char*)v5 + 2 * v7);
	if (v10)
		*((_WORD*)v5 + v7) = 0;
	(*(void(__fastcall**)(__int64, char*, __int64))(*(_QWORD*)a1 + 152i64))(a1, v8, a2);
	if (v9)
		sub_14018B900((__int64)v9, 0);
}
// 140A13D08: using guessed type wchar_t aName_5[5];
// 1400B68F0: using guessed type char var_38[8];

