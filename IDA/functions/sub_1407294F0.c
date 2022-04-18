#include "../winhttp.h"

//----- (00000001407294F0) ----------------------------------------------------
void __fastcall sub_1407294F0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	if (a1)
	{
		sub_1407898E0(*(_QWORD*)(a1 + 1368));
		v2 = *(_QWORD*)(a1 + 1424);
		*(_DWORD*)(a1 + 20) = 11;
		Apollo_LUAEvent(v2, "HideGachaUI", byte_1409D15F3);
		sub_14072B120(v3);
	}
}
// 14072952A: variable 'v3' is possibly undefined
// 1409D15F3: using guessed type _BYTE byte_1409D15F3[26];

