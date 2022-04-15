#include "../winhttp.h"

//----- (000000014086B390) ----------------------------------------------------
__int64 __fastcall sub_14086B390(__int64 a1, __int64 a2)
{
	unsigned int* v2; // rdi
	unsigned int v4; // ebp
	unsigned int* i; // rbx

	v2 = *(unsigned int**)a2;
	if (*(_QWORD*)a2 == *(_QWORD*)(a2 + 8))
		return 1i64;
	do
	{
		v4 = sub_140853B00(*v2);
		if (v4 != 1)
		{
			for (i = *(unsigned int**)a2; i != v2; ++i)
				sub_1408552B0(*i);
		}
		++v2;
	} while (v2 != *(unsigned int**)(a2 + 8));
	return v4;
}

