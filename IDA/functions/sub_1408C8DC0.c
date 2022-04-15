#include "../winhttp.h"

//----- (00000001408C8DC0) ----------------------------------------------------
__int64 __fastcall sub_1408C8DC0(__int64 a1, __int64 a2)
{
	unsigned int v2; // eax

	v2 = (int)(float)((float)(*(float*)(*(_QWORD*)(a1 + 328) + 96i64) * 0.001) * (float)*(int*)(a1 + 292));
	if (v2)
		return sub_1408CAA70(a1 + 200, a2, v2);
	else
		return 1i64;
}

