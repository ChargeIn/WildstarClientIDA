#include "../winhttp.h"

//----- (00000001408C3B60) ----------------------------------------------------
__int64 __fastcall sub_1408C3B60(__int64 a1, __int64 a2)
{
	unsigned int v4; // ebx
	__int64 result; // rax
	_QWORD* v6; // rsi

	v4 = 0;
	if (*(_DWORD*)(a1 + 16))
	{
		do
		{
			result = v4;
			v6 = (_QWORD*)(a1 + 8i64 * v4);
			if (*v6)
			{
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
				*v6 = 0i64;
			}
			++v4;
		} while (v4 < *(_DWORD*)(a1 + 16));
		*(_DWORD*)(a1 + 8) = 0;
	}
	else
	{
		*(_DWORD*)(a1 + 8) = 0;
	}
	return result;
}

