#include "../winhttp.h"

//----- (00000001406C0C10) ----------------------------------------------------
__int64 __fastcall sub_1406C0C10(_QWORD* a1)
{
	__int64 v2; // rbx
	int* v3; // rax
	__int64 v4; // rax

	v2 = sub_1406C01C0(a1);
	if (v2)
	{
		v3 = (int*)sub_1406622C0((__int64)a1, 2);
		if (v3)
		{
			v4 = sub_1403D90D0(qword_140C65898, *v3);
			if (v4)
				sub_1407744D0(v2 + 1024, *(_DWORD*)(v4 + 8));
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

