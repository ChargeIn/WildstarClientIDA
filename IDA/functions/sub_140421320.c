#include "../winhttp.h"

//----- (0000000140421320) ----------------------------------------------------
__int64 __fastcall sub_140421320(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	int v4; // [rsp+40h] [rbp+18h] BYREF

	*a3 += 8i64;
	v4 = *(_DWORD*)(*a3 - 8i64);
	return sub_1404339C0(a2, &v4);
}

