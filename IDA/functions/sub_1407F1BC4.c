#include "../winhttp.h"

//----- (00000001407F1BC4) ----------------------------------------------------
__int64 __fastcall sub_1407F1BC4(__int64* a1, _BYTE* a2, unsigned __int64 a3, int a4, int a5, _OWORD* a6)
{
	__int64 result; // rax
	unsigned __int64 v10; // rdx
	int v11[6]; // [rsp+40h] [rbp-68h] BYREF
	char v12[24]; // [rsp+58h] [rbp-50h] BYREF

	sub_1407F6CF8(*a1, (__int64)v11, v12, 22i64);
	if (a2 && a3)
	{
		v10 = -1i64;
		if (a3 != -1i64)
			v10 = a3 - (v11[0] == 45) - (a4 > 0);
		result = sub_1407F69CC((int*)&a2[(v11[0] == 45) + (a4 > 0)], v10, a4 + 1, (__int64)v11);
		if ((_DWORD)result)
			*a2 = 0;
		else
			return sub_1407F19C8(a2, a3, a4, a5, (__int64)v11, 0, a6);
	}
	else
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 22i64;
	}
	return result;
}
// 1407F1BC4: using guessed type char var_50[24];

