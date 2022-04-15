#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A0D20) ----------------------------------------------------
__int64 __fastcall sub_1400A0D20(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 5ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C1C0(a1, (_DWORD*)(a3 + 4));
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 2ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C1C0(a1, (_DWORD*)(a3 + 12));
				if ((int)result >= 0)
				{
					result = sub_14006C120(a1, (__int64*)(a3 + 16), v6);
					if ((int)result >= 0)
						return sub_14006C120(a1, (__int64*)(a3 + 24), v7);
				}
			}
		}
	}
	return result;
}
// 1400A0D94: variable 'v6' is possibly undefined
// 1400A0DA4: variable 'v7' is possibly undefined

