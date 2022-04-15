#include "../winhttp.h"

//----- (000000014085EB50) ----------------------------------------------------
double __fastcall sub_14085EB50(__int64 a1)
{
	__int64 v1; // rbx
	double result; // xmm0_8

	v1 = *(_QWORD*)(a1 + 536);
	if (!v1)
		return 0.0;
	if ((*(_BYTE*)(v1 + 328) & 1) == 0)
		sub_14085C930(*(_QWORD*)(a1 + 536));
	*(_QWORD*)&result = *(unsigned int*)(v1 + 324);
	return result;
}

