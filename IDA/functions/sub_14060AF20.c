#include "../winhttp.h"

//----- (000000014060AF20) ----------------------------------------------------
_BOOL8 __fastcall sub_14060AF20(__int64 a1)
{
	__int64 v1; // rax
	int v2; // ecx
	__int64 v3; // rax
	int v4; // ecx
	_BOOL8 result; // rax

	v1 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 8));
	result = 0;
	if (v1)
	{
		v2 = *(_DWORD*)(v1 + 128);
		if (v2 == 20)
			return 1;
		if (v2 == 23)
			return 1;
		v3 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v1 + 688));
		if (v3)
		{
			v4 = *(_DWORD*)(v3 + 128);
			if (v4 == 20 || v4 == 23)
				return 1;
		}
	}
	return result;
}
// 14060AF72: conditional instruction was optimized away because rax.8!=0
// 140C65898: using guessed type __int64 qword_140C65898;

