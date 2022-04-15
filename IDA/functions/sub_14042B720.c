#include "../winhttp.h"

//----- (000000014042B720) ----------------------------------------------------
__int64 __fastcall sub_14042B720(__int64 a1, unsigned int* a2)
{
	__int64 v2; // r9
	__int64 v4[5]; // [rsp+30h] [rbp-28h] BYREF

	v2 = *a2;
	v4[0] = *((_QWORD*)a2 + 8);
	v4[2] = 0i64;
	v4[1] = 1i64;
	return sub_1400EA3E0(a1, "PostCommodityOrderResult", byte_1409EC85C, v2, a2 + 2, v4);
}
// 1409EC85C: using guessed type _BYTE byte_1409EC85C[4];

