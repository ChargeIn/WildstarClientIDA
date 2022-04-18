#include "../winhttp.h"

//----- (0000000140727F60) ----------------------------------------------------
__int64 __fastcall sub_140727F60(__int64* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	v2 = a1[178];
	if (v2)
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v2 + 8i64))(v2, 1i64);
		a1[178] = 0i64;
	}
	sub_140727A70(a1);
	v3 = a1[178];
	if (!v3)
		return 1i64;
	Apollo_LUAEvent(v3, "ShowGachaUI", &unk_1409D158A);
	return 0i64;
}

