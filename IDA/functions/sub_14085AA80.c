#include "../winhttp.h"

//----- (000000014085AA80) ----------------------------------------------------
__int64 __fastcall sub_14085AA80(_QWORD* a1)
{
	char v2; // si
	unsigned int i; // ebx
	bool v4; // al
	char v5; // cl
	__int64 result; // rax

	sub_140830940((__int64**)qword_140C61BA0, (__int64)a1);
	if (!a1[5])
	{
		v2 = 0;
		for (i = 0; i < 4; ++i)
		{
			v4 = sub_14085A670(a1, i);
			v5 = i;
			v2 |= v4 << v5;
		}
		result = sub_1408819F0(dword_140C10F20, 40i64);
		if (result)
		{
			*(_QWORD*)(result + 8) = a1;
			*(_QWORD*)(result + 16) = 0i64;
			*(_QWORD*)result = off_1409A3278;
			*(_QWORD*)(result + 24) = 0i64;
			*(_BYTE*)(result + 32) = v2;
			a1[5] = result;
			return result;
		}
		a1[5] = 0i64;
	}
	return a1[5];
}
// 1409A3278: using guessed type __int64 (__fastcall *off_1409A3278[2])();
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61BA0: using guessed type __int64 qword_140C61BA0;

