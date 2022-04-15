#include "../winhttp.h"

//----- (000000014031A830) ----------------------------------------------------
__int64 __fastcall sub_14031A830(__int64 a1, __int64 a2)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 1080);
	if (v2)
		return (*(__int64(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v2 + 16i64))(v2, a2, 0i64);
	else
		return 1i64;
}

