#include "../winhttp.h"

//----- (000000014013D830) ----------------------------------------------------
__m128* __fastcall sub_14013D830(__m128* a1, __m128* a2)
{
	__m128* result; // rax

	result = a2;
	*a2 = _mm_sub_ps(a1[6], a1[5]);
	return result;
}

