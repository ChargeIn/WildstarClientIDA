#include "../winhttp.h"

//----- (00000001403B49C0) ----------------------------------------------------
__int64 __fastcall sub_1403B49C0(__int64 a1)
{
	__int64 v1; // rcx

	v1 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 280i64);
	if (v1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 24i64))(v1);
	else
		return 0i64;
}

