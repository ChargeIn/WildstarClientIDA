#include "../winhttp.h"

//----- (00000001404211B0) ----------------------------------------------------
__int64 __fastcall sub_1404211B0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	int v4; // [rsp+40h] [rbp+18h] BYREF

	*a3 += 8i64;
	v4 = *(_DWORD*)(*a3 - 8i64);
	return sub_140433830(a2, &v4);
}

