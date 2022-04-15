#include "../winhttp.h"

//----- (0000000140095C20) ----------------------------------------------------
__int64 __fastcall sub_140095C20(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx
	__int64 v7; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x10ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 1, 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_1400A8A30(a1, v6, a3 + 2);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, a3 + 5, 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_1400A8A30(a1, v7, a3 + 6);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, a3 + 9, 0x20ui64);
						if ((int)result >= 0)
							return sub_14006C090(a1, a3 + 10, 0x20ui64);
					}
				}
			}
		}
	}
	return result;
}
// 140095C74: variable 'v6' is possibly undefined
// 140095C9A: variable 'v7' is possibly undefined

