#include "../winhttp.h"

//----- (00000001401E6B70) ----------------------------------------------------
__int64 __fastcall sub_1401E6B70(__int64 a1)
{
	__int64 v2; // rax
	int v3; // edx
	int v4; // eax
	__int64 v5; // r8

	v2 = sub_14020A3A0(*(_DWORD*)(*(_QWORD*)(a1 + 24) + 16i64));
	v3 = 1;
	if (v2)
		v4 = *(_DWORD*)(v2 + 32);
	else
		v4 = 1;
	if (v4 == 2)
	{
		v3 = 2;
	}
	else if ((unsigned int)(v4 - 3) <= 1)
	{
		v3 = 3;
	}
	v5 = (unsigned int)(*(_DWORD*)(a1 + 40) - 1);
	if ((unsigned int)v5 < 6)
		return sub_14020BD20(dword_140B60320[6 * (unsigned int)(v3 - 1) + v5]);
	else
		return 0i64;
}
// 140B60320: using guessed type _DWORD dword_140B60320[18];

