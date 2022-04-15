#include "../winhttp.h"

//----- (00000001403C5BB0) ----------------------------------------------------
_WORD* __fastcall sub_1403C5BB0(__int64 a1, _WORD* a2, __int64 a3)
{
	__int64 v3; // r9
	_WORD* v4; // rbx
	int v5; // ecx

	v3 = *(_QWORD*)(a1 + 80);
	v4 = a2;
	v5 = 0;
	if ((unsigned __int64)(a3 - 1) > 0x7FFFFFFE)
		v5 = -2147024809;
	if (v5 < 0)
	{
		if (a3)
			*a2 = 0;
	}
	else
	{
		v5 = sub_14001B680(a2, a3, a3, v3);
	}
	if (v5 < 0)
		return 0i64;
	return v4;
}

