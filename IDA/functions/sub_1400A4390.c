#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A4390) ----------------------------------------------------
__int64 __fastcall sub_1400A4390(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 2ui64);
			if ((int)result >= 0)
			{
				result = sub_140337160(a1, (_BYTE*)(a3 + 12), 28i64);
				if ((int)result >= 0)
					return sub_140337160(a1, (_BYTE*)(a3 + 40), 28i64);
			}
		}
	}
	return result;
}

