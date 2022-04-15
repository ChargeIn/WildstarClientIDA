#include "../winhttp.h"

//----- (000000014085EA60) ----------------------------------------------------
__m128 __fastcall sub_14085EA60(__int64 a1)
{
	__int64 v1; // rbx
	__int128 v2; // xmm6

	v1 = *(_QWORD*)(a1 + 536);
	v2 = *(unsigned int*)(a1 + 236);
	if (v1)
	{
		if ((*(_BYTE*)(v1 + 328) & 1) == 0)
			sub_14085C930(*(_QWORD*)(a1 + 536));
		*(float*)&v2 = *(float*)&v2 + *(float*)(v1 + 320);
	}
	return (__m128)v2;
}

