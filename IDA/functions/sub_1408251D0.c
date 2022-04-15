#include "../winhttp.h"

//----- (00000001408251D0) ----------------------------------------------------
__int64 __fastcall sub_1408251D0(_WORD* a1)
{
	__int64 v1; // rcx
	_WORD* v2; // rdi
	bool v3; // zf
	unsigned int i; // [rsp+0h] [rbp-18h]

	if (a1)
	{
		for (i = 0; ; ++i)
		{
			v1 = -1i64;
			v2 = a1;
			do
			{
				if (!v1)
					break;
				v3 = *v2++ == 0;
				--v1;
			} while (!v3);
			if (i >= (unsigned __int64)(-v1 - 2))
				break;
			if (a1[i] == 92 || a1[i] == 47)
				return 1i64;
		}
	}
	return 0i64;
}

