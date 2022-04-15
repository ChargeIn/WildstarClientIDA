#include "../winhttp.h"

//----- (000000014087C1E0) ----------------------------------------------------
__int64 __fastcall sub_14087C1E0(__int64 a1, __int16 a2)
{
	unsigned int v2; // ebx
	int v4; // eax
	__int64 v5; // rsi
	unsigned __int64 v6; // rbp
	int* v7; // rax
	__int64 v9; // rax

	LOWORD(v2) = a2;
	v4 = (*(unsigned __int16*)(a1 + 34) + 7) / 8;
	v5 = v4;
	v6 = (unsigned int)(2 * v4);
	v7 = (int*)sub_1408819F0(dword_140C10F20, v6);
	*(_QWORD*)(a1 + 64) = v7;
	if (!v7)
		return 2i64;
	*(_QWORD*)(a1 + 72) = (char*)v7 + v5;
	sub_1407E4830(v7, 0i64, v6);
	v2 = (unsigned __int16)v2;
	if ((unsigned __int16)v2 >= 4u)
		v2 = 4;
	if (v2)
	{
		v9 = sub_1408819F0(dword_140C10F20, 2i64 * v2);
		*(_QWORD*)(a1 + 40) = v9;
		*(_QWORD*)(a1 + 48) = v9;
		if (!v9)
			return 52i64;
		*(_DWORD*)(a1 + 56) = v2;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

