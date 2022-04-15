#include "../winhttp.h"

//----- (00000001401A6C20) ----------------------------------------------------
__int64 __fastcall sub_1401A6C20(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rbx

	v2 = *(_QWORD*)(a1 + 48);
	if (v2
		&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2)
		&& (v3 = *(_QWORD*)(a1 + 48), !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 48i64))(v3)))
	{
		return sub_1401A4F40(v3 + 24);
	}
	else
	{
		return 0i64;
	}
}

