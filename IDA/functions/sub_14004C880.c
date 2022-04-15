#include "../winhttp.h"

//----- (000000014004C880) ----------------------------------------------------
__int64 __fastcall sub_14004C880(__int64* a1, __int64 a2)
{
	__int64 v2; // r8
	unsigned int v3; // eax
	unsigned int v4; // ecx
	unsigned int v6; // ecx
	unsigned int v7; // edx

	v2 = *a1;
	v3 = *(_DWORD*)(*a1 + 4);
	v4 = *(_DWORD*)(*(_QWORD*)a2 + 4i64);
	if (v3 < v4)
		return 0xFFFFFFFFi64;
	if (v3 > v4)
		return 1i64;
	v6 = *(_DWORD*)(v2 + 8);
	v7 = *(_DWORD*)(*(_QWORD*)a2 + 8i64);
	if (v6 < v7)
		return 0xFFFFFFFFi64;
	return v6 > v7;
}

