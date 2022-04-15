#include "../winhttp.h"

//----- (00000001403CA2B0) ----------------------------------------------------
__int64 __fastcall sub_1403CA2B0(__int64 a1, unsigned int a2)
{
	__int64 v3; // rax
	unsigned int v4; // edx

	v3 = sub_14020C160(a2);
	if (v3 && (v4 = *(_DWORD*)(v3 + 4)) != 0)
		return v4 & *(_DWORD*)(a1 + 6976);
	else
		return 1i64;
}

