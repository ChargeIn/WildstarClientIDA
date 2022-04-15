#include "../winhttp.h"

//----- (00000001407E1A38) ----------------------------------------------------
__int64 __fastcall sub_1407E1A38(__int64 a1, char** a2)
{
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_BYTE*)(a1 + 16) = 0;
	*(_QWORD*)a1 = &std::exception::`vftable';
		sub_1407E1B40(a1, *a2);
	return a1;
}
// 14095D598: using guessed type void *std::exception::`vftable';

