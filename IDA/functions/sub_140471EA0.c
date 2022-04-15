#include "../winhttp.h"

//----- (0000000140471EA0) ----------------------------------------------------
__int64 __fastcall sub_140471EA0(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
		*(_QWORD*)(a1 + 3264),
		0i64,
		2i64);
	if (*(_QWORD*)(a1 + 5864))
		return sub_140471EF0(a1, 0, 0);
	return result;
}

