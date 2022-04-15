#include "../winhttp.h"

//----- (0000000140054CC0) ----------------------------------------------------
__int64 __fastcall sub_140054CC0(__int64 a1)
{
	__int64 v1; // rcx

	v1 = *(_QWORD*)(a1 + 72);
	if (v1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 80i64))(v1);
	else
		return 1i64;
}

