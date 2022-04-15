#include "../winhttp.h"

//----- (00000001400D4070) ----------------------------------------------------
char sub_1400D4070(__int64 a1, unsigned int a2, char* a3, _BYTE* a4, ...)
{
	va_list va; // [rsp+60h] [rbp+28h] BYREF

	va_start(va, a4);
	return sub_1400D3C30(a1, a2, 0i64, a3, a4, (__int64)va);
}

