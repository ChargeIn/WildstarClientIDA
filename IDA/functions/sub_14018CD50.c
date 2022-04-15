#include "../winhttp.h"

//----- (000000014018CD50) ----------------------------------------------------
__int64 sub_14018CD50()
{
	LONGLONG v0; // rax
	__int64 result; // rax
	LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

	if ((dword_140C8E0C0 & 1) == 0)
	{
		dword_140C8E0C0 |= 1u;
		QueryPerformanceCounter(&PerformanceCount);
		qword_140C8E0C8 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	}
	QueryPerformanceCounter(&PerformanceCount);
	v0 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart - qword_140C8E0C8;
	qword_140C8E0C8 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	qword_140C8A1A0 += v0;
	if ((unsigned __int64)qword_140C8A1A0 > Frequency.QuadPart)
	{
		sub_14018CCF0();
		qword_140C8A1A0 = 0i64;
	}
	result = sub_14018CDF0();
	dword_140C636A8 = result;
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C8A1A0: using guessed type __int64 qword_140C8A1A0;
// 140C8E0C0: using guessed type int dword_140C8E0C0;
// 140C8E0C8: using guessed type __int64 qword_140C8E0C8;

