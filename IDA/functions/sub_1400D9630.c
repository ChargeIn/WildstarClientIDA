#include "../winhttp.h"

//----- (00000001400D9630) ----------------------------------------------------
__int64 __fastcall sub_1400D9630(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx

	v1 = sub_1400D66A0(a1, 1u);
	if (v1)
	{
		v2 = *(_QWORD*)(v1 + 448);
		if (v2)
			sub_140151F90(v2);
	}
	return 0i64;
}

