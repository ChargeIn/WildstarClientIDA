#include "../winhttp.h"

//----- (0000000140264980) ----------------------------------------------------
__int64 __fastcall sub_140264980(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int* v3; // r9
	unsigned int v4; // ecx
	__int64 v5; // rdx
	unsigned int v7; // eax
	unsigned int v8; // ecx
	unsigned int v9; // ecx
	unsigned int v10; // edx

	v3 = (unsigned int*)(a3 + 40 * a1);
	v4 = *(_DWORD*)(a3 + 40 * a2);
	v5 = a3 + 40 * a2;
	if (*v3 < v4)
		return 0xFFFFFFFFi64;
	if (*v3 > v4)
		return 1i64;
	v7 = v3[1];
	v8 = *(_DWORD*)(v5 + 4);
	if (v7 < v8)
		return 0xFFFFFFFFi64;
	if (v7 > v8)
		return 1i64;
	v9 = v3[4];
	v10 = *(_DWORD*)(v5 + 16);
	if (v9 < v10)
		return 0xFFFFFFFFi64;
	return v9 > v10;
}

