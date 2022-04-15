#include "../winhttp.h"

//----- (0000000140852980) ----------------------------------------------------
__int64 __fastcall sub_140852980(__int64 a1)
{
	if (*(_QWORD*)(a1 + 72))
		return *(_QWORD*)(a1 + 72);
	while (1)
	{
		a1 = *(_QWORD*)(a1 + 64);
		if (!a1)
			break;
		if (*(_QWORD*)(a1 + 72))
			return *(_QWORD*)(a1 + 72);
	}
	return 0i64;
}

