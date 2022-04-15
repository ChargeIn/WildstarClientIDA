#include "../winhttp.h"

//----- (00000001404A11E0) ----------------------------------------------------
__int64 __fastcall sub_1404A11E0(__int64 a1, __int64 a2, int a3)
{
	int v3; // eax

	if (a2)
	{
		v3 = *(_DWORD*)(a2 + 128);
		if (v3 == 20 || v3 == 23)
		{
			if (*(_QWORD*)(qword_140C65898 + 29960))
			{
				if (a3 == 1)
					return 1i64;
			}
			else if (a3 == 2)
			{
				return 1i64;
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

