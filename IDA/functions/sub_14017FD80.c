#include "../winhttp.h"

//----- (000000014017FD80) ----------------------------------------------------
__int64 __fastcall sub_14017FD80(_QWORD* a1)
{
	__int64 v2; // rdi
	float v3; // xmm1_4

	v2 = sub_14017F690(a1);
	v3 = sub_140056C40(a1, 2u);
	*(float*)(v2 + 1040) = v3;
	sub_1401807E0(v2);
	return 0i64;
}

