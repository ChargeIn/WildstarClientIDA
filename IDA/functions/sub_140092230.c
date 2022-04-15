#include "../winhttp.h"

//----- (0000000140092230) ----------------------------------------------------
__int64 __fastcall sub_140092230(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8
	unsigned __int64 v8; // rbx
	__int64 v9; // rdi

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v7);
		if ((int)result >= 0)
		{
			v8 = 0i64;
			v9 = a3 + 16;
			do
			{
				result = sub_1400901B0(a1, a2, v9);
				if ((int)result < 0)
					break;
				++v8;
				v9 += 40i64;
			} while (v8 < 0xA);
		}
	}
	return result;
}
// 14009227B: variable 'v7' is possibly undefined

