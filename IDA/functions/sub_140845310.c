#include "../winhttp.h"

//----- (0000000140845310) ----------------------------------------------------
__int64 __fastcall sub_140845310(__int64 a1, int a2, unsigned int* a3, char a4)
{
	struct _RTL_CRITICAL_SECTION* v4; // rbx
	_DWORD* v9; // rax
	_DWORD* v10; // rcx
	float* v11; // rdi
	int v12; // eax
	float v13; // xmm2_4
	float v14; // xmm6_4
	unsigned int v15; // esi
	unsigned int v16; // edi
	LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF

	v4 = (struct _RTL_CRITICAL_SECTION*)(a1 + 24);
	EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
	v9 = *(_DWORD**)a1;
	v10 = *(_DWORD**)(a1 + 8);
	if (*(_DWORD**)a1 == v10)
		goto LABEL_12;
	do
	{
		if (*v9 == a2)
			break;
		v9 += 10;
	} while (v9 != v10);
	if (v9 == v10 || (v11 = (float*)(v9 + 2), v9 == (_DWORD*)-8i64) || (v12 = v9[5], v12 == 1))
	{
	LABEL_12:
		*a3 = 0;
		v16 = 2;
	}
	else
	{
		v13 = 1.0 / (float)v12;
		v14 = (float)((float)*(int*)v11 * 1000.0) * v13;
		v15 = (int)(float)((float)((float)*((int*)v11 + 2) * 1000.0) * v13);
		if (a4)
		{
			QueryPerformanceCounter(&PerformanceCount);
			v14 = v14
				+ (float)((float)((float)(PerformanceCount.LowPart - *((_DWORD*)v11 + 4)) / *(float*)&dword_140C61FE8)
					* v11[1]);
		}
		v16 = 1;
		if ((int)v14 < v15)
			v15 = (int)v14;
		*a3 = v15;
	}
	LeaveCriticalSection(v4);
	return v16;
}
// 140C61FE8: using guessed type int dword_140C61FE8;

