#include "../winhttp.h"

//----- (0000000140058780) ----------------------------------------------------
__int64 sub_140058780(__int64 a1, unsigned __int64* a2, ...)
{
	unsigned __int64* v4; // [rsp+38h] [rbp+10h]
	va_list va; // [rsp+40h] [rbp+18h] BYREF

	va_start(va, a2);
	v4 = a2;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
	{
		sub_14005E2C0(a1);
		a2 = v4;
	}
	return sub_14005ADB0(a1, a2, (__int64)va);
}

