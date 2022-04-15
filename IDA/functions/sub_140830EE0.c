#include "../winhttp.h"

//----- (0000000140830EE0) ----------------------------------------------------
__int64 __fastcall sub_140830EE0(struct _RTL_CRITICAL_SECTION* a1, __int64 a2)
{
	bool v2; // zf
	unsigned int v3; // edx

	v2 = *(_BYTE*)(a2 + 4) == 0;
	v3 = *(_DWORD*)a2;
	if (!v2)
		a1 = (struct _RTL_CRITICAL_SECTION*)((char*)a1 + 1592);
	return sub_14083EDE0(a1, v3);
}

