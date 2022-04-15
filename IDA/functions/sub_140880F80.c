#include "../winhttp.h"

//----- (0000000140880F80) ----------------------------------------------------
__int64 __fastcall sub_140880F80(__int64 a1)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 88);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 88) = 0i64;
	}
	return sub_1408803D0(a1);
}

