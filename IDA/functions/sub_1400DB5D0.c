#include "../winhttp.h"

//----- (00000001400DB5D0) ----------------------------------------------------
__int64 __fastcall sub_1400DB5D0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rcx

	v1 = sub_1400D66A0(a1, 1u);
	if (v1)
	{
		v2 = *(_QWORD*)(v1 + 32);
		if (v2)
		{
			if (*(_QWORD*)(v2 + 2880) == v1)
				sub_1400E8BF0(v2);
		}
	}
	return 0i64;
}

