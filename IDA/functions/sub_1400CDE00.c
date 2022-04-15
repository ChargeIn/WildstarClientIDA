#include "../winhttp.h"

//----- (00000001400CDE00) ----------------------------------------------------
char sub_1400CDE00(char* a1, _BYTE* a2, ...)
{
	va_list va; // [rsp+50h] [rbp+18h] BYREF

	va_start(va, a2);
	return sub_1400D3C30((__int64)a1, 0x38u, 0i64, a1, a2, (__int64)va);
}

