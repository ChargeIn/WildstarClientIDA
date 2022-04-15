#include "../winhttp.h"

//----- (0000000140332AE0) ----------------------------------------------------
unsigned __int64 __fastcall sub_140332AE0(LARGE_INTEGER a1, __int64 a2)
{
	LONGLONG v3; // r8
	unsigned __int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rax
	LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

	PerformanceCount = a1;
	QueryPerformanceCounter(&PerformanceCount);
	v3 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	result = (unsigned __int64)(1000 * (PerformanceCount.QuadPart - ::PerformanceCount.QuadPart - *(_QWORD*)(a2 + 424)))
		/ Frequency.QuadPart;
	if (result >= *(unsigned int*)(a2 + 420))
	{
		v5 = *(unsigned int*)(a2 + 752);
		v6 = *(_QWORD*)(a2 + 24);
		*(_QWORD*)(a2 + 424) = v3;
		*(_QWORD*)(a2 + 16 * v5 + 440) = *(_QWORD*)(v6 + 448);
		*(_QWORD*)(a2 + 16 * (*(unsigned int*)(a2 + 752) + 27i64)) = v3;
		*(_QWORD*)(a2 + 16i64 * *(unsigned int*)(a2 + 756) + 600) = *(_QWORD*)(*(_QWORD*)(a2 + 24) + 432i64);
		*(_QWORD*)(a2 + 16 * (*(unsigned int*)(a2 + 756) + 37i64)) = v3;
		LODWORD(v5) = *(_DWORD*)(a2 + 756) + 1;
		*(_DWORD*)(a2 + 752) = (*(_DWORD*)(a2 + 752) + 1) % 0xAu;
		result = 10 * ((unsigned int)v5 / 0xA);
		*(_DWORD*)(a2 + 756) = (unsigned int)v5 % 0xA;
	}
	return result;
}

