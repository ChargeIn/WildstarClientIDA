#include "../winhttp.h"

//----- (000000014069A910) ----------------------------------------------------
__int64 __fastcall sub_14069A910(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64* v5; // rbx
	int v6; // eax

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = (__int64*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v5)
			{
				v6 = sub_140056D60(a1, 2u);
				sub_14057FAA0(v5, v6 - 1, 0x7FFFFFFFFFFFFFFFi64);
			}
		}
	}
	return 0i64;
}
// 14069A940: variable 'v3' is possibly undefined

