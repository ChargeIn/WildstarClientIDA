#include "../winhttp.h"

//----- (0000000140536A00) ----------------------------------------------------
__int64 __fastcall sub_140536A00(_QWORD* a1)
{
	__int64 v2; // rdi

	v2 = sub_14052E9B0(a1);
	if (v2)
		*(_OWORD*)(v2 + 1136) = *(_OWORD*)sub_140056AB0(a1, 2u);
	return 0i64;
}

