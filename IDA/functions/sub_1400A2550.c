#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A2550) ----------------------------------------------------
__int64 __fastcall sub_1400A2550(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006BF60(a1, (_WORD*)(a3 + 4), 0x10ui64);
		if ((int)result >= 0)
		{
			result = sub_14006BF60(a1, (_WORD*)(a3 + 6), 0x10ui64);
			if ((int)result >= 0)
			{
				result = sub_140337160(a1, (_BYTE*)(a3 + 8), 48i64);
				if ((int)result >= 0)
				{
					result = sub_140337160(a1, (_BYTE*)(a3 + 56), 7i64);
					if ((int)result >= 0)
						return sub_14006C090(a1, (_DWORD*)(a3 + 64), 0x20ui64);
				}
			}
		}
	}
	return result;
}

