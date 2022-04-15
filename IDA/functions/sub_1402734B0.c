#include "../winhttp.h"

//----- (00000001402734B0) ----------------------------------------------------
__int64 __fastcall sub_1402734B0(__int64 a1)
{
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 10424))
	{
		result = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 6608) + 376i64))(
			*(_QWORD*)(a1 + 6608),
			a1 + 10400);
		*(_DWORD*)(a1 + 10424) = 0;
	}
	return result;
}

