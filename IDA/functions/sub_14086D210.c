#include "../winhttp.h"

//----- (000000014086D210) ----------------------------------------------------
__int64 __fastcall sub_14086D210(__int64 a1)
{
	__int64 v1; // rcx

	v1 = *(_QWORD*)(a1 + 192);
	if (v1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 24i64))(v1);
	else
		return 0i64;
}

