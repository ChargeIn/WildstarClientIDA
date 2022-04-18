#include "../winhttp.h"

//----- (0000000140789BE0) ----------------------------------------------------
__int64 __fastcall sub_140789BE0(__int64 a1)
{
	__int64 v1; // rcx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 24);
	if (*(_DWORD*)(v1 + 1360))
		return Apollo_LUAEvent(*(_QWORD*)(v1 + 1424), "ShinyTooltip", byte_1409F9FAC, 0i64);
	return result;
}
// 1409F9FAC: using guessed type _BYTE byte_1409F9FAC[96];

