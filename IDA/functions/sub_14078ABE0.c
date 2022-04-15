#include "../winhttp.h"

//----- (000000014078ABE0) ----------------------------------------------------
_BOOL8 __fastcall sub_14078ABE0(__int64 a1, __int64 a2)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 96);
	return v2 && (*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v2 + 24i64))(v2, a2, 0i64);
}

