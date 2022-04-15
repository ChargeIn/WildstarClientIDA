#include "../winhttp.h"

//----- (000000014078E120) ----------------------------------------------------
__int64 __fastcall sub_14078E120(_QWORD* a1)
{
	__m128d v1; // xmm0
	int v3; // edx
	__int64 v4; // rcx
	__int64 result; // rax

	v1.m128d_f64[0] = sub_140056C40(a1, 1u);
	v3 = (int)v1.m128d_f64[0];
	if ((double)v3 != v1.m128d_f64[0])
		v1.m128d_f64[0] = (double)(v3 - (_mm_movemask_pd(_mm_unpacklo_pd(v1, v1)) & 1));
	v4 = a1[2];
	result = 1i64;
	*(_DWORD*)(v4 + 8) = 3;
	*(double*)v4 = v1.m128d_f64[0];
	a1[2] += 16i64;
	return result;
}
// 14078E148: conditional instruction was optimized away because rdx.8<100000000u
// 14078E158: variable 'v1' is possibly undefined

