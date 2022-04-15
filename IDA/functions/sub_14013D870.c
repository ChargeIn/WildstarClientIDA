#include "../winhttp.h"

//----- (000000014013D870) ----------------------------------------------------
__int64 __fastcall sub_14013D870(__int64 a1)
{
	__int64 v1; // rcx

	v1 = *(_QWORD*)(a1 + 40);
	if (v1)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v1 + 72i64))(v1);
	else
		return 0i64;
}

