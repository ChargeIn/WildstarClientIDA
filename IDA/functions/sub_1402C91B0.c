#include "../winhttp.h"

//----- (00000001402C91B0) ----------------------------------------------------
__int64 __fastcall sub_1402C91B0(unsigned __int64* a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rax
	unsigned __int64 v6; // rdx
	__int64 result; // rax
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	unsigned int* v11; // r8
	__int64 v12; // rdx

	v3 = *(_QWORD*)(a3 + 16);
	v6 = v3 + a2;
	if (v6 < *a1)
		return 2147500037i64;
	v9 = *(unsigned int*)(a3 + 8);
	if (a2 + v3 + 2 * v9 > a1[1])
		return 2147500037i64;
	v10 = 0i64;
	if ((_DWORD)v9)
		v10 = v6;
	v11 = (unsigned int*)(a3 + 24);
	*((_QWORD*)v11 - 1) = v10;
	result = sub_1402CA460(a1, a2, v11);
	if ((int)result >= 0)
	{
		result = sub_1402CA420(a1, a2, (unsigned int*)(a3 + 40));
		if ((int)result >= 0)
		{
			result = sub_1402CA530(a1, v12, (unsigned int*)(a3 + 56));
			if ((int)result >= 0)
			{
				result = sub_1402CA420(a1, a2, (unsigned int*)(a3 + 72));
				if ((int)result >= 0)
					return 0i64;
			}
		}
	}
	return result;
}
// 1402C9233: variable 'v12' is possibly undefined

