#include "../winhttp.h"

//----- (00000001400EFDD0) ----------------------------------------------------
__int64 sub_1400EFDD0(_BYTE* a1, __int64 a2, signed __int8* a3, ...)
{
	unsigned int v3; // esi
	int v5; // ecx
	unsigned __int64 v6; // rbx
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
			*a1 = 0;
	}
	else
	{
		v6 = a2 - 1;
		v7 = sub_1407DF5FC(a1, a2 - 1, a3, (int*)va);
		if (v7 < 0 || v7 > v6)
		{
			a1[v6] = 0;
			return (unsigned int)-2147024774;
		}
		else if (v7 == v6)
		{
			a1[v6] = 0;
			return 0i64;
		}
		return v3;
	}
	return result;
}

