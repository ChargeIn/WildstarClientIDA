#include "../winhttp.h"

//----- (0000000140085FE0) ----------------------------------------------------
__int64 __fastcall sub_140085FE0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	unsigned int v8; // ebx

	if (!a3)
		return 2147500037i64;
	result = sub_140336A40(a1, a2, (_QWORD*)a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 5ui64);
		if ((int)result >= 0)
		{
			v7 = sub_1403374E0(a2, 104i64 * *(unsigned int*)(a3 + 8));
			*(_QWORD*)(a3 + 16) = v7;
			if (v7)
			{
				v8 = 0;
				if (*(_DWORD*)(a3 + 8))
				{
					while (1)
					{
						result = sub_140085CA0(a1, (__int64)a2, (int*)(*(_QWORD*)(a3 + 16) + 104i64 * v8));
						if ((int)result < 0)
							break;
						if (++v8 >= *(_DWORD*)(a3 + 8))
							return sub_14006BF60(a1, (_WORD*)(a3 + 24), 0x10ui64);
					}
				}
				else
				{
					return sub_14006BF60(a1, (_WORD*)(a3 + 24), 0x10ui64);
				}
			}
			else
			{
				return 2147500037i64;
			}
		}
	}
	return result;
}

