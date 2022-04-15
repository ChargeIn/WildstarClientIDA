#include "../winhttp.h"

//----- (000000014003A400) ----------------------------------------------------
__int64 sub_14003A400()
{
	unsigned __int64 v0; // rdx
	int* v1; // rdi
	__int64 v2; // rax
	WCHAR* v3; // rsi
	__int64 v4; // r14
	WCHAR* v5; // rax
	int* v6; // rdi
	__int64 v7; // rax
	__int64 v9; // rsi
	_WORD* v10; // rax
	int* v11; // rbx
	__int64 v13; // [rsp+30h] [rbp-78h] BYREF
	LPCWSTR lpFile; // [rsp+38h] [rbp-70h]
	WCHAR* v15; // [rsp+40h] [rbp-68h]
	WCHAR* v16; // [rsp+48h] [rbp-60h]
	char v17[8]; // [rsp+50h] [rbp-58h] BYREF
	int* v18; // [rsp+58h] [rbp-50h]
	_WORD* v19; // [rsp+60h] [rbp-48h]
	__int64 v20; // [rsp+68h] [rbp-40h]
	char v21[8]; // [rsp+70h] [rbp-38h] BYREF
	int* v22; // [rsp+78h] [rbp-30h]
	int* v23; // [rsp+80h] [rbp-28h]
	__int64 v24; // [rsp+88h] [rbp-20h]

	v0 = *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5864) + 40i64);
	if (v0)
	{
		if (v0 <= qword_140C3FE70)
			v1 = (int*)(v0 + qword_140C3FE68);
		else
			v1 = 0i64;
	}
	else
	{
		v1 = 0i64;
	}
	v2 = 0i64;
	v3 = 0i64;
	lpFile = 0i64;
	v16 = 0i64;
	if (*(_WORD*)v1)
	{
		do
			++v2;
		while (*((_WORD*)v1 + v2));
	}
	v4 = (2 * v2) >> 1;
	if ((unsigned __int64)(v4 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v3 = (WCHAR*)sub_14018B280(2 * (v4 + 1), 0);
		lpFile = v3;
		v16 = &v3[v4 + 1];
	}
	sub_1407DB590((int*)v3, v1, 2 * v4);
	v5 = &v3[v4];
	v15 = v5;
	if (v5)
		*v5 = 0;
	if (v3 != v5)
	{
		v6 = 0i64;
		v18 = 0i64;
		v20 = 0i64;
		v7 = 0i64;
		while (aAuthntoken_1[++v7] != 0)
			;
		v9 = (2 * v7) >> 1;
		if ((unsigned __int64)(v9 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v6 = sub_14018B280(2 * (v9 + 1), 0);
			v18 = v6;
			v20 = (__int64)v6 + 2 * v9 + 2;
		}
		sub_1407DB590(v6, (int*)L"{AUTHNTOKEN}", 2 * v9);
		v10 = (_WORD*)v6 + v9;
		v19 = v10;
		if (v10)
			*v10 = 0;
		v11 = sub_14018B280(2i64, 0);
		v22 = v11;
		v24 = (__int64)v11 + 2;
		sub_1407DB590(v11, dword_1409D0F2C, 0i64);
		v23 = v11;
		if (v11)
			*(_WORD*)v11 = 0;
		sub_14018FFE0(&v13, (__int64)v17, (__int64)v21, 0);
		if (v11)
			sub_14018B900((__int64)v11, 0);
		v3 = (WCHAR*)lpFile;
		ShellExecuteW(0i64, L"open", lpFile, 0i64, 0i64, 1);
		if (v6)
			sub_14018B900((__int64)v6, 0);
	}
	if (v3)
		sub_14018B900((__int64)v3, 0);
	return 0i64;
}
// 1409D0F2C: using guessed type int dword_1409D0F2C[8];
// 1409F6300: using guessed type wchar_t aAuthntoken_1[13];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 14003A400: using guessed type char var_38[8];
// 14003A400: using guessed type char var_58[8];

