#include "../winhttp.h"

//----- (0000000140092F80) ----------------------------------------------------
__int64 __fastcall sub_140092F80(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v7);
		if ((int)result >= 0)
		{
			result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 16));
			if ((int)result >= 0)
			{
				result = sub_14006C1C0(a1, (_DWORD*)(a3 + 24));
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 1ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
						if ((int)result >= 0)
							return sub_140337160(a1, (_BYTE*)(a3 + 36), 12i64);
					}
				}
			}
		}
	}
	return result;
}
// 140092FCB: variable 'v7' is possibly undefined

