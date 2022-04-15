#include "../winhttp.h"

//----- (000000014065CC80) ----------------------------------------------------
__int64 __fastcall sub_14065CC80(__int64 a1)
{
	int* v1; // rax
	__int64 v2; // rax

	v1 = (int*)sub_1406622C0(a1, 1);
	if (v1)
	{
		v2 = sub_1403D90D0(qword_140C65898, *v1);
		if (v2)
		{
			if (v2 == *(_QWORD*)(qword_140C65898 + 120))
				sub_140008410(qword_140C65898 + 29648);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

