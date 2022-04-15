#include "../winhttp.h"

//----- (0000000140832E30) ----------------------------------------------------
__int64 __fastcall sub_140832E30(__int64* a1, unsigned __int8 a2)
{
	__int64 v4; // rbx
	int v5; // eax
	__int64 result; // rax
	int v7; // edx
	unsigned __int16 v8; // r8
	int v9; // eax
	__int64 v10; // rdi
	__int64 v11; // [rsp+40h] [rbp+18h] BYREF

	v4 = 0i64;
	sub_14085CF20(a1, &v11);
	if (v11)
	{
		v5 = sub_14085CF90(&v11);
		v4 = sub_140832B90(v5);
		if (!v4)
			v4 = sub_140832E30(&v11, a2);
		if (!v4)
			return 0i64;
	}
	if (a2)
	{
		v7 = 4;
		v8 = 16;
	}
	else
	{
		v9 = sub_14085CE90((__int64)a1);
		v8 = 1024;
		v7 = v9;
	}
	result = sub_1408322F0(*a1, v7, v8);
	v10 = result;
	if (result)
	{
		*(_BYTE*)(result + 1124) &= ~8u;
		*(_BYTE*)(result + 1124) |= 8 * (a2 & 1);
		if (!a2)
		{
			if (v4)
			{
				sub_140862BE0(v4 + 32);
				*(_QWORD*)(v10 + 864) = v4;
			}
			else
			{
				sub_140863C40((_DWORD*)qword_140C61CC0);
			}
		}
		if (!sub_14085CFD0(a1))
		{
			sub_1408631F0(v10 + 32);
			sub_140863880(v10 + 32);
		}
		return v10;
	}
	return result;
}
// 140C61CC0: using guessed type __int64 qword_140C61CC0;

