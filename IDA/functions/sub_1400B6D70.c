#include "../winhttp.h"

//----- (00000001400B6D70) ----------------------------------------------------
__int64 __fastcall sub_1400B6D70(__int64 a1, __int64 a2, int a3)
{
	__int16* v5; // rax

	v5 = sub_14034BDD0(a1, a3);
	return (*(__int64(__fastcall**)(__int64, __int64, __int16*))(*(_QWORD*)a1 + 160i64))(a1, a2, v5);
}

