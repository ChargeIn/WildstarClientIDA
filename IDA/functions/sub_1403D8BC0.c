#include "../winhttp.h"

//----- (00000001403D8BC0) ----------------------------------------------------
__int64 __fastcall sub_1403D8BC0(__int64 a1)
{
	if ((~(*(_DWORD*)(a1 + 128) >> 3) & 1) != 0 && (int)(*(_DWORD*)(a1 + 236) - sub_14018CDF0()) > 0)
		return *(_DWORD*)(a1 + 236) - (unsigned int)sub_14018CDF0();
	else
		return 0i64;
}

