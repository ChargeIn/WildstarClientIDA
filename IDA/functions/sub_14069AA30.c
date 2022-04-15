#include "../winhttp.h"

//----- (000000014069AA30) ----------------------------------------------------
__int64 __fastcall sub_14069AA30(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64* v5; // rdi
	__int64 v6; // rax
	__int64* v7; // rbx
	__int64 v8; // rsi

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = (__int64*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v5)
			{
				v6 = sub_140056AB0(a1, 2u);
				v7 = (__int64*)v6;
				if (v6)
				{
					if (*(_DWORD*)(v6 + 8) == 1)
					{
						v8 = qword_140C65898;
						if (!(unsigned int)sub_1403B5040(qword_140C65898) || abs64(*v7) <= *(_QWORD*)(v8 + 5744))
							sub_14057FB20(v5, *v7);
					}
				}
			}
		}
	}
	return 0i64;
}
// 14069AA60: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

