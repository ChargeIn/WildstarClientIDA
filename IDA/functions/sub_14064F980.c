#include "../winhttp.h"

//----- (000000014064F980) ----------------------------------------------------
__int64 __fastcall sub_14064F980(__int64 a1)
{
	__int64 v2; // rax
	float v4; // xmm6_4
	float v5; // xmm0_4
	__int64 v6; // rax

	v2 = sub_1406499E0(a1);
	if (v2)
	{
		v4 = *(float*)(v2 + 2796);
		v5 = sub_140466000(v2);
		v6 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = (float)((float)(v5 - v4) * 100.0);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}

