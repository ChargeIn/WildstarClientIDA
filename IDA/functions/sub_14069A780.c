#include "../winhttp.h"

//----- (000000014069A780) ----------------------------------------------------
__int64 __fastcall sub_14069A780(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64* v5; // rbx
	int v6; // esi
	__int64* v7; // rax
	__int64 v8; // r8

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
				v7 = (__int64*)sub_14069DFE0((__int64)a1, 3);
				if (v7)
					v8 = *v7;
				else
					v8 = 0i64;
				sub_14057FA20(v5, v6 - 1, v8);
			}
		}
	}
	return 0i64;
}
// 14069A7B0: variable 'v3' is possibly undefined

