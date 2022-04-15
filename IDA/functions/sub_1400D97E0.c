#include "../winhttp.h"

//----- (00000001400D97E0) ----------------------------------------------------
__int64 __fastcall sub_1400D97E0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	float v4; // xmm1_4

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = *(_QWORD*)(v2 + 448);
		if (v3)
		{
			v4 = sub_140056C40(a1, 2u);
			*(float*)(v3 + 36) = v4;
		}
	}
	return 0i64;
}

