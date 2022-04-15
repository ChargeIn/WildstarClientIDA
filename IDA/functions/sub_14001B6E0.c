#include "../winhttp.h"

//----- (000000014001B6E0) ----------------------------------------------------
__int64 __fastcall sub_14001B6E0(_WORD* a1, __int64 a2, __int64 a3)
{
	__int64 v3; // r9
	int v4; // r10d
	__int64 v6; // rcx
	_WORD* v7; // rax

	v3 = 0i64;
	v4 = 0;
	if ((unsigned __int64)(a2 - 1) > 0x7FFFFFFE)
		v4 = -2147024809;
	if (v4 < 0)
		return (unsigned int)v4;
	v6 = a2;
	v7 = a1;
	v4 = 0;
	if (!a2)
		goto LABEL_7;
	while (*v7)
	{
		++v7;
		if (!--v6)
			goto LABEL_7;
	}
	if (v6)
		v3 = a2 - v6;
	else
		LABEL_7:
	v4 = -2147024809;
	if (v4 < 0)
		return (unsigned int)v4;
	else
		return sub_14001B680(&a1[v3], a2 - v3, a3, a3);
}

