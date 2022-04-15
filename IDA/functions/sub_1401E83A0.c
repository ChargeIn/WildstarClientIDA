#include "../winhttp.h"

//----- (00000001401E83A0) ----------------------------------------------------
__int64 __fastcall sub_1401E83A0(float* a1, unsigned __int64 a2)
{
	float v4; // xmm2_4
	unsigned __int64 v5; // rax
	signed __int64 v6; // rax
	unsigned __int64 v7; // rtt
	double v8; // xmm0_8
	float v9; // xmm1_4
	float v10; // xmm0_4
	__int64 result; // rax
	struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	if (*(_QWORD*)&SystemTimeAsFileTime <= a2)
		v4 = 1.0;
	else
		v4 = -1.0;
	if (*(_QWORD*)&SystemTimeAsFileTime <= a2)
		v5 = a2 - *(_QWORD*)&SystemTimeAsFileTime;
	else
		v5 = *(_QWORD*)&SystemTimeAsFileTime - a2;
	v7 = v5;
	v6 = v5 / 0xC92A69C000i64;
	v8 = (double)(int)(v7 % 0xC92A69C000i64);
	if (((v7 % 0xC92A69C000i64) & 0x8000000000000000ui64) != 0i64)
		v8 = v8 + 1.844674407370955e19;
	v9 = (float)(int)v6;
	v10 = v8 * 1.157407407407407e-12;
	if (v6 < 0)
		v9 = v9 + 1.8446744e19;
	result = 0i64;
	*a1 = (float)(v10 + v9) * v4;
	return result;
}

