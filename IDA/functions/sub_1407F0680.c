#include "../winhttp.h"

//----- (00000001407F0680) ----------------------------------------------------
LPVOID __fastcall sub_1407F0680(unsigned __int64 a1, unsigned __int64 a2, _DWORD* a3)
{
	LPVOID result; // rax
	SIZE_T v5; // rbx

	if (a1 && 0xFFFFFFFFFFFFFFE0ui64 / a1 < a2)
	{
		*(_DWORD*)sub_1407DE1B0() = 12;
		return 0i64;
	}
	else
	{
		v5 = a1 * a2;
		if (!(a1 * a2))
			v5 = 1i64;
		while (1)
		{
			result = 0i64;
			if (v5 <= 0xFFFFFFFFFFFFFFE0ui64)
			{
				result = HeapAlloc(hHeap, 8u, v5);
				if (result)
					break;
			}
			if (!dword_140C6082C)
			{
				if (a3)
					*a3 = 12;
				return result;
			}
			if (!sub_1407E2E34(v5))
			{
				if (a3)
					*a3 = 12;
				return 0i64;
			}
		}
	}
	return result;
}
// 1407DE1B0: using guessed type __int64 sub_1407DE1B0(void);
// 140C6082C: using guessed type int dword_140C6082C;

