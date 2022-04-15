#include "../winhttp.h"

//----- (000000014077C1E0) ----------------------------------------------------
float __fastcall sub_14077C1E0(__int64 a1)
{
	float result; // xmm0_4
	int v2; // edx

	result = 0.0;
	v2 = *(_DWORD*)(*(_QWORD*)(a1 + 144) + 8i64);
	if (v2)
		return (float)*(int*)(a1 + 208) / (float)v2;
	return result;
}

