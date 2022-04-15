#include "../winhttp.h"

//----- (000000014049D2C0) ----------------------------------------------------
__int64 __fastcall sub_14049D2C0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	__int64 v5; // rax
	unsigned int v7; // ecx
	unsigned __int8 v8; // dl
	unsigned int v9; // ebx
	BOOL v10; // ecx
	int v11; // edi
	int v12[6]; // [rsp+20h] [rbp-18h] BYREF

	v5 = sub_14020E7A0(a4);
	if (!v5)
		return a3 == 2;
	v7 = *(_DWORD*)(v5 + 16);
	if (v7)
	{
		v8 = 0;
		if (!(_WORD)v7)
		{
			v8 = 16;
			v7 >>= 16;
		}
		if (!(_BYTE)v7)
		{
			v8 += 8;
			v7 >>= 8;
		}
		if ((v7 & 0xF) == 0)
		{
			v8 += 4;
			v7 >>= 4;
		}
		if ((v7 & 3) == 0)
		{
			v8 += 2;
			v7 >>= 2;
		}
		if ((v7 & 1) == 0)
			++v8;
	}
	else
	{
		v8 = -1;
	}
	if (v8 >= 0x1Fu)
		return a3 == 2;
	v9 = 0;
	v12[0] = 0;
	v12[1] = v8;
	v10 = sub_1403AC780(qword_140C65898 + 160, v12) != 0;
	v11 = a3 - 1;
	if (v11)
	{
		if (v11 == 1)
		{
			LOBYTE(v9) = !v10;
			return v9;
		}
	}
	else
	{
		return v10;
	}
	return v9;
}
// 140C65898: using guessed type __int64 qword_140C65898;

