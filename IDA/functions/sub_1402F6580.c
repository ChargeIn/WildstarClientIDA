#include "../winhttp.h"

//----- (00000001402F6580) ----------------------------------------------------
void __fastcall sub_1402F6580(_QWORD* a1, int a2)
{
	__int64 v2; // r9
	_QWORD* v3; // rdx
	__int64 v4; // rax
	_QWORD* v5; // rdx
	__int64 v6; // rdx

	if (!a1[152])
	{
		v2 = a1[45];
		if ((a2 == 0) != (v2 == 0))
		{
			if (a2)
			{
				v3 = (_QWORD*)(a1[2] + 200i64);
				if (!v2)
				{
					a1[45] = v3;
					a1[46] = *v3;
					*v3 = a1;
					v4 = a1[46];
					if (v4)
						*(_QWORD*)(v4 + 360) = a1 + 46;
				}
			}
			else
			{
				v5 = (_QWORD*)a1[45];
				if (v5)
					*v5 = a1[46];
				v6 = a1[46];
				if (v6)
					*(_QWORD*)(v6 + 360) = a1[45];
				a1[46] = 0i64;
				a1[45] = 0i64;
			}
		}
	}
}

