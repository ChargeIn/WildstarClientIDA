#include "../winhttp.h"

//----- (000000014034C700) ----------------------------------------------------
_QWORD* sub_14034C700(_QWORD* a1, __int64 a2, ...)
{
	va_list va; // [rsp+40h] [rbp+18h] BYREF

	va_start(va, a2);
	sub_14034BE60((__int64)a1, a1, a2, (__int64)va);
	return a1;
}

