#include "../winhttp.h"

//----- (000000014002AC70) ----------------------------------------------------
__int64 __fastcall sub_14002AC70(__int64 a1)
{
	__int64 result; // rax

	if (!*(_DWORD*)(a1 + 72))
	{
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 32i64))(*(_QWORD*)(a1 + 80));
		if (!(_DWORD)result)
			return result;
		*(_DWORD*)(a1 + 72) = 1;
	}
	return 1i64;
}

