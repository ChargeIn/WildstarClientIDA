#include "../winhttp.h"

#include "../winhttp.h"

//----- (00000001400A76D0) ----------------------------------------------------
__m128 __fastcall sub_1400A76D0(unsigned __int64 a1)
{
	__int64 v2; // rbx
	__m128d v3; // xmm0
	struct _FILETIME SystemTimeAsFileTime; // [rsp+40h] [rbp+8h] BYREF

	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	if (*(_QWORD*)&SystemTimeAsFileTime >= a1)
	{
		return _mm_cvtpd_ps((__m128d)0i64);
	}
	else
	{
		v3 = 0i64;
		v2 = a1 - *(_QWORD*)&SystemTimeAsFileTime;
		v3.m128d_f64[0] = (double)(int)v2;
		if (v2 < 0)
			v3.m128d_f64[0] = v3.m128d_f64[0] + 1.844674407370955e19;
		v3.m128d_f64[0] = v3.m128d_f64[0] / (double)1640261632;
		return _mm_cvtpd_ps(v3);
	}
}

