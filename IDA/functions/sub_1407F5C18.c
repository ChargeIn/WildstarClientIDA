#include "../winhttp.h"

//----- (00000001407F5C18) ----------------------------------------------------
double __fastcall sub_1407F5C18(char a1, int a2, double a3, double a4, __int64 a5)
{
	__int64 v5; // rbx
	int v8; // eax
	__int64 v9; // r8
	__int64 v10; // r9
	double v12; // [rsp+48h] [rbp-61h] BYREF
	double v13; // [rsp+50h] [rbp-59h] BYREF
	char v14[64]; // [rsp+58h] [rbp-51h] BYREF
	int v15; // [rsp+98h] [rbp-11h]

	v5 = a5;
	v13 = a3;
	v12 = a4;
	if (!(unsigned int)sub_1407F5E0C(a1, &v12, a5))
	{
		v15 &= ~1u;
		sub_1407F615C((ULONG_PTR)v14, &a5, a1, a2, &v13, &v12, 0);
		v5 = a5;
	}
	v8 = sub_1407F5BD4(a1);
	if (!dword_140C106B4 && v8)
		return sub_1407F64BC(v8, a2, v9, v10, v12, v5);
	sub_1407F648C(v8);
	sub_1407F65B0(v5, 65472);
	return v12;
}
// 1407F5CC3: variable 'v9' is possibly undefined
// 1407F5CC3: variable 'v10' is possibly undefined
// 140C106B4: using guessed type int dword_140C106B4;
// 1407F5C18: using guessed type char var_A0[64];

