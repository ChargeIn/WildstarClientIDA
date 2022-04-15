#include "../winhttp.h"

//----- (00000001407F64BC) ----------------------------------------------------
double __fastcall sub_1407F64BC(int a1, int a2, __int64 a3, __int64 a4, double a5, __int64 a6)
{
	int v7; // r8d
	_DWORD* v8; // rax
	__int64 v9; // rax

	v7 = 0;
	v8 = &unk_140C104E0;
	while (*v8 != a2)
	{
		v8 += 4;
		++v7;
		if ((__int64)v8 >= (__int64)&byte_140C106B0)
		{
			v9 = 0i64;
			goto LABEL_6;
		}
	}
	v9 = *((_QWORD*)&unk_140C104E0 + 2 * v7 + 1);
LABEL_6:
	if (v9)
	{
		sub_1407F65B0(a6, 65472);
		if (!(unsigned int)sub_1407F6660())
			sub_1407F648C(a1);
		return a5;
	}
	else
	{
		sub_1407F65B0(a6, 65472);
		sub_1407F648C(a1);
		return a5;
	}
}
// 140C106B0: using guessed type char byte_140C106B0;

