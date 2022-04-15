#include "../winhttp.h"

//----- (00000001401787A0) ----------------------------------------------------
__int64 __fastcall sub_1401787A0(_QWORD* a1)
{
	int v2; // ecx
	__int64 v3; // rax

	v2 = *(_DWORD*)(*(_QWORD*)(sub_140177AC0(a1) + 1040) + 1032i64);
	if (v2 == -1)
		return 0i64;
	v3 = a1[2];
	*(_DWORD*)(v3 + 8) = 3;
	*(double*)v3 = (double)v2;
	a1[2] += 16i64;
	return 1i64;
}

