#include "../winhttp.h"

//----- (000000014087A480) ----------------------------------------------------
__int64 __fastcall sub_14087A480(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax

	result = 1i64;
	*(_QWORD*)(a1 + 88) += a2 - a3;
	return result;
}

