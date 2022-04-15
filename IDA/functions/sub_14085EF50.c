#include "../winhttp.h"

//----- (000000014085EF50) ----------------------------------------------------
char __fastcall sub_14085EF50(__int64 a1)
{
	__int64 v1; // rdx
	_DWORD* i; // rcx

	if (!*(_BYTE*)(a1 + 280))
	{
		v1 = 0i64;
		for (i = (_DWORD*)(a1 + 260); !*i; ++i)
		{
			if (++v1 >= 4)
				return 0;
		}
	}
	return 1;
}

