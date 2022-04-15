#include "../winhttp.h"

//----- (00000001401CD180) ----------------------------------------------------
__int64 __fastcall sub_1401CD180(_WORD* a1)
{
	__int64 v2; // rdx
	unsigned int v3; // r8d
	_WORD* v4; // rax
	__int64 v5; // rcx
	_WORD* i; // rax

	v2 = 0i64;
	v3 = -201342849;
	v4 = a1 + 94;
	do
	{
		if ((v3 & 1) != 0 && *v4)
			return 0i64;
		++v2;
		v4 += 2;
		v3 >>= 1;
	} while (v2 <= 31);
	if (!a1[112] && !a1[114] && !a1[120])
	{
		v5 = 32i64;
		for (i = a1 + 158; !*i; i += 2)
		{
			if (++v5 >= 256)
				return 0i64;
		}
	}
	return 1i64;
}

