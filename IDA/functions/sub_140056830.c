#include "../winhttp.h"

//----- (0000000140056830) ----------------------------------------------------
void __noreturn sub_140056830(_QWORD* a1, unsigned __int64* a2, ...)
{
	va_list va; // [rsp+50h] [rbp+18h] BYREF

	va_start(va, a2);
	sub_140056700(a1, 1);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	sub_14005ADB0((__int64)a1, a2, (__int64)va);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	sub_14005F210((__int64)a1, 2, ((__int64)(a1[2] - a1[3]) >> 4) - 1);
	a1[2] -= 16i64;
	sub_14005AB30((__int64)a1);
}

