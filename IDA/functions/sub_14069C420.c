#include "../winhttp.h"

//----- (000000014069C420) ----------------------------------------------------
__int64 __fastcall sub_14069C420(_QWORD* a1)
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
				v6 = sub_140056D60(a1, 2u) - 1;
				if (v6 >= 0)
				{
					if (v6 > 20)
						v6 = 20;
				}
				else
				{
					v6 = 0;
				}
				sub_14057F020(v5, 100000, v6);
			}
		}
	}
	return 0i64;
}
// 14069C450: variable 'v3' is possibly undefined

