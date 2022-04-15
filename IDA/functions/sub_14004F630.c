#include "../winhttp.h"

//----- (000000014004F630) ----------------------------------------------------
unsigned int* __fastcall sub_14004F630(unsigned int* a1, unsigned int* a2)
{
	unsigned int v4; // eax
	__int64 v5; // rdx
	int v6; // ecx

	if (a1 != a2)
	{
		sub_1401429A0(qword_140C63678, *a1);
		v4 = *a2;
		*a1 = *a2;
		if ((unsigned __int64)v4 < *(_QWORD*)(qword_140C63678 + 48))
		{
			v5 = 32i64 * v4 + *(_QWORD*)(qword_140C63678 + 40);
			v6 = *(_DWORD*)(v5 + 16);
			if ((unsigned int)(v6 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v5 + 16) = v6 + 1;
		}
	}
	return a1;
}
// 140C63678: using guessed type __int64 qword_140C63678;

