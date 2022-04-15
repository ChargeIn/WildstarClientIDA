#include "../winhttp.h"

//----- (000000014087C6F0) ----------------------------------------------------
_DWORD* __fastcall sub_14087C6F0(__int64 a1, int a2)
{
	_DWORD* result; // rax
	unsigned __int64 v4; // rcx

	result = *(_DWORD**)(a1 + 8);
	while (result != *(_DWORD**)(a1 + 16))
	{
		if (*result == a2)
		{
			v4 = *(_QWORD*)(a1 + 16) - 8i64;
			if ((unsigned __int64)result < v4)
				qmemcpy(result, result + 2, 8 * (((v4 - (unsigned __int64)result - 1) >> 3) + 1));
			*(_QWORD*)(a1 + 16) -= 8i64;
		}
		else
		{
			result += 2;
		}
	}
	return result;
}

