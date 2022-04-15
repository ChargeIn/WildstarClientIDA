#include "../winhttp.h"

//----- (0000000140789510) ----------------------------------------------------
_BOOL8 __fastcall sub_140789510(__int64 a1, __int64 a2)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 88);
	return v2 && (*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v2 + 24i64))(v2, a2, 0i64);
}

