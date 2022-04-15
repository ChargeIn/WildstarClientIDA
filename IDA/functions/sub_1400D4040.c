#include "../winhttp.h"

//----- (00000001400D4040) ----------------------------------------------------
char sub_1400D4040(__int64 a1, char* a2, char* a3, _BYTE* a4, ...)
{
	va_list va; // [rsp+60h] [rbp+28h] BYREF

	va_start(va, a4);
	return sub_1400D3C30(a1, 0, a2, a3, a4, (__int64)va);
}

