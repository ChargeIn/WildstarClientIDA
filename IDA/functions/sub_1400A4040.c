#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A4040) ----------------------------------------------------
__int64 __fastcall sub_1400A4040(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 5ui64);
	if ((int)result >= 0)
	{
		result = sub_14008F650(a1, v6, a3 + 1);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, a3 + 5, 0x20ui64);
			if ((int)result >= 0)
				return sub_14006C090(a1, a3 + 6, 0x20ui64);
		}
	}
	return result;
}
// 1400A407E: variable 'v6' is possibly undefined

