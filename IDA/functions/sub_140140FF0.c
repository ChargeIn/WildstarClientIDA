#include "../winhttp.h"

//----- (0000000140140FF0) ----------------------------------------------------
__int64 __fastcall sub_140140FF0(__int64 a1, int* a2)
{
	unsigned int v4; // eax
	__int64 v5; // rdx
	int v6; // ecx

	if ((int*)a1 != a2)
	{
		sub_1401429A0(qword_140C63678, *(_DWORD*)a1);
		v4 = *a2;
		*(_DWORD*)a1 = *a2;
		if ((unsigned __int64)v4 < *(_QWORD*)(qword_140C63678 + 48))
		{
			v5 = 32i64 * v4 + *(_QWORD*)(qword_140C63678 + 40);
			v6 = *(_DWORD*)(v5 + 16);
			if ((unsigned int)(v6 - 1) <= 0xFFFFFFFD)
				*(_DWORD*)(v5 + 16) = v6 + 1;
		}
	}
	if (a2 + 2 != (int*)(a1 + 8))
		sub_14001C480(a1 + 8, *((int**)a2 + 2), *((int**)a2 + 3));
	*(_QWORD*)(a1 + 40) = *((_QWORD*)a2 + 5);
	*(_DWORD*)(a1 + 48) = a2[12];
	return a1;
}
// 140C63678: using guessed type __int64 qword_140C63678;

