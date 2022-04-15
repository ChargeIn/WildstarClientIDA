#include "../winhttp.h"

//----- (000000014083A740) ----------------------------------------------------
__int64 __fastcall sub_14083A740(__int64** a1, __int64 a2)
{
	char v2; // al

	v2 = *(_BYTE*)(a2 + 72);
	if (v2)
		*(_BYTE*)(a2 + 72) = v2 - 1;
	if (*(_BYTE*)(a2 + 72) || *(_BYTE*)(a2 + 73))
		return 1i64;
	else
		return sub_14083A630(a1, a2);
}

