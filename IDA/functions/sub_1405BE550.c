#include "../winhttp.h"

//----- (00000001405BE550) ----------------------------------------------------
__int64 __fastcall sub_1405BE550(__int64 a1, unsigned int a2)
{
	__int64 v2; // rax
	int v3; // ecx
	unsigned int* i; // rdx
	unsigned int v5; // eax

	v2 = sub_140244280(a2);
	if (!v2)
		return 0i64;
	v3 = 0;
	for (i = (unsigned int*)(v2 + 12); ; ++i)
	{
		v5 = *i;
		if (*i > 0xA && v5 != 14 && v5 < 0x11)
			break;
		if ((unsigned int)++v3 >= 5)
			return 0i64;
	}
	return 1i64;
}

