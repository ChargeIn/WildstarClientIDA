#include "../winhttp.h"

//----- (0000000140435290) ----------------------------------------------------
__int64 __fastcall sub_140435290(__int64 a1)
{
	__int64 result; // rax

	if (!*(_DWORD*)(a1 + 80))
	{
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 32i64))(*(_QWORD*)(a1 + 88));
		if (!(_DWORD)result)
			return result;
		*(_DWORD*)(a1 + 80) = 1;
	}
	return 1i64;
}

