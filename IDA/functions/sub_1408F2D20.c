#include "../winhttp.h"

//----- (00000001408F2D20) ----------------------------------------------------
__int64 __fastcall sub_1408F2D20(__int64 a1)
{
	__int64 v1; // rdx
	float v2; // xmm0_4
	int v3; // eax
	float v4; // xmm1_4
	__int64 result; // rax
	float v6; // xmm1_4
	float v7; // xmm1_4

	v1 = *(_QWORD*)(a1 + 8);
	*(_DWORD*)(a1 + 56) = *(_DWORD*)(v1 + 120);
	v2 = *(float*)(v1 + 124);
	v3 = 214013 * *(_DWORD*)(a1 + 196) + 2531011;
	*(_DWORD*)(a1 + 196) = v3;
	v4 = (float)v3;
	result = *(_QWORD*)(a1 + 8);
	v6 = (float)((float)((float)(v4 * 2.3283064e-10) * 2.0) - 1.0) * v2;
	*(float*)(a1 + 64) = v6;
	v7 = v6 + *(float*)(result + 120);
	*(float*)(a1 + 60) = v7;
	if (v7 <= 0.1)
		v7 = 0.1;
	*(float*)(a1 + 60) = v7;
	*(_DWORD*)(result + 232) &= ~8u;
	return result;
}

