#include "../winhttp.h"

//----- (00000001405C3320) ----------------------------------------------------
__int64 __fastcall sub_1405C3320(__int64 a1, __int64 a2)
{
	__int64 v4; // rax

	if (a2 && (v4 = sub_140214E00(*(_DWORD*)(a2 + 16))) != 0 && (unsigned int)(*(_DWORD*)(v4 + 12) - 10) <= 2)
		return sub_140645690(*(_DWORD*)(a2 + 20));
	else
		return 0i64;
}

