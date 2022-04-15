#include "../winhttp.h"

//----- (00000001406A9770) ----------------------------------------------------
__int64 __fastcall sub_1406A9770(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // ecx
	__int64 v4; // rax

	v2 = sub_1406A93C0(a1);
	if (v2)
		v3 = *(_DWORD*)(v2 + 272);
	else
		v3 = 0;
	v4 = a1[2];
	*(_DWORD*)(v4 + 8) = 3;
	*(double*)v4 = (double)v3;
	a1[2] += 16i64;
	return 1i64;
}

