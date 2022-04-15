#include "../winhttp.h"

//----- (00000001407DD8B4) ----------------------------------------------------
__int64 sub_1407DD8B4(_BYTE* a1, unsigned __int64 a2, __int64 a3, ...)
{
	va_list va; // [rsp+58h] [rbp+20h] BYREF

	va_start(va, a3);
	return sub_1407E029C(a1, a2, a3, 0i64, (__int64)va);
}

