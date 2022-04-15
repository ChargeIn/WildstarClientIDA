#include "../winhttp.h"

//----- (0000000140826D90) ----------------------------------------------------
__int64 __fastcall sub_140826D90(_WORD* a1, unsigned __int64 a2, _WORD* a3)
{
	int v4; // [rsp+30h] [rbp-18h]
	__int64 v5; // [rsp+38h] [rbp-10h] BYREF

	v4 = sub_1408257A0(a1, a2, &v5, 0x7FFFFFFFui64);
	if (v4 >= 0)
		return (unsigned int)sub_1408258C0(&a1[v5], a2 - v5, 0i64, a3, 0x7FFFFFFFi64);
	return (unsigned int)v4;
}

