#include "../winhttp.h"

//----- (00000001408F7730) ----------------------------------------------------
__int64 __fastcall sub_1408F7730(__int64 a1)
{
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 40))
	{
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 16i64))(*(_QWORD*)(a1 + 32));
		*(_QWORD*)(a1 + 40) = 0i64;
	}
	if (*(_QWORD*)(a1 + 48))
	{
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 16i64))(*(_QWORD*)(a1 + 32));
		*(_QWORD*)(a1 + 48) = 0i64;
	}
	return result;
}

