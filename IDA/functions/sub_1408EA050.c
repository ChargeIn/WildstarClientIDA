#include "../winhttp.h"

//----- (00000001408EA050) ----------------------------------------------------
__int64 __fastcall sub_1408EA050(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rdx
	__int64 result; // rax

	v3 = a2 - a3;
	result = 1i64;
	*(_QWORD*)(a1 + 352) += v3;
	*(_QWORD*)(a1 + 360) += v3;
	return result;
}

