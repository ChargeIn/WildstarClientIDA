#include "../winhttp.h"

//----- (000000014085FB30) ----------------------------------------------------
__int64 __fastcall sub_14085FB30(_BYTE* a1, int a2, int a3)
{
	int v3; // edx
	int v5; // edx
	int v6; // edx
	__int64 v7; // rax
	__int64 result; // rax

	v3 = a2 - 1;
	if (v3)
	{
		v5 = v3 - 1;
		if (v5)
		{
			v6 = v5 - 1;
			if (v6)
			{
				if (v6 == 1 && a3 == 1)
				{
					a1[381] &= ~1u;
					a1[381] |= 8u;
				}
			}
			else
			{
				v7 = *(_QWORD*)a1;
				a1[381] |= 1u;
				(*(void (**)(void))(v7 + 88))();
				return (*(__int64(__fastcall**)(_BYTE*))(*(_QWORD*)a1 + 32i64))(a1);
			}
		}
	}
	return result;
}

