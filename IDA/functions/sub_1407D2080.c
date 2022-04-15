#include "../winhttp.h"

//----- (00000001407D2080) ----------------------------------------------------
__int64 __fastcall sub_1407D2080(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax

	v2 = *(_QWORD*)(a1 + 240);
	if (v2)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 240) = 0i64;
	}
	if (*(_DWORD*)(a1 + 232))
	{
		result = sub_1400B6120(*(_QWORD*)(a1 + 24) + 1272i64, a1 + 144);
		*(_DWORD*)(a1 + 232) = 0;
	}
	return result;
}

