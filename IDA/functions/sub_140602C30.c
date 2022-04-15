#include "../winhttp.h"

//----- (0000000140602C30) ----------------------------------------------------
__int64 __fastcall sub_140602C30(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v5; // rcx

	v3 = *(_QWORD*)(a1 + 64);
	if (v3 && *(_QWORD*)(v3 + 72) == *(_QWORD*)a2)
	{
		sub_14079EB90(v3, *(_DWORD*)(a2 + 16));
		sub_1400A8020(*(_QWORD*)(qword_140C65898 + 29504) + 4536i64);
		return 0i64;
	}
	else
	{
		v5 = *(_QWORD*)(a1 + 72);
		if (v5)
		{
			if (*(_QWORD*)(v5 + 72) == *(_QWORD*)a2)
				sub_14079EB90(v5, *(_DWORD*)(a2 + 16));
		}
		return 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

