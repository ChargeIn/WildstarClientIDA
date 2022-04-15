#include "../winhttp.h"

//----- (000000014088B720) ----------------------------------------------------
__int64 __fastcall sub_14088B720(__int64 a1, __int64 a2)
{
	_QWORD* i; // rbx
	__int64 result; // rax

	for (i = *(_QWORD**)(a1 + 48); i; i = (_QWORD*)i[1])
		result = (*(__int64(__fastcall**)(_QWORD*, __int64))(*i + 24i64))(i, a2);
	return result;
}

