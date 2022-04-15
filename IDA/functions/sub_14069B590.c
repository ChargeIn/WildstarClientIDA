#include "../winhttp.h"

//----- (000000014069B590) ----------------------------------------------------
__int64 __fastcall sub_14069B590(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64* v5; // rbx
	unsigned int v6; // eax

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
				if (v6)
					sub_14057FC00(v5, v6);
			}
		}
	}
	return 0i64;
}
// 14069B5C0: variable 'v3' is possibly undefined

