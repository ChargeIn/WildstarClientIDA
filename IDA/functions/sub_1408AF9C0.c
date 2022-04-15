#include "../winhttp.h"

//----- (00000001408AF9C0) ----------------------------------------------------
__int64 __fastcall sub_1408AF9C0(unsigned int* a1, int* a2, unsigned int a3, char a4, int* a5)
{
	unsigned int v5; // edi
	unsigned int v8; // ecx
	unsigned int v9; // edx
	unsigned int v10; // eax
	unsigned int v11; // edx
	unsigned int v12; // edx
	unsigned int v13; // eax
	__int64 v14; // rcx
	__int64 v15; // rbp
	unsigned __int64 v16; // rbx
	__int64 result; // rax

	v5 = a3;
	if (!a2 || !a3)
		return 0i64;
	if (!a4 || a1[3])
	{
		v13 = a1[3];
		if (v13 < a3)
			v5 = a1[3];
		a1[3] = v13 - v5;
	}
	else
	{
		v8 = *a1;
		v9 = (a1[1] + a1[6]) % v8;
		v10 = a1[2];
		if (v9 <= v10)
		{
			v12 = v8 + v10 - v9;
			if (v12 < a3)
				v5 = v12;
		}
		else
		{
			v11 = v9 - v10;
			if (v11 < a3)
				v5 = v11;
		}
	}
	v14 = a1[2];
	v15 = *a1 - (unsigned int)v14;
	if (v5 < (unsigned int)v15)
		v15 = v5;
	sub_1407DB590(a2, &a5[v14], (unsigned int)(4 * v15));
	sub_1407E4830(&a5[a1[2]], 0i64, (unsigned int)(4 * v15));
	if (v5 != (_DWORD)v15)
	{
		v16 = 4 * (v5 - (unsigned int)v15);
		sub_1407DB590(&a2[v15], a5, v16);
		sub_1407E4830(a5, 0i64, (unsigned int)v16);
	}
	result = v5;
	a1[2] = (v5 + a1[2]) % *a1;
	return result;
}

