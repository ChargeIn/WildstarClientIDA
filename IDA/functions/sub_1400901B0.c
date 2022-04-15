#include "../winhttp.h"

//----- (00000001400901B0) ----------------------------------------------------
__int64 __fastcall sub_1400901B0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // r8
	__int64 v8; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_140336A40(a1, a2, (_QWORD*)a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C120(a1, (__int64*)(a3 + 16), v6);
			if ((int)result >= 0)
			{
				result = sub_14006C120(a1, (__int64*)(a3 + 24), v7);
				if ((int)result >= 0)
					return sub_14006C120(a1, (__int64*)(a3 + 32), v8);
			}
		}
	}
	return result;
}
// 1400901FB: variable 'v6' is possibly undefined
// 14009020B: variable 'v7' is possibly undefined
// 14009021B: variable 'v8' is possibly undefined

