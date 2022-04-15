#include "../winhttp.h"

//----- (0000000140136D40) ----------------------------------------------------
__int64 __fastcall sub_140136D40(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	__int64 result; // rax
	LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

	v4 = a1 + 8i64 * (*(_DWORD*)(a1 + 2576) % 100);
	*(_QWORD*)(a1 + 2568) -= *(_QWORD*)(v4 + 1768);
	*(_QWORD*)(v4 + 1768) = a2;
	QueryPerformanceCounter(&PerformanceCount);
	*(_QWORD*)(a1 + 8i64 * (*(_DWORD*)(a1 + 2576) % 100) + 968) = PerformanceCount.QuadPart
		- ::PerformanceCount.QuadPart
		- a2;
	result = *(unsigned int*)(*(_QWORD*)(a1 + 8) + 48i64);
	*(_DWORD*)(a1 + 4i64 * (*(_DWORD*)(a1 + 2576) % 100) + 568) = result;
	*(_QWORD*)(a1 + 2568) += a2;
	++* (_DWORD*)(a1 + 2576);
	return result;
}

