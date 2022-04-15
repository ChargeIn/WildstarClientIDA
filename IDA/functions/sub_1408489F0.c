#include "../winhttp.h"

//----- (00000001408489F0) ----------------------------------------------------
__int64 __fastcall sub_1408489F0(__int64 a1)
{
	unsigned int i; // ebx
	__int64 result; // rax

	for (i = 0; i < 4; ++i)
		result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 88i64))(a1, i);
	return result;
}

