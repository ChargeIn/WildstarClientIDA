#include "../winhttp.h"

//----- (0000000140825810) ----------------------------------------------------
__int64 __fastcall sub_140825810(_WORD* a1, __int64 a2, _QWORD* a3)
{
	int v4; // [rsp+8h] [rbp-10h]
	__int64 v6; // [rsp+28h] [rbp+10h]

	v6 = a2;
	v4 = 0;
	while (v6 && *a1)
	{
		++a1;
		--v6;
	}
	if (!v6)
		v4 = -2147024809;
	if (a3)
	{
		if (v4 < 0)
			*a3 = 0i64;
		else
			*a3 = a2 - v6;
	}
	return (unsigned int)v4;
}

