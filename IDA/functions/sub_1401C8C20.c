#include "../winhttp.h"

//----- (00000001401C8C20) ----------------------------------------------------
__int64 __fastcall sub_1401C8C20(__int64 a1, _BYTE* a2, __int64 a3)
{
	_BYTE* v4; // rsi
	__int64 result; // rax
	bool v7; // zf

	v4 = a2;
	if (!a1 || !a2)
		return 1i64;
	if (*(_DWORD*)(a1 + 96))
	{
		*(_DWORD*)(a1 + 100) = 3;
		return 3i64;
	}
	else
	{
		result = *(unsigned int*)(a1 + 100);
		if (!(_DWORD)result)
		{
			do
			{
				--a3;
				if (*(_DWORD*)(a1 + 100))
					break;
				*(_BYTE*)((__int16)(*(_WORD*)(a1 + 28))++ + a1 + 30) = *v4;
				v7 = *(_DWORD*)(a1 + 20) == -8;
				*(_DWORD*)(a1 + 20) += 8;
				if (v7)
				{
					v7 = (*(_DWORD*)(a1 + 24))++ == -1;
					if (v7)
						*(_DWORD*)(a1 + 100) = 1;
				}
				if (*(_WORD*)(a1 + 28) == 64)
					sub_1401C8CE0((int*)a1);
				++v4;
			} while (a3);
			return 0i64;
		}
	}
	return result;
}

