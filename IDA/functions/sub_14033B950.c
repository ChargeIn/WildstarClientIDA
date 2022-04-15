#include "../winhttp.h"

//----- (000000014033B950) ----------------------------------------------------
__int64 sub_14033B950(__int64 a1, __int64 a2, unsigned __int16* a3, ...)
{
	int v5; // eax
	__int64 v7[2]; // [rsp+30h] [rbp-838h] BYREF
	char v8[2046]; // [rsp+40h] [rbp-828h] BYREF
	__int16 v9; // [rsp+83Eh] [rbp-2Ah]
	va_list va; // [rsp+888h] [rbp+20h] BYREF

	va_start(va, a3);
	v5 = sub_1407DDA14(v8, 0x3FFui64, a3, (__int64)va);
	if (v5 < 0 || (unsigned __int64)v5 >= 0x3FF)
		v9 = 0;
	if (a2)
	{
		if (!*(_WORD*)(a2 + 78))
			sub_140334D90(a2);
		v7[0] = 0x141DED098i64;
		return sub_1401A3130(99, 2, v7, a1, a2 + 78, v8);
	}
	else
	{
		v7[0] = 0x141DED540i64;
		return sub_1401A3130(99, 2, v7, a1, v8);
	}
}

