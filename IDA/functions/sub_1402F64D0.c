#include "../winhttp.h"

//----- (00000001402F64D0) ----------------------------------------------------
void __fastcall sub_1402F64D0(_QWORD* a1, int a2)
{
	__int64 v2; // r9
	_QWORD* v3; // rdx
	__int64 v4; // rax
	_QWORD* v5; // rdx
	__int64 v6; // rdx

	if (!a1[152])
	{
		v2 = a1[43];
		if ((a2 == 0) != (v2 == 0))
		{
			if (a2)
			{
				v3 = (_QWORD*)(a1[2] + 144i64);
				if (!v2)
				{
					a1[43] = v3;
					a1[44] = *v3;
					*v3 = a1;
					v4 = a1[44];
					if (v4)
						*(_QWORD*)(v4 + 344) = a1 + 44;
				}
			}
			else
			{
				v5 = (_QWORD*)a1[43];
				if (v5)
					*v5 = a1[44];
				v6 = a1[44];
				if (v6)
					*(_QWORD*)(v6 + 344) = a1[43];
				a1[44] = 0i64;
				a1[43] = 0i64;
			}
		}
	}
}

