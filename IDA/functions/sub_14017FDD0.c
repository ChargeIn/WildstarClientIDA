#include "../winhttp.h"

//----- (000000014017FDD0) ----------------------------------------------------
__int64 __fastcall sub_14017FDD0(_QWORD* a1)
{
	__int64 v2; // rdi
	int v3; // eax
	__int64* v4; // rdx

	v2 = sub_14017F690(a1);
	v3 = sub_140056D60(a1, 2u);
	v4 = *(__int64**)(v2 + 2136);
	*(_DWORD*)(v2 + 1036) = v3;
	sub_140180B70((_DWORD*)v2, v4);
	return 0i64;
}

