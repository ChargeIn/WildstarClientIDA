#include "../winhttp.h"

//----- (000000014033BA50) ----------------------------------------------------
__int64 sub_14033BA50(__int64 a1, int a2, __int64 a3, unsigned __int16* a4, ...)
{
	int v7; // eax
	__int64 v9[2]; // [rsp+30h] [rbp-848h] BYREF
	char v10[2046]; // [rsp+40h] [rbp-838h] BYREF
	__int16 v11; // [rsp+83Eh] [rbp-3Ah]
	va_list va; // [rsp+8A0h] [rbp+28h] BYREF

	va_start(va, a4);
	v7 = sub_1407DDA14(v10, 0x3FFui64, a4, (__int64)va);
	if (v7 < 0 || (unsigned __int64)v7 >= 0x3FF)
		v11 = 0;
	if (a3)
	{
		if (!*(_WORD*)(a3 + 78))
			sub_140334D90(a3);
		v9[0] = 0x141DED528i64;
		return sub_1401A3130(99, a2, v9, a1, a3 + 78, v10);
	}
	else
	{
		v9[0] = 0x141DED5B8i64;
		return sub_1401A3130(99, a2, v9, a1, v10);
	}
}

