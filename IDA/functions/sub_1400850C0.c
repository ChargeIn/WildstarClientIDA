#include "../winhttp.h"

//----- (00000001400850C0) ----------------------------------------------------
__int64 __fastcall sub_1400850C0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		if (a3 == -8)
		{
			return 2147500037i64;
		}
		else
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0xEui64);
			if ((int)result >= 0)
			{
				result = sub_14006C120(a1, (__int64*)(a3 + 16), v6);
				if ((int)result >= 0)
					return sub_14006C090(a1, (_DWORD*)(a3 + 24), 6ui64);
			}
		}
	}
	return result;
}
// 140085130: variable 'v6' is possibly undefined

