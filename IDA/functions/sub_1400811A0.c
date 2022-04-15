#include "../winhttp.h"

//----- (00000001400811A0) ----------------------------------------------------
__int64 __fastcall sub_1400811A0(__int64 a1, _QWORD* a2, _DWORD* a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_140080F80(a1, a2, (__int64)a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 6, 0x12ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, a3 + 7, 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, a3 + 8, 2ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, a3 + 9, 2ui64);
					if ((int)result >= 0)
						return sub_14006C090(a1, a3 + 10, 3ui64);
				}
			}
		}
	}
	return result;
}

