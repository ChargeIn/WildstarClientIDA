#include "../winhttp.h"

//----- (000000014007BA50) ----------------------------------------------------
__int64 __fastcall sub_14007BA50(__int64 a1, _QWORD* a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v7; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 1, 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_1400852F0(a1, v7, (__int64)(a3 + 2));
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, a3 + 6, 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, a3 + 7, 0x20ui64);
					if ((int)result >= 0)
						return sub_14007B930(a1, a2, (__int64)(a3 + 8));
				}
			}
		}
	}
	return result;
}
// 14007BAB1: variable 'v7' is possibly undefined

