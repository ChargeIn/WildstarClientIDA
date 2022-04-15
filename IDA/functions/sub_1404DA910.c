#include "../winhttp.h"

//----- (00000001404DA910) ----------------------------------------------------
__int64 __fastcall sub_1404DA910(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v3; // rcx

	if (*(_QWORD*)(a1 + 120) && a2 < 0xC)
	{
		result = a2;
		v3 = *(_QWORD*)(a1 + 8i64 * a2 + 4424);
		if (v3)
			return (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 64i64))(v3, 2i64);
	}
	return result;
}

