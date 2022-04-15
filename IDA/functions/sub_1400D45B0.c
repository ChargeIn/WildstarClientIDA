#include "../winhttp.h"

//----- (00000001400D45B0) ----------------------------------------------------
__int64 __fastcall sub_1400D45B0(__int64 a1)
{
	if (*(_DWORD*)(a1 + 808) != -2)
		return *(unsigned int*)(a1 + 808);
	while (1)
	{
		a1 = *(_QWORD*)(a1 + 16);
		if (!a1)
			break;
		if (*(_DWORD*)(a1 + 808) != -2)
			return *(unsigned int*)(a1 + 808);
	}
	return 4294967294i64;
}

