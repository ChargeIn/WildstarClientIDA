#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A40C0) ----------------------------------------------------
__int64 __fastcall sub_1400A40C0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx
	__int64 v7; // rdx
	__int64 v8; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C1C0(a1, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C1C0(a1, a3 + 1);
		if ((int)result >= 0)
		{
			result = sub_14006C1C0(a1, a3 + 2);
			if ((int)result >= 0)
			{
				result = sub_1400A8A30(a1, v6, a3 + 3);
				if ((int)result >= 0)
				{
					result = sub_1400A8A30(a1, v7, a3 + 6);
					if ((int)result >= 0)
						return sub_1400A8A30(a1, v8, a3 + 9);
				}
			}
		}
	}
	return result;
}
// 1400A4118: variable 'v6' is possibly undefined
// 1400A4128: variable 'v7' is possibly undefined
// 1400A4138: variable 'v8' is possibly undefined

