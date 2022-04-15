#include "../winhttp.h"

//----- (00000001402D4AA0) ----------------------------------------------------
void __fastcall sub_1402D4AA0(__int64 a1, unsigned __int64 a2)
{
	int* v2; // rdi
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	int* v6; // rbx
	int v7; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(int**)(a1 + 16);
	v4 = *(_QWORD*)(a1 + 8);
	v7 = 0;
	v5 = ((__int64)v2 - v4) >> 2;
	if (a2 >= v5)
	{
		sub_1402D4D70(a1, v2, a2 - v5, &v7);
	}
	else
	{
		v6 = (int*)(v4 + 4 * a2);
		sub_1407DB590(v6, v2, 0i64);
		*(_QWORD*)(a1 + 16) += -4 * (v2 - v6);
	}
}

