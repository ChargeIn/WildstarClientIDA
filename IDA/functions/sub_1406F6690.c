#include "../winhttp.h"

//----- (00000001406F6690) ----------------------------------------------------
__int64 __fastcall sub_1406F6690(__int64 a1)
{
	__int64 v3; // rcx
	__int64 v4; // rax

	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v3 = *(_QWORD*)(qword_140C65898 + 7152);
		if (v3)
			LODWORD(v3) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3);
		v4 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v4 + 8) = 3;
		*(double*)v4 = (double)(int)v3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

