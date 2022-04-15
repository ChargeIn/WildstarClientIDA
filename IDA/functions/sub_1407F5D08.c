#include "../winhttp.h"

//----- (00000001407F5D08) ----------------------------------------------------
double __fastcall sub_1407F5D08(char a1, int a2, double a3, double a4, double a5, __int64 a6)
{
	__int64 v6; // rbx
	int v9; // eax
	__int64 v10; // r8
	__int64 v11; // r9
	double v13[2]; // [rsp+48h] [rbp-79h] BYREF
	char v14[48]; // [rsp+58h] [rbp-69h] BYREF
	double v15; // [rsp+88h] [rbp-39h]
	unsigned int v16; // [rsp+98h] [rbp-29h]

	v6 = a6;
	v13[0] = a3;
	if (!(unsigned int)sub_1407F5E0C(a1, &a5, a6))
	{
		v15 = a4;
		v16 = v16 & 0xFFFFFFE0 | 3;
		sub_1407F615C((ULONG_PTR)v14, &a6, a1, a2, v13, &a5, 0);
		v6 = a6;
	}
	v9 = sub_1407F5BD4(a1);
	if (!dword_140C106B4 && v9)
		return sub_1407F64BC(v9, a2, v10, v11, a5, v6);
	sub_1407F648C(v9);
	sub_1407F65B0(v6, 65472);
	return a5;
}
// 1407F5DC3: variable 'v10' is possibly undefined
// 1407F5DC3: variable 'v11' is possibly undefined
// 140C106B4: using guessed type int dword_140C106B4;
// 1407F5D08: using guessed type double var_C0[2];
// 1407F5D08: using guessed type char var_B0[48];

