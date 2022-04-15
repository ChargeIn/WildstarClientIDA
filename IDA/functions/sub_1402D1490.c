#include "../winhttp.h"

//----- (00000001402D1490) ----------------------------------------------------
void __fastcall sub_1402D1490(__int64 a1, unsigned __int64 a2)
{
	int* v2; // rdi
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	int* v6; // rbx
	unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(int**)(a1 + 16);
	v4 = *(_QWORD*)(a1 + 8);
	v7 = 0i64;
	v5 = ((__int64)v2 - v4) >> 3;
	if (a2 >= v5)
	{
		sub_1402D16B0(a1, v2, a2 - v5, &v7);
	}
	else
	{
		v6 = (int*)(v4 + 8 * a2);
		sub_1407DB590(v6, v2, 0i64);
		*(_QWORD*)(a1 + 16) += -8 * (((char*)v2 - (char*)v6) >> 3);
	}
}

