#include "../winhttp.h"

//----- (000000014084C950) ----------------------------------------------------
__int64 __fastcall sub_14084C950(__int64* a1, char a2)
{
	__int64 v4; // rdi
	int v5; // ebp
	__int64 result; // rax
	_BYTE* v7; // rsi

	if (*a1)
		v4 = *(unsigned __int8*)*a1;
	else
		v4 = 0i64;
	v5 = v4 + 5;
	result = sub_1408819F0(dword_140C10F20, (((_DWORD)v4 + 5) & 0xFFFFFFFC) + 4 + 4 * (_DWORD)v4);
	v7 = (_BYTE*)result;
	if (result)
	{
		if (*a1)
		{
			sub_1407DB590((int*)(result + 1), (int*)(*a1 + 1), (unsigned int)v4);
			sub_1407DB590((int*)&v7[v5 & 0xFFFFFFFC], (int*)(*a1 + (((_DWORD)v4 + 4) & 0xFFFFFFFC)), 4 * v4);
			sub_140881720(dword_140C10F20, *a1);
		}
		v7[(unsigned int)(v4 + 1)] = a2;
		*v7 = v4 + 1;
		*a1 = (__int64)v7;
		return (__int64)&v7[4 * v4 + (v5 & 0xFFFFFFFC)];
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

