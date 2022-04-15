#include "../winhttp.h"

//----- (00000001404CCA40) ----------------------------------------------------
_BOOL8 __fastcall sub_1404CCA40(__int64 a1, int a2)
{
	__int64 v2; // rcx

	return a2 < 28 && (v2 = *(_QWORD*)(a1 + 8i64 * a2 + 40)) != 0 && (*(_BYTE*)(v2 + 16) & 8) != 0;
}

