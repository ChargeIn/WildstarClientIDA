#include "../winhttp.h"

//----- (000000014034B7B0) ----------------------------------------------------
__int64 __fastcall sub_14034B7B0(_BYTE* a1, __int64 a2, unsigned __int16* a3, _OWORD* a4, __int64 a5)
{
	unsigned int v5; // edi
	int v7; // ecx
	unsigned __int64 v8; // rbx
	int v9; // eax

	v5 = 0;
	v7 = 0;
	if ((unsigned __int64)(a2 - 1) > 0x7FFFFFFE)
		v7 = -2147024809;
	if (v7 < 0)
		return (unsigned int)v7;
	v8 = a2 - 1;
	v9 = sub_1407DDA2C(a1, a2 - 1, a3, a4, a5);
	if (v9 < 0 || v9 > v8)
	{
		*(_WORD*)&a1[2 * v8] = 0;
		return (unsigned int)-2147024774;
	}
	else if (v9 == v8)
	{
		*(_WORD*)&a1[2 * v8] = 0;
		return 0i64;
	}
	return v5;
}

