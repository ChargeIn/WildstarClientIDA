#include "../winhttp.h"

//----- (00000001407A00F0) ----------------------------------------------------
__int64 __fastcall sub_1407A00F0(_DWORD* a1)
{
	int v1; // r8d
	int v2; // edx
	int v3; // r9d
	int v4; // r10d
	float v5; // xmm2_4
	__int64 result; // rax
	float v7; // xmm1_4

	v1 = dword_140C636A8;
	v2 = a1[3];
	v3 = a1[4];
	v4 = dword_140C636A8 - a1[5];
	v5 = (float)v4 * 0.001;
	if (v2 < v3 || v4 < 0 || (result = (unsigned int)(v2 - v3), (float)((float)(v2 - v3) / (float)v2) < v5))
	{
		a1[4] = v2;
		a1[5] = v1;
	}
	else
	{
		v7 = (float)v2 * v5;
		if (v7 >= 9.223372e18)
			v7 = v7 - 9.223372e18;
		a1[5] = dword_140C636A8;
		result = (unsigned int)(v3 + (int)v7);
		a1[4] = result;
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;

