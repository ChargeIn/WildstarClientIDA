#include "../winhttp.h"

//----- (000000014001C520) ----------------------------------------------------
__int64 __fastcall sub_14001C520(unsigned int* a1)
{
	unsigned __int64 v3; // rcx
	unsigned __int64 v4; // rax
	LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

	if ((*a1 & 0x80000000) != 0)
		return 0xFFFFFFFFi64;
	QueryPerformanceCounter(&PerformanceCount);
	v3 = PerformanceCount.QuadPart - *((_QWORD*)a1 + 1) - ::PerformanceCount.QuadPart;
	v4 = qword_140C636B0 * *a1;
	if (v3 < v4)
		return (unsigned int)((v4 - v3) / qword_140C636B0) + 1;
	*a1 = 0;
	return 0i64;
}
// 140C636B0: using guessed type __int64 qword_140C636B0;

