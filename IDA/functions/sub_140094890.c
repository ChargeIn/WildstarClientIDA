#include "../winhttp.h"

//----- (0000000140094890) ----------------------------------------------------
__int64 __fastcall sub_140094890(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	unsigned __int64 v7; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x13ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 1, 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, a3 + 2, 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, a3 + 3, 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, a3 + 4, 2ui64);
					if ((int)result >= 0)
					{
						v7 = (int)a3[4];
						if (v7 < 2)
							return ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_140094953[v7])(a1, a2, a3 + 6);
						else
							return 2147500037i64;
					}
				}
			}
		}
	}
	return result;
}
// 140C1EB88: using guessed type __int64 (__fastcall *funcs_140094953[8])();

