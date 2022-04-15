#include "../winhttp.h"

//----- (000000014014EF80) ----------------------------------------------------
__int64 __fastcall sub_14014EF80(_QWORD* a1)
{
	_DWORD* v2; // r14
	int v3; // esi
	int v4; // edi
	int v5; // ebx
	int v6; // eax

	v2 = (_DWORD*)sub_14014EBC0((__int64)a1, 1);
	if (v2)
	{
		v3 = sub_140056D60(a1, 2u);
		v4 = sub_140056D60(a1, 3u);
		v5 = sub_140056D60(a1, 4u);
		v6 = sub_140056D60(a1, 5u);
		v2[16] = v3;
		v2[17] = v4;
		v2[18] = v5;
		v2[19] = v6;
	}
	return 0i64;
}

