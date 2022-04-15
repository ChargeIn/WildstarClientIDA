#include "../winhttp.h"

//----- (00000001408296D0) ----------------------------------------------------
__int64 __fastcall sub_1408296D0(__int64* a1)
{
	unsigned int v1; // eax
	unsigned int v3; // ecx
	__int64 v4; // r9
	__int64 v6; // rax

	v1 = *((_DWORD*)a1 + 7);
	v3 = *((_DWORD*)a1 + 8);
	v4 = *a1;
	if (v3 < *(_DWORD*)(*a1 + 16i64 * v1 + 8))
		return *(_QWORD*)(v4 + 16i64 * v1) + v3;
	v6 = v1 + 1;
	*((_DWORD*)a1 + 8) = 0;
	if ((unsigned int)v6 >= (unsigned int)((a1[1] - v4) >> 4))
		v6 = 0i64;
	*((_DWORD*)a1 + 7) = v6;
	return *(_QWORD*)(v4 + 16 * v6);
}

