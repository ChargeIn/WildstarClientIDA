#include "../winhttp.h"

//----- (000000014071FC10) ----------------------------------------------------
__int64 __fastcall sub_14071FC10(__int64 a1)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 224);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 224) = 0i64;
	}
	return sub_14071A150(a1);
}

