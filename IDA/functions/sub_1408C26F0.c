#include "../winhttp.h"

//----- (00000001408C26F0) ----------------------------------------------------
__int64 __fastcall sub_1408C26F0(__int64 a1)
{
	__int64 i; // rbx

	if (*(_DWORD*)(a1 + 560))
	{
		sub_1408C36D0(a1 + 24);
		sub_1408AE720(a1 + 208);
	}
	for (i = 0i64; (unsigned int)i < *(_DWORD*)(a1 + 568); i = (unsigned int)(i + 1))
		sub_1408ADC70(a1 + 8 * ((unsigned int)i + 2 * i + 41));
	return 1i64;
}

