#include "../winhttp.h"

//----- (00000001400EA3E0) ----------------------------------------------------
__int64 sub_1400EA3E0(__int64 a1, _BYTE* a2, _BYTE* a3, ...)
{
	va_list va; // [rsp+48h] [rbp+20h] BYREF

	va_start(va, a3);
	return sub_1400EA400(a1, a2, a3, (__int64)va);
}

