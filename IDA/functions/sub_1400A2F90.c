#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A2F90) ----------------------------------------------------
__int64 __fastcall sub_1400A2F90(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_1400A2EB0(a1, a2, (__int64)a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 24, 1ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, a3 + 25, 3ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, a3 + 26, 0xEui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, a3 + 27, 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, a3 + 28, 1ui64);
						if ((int)result >= 0)
							return sub_14006C1C0(a1, a3 + 29);
					}
				}
			}
		}
	}
	return result;
}

