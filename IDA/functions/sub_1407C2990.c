#include "../winhttp.h"

//----- (00000001407C2990) ----------------------------------------------------
void __fastcall sub_1407C2990(__int64** a1, __int64* a2, int a3)
{
	__int64* v4; // rcx
	int v7; // r8d

	v4 = *a1;
	if (v4 != a2)
	{
		if (v4)
			sub_1407C2B30(v4, (__int64)a1[2], *((_DWORD*)a1 + 2), 9);
		*a1 = a2;
		if (a2)
			a1[2] = (__int64*)sub_1407C2A20(a2);
		*((_DWORD*)a1 + 2) = 9;
	}
	v7 = *((_DWORD*)a1 + 2);
	if (v7 != a3)
	{
		if (*a1)
			sub_1407C2B30(*a1, (__int64)a1[2], v7, a3);
		*((_DWORD*)a1 + 2) = a3;
	}
}

