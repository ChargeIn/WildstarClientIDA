#include "../winhttp.h"

//----- (000000014084F230) ----------------------------------------------------
__int64 __fastcall sub_14084F230(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 608i64))(a1);
	if (result)
		return sub_140855080(a1, result, 0.0, a3, a4);
	return result;
}

