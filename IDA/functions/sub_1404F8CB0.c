#include "../winhttp.h"

//----- (00000001404F8CB0) ----------------------------------------------------
__int64 __fastcall sub_1404F8CB0(_QWORD* a1)
{
	__int64 v2; // rdi
	float v3; // xmm1_4

	v2 = sub_1404F87C0(a1, 1u);
	v3 = sub_140056C40(a1, 2u);
	*(float*)(v2 + 1060) = v3;
	sub_1404FFDD0(v2);
	return 0i64;
}

