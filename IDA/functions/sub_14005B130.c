#include "../winhttp.h"

//----- (000000014005B130) ----------------------------------------------------
__int64 sub_14005B130(__int64 a1, unsigned __int64* a2, ...)
{
	va_list va; // [rsp+40h] [rbp+18h] BYREF

	va_start(va, a2);
	return sub_14005ADB0(a1, a2, (__int64)va);
}

