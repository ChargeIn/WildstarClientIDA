#include "../winhttp.h"

//----- (00000001407DF8DC) ----------------------------------------------------
__int64 __fastcall sub_1407DF8DC(char* a1, _WORD* a2, _WORD* a3, _WORD* a4, _WORD* a5)
{
	return sub_1407DF964(
		a1,
		a2,
		a2 != 0i64 ? 3 : 0,
		a3,
		-(__int64)(a3 != 0i64) & 0x100,
		a4,
		-(__int64)(a4 != 0i64) & 0x100,
		a5,
		-(__int64)(a5 != 0i64) & 0x100);
}

