#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A0AA0) ----------------------------------------------------
__int64 __fastcall sub_1400A0AA0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 3ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 1, 0x20ui64);
		if ((int)result >= 0)
			return sub_14006C090(a1, a3 + 2, 1ui64);
	}
	return result;
}

