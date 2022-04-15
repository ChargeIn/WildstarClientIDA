#include "../winhttp.h"

//----- (000000014019F830) ----------------------------------------------------
__int64 __fastcall sub_14019F830(__int64 a1)
{
	__int64 result; // rax

	if (!*(_DWORD*)(a1 + 64))
	{
		*(_DWORD*)(a1 + 64) = 2;
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 16i64))(*(_QWORD*)(a1 + 80));
	}
	return result;
}

