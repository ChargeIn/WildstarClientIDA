#include "../winhttp.h"

//----- (0000000140116200) ----------------------------------------------------
char __fastcall sub_140116200(__int64 a1, __int64 a2)
{
	__int64 v2; // rbx

	v2 = a1 + 1048;
	if (a1 + 1048 != a2)
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v2 + 120i64))(a1 + 1048, 0i64);
		sub_1401A7460(v2, a2);
	}
	sub_1401411C0(a1 + 1024);
	return sub_140116010(a1);
}

