#include "../winhttp.h"

//----- (00000001401677A0) ----------------------------------------------------
__int64 __fastcall sub_1401677A0(_QWORD* a1)
{
	_QWORD* v1; // rbx
	__int64 v2; // rsi
	int v3; // edi

	v1 = a1;
	v2 = sub_1401657E0(a1);
	v3 = sub_140056D60(v1, 2u);
	LODWORD(v1) = sub_140056D60(v1, 3u);
	sub_140160280(v2, v3 - 1);
	sub_1401603F0(v2, (_DWORD)v1 - 1);
	return 0i64;
}

