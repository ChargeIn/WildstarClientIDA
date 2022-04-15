#include "../winhttp.h"

//----- (0000000140084450) ----------------------------------------------------
__int64 __fastcall sub_140084450(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		if (a3 == -8)
		{
			return 2147500037i64;
		}
		else
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0xEui64);
			if ((int)result >= 0)
			{
				result = sub_14006C120(a1, (__int64*)(a3 + 16), v7);
				if ((int)result >= 0)
					return sub_140336A40(a1, a2, (_QWORD*)(a3 + 24));
			}
		}
	}
	return result;
}
// 1400844BF: variable 'v7' is possibly undefined

