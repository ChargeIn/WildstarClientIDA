#include "../winhttp.h"

//----- (00000001407F80F0) ----------------------------------------------------
__int64 __fastcall sub_1407F80F0(unsigned __int8* a1, unsigned __int8* a2, __int64 a3)
{
	int v4; // r9d
	int v5; // ecx

	if (!a3)
		return 0i64;
	do
	{
		v4 = *a1++;
		if ((unsigned int)(v4 - 65) <= 0x19)
			v4 += 32;
		v5 = *a2++;
		if ((unsigned int)(v5 - 65) <= 0x19)
			v5 += 32;
		--a3;
	} while (a3 && v4 && v4 == v5);
	return (unsigned int)(v4 - v5);
}

