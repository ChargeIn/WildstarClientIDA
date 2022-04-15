#include "../winhttp.h"

//----- (000000014050CA60) ----------------------------------------------------
__int64 __fastcall sub_14050CA60(_QWORD* a1)
{
	int v1; // eax
	__int64 v2; // r10
	unsigned int v3; // ecx
	unsigned __int64 v4; // r8
	__int64 v5; // rdx

	v1 = sub_140056D60(a1, 1u);
	v2 = *(_QWORD*)(qword_140C65898 + 29544);
	v3 = 0;
	v4 = *(_QWORD*)(v2 + 16);
	if (v4)
	{
		v5 = 0i64;
		while (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 8 * v5) + 12i64) != v1)
		{
			v5 = ++v3;
			if (v3 >= v4)
				return 0i64;
		}
		*(_BYTE*)(v2 + 24) = 1;
		*(_QWORD*)v2 = v3;
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

