#include "../winhttp.h"

//----- (00000001408544F0) ----------------------------------------------------
__int64 __fastcall sub_1408544F0(_QWORD* a1, __int64 a2, int a3, float a4, int a5, int a6)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 608i64))(a1);
	if (result)
		return sub_140854DF0(a1, result, 8, a4, a3, a5, a6);
	return result;
}

