#include "../winhttp.h"

//----- (00000001400F3010) ----------------------------------------------------
__int64 sub_1400F3010(__int64 a1, LARGE_INTEGER a2, int a3, __int64 a4, _BYTE* a5, ...)
{
	va_list va; // [rsp+68h] [rbp+30h] BYREF

	va_start(va, a5);
	return sub_1400F3040(a1, a2, a3, a4, a5, va);
}

