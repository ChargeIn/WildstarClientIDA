#include "../winhttp.h"

//----- (00000001406DF7E0) ----------------------------------------------------
__int64 __fastcall sub_1406DF7E0(__int64 a1, float* a2, float* a3)
{
	int v6; // eax
	__int64 v7; // rdx
	__int64 v8; // r8
	int v9; // ecx
	int v10; // eax

	*(_QWORD*)a1 = a2;
	*(_QWORD*)(a1 + 8) = a3;
	*(float*)(a1 + 16) = sub_1408FD190(a3[5] - a2[5], a3[4] - a2[4]);
	if (*((_DWORD*)a2 + 16) <= 1u || (v6 = 1, *((_DWORD*)a3 + 16) <= 1u))
		v6 = 0;
	*(_DWORD*)(a1 + 24) = v6;
	*(_QWORD*)(a1 + 28) = 0i64;
	*(_DWORD*)(a1 + 36) = 0;
	v7 = **(_QWORD**)a3;
	v8 = **(_QWORD**)a2;
	v9 = *(_DWORD*)(v7 + 4);
	v10 = *(_DWORD*)(v8 + 4);
	if (v10 > v9 || v10 == v9 && *(_DWORD*)(v8 + 8) > *(_DWORD*)(v7 + 8))
	{
		*(_QWORD*)a1 = a3;
		*(_QWORD*)(a1 + 8) = a2;
		*(float*)(a1 + 16) = sub_1408FD190(a2[5] - a3[5], a2[4] - a3[4]);
	}
	return a1;
}

