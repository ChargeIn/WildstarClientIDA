#include "../winhttp.h"

//----- (00000001400CDDE0) ----------------------------------------------------
__int64 __fastcall sub_1400CDDE0(__int64 a1)
{
	__int64 v1; // rcx

	v1 = *(_QWORD*)(a1 + 688);
	if (v1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 64i64))(v1);
	else
		return 0i64;
}

