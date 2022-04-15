#include "../winhttp.h"

//----- (00000001400AE640) ----------------------------------------------------
__int64 __fastcall sub_1400AE640(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_1400A8B70(a1, a2, (_WORD*)a3);
	if ((int)result >= 0)
		return sub_14006C090(a1, (_DWORD*)(a3 + 8), 1ui64);
	return result;
}

