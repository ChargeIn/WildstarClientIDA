#include "../winhttp.h"

//----- (00000001408D41D0) ----------------------------------------------------
void __fastcall sub_1408D41D0(__int64 a1, __int64 a2, char a3)
{
	__int64 v3; // xmm6_8
	unsigned int i; // ebx

	v3 = 0x3FF0000000000000i64;
	if (!a3)
		v3 = sub_1408FFA00(10.0, -2.4);
	for (i = 0; i < *(_DWORD*)(a1 + 4); ++i)
		sub_1408D8CA0(a1, *(double*)&v3, *(_QWORD*)(a1 + 8) + 1176i64 * i, 2);
}

