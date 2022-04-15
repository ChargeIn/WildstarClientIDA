#include "../winhttp.h"

//----- (00000001406993A0) ----------------------------------------------------
__int64 __fastcall sub_1406993A0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rdi
	int v7; // ebx
	int v8; // eax
	int v9; // edx
	int v10; // eax

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			v6 = v5;
			if (v5)
			{
				v7 = *(_DWORD*)(v5 + 16);
				v8 = sub_140056D60(a1, 2u);
				v9 = 200;
				v10 = v8 - 1;
				if (v7 == 1)
					v9 = 100;
				sub_14057EE50(v6, v10 + v9);
			}
		}
	}
	return 0i64;
}
// 1406993D0: variable 'v3' is possibly undefined

