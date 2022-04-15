#include "../winhttp.h"

//----- (000000014009F170) ----------------------------------------------------
__int64 __fastcall sub_14009F170(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 5ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 1ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006BE30(a1, (_BYTE*)(a3 + 12), 4ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0xEui64);
					if ((int)result >= 0)
						return sub_14009F0A0(a1, v6, (_DWORD*)(a3 + 20));
				}
			}
		}
	}
	return result;
}
// 14009F206: variable 'v6' is possibly undefined

