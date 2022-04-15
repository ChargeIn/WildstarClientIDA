#include "../winhttp.h"

//----- (00000001409199A0) ----------------------------------------------------
__int64 __fastcall sub_1409199A0(__int64 a1, unsigned __int16* a2, int a3)
{
	__int64 v3; // rcx
	unsigned __int16 v4; // r9
	unsigned __int16 v5; // r10

	if (!a3)
		return 0i64;
	v3 = a1 - (_QWORD)a2;
	while (1)
	{
		v4 = *(unsigned __int16*)((char*)a2 + v3);
		v5 = *a2;
		--a3;
		++a2;
		if (v4 != v5)
			break;
		if (!a3)
			return 0i64;
	}
	return 2 * (unsigned int)(v4 > v5) - 1;
}

