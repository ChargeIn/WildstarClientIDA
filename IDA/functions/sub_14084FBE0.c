#include "../winhttp.h"

//----- (000000014084FBE0) ----------------------------------------------------
float* __fastcall sub_14084FBE0(__int64* a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
	char v6; // bl
	float* result; // rax
	unsigned __int8* v9; // r8
	unsigned int v10; // r9d
	__int64 v11; // rcx
	__int64 v12; // rdx

	v6 = a2;
	result = sub_1408542C0(a1, a2, a3);
	if (a4 || a5)
		return (float*)sub_14084FAC0(a1 + 16, v6, __SPAIR64__(a5, a4));
	v9 = (unsigned __int8*)a1[16];
	if (v9)
	{
		v10 = *v9;
		v11 = 0i64;
		while (1)
		{
			v12 = (unsigned int)(v11 + 1);
			if (v9[v12] == v6)
				break;
			v11 = (unsigned int)v12;
			if ((unsigned int)v12 >= v10)
				return result;
		}
		result = (float*)&v9[(v10 + 4) & 0xFFFFFFFC];
		if (&result[2 * v11])
			return (float*)sub_14084FAC0(a1 + 16, v6, __SPAIR64__(a5, a4));
	}
	return result;
}

