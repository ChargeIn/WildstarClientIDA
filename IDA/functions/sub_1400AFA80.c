#include "../winhttp.h"

//----- (00000001400AFA80) ----------------------------------------------------
__int64 __fastcall sub_1400AFA80(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx
	__int64 v7; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C1C0(a1, a3);
	if ((int)result >= 0)
	{
		result = sub_1400A8A30(a1, v6, a3 + 1);
		if ((int)result >= 0)
		{
			result = sub_14008F650(a1, v7, a3 + 4);
			if ((int)result >= 0)
			{
				result = sub_14006C1C0(a1, a3 + 8);
				if ((int)result >= 0)
					return sub_14006C090(a1, a3 + 9, 0x20ui64);
			}
		}
	}
	return result;
}
// 1400AFAB8: variable 'v6' is possibly undefined
// 1400AFAC8: variable 'v7' is possibly undefined

