#include "../winhttp.h"

//----- (000000014085CF60) ----------------------------------------------------
double __fastcall sub_14085CF60(__int64* a1, unsigned int a2)
{
	__int64 v2; // rcx
	double result; // xmm0_8

	v2 = *a1;
	if (!v2)
	{
		if (a2 != 1)
			return 0.0;
		v2 = qword_140C62458;
		if (!qword_140C62458)
			return 0.0;
	}
	*(_QWORD*)&result = sub_14085A3F0(v2, a2, 4).m128_u64[0];
	return result;
}
// 140C62458: using guessed type __int64 qword_140C62458;

