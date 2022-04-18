#include "../winhttp.h"

//----- (000000014078A8B0) ----------------------------------------------------
__int64 __fastcall sub_14078A8B0(__int64 a1)
{
	__int64 v1; // rcx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 24);
	if (!*(_DWORD*)(v1 + 1360))
		return Apollo_LUAEvent(*(_QWORD*)(v1 + 1424), "RuneTooltip", byte_1409FA10C, 1i64);
	return result;
}
// 1409FA10C: using guessed type _BYTE byte_1409FA10C[32];

