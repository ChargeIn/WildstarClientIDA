#include "../winhttp.h"

//----- (000000014078DE80) ----------------------------------------------------
__int64 __fastcall sub_14078DE80(_QWORD* a1)
{
	double v2; // xmm0_8
	double v3; // xmm0_8
	__int64 v4; // rdx
	__int64 result; // rax

	v2 = sub_140056C40(a1, 1u);
	v3 = sub_1408FE750(v2);
	v4 = a1[2];
	result = 1i64;
	*(_DWORD*)(v4 + 8) = 3;
	*(double*)v4 = v3;
	a1[2] += 16i64;
	return result;
}

