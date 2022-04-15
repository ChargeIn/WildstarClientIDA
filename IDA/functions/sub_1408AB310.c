#include "../winhttp.h"

//----- (00000001408AB310) ----------------------------------------------------
__int64 __fastcall sub_1408AB310(__int64 a1)
{
	__int64 i; // rbx

	sub_1408AB980(a1);
	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a1 + 2456); i = (unsigned int)(i + 1))
		sub_1408ADC70(a1 + 8 * (i + 2 * (i + 134)));
	return 1i64;
}

