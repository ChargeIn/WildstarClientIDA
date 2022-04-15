#include "../winhttp.h"

//----- (000000014013D990) ----------------------------------------------------
__int64 __fastcall sub_14013D990(__int64 a1, int* a2)
{
	unsigned int v2; // eax
	__int64 v5; // rcx
	__int64 v6; // r8
	int v7; // edx

	v2 = *a2;
	*(_DWORD*)a1 = *a2;
	if ((unsigned __int64)v2 < *(_QWORD*)(qword_140C63678 + 48))
	{
		v5 = *(_QWORD*)(qword_140C63678 + 40);
		v6 = 32i64 * v2;
		v7 = *(_DWORD*)(v5 + v6 + 16);
		if ((unsigned int)(v7 - 1) <= 0xFFFFFFFD)
			*(_DWORD*)(v5 + v6 + 16) = v7 + 1;
	}
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	sub_14001C1B0((_QWORD*)(a1 + 8), *((int**)a2 + 2), *((_QWORD*)a2 + 3));
	*(_QWORD*)(a1 + 40) = *((_QWORD*)a2 + 5);
	*(_DWORD*)(a1 + 48) = a2[12];
	return a1;
}
// 140C63678: using guessed type __int64 qword_140C63678;

