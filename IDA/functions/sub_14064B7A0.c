#include "../winhttp.h"

//----- (000000014064B7A0) ----------------------------------------------------
__int64 __fastcall sub_14064B7A0(__int64 a1)
{
	float v1; // xmm0_4
	__int64 v3; // rax
	float v5; // xmm6_4
	__int64 v6; // rax

	v3 = sub_1406499E0(a1);
	if (v3)
	{
		v5 = *(float*)(v3 + 2740);
		sub_140462AF0(v3);
		v6 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = (float)((float)(v1 - v5) * 100.0);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 14064B7EE: variable 'v1' is possibly undefined

