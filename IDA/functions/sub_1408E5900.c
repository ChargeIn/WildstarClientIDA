#include "../winhttp.h"

//----- (00000001408E5900) ----------------------------------------------------
__int64 __fastcall sub_1408E5900(__int64 a1)
{
	int v2; // edx
	unsigned int i; // r8d
	__int64 v4; // rdi
	__int64 v5; // rbx

	sub_1408E7420(a1 + 16);
	v2 = *(_DWORD*)(a1 + 464);
	for (i = 0; v2; v2 &= v2 - 1)
		++i;
	if (i)
	{
		v4 = i;
		v5 = a1 + 256;
		do
		{
			sub_1408ADC70(v5);
			v5 += 24i64;
			--v4;
		} while (v4);
	}
	sub_1408ADC70(a1 + 400);
	sub_1408ADC70(a1 + 424);
	return 1i64;
}

