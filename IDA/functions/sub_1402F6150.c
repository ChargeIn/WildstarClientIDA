#include "../winhttp.h"

//----- (00000001402F6150) ----------------------------------------------------
__int64 __fastcall sub_1402F6150(__int64 a1, __m128* a2)
{
	__int64 result; // rax

	result = (unsigned int)_mm_movemask_ps(_mm_cmpneq_ps(*(__m128*)(a1 + 224), *a2));
	if ((_DWORD)result)
	{
		*(__m128*)(a1 + 224) = *a2;
		return sub_1402F5CE0(a1);
	}
	return result;
}

