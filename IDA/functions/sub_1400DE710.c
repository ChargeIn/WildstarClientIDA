#include "../winhttp.h"

//----- (00000001400DE710) ----------------------------------------------------
__int64 __fastcall sub_1400DE710(_QWORD* a1)
{
	__int64 v2; // rdi
	float v3; // xmm1_4

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = sub_140056C40(a1, 2u);
		*(float*)(v2 + 616) = v3;
	}
	return 0i64;
}

