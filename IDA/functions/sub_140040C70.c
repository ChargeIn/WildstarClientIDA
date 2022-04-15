#include "../winhttp.h"

//----- (0000000140040C70) ----------------------------------------------------
__int64 __fastcall sub_140040C70(__int64 a1)
{
	__int64 v2; // rax
	__m128i v3; // xmm0
	struct _FILETIME FileTime; // [rsp+20h] [rbp-28h] BYREF
	struct _SYSTEMTIME SystemTime; // [rsp+28h] [rbp-20h] BYREF

	GetSystemTime(&SystemTime);
	SystemTimeToFileTime(&SystemTime, &FileTime);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = _mm_cvtsi32_si128(FileTime.dwLowDateTime);
	*(_DWORD*)(v2 + 8) = 3;
	*(_QWORD*)v2 = *(_OWORD*)&_mm_cvtepi32_pd(v3);
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

