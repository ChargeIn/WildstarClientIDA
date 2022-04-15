#include "../winhttp.h"

//----- (000000014001C480) ----------------------------------------------------
__int64 __fastcall sub_14001C480(__int64 a1, int* a2, int* a3)
{
	int* v5; // rcx
	unsigned __int64 v6; // rbx
	unsigned __int64 v8; // r8
	unsigned __int64 v9; // rbx

	v5 = *(int**)(a1 + 8);
	v6 = ((char*)a3 - (char*)a2) >> 1;
	v8 = (__int64)(*(_QWORD*)(a1 + 16) - (_QWORD)v5) >> 1;
	if (v6 > v8)
	{
		sub_1407DB590(v5, a2, 2 * v8);
		sub_14001C310(
			(_QWORD*)a1,
			(int*)((char*)a2 + 2 * ((__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) >> 1)),
			a3);
	}
	else
	{
		v9 = 2 * v6;
		sub_1407DB590(v5, a2, v9);
		sub_14001C2B0(a1, (int*)(v9 + *(_QWORD*)(a1 + 8)), *(int**)(a1 + 16));
	}
	return a1;
}

