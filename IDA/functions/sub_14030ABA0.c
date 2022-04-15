#include "../winhttp.h"

//----- (000000014030ABA0) ----------------------------------------------------
__int64 __fastcall sub_14030ABA0(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 result; // rax
	__int64 v6; // rdx
	__int64 v7; // rdx
	__int64 v8; // rdx
	__int64 v9; // rdx
	__int64 v10; // rdx
	__int64 v11; // rdx

	result = sub_1402CA3C0(a1, a2, a3 + 2);
	if ((int)result >= 0)
	{
		result = sub_1402CA3C0(a1, v6, a3 + 8);
		if ((int)result >= 0)
		{
			result = sub_14030EB90(a1, v7, a3 + 14);
			if ((int)result >= 0)
			{
				result = sub_14030EB90(a1, v8, a3 + 20);
				if ((int)result >= 0)
				{
					result = sub_14030EB90(a1, v9, a3 + 26);
					if ((int)result >= 0)
					{
						result = sub_14030EB90(a1, v10, a3 + 32);
						if ((int)result >= 0)
						{
							result = sub_1402CA3C0(a1, v11, a3 + 38);
							if ((int)result >= 0)
								return 0i64;
						}
					}
				}
			}
		}
	}
	return result;
}
// 14030ABC4: variable 'v6' is possibly undefined
// 14030ABD4: variable 'v7' is possibly undefined
// 14030ABE4: variable 'v8' is possibly undefined
// 14030ABF4: variable 'v9' is possibly undefined
// 14030AC07: variable 'v10' is possibly undefined
// 14030AC1A: variable 'v11' is possibly undefined

