#include "../winhttp.h"

//----- (0000000140551840) ----------------------------------------------------
__int64 __fastcall sub_140551840(__int64 a1, unsigned int a2)
{
	unsigned int v2; // r9d
	unsigned int* v3; // r8
	__int64 result; // rax
	unsigned __int64 v5; // rcx
	__int64 v6; // rdx

	v2 = *(_DWORD*)(a1 + 16);
	if (a2 == v2)
		return 0i64;
	if (a2 > v2)
		return 0i64;
	v3 = *(unsigned int**)(a1 + 8i64 * a2 + 24);
	if (!v3)
		return 0i64;
	result = v3[4];
	if (!(_DWORD)result)
		return 0i64;
	if (a2 < v2)
	{
		v5 = v3[1];
		if ((unsigned int)v5 <= 0x2E)
		{
			v6 = 0x400000018104i64;
			if (_bittest64(&v6, v5))
			{
				if ((unsigned int)result > 1 && (v3[2] & 0x200) == 0)
					return 100i64;
			}
		}
	}
	return result;
}
// 140551867: conditional instruction was optimized away because r8.8!=0

