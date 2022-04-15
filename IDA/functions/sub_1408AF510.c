#include "../winhttp.h"

//----- (00000001408AF510) ----------------------------------------------------
__int64 __fastcall sub_1408AF510(_DWORD* a1, int* a2, unsigned int a3, int* a4)
{
	unsigned int v4; // ebx
	__int64 v8; // rcx
	__int64 v9; // rsi
	unsigned int v10; // edx
	__int64 result; // rax

	v4 = a3;
	if (a1[3] < a3)
		v4 = a1[3];
	if (!a2 || !v4)
		return 0i64;
	v8 = (unsigned int)a1[2];
	v9 = (unsigned int)(*a1 - v8);
	if (v4 < (unsigned int)v9)
		v9 = v4;
	sub_1407DB590(a2, &a4[v8], (unsigned int)(4 * v9));
	if (v4 != (_DWORD)v9)
		sub_1407DB590(&a2[v9], a4, 4 * (v4 - (unsigned int)v9));
	v10 = (v4 + a1[2]) % *a1;
	a1[3] -= v4;
	result = v4;
	a1[2] = v10;
	return result;
}

