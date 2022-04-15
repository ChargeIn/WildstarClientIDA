#include "../winhttp.h"

//----- (0000000140832C00) ----------------------------------------------------
__int64 __fastcall sub_140832C00(__int64 a1)
{
	if ((*(_BYTE*)(a1 + 1124) & 2) != 0)
		return a1;
	while (1)
	{
		a1 = *(_QWORD*)(a1 + 864);
		if (!a1)
			break;
		if ((*(_BYTE*)(a1 + 1124) & 2) != 0)
			return a1;
	}
	return 0i64;
}

