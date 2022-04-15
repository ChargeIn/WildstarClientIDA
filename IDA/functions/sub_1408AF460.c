#include "../winhttp.h"

//----- (00000001408AF460) ----------------------------------------------------
__int64 __fastcall sub_1408AF460(int* a1, int* a2, unsigned int a3, int* a4)
{
	int v4; // edi
	unsigned int v5; // ebx
	__int64 v9; // rcx
	__int64 v10; // rdi
	unsigned int v11; // edx
	__int64 result; // rax

	v4 = *a1;
	v5 = a3;
	if (*a1 - a1[3] < a3)
		v5 = *a1 - a1[3];
	if (!a2 || !v5)
		return 0i64;
	v9 = (unsigned int)a1[1];
	v10 = (unsigned int)(v4 - v9);
	if (v5 < (unsigned int)v10)
		v10 = v5;
	if ((_DWORD)v10)
		sub_1407DB590(&a4[v9], a2, (unsigned int)(4 * v10));
	if (v5 != (_DWORD)v10)
		sub_1407DB590(a4, &a2[v10], 4 * (v5 - (unsigned int)v10));
	v11 = (v5 + a1[1]) % *a1;
	a1[3] += v5;
	result = v5;
	a1[1] = v11;
	return result;
}

