#include "../winhttp.h"

//----- (00000001401A4C20) ----------------------------------------------------
__int64 sub_1401A4C20(_BYTE* a1, unsigned __int64 a2, __int64 a3, ...)
{
	va_list va; // [rsp+58h] [rbp+20h] BYREF

	va_start(va, a3);
	return sub_1407E0010(a1, a2, 0xFFFFFFFFFFFFFFFFui64, a3, (__int64)va);
}

