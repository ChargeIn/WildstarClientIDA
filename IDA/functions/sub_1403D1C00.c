#include "../winhttp.h"

//----- (00000001403D1C00) ----------------------------------------------------
__int64 __fastcall sub_1403D1C00(__int64 a1, unsigned __int8* a2)
{
	int v2; // r8d
	int* v4; // rcx

	v2 = 54;
	if (*a2 < 0x36u)
		v2 = *a2;
	v4 = (int*)(a1 + 28148);
	*(v4 - 1) = v2;
	sub_1407DB590(v4, *((int**)a2 + 1), 2i64 * *a2);
	Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "CharacterUnlockedInlaidEldanAugmentation", &unk_1409D10E2);
	return 0i64;
}

