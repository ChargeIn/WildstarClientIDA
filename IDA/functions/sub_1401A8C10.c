#include "../winhttp.h"

//----- (00000001401A8C10) ----------------------------------------------------
char __fastcall sub_1401A8C10(__int64 a1, __int64 a2)
{
	__int64 v4; // rax

	if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 48i64))(a2))
		v4 = 0i64;
	else
		v4 = sub_1401A4F40(a2 + 24);
	sub_1401A88E0(a1, v4);
	return 1;
}

