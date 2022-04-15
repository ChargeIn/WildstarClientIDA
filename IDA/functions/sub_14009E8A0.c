#include "../winhttp.h"

//----- (000000014009E8A0) ----------------------------------------------------
__int64 __fastcall sub_14009E8A0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v6);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 0x20ui64);
				if ((int)result >= 0)
					return sub_14006C090(a1, (_DWORD*)(a3 + 24), 3ui64);
			}
		}
	}
	return result;
}
// 14009E8DE: variable 'v6' is possibly undefined

