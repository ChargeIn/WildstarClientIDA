#include "../winhttp.h"

//----- (00000001406ACFD0) ----------------------------------------------------
__int64 __fastcall sub_1406ACFD0(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned int v2; // eax

	v1 = sub_1406A93C0(a1);
	if (v1)
	{
		v2 = sub_1400F26A0(*(_QWORD*)(qword_140C65898 + 29504) + 384i64, 2);
		if (v2 < 5)
			sub_1405AD310(v1, v2);
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

