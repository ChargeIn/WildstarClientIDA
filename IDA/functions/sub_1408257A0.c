#include "../winhttp.h"

//----- (00000001408257A0) ----------------------------------------------------
__int64 __fastcall sub_1408257A0(_WORD* a1, unsigned __int64 a2, _QWORD* a3, unsigned __int64 a4)
{
	int v5; // [rsp+20h] [rbp-18h]

	v5 = sub_140825750((__int64)a1, a2, a4);
	if (v5 < 0)
		*a3 = 0i64;
	else
		return (unsigned int)sub_140825810(a1, a2, a3);
	return (unsigned int)v5;
}

