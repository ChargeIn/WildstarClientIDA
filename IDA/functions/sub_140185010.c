#include "../winhttp.h"

//----- (0000000140185010) ----------------------------------------------------
__int64 __fastcall sub_140185010(_QWORD* a1)
{
	__int64 v1; // rax

	v1 = sub_140184D20(a1);
	if (v1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v1 + 576i64))(v1);
	return 0i64;
}

