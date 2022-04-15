#include "../winhttp.h"

//----- (000000014007B2D0) ----------------------------------------------------
__int64 __fastcall sub_14007B2D0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	unsigned __int64 v7; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 1, 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, a3 + 2, 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C1C0(a1, a3 + 3);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, a3 + 4, 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, a3 + 5, 3ui64);
						if ((int)result >= 0)
						{
							v7 = (int)a3[5];
							if (v7 < 4)
								return ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_14007B3A7[v7])(a1, a2, a3 + 6);
							else
								return 2147500037i64;
						}
					}
				}
			}
		}
	}
	return result;
}
// 140C1EDC8: using guessed type __int64 (__fastcall *funcs_14007B3A7[4])();

