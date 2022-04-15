#include "../winhttp.h"

//----- (0000000140471E00) ----------------------------------------------------
__int64 __fastcall sub_140471E00(__int64 a1)
{
	__int64 result; // rax

	result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 3264) + 168i64))(
		*(_QWORD*)(a1 + 3264),
		2i64,
		2i64);
	if (*(_QWORD*)(a1 + 5864))
		result = sub_140471EF0(a1, 1, 0);
	*(_DWORD*)(a1 + 5312) = 1;
	return result;
}

