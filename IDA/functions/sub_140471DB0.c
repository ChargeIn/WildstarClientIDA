#include "../winhttp.h"

//----- (0000000140471DB0) ----------------------------------------------------
__int64 __fastcall sub_140471DB0(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
		*(_QWORD*)(a1 + 3264),
		1i64,
		1i64);
	if (*(_QWORD*)(a1 + 5864))
		return sub_140471EF0(a1, 1, 1);
	return result;
}

