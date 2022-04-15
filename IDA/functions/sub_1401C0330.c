#include "../winhttp.h"

//----- (00000001401C0330) ----------------------------------------------------
_BOOL8 __fastcall sub_1401C0330(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // r8

	v2 = *(_QWORD*)a1 - *(_QWORD*)a2;
	if (*(_QWORD*)a1 == *(_QWORD*)a2)
	{
		v2 = *(_QWORD*)(a1 + 8) - *(_QWORD*)(a2 + 8);
		if (!v2)
			v2 = *(unsigned int*)(a1 + 16) - (unsigned __int64)*(unsigned int*)(a2 + 16);
	}
	return v2 == 0;
}

