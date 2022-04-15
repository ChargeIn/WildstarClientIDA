#include "../winhttp.h"

//----- (00000001408A1610) ----------------------------------------------------
unsigned __int64 __fastcall sub_1408A1610(__int64 a1)
{
	int v1; // eax
	int i; // edx

	v1 = *(_DWORD*)(a1 + 8);
	if ((v1 & 8) == 0)
		return 0i64;
	for (i = 0; v1; v1 &= v1 - 1)
		++i;
	return *(_QWORD*)a1 + 4 * *(unsigned __int16*)(a1 + 16) * (unsigned __int64)(unsigned int)(i - 1);
}

