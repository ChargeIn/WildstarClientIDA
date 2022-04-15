#include "../winhttp.h"

//----- (0000000140829720) ----------------------------------------------------
__int64 __fastcall sub_140829720(__int64* a1, _DWORD* a2)
{
	__int64 v2; // r11
	unsigned int v3; // r9d
	__int64 v4; // r8
	unsigned int v5; // eax
	unsigned int v7; // r10d

	v2 = *a1;
	v3 = *((_DWORD*)a1 + 8);
	v4 = 2i64 * *((unsigned int*)a1 + 7);
	v5 = *(_DWORD*)(*a1 + 16i64 * *((unsigned int*)a1 + 7) + 8);
	if (v3 >= v5)
	{
		v7 = *((_DWORD*)a1 + 7) + 1;
		*((_DWORD*)a1 + 8) = 0;
		if (v7 >= (unsigned int)((a1[1] - v2) >> 4))
			v7 = 0;
		*((_DWORD*)a1 + 7) = v7;
		*a2 = *(_DWORD*)(v2 + 16i64 * v7 + 8);
		return *(_QWORD*)(v2 + 16i64 * v7);
	}
	else
	{
		*a2 = v5 - v3;
		return *(_QWORD*)(v2 + 8 * v4) + v3;
	}
}

