#include "../winhttp.h"

//----- (000000014064E250) ----------------------------------------------------
__int64 __fastcall sub_14064E250(__int64 a1)
{
	float* v2; // rax
	float* v3; // rdi
	float v4; // xmm0_4
	__int64 v5; // rax
	float v6; // xmm0_4

	v2 = (float*)sub_1406499E0(a1);
	v3 = v2;
	if (v2)
	{
		v4 = sub_140464240((__int64)v2, v2[453] + v2[425], v2[575] + v2[661]).m128_f32[0];
		v5 = *(_QWORD*)(a1 + 16);
		v6 = (float)(v4 - v3[661]) - v3[575];
		*(_DWORD*)(v5 + 8) = 3;
		*(double*)v5 = (float)(v6 * 100.0);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

