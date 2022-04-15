#include "../winhttp.h"

//----- (000000014078E3F0) ----------------------------------------------------
__int64 __fastcall sub_14078E3F0(_QWORD* a1)
{
	double v2; // xmm0_8
	__int64 v3; // rdx
	__int64 result; // rax

	v2 = sub_140056C40(a1, 1u);
	v3 = a1[2];
	result = 1i64;
	*(_DWORD*)(v3 + 8) = 3;
	*(double*)v3 = v2 * 0.0174532925199433;
	a1[2] += 16i64;
	return result;
}

