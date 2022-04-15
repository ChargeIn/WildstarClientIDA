#include "../winhttp.h"

//----- (000000014031E520) ----------------------------------------------------
__int64 __fastcall sub_14031E520(__int64 a1, __int64 a2, __m128* a3, int a4)
{
	int v4; // r10d
	int v8; // eax
	__int64 v9; // r8
	int v10; // r9d
	__int64 v11; // rdx
	int v12; // eax
	__m128* v13; // rdx
	int v14; // eax

	v4 = *(_DWORD*)(a1 + 1324);
	v8 = v4;
	if (!v4)
		v8 = *(_DWORD*)(a1 + 1312);
	v9 = *(_QWORD*)(a1 + 1304);
	v10 = *(_DWORD*)(a1 + 1316);
	v11 = (unsigned int)(v10 * (v8 - 1));
	v12 = v4 + 1;
	*(_DWORD*)(a1 + 1324) = v4 + 1;
	v13 = (__m128*)(v9 + v11);
	if (v4 + 1 == *(_DWORD*)(a1 + 1312))
		v12 = 0;
	*(_DWORD*)(a1 + 1324) = v12;
	v14 = *(_DWORD*)(a1 + 1328);
	if (v14 == *(_DWORD*)(a1 + 1312))
		*(_DWORD*)(a1 + 1320) = *(_DWORD*)(a1 + 1324);
	else
		*(_DWORD*)(a1 + 1328) = v14 + 1;
	return sub_14031E170(a1, v9 + (unsigned int)(v4 * v10), v13, a2, a3, a4, 1);
}

