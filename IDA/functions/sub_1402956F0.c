#include "../winhttp.h"

//----- (00000001402956F0) ----------------------------------------------------
__int64 __fastcall sub_1402956F0(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rbp
	__int64 v11; // rax
	__int64 v12; // rax
	__int64 v13; // rdx

	if (*(_DWORD*)a3 != 1413960787 || *(_DWORD*)(a3 + 4) != 3)
		return 2147500037i64;
	result = sub_1402964B0(a1, a2, (unsigned int*)(a3 + 8));
	if ((int)result >= 0)
	{
		v7 = *(_QWORD*)(a3 + 32);
		v8 = v7 + a2;
		if ((unsigned __int64)(v7 + a2) < *a1)
			return 2147500037i64;
		v9 = *(unsigned int*)(a3 + 24);
		if ((unsigned __int64)(a2 + v7 + 4 * v9) > a1[1])
			return 2147500037i64;
		v10 = 0i64;
		v11 = 0i64;
		if ((_DWORD)v9)
			v11 = v8;
		*(_QWORD*)(a3 + 32) = v11;
		result = sub_1402964B0(a1, a2, (unsigned int*)(a3 + 40));
		if ((int)result >= 0)
		{
			v12 = *(_QWORD*)(a3 + 64);
			if ((unsigned __int64)(v12 + a2) >= *a1)
			{
				v13 = *(unsigned int*)(a3 + 56);
				if ((unsigned __int64)(a2 + v12 + 4 * v13) <= a1[1])
				{
					if ((_DWORD)v13)
						v10 = v12 + a2;
					result = 0i64;
					*(_QWORD*)(a3 + 64) = v10;
					return result;
				}
			}
			return 2147500037i64;
		}
	}
	return result;
}

