#include "../winhttp.h"

//----- (0000000140048880) ----------------------------------------------------
__int64 __fastcall sub_140048880(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // eax

	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
		v3 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2);
	else
		v3 = 0;
	return sub_1401DB470(*(_DWORD*)(a1 + 5096), 0, 7, v3, 0, 0i64);
}

