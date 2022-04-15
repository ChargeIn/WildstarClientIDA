#include "../winhttp.h"

//----- (00000001408D2890) ----------------------------------------------------
__int64 __fastcall sub_1408D2890(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 8i64))(a1, 424i64);
	if (result)
		return sub_1408D1810(result);
	return result;
}

