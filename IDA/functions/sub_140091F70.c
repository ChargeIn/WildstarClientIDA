#include "../winhttp.h"

//----- (0000000140091F70) ----------------------------------------------------
__int64 __fastcall sub_140091F70(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8
	__int64 v8; // rax
	__int64 v9; // rbx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v7);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
		if ((int)result >= 0)
		{
			v8 = sub_1403374E0(a2, 80i64 * *(unsigned int*)(a3 + 16));
			*(_QWORD*)(a3 + 24) = v8;
			if (v8)
			{
				v9 = 0i64;
				if (*(_DWORD*)(a3 + 16))
				{
					while (1)
					{
						result = sub_140090590(a1, a2, *(_QWORD*)(a3 + 24) + 80 * v9);
						if ((int)result < 0)
							break;
						v9 = (unsigned int)(v9 + 1);
						if ((unsigned int)v9 >= *(_DWORD*)(a3 + 16))
							return sub_14006C090(a1, (_DWORD*)(a3 + 32), 1ui64);
					}
				}
				else
				{
					return sub_14006C090(a1, (_DWORD*)(a3 + 32), 1ui64);
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
// 140091FBD: variable 'v7' is possibly undefined

