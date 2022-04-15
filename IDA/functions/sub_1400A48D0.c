#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A48D0) ----------------------------------------------------
__int64 __fastcall sub_1400A48D0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
		return sub_14006BE30(a1, (_BYTE*)(a3 + 8), 8ui64);
	return result;
}

