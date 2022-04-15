#include "../winhttp.h"

//----- (00000001400F3F00) ----------------------------------------------------
unsigned __int64 __fastcall sub_1400F3F00(__int64 a1)
{
	int v2; // eax
	LONGLONG v3; // rdi
	float LowPart; // xmm1_4
	float v5; // xmm0_4
	unsigned __int64 v6; // rax
	unsigned __int64 v7; // rbx
	unsigned __int64 result; // rax
	LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

	QueryPerformanceCounter(&PerformanceCount);
	v2 = dword_140C3C7C0;
	v3 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
	if (*(_DWORD*)qword_140C63750 < dword_140C3C7C0)
		v2 = *(_DWORD*)qword_140C63750;
	LowPart = (float)(int)Frequency.LowPart;
	if (Frequency.QuadPart < 0)
		LowPart = LowPart + 1.8446744e19;
	v5 = (float)(flt_140C3C7D0[v2] * 0.000001) * LowPart;
	v6 = 0i64;
	if (v5 >= 9.223372e18)
	{
		v5 = v5 - 9.223372e18;
		if (v5 < 9.223372e18)
			v6 = 0x8000000000000000ui64;
	}
	v7 = v6 + (unsigned int)(int)v5;
	do
	{
		sub_140058F00(*(_QWORD*)(a1 + 16), 0, 0, *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64), 5);
		QueryPerformanceCounter(&PerformanceCount);
		result = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart - v3;
	} while (result < v7);
	return result;
}
// 140C3C7C0: using guessed type int dword_140C3C7C0;
// 140C3C7D0: using guessed type float flt_140C3C7D0[16];
// 140C63750: using guessed type __int64 qword_140C63750;

