#include "../winhttp.h"

//----- (00000001402F1D50) ----------------------------------------------------
float __fastcall sub_1402F1D50(__int64 a1, int a2)
{
	__int64 v2; // rax
	int v5; // ecx
	int v6; // edx

	v2 = *(_QWORD*)(a1 + 32);
	if (!v2)
		return 0.0;
	v5 = *(_DWORD*)(v2 + 12) - *(_DWORD*)(v2 + 8);
	if (!v5)
		return 0.0;
	v6 = *(_DWORD*)(a1 + 12) + (int)(float)((float)(a2 - *(_DWORD*)(a1 + 52)) * *(float*)(a1 + 8));
	if ((*(_BYTE*)(v2 + 2) & 1) != 0)
	{
		if (v6 < 0)
			return (float)(v5 + v6 % v5) / (float)v5;
		if (v6 > v5)
			return (float)(v6 % v5) / (float)v5;
	}
	else
	{
		if (v6 < 0)
			return (float)0 / (float)v5;
		if (v6 > v5)
			v6 = *(_DWORD*)(v2 + 12) - *(_DWORD*)(v2 + 8);
	}
	return (float)v6 / (float)v5;
}

