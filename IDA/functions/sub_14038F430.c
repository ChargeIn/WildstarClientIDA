#include "../winhttp.h"

//----- (000000014038F430) ----------------------------------------------------
__int64 __fastcall sub_14038F430(float* a1, float a2)
{
	__int64 v2; // rax

	v2 = *(_QWORD*)a1;
	a1[73] = a2;
	return (*(__int64 (**)(void))(v2 + 48))();
}

