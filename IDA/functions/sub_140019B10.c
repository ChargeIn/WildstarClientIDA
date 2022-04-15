#include "../winhttp.h"

//----- (0000000140019B10) ----------------------------------------------------
__int64 __fastcall sub_140019B10(__int64* a1)
{
	unsigned __int64 i; // rbx
	__int64 result; // rax
	__int64 v4; // rcx

	for (i = 0i64; i < a1[1]; ++i)
	{
		result = *a1;
		v4 = *(_QWORD*)(*a1 + 8 * i);
		if (v4)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
	}
	if (*a1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
	return result;
}

