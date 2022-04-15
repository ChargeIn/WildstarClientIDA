#include "../winhttp.h"

//----- (000000014085D440) ----------------------------------------------------
__int64 __fastcall sub_14085D440(__int64 a1)
{
	__int64 result; // rax
	__int64 v2; // rdx
	float i; // xmm0_4
	float v4; // xmm0_4

	result = *(_QWORD*)(a1 + 48);
	v2 = *(_QWORD*)(a1 + 56);
	for (i = 1.0; result != v2; result += 24i64)
		i = i * *(float*)(result + 16);
	v4 = (float)(i * *(float*)(a1 + 296)) * *(float*)(a1 + 300);
	if (v4 <= 0.0)
		v4 = 0.0;
	*(float*)(a1 + 204) = v4;
	*(float*)(a1 + 200) = *(float*)(a1 + 284) + *(float*)(a1 + 72);
	return result;
}

