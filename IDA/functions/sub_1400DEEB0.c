#include "../winhttp.h"

//----- (00000001400DEEB0) ----------------------------------------------------
__int64 __fastcall sub_1400DEEB0(_QWORD* a1)
{
	__int64 v2; // rbp
	int v3; // edi
	int v4; // ebx
	int v5; // eax

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = sub_140056D60(a1, 2u);
		v4 = sub_140056D60(a1, 3u);
		v5 = sub_140056D60(a1, 4u);
		sub_1400CAF40(v2, v3, v4, v5);
	}
	return 0i64;
}

