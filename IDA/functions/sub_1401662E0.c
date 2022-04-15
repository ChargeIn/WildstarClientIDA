#include "../winhttp.h"

//----- (00000001401662E0) ----------------------------------------------------
__int64 __fastcall sub_1401662E0(_QWORD* a1)
{
	__int64 v2; // rsi
	int v3; // edi
	int v4; // eax
	int v5; // edi
	_DWORD* v6; // r8
	int v7; // ecx
	int v8; // edx

	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = sub_140056D60(a1, 3u);
	v5 = v3 - 1;
	if (v5 >= 0 && v5 < *(_DWORD*)(v2 + 1128))
	{
		v6 = *(_DWORD**)(*(_QWORD*)(v2 + 1136) + 8i64 * v5);
		v7 = v6[2];
		v8 = v6[3];
		if (v4 < v8)
			v8 = v4;
		if (v7 < v8)
			v7 = v8;
		v6[1] = v7;
		sub_14015F180(v2);
	}
	return 0i64;
}

