#include "../winhttp.h"

//----- (00000001403335C0) ----------------------------------------------------
__int64 __fastcall sub_1403335C0(__int64 a1, unsigned __int16 a2)
{
	__int64 v2; // rax

	if ((unsigned __int64)a2 < *(_QWORD*)(a1 + 176) && (v2 = *(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64 * a2)) != 0)
		return *(_QWORD*)(*(_QWORD*)(v2 + 24) + 448i64);
	else
		return 0i64;
}

