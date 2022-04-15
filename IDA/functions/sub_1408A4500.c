#include "../winhttp.h"

//----- (00000001408A4500) ----------------------------------------------------
__int64 __fastcall sub_1408A4500(__int64 a1)
{
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 16))
	{
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 16i64))(*(_QWORD*)(a1 + 32));
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	return result;
}

