#include "../winhttp.h"

//----- (00000001401493D0) ----------------------------------------------------
__int64 __fastcall sub_1401493D0(_QWORD* a1)
{
	float* v2; // rax
	__int64 v3; // rdx
	float v4; // xmm1_4
	float v5; // xmm0_4
	__int64 result; // rax

	v2 = (float*)sub_140056AB0(a1, 1u);
	v3 = a1[2];
	v4 = v2[5] - v2[1];
	v5 = v2[4] - *v2;
	*(_DWORD*)(v3 + 8) = 3;
	result = 1i64;
	*(double*)v3 = (float)(v4 * v5);
	a1[2] += 16i64;
	return result;
}

