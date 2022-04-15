#include "../winhttp.h"

//----- (00000001400480B0) ----------------------------------------------------
__int64 __fastcall sub_1400480B0(__int64 a1)
{
	__int64 v2; // rax

	if (*(_DWORD*)(a1 + 40) == 4)
		return 0i64;
	v2 = *(_QWORD*)(a1 + 32);
	if (v2)
	{
		while (*(_DWORD*)(v2 + 40) == 4)
		{
			v2 = *(_QWORD*)(v2 + 32);
			if (!v2)
				return 1i64;
		}
		return 0i64;
	}
	return 1i64;
}

