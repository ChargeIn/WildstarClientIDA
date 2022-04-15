#include "../winhttp.h"

//----- (00000001408A64D0) ----------------------------------------------------
__int64 __fastcall sub_1408A64D0(__int64 a1, float a2, float a3, float a4, float a5)
{
	int v5; // edx
	float v6; // xmm0_4
	__int64 result; // rax

	v5 = *(_DWORD*)a1;
	*(float*)(a1 + 44) = a3;
	*(float*)(a1 + 40) = a2;
	*(float*)(a1 + 48) = a4;
	v6 = (float)v5 * a5;
	*(_DWORD*)(a1 + 4) = 4 * ((unsigned int)(int)v6 >> 2);
	if (((32 * ((unsigned int)(int)v6 >> 2) + 4111) & 0xFFFFFFF0) >= 0x19000)
		*(_DWORD*)(a1 + 4) = (int)(float)((float)(98304.0 / (float)((float)((float)v5 * 2.0) * 4.0)) * (float)v5) & 0xFFFFFFFC;
	result = *(unsigned int*)(a1 + 4);
	if ((unsigned int)result >= v5)
	{
		result = (unsigned int)(result - 4);
		*(_DWORD*)(a1 + 4) = result;
	}
	return result;
}

