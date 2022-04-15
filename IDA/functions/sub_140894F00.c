#include "../winhttp.h"

//----- (0000000140894F00) ----------------------------------------------------
__int64 __fastcall sub_140894F00(__int64 a1, int a2)
{
	_DWORD* v2; // rdi
	__int64 result; // rax
	__int64 v5; // rcx

	v2 = *(_DWORD**)a1;
	result = *(_QWORD*)(a1 + 8);
	if (*(_QWORD*)a1 != result)
	{
		do
		{
			if (*v2 == a2)
				break;
			v2 += 4;
		} while (v2 != (_DWORD*)result);
		if (v2 != (_DWORD*)result)
		{
			v5 = result - 16;
			if ((unsigned __int64)v2 < result - 16)
			{
				result = 0x1FFFFFFFFFFFFFFEi64;
				qmemcpy(
					v2,
					v2 + 4,
					8 * (((((unsigned __int64)(v5 - (_QWORD)v2 - 1) >> 3) & 0xFFFFFFFFFFFFFFFEui64) + 2) & 0x1FFFFFFFFFFFFFFEi64));
			}
			*(_QWORD*)(a1 + 8) -= 16i64;
		}
	}
	return result;
}

