#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A9C20) ----------------------------------------------------
__int64 __fastcall sub_1400A9C20(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 12), 5ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 1ui64);
				if ((int)result >= 0)
					return sub_1400852F0(a1, v6, a3 + 24);
			}
		}
	}
	return result;
}
// 1400A9C9A: variable 'v6' is possibly undefined

