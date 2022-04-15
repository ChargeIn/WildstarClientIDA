#include "../winhttp.h"

//----- (0000000140859A10) ----------------------------------------------------
__int64 __fastcall sub_140859A10(__int64 a1, __int64 a2)
{
	unsigned int v2; // ebx
	unsigned int v5; // esi

	v2 = 1;
	if (*(_QWORD*)(a2 + 72))
		return 21i64;
	if ((*(_BYTE*)(a2 + 91) & 2) != 0)
	{
		v5 = *(_DWORD*)(a2 + 24);
		if (sub_1408591D0((__int64*)(a1 + 136), v5))
		{
			return 5i64;
		}
		else
		{
			if (*(_DWORD*)(a1 + 24) == v5)
				return 23;
			return v2;
		}
	}
	else if (sub_1408591D0((__int64*)(a1 + 112), *(_DWORD*)(a2 + 24)))
	{
		return 5i64;
	}
	else
	{
		return 1i64;
	}
}

