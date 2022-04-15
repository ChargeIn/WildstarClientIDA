#include "../winhttp.h"

//----- (000000014019AF70) ----------------------------------------------------
_QWORD* __fastcall sub_14019AF70(__int64 a1, _QWORD* a2, int a3)
{
	sub_14018EFA0(
		a2,
		(__int64)L"%g,%g,%g,%g",
		*(float*)(a1 + 16 * (a3 + 2i64)),
		*(float*)(a1 + 16 * (a3 + 2i64) + 4),
		*(float*)(a1 + 16 * (a3 + 2i64) + 8),
		*(float*)(a1 + 16 * (a3 + 2i64) + 12));
	return a2;
}
// 140A44148: using guessed type wchar_t aGGGG[12];

