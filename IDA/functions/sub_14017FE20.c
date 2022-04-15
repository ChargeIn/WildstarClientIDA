#include "../winhttp.h"

//----- (000000014017FE20) ----------------------------------------------------
__int64 __fastcall sub_14017FE20(_QWORD* a1)
{
	__int64 v2; // rdi
	double v3; // xmm0_8
	__int64* v4; // rdx
	float v5; // xmm1_4

	v2 = sub_14017F690(a1);
	v3 = sub_140056C40(a1, 2u);
	v4 = *(__int64**)(v2 + 2136);
	v5 = v3;
	*(float*)(v2 + 1044) = v5;
	sub_140180B70((_DWORD*)v2, v4);
	return 0i64;
}

