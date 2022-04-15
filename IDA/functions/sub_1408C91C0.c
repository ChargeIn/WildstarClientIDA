#include "../winhttp.h"

//----- (00000001408C91C0) ----------------------------------------------------
__int64 __fastcall sub_1408C91C0(_DWORD* a1, __int64 a2)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 200i64);
	if (result)
		return sub_1408C9010(result, a1);
	return result;
}

