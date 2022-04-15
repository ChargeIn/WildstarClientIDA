#include "../winhttp.h"

//----- (00000001401E82F0) ----------------------------------------------------
__int64 __fastcall sub_1401E82F0(__int64* a1, float a2)
{
	float v3; // xmm6_4
	unsigned __int64 v4; // rax
	float v5; // xmm2_4
	unsigned __int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rdx
	__int64 result; // rax
	struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp+8h] BYREF

	v3 = a2;
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v4 = 0i64;
	v5 = (float)(a2 - (float)(int)a2) * 8.6400002e11;
	if (v5 >= 9.223372e18)
	{
		v5 = v5 - 9.223372e18;
		if (v5 < 9.223372e18)
			v4 = 0x8000000000000000ui64;
	}
	v6 = v4 + (unsigned int)(int)v5;
	v7 = 0i64;
	if (a2 >= 9.223372e18)
	{
		v3 = a2 - 9.223372e18;
		if ((float)(a2 - 9.223372e18) < 9.223372e18)
			v7 = 0x8000000000000000ui64;
	}
	v8 = *(_QWORD*)&SystemTimeAsFileTime + v6 + 864000000000i64 * (v7 + (unsigned int)(int)v3);
	result = 0i64;
	*a1 = v8;
	return result;
}

