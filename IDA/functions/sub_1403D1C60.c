#include "../winhttp.h"

//----- (00000001403D1C60) ----------------------------------------------------
__int64 __fastcall sub_1403D1C60(__int64 a1, unsigned __int8* a2)
{
	if (*a2 >= 4u)
		return 2147500037i64;
	*(_QWORD*)(a1 + 16i64 * *a2 + 28280) = 0i64;
	sub_1403D33D0((__int64*)(a1 + 16 * (*a2 + 1767i64)), *((int**)a2 + 1), a2[1]);
	*(_QWORD*)(a1 + 28344) = 0i64;
	Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "CharacterEldanAugmentationsUpdated", &unk_1409D10E6);
	return 0i64;
}

