#include "../winhttp.h"

//----- (000000014001B370) ----------------------------------------------------
__int64 sub_14001B370(_BYTE* a1, __int64 a2, unsigned __int16* a3, ...)
{
	unsigned int v3; // ebx
	int v5; // r9d
	unsigned __int64 v6; // rdi
	int v7; // eax
	__int64 result; // rax
	va_list va; // [rsp+58h] [rbp+20h] BYREF

	va_start(va, a3);
	v3 = 0;
	v5 = 0;
	if ((unsigned __int64)(a2 - 1) > 0x7FFFFFFE)
		v5 = -2147024809;
	if (v5 < 0)
	{
		result = (unsigned int)v5;
		if (a2)
			*(_WORD*)a1 = 0;
	}
	else
	{
		v6 = a2 - 1;
		v7 = sub_1407DDA14(a1, a2 - 1, a3, (__int64)va);
		if (v7 < 0 || v7 > v6)
		{
			*(_WORD*)&a1[2 * v6] = 0;
			return (unsigned int)-2147024774;
		}
		else if (v7 == v6)
		{
			*(_WORD*)&a1[2 * v6] = 0;
			return 0i64;
		}
		return v3;
	}
	return result;
}

