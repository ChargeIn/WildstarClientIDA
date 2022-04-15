#include "../winhttp.h"

//----- (0000000140176980) ----------------------------------------------------
__int64 __fastcall sub_140176980(_QWORD* a1)
{
	__int64 v2; // rdi
	unsigned int v3; // xmm1_4

	v2 = sub_1401768E0(a1);
	*(float*)&v3 = sub_140056C40(a1, 2u);
	sub_140174900(v2, COERCE_DOUBLE((unsigned __int64)v3));
	return 0i64;
}

