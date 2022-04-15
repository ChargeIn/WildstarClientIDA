#include "../winhttp.h"

//----- (000000014083F940) ----------------------------------------------------
__int64 __fastcall sub_14083F940(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
	unsigned int v6; // edi
	__int64 result; // rax
	unsigned int v8; // r14d
	unsigned int v9; // ebp
	int* v10; // rax
	int* v11; // rax
	unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

	v6 = 1;
	if (*(_DWORD*)(a2 + 52))
	{
		sub_14083CB00(a1, a3, &v12, a4);
		return 1i64;
	}
	else
	{
		v8 = a3 / 0xC;
		v9 = 12 * (a3 / 0xC);
		if ((_BYTE)a4)
		{
			v11 = sub_14083C610(a1, v9);
			if (!*(_QWORD*)(a2 + 64))
				*(_QWORD*)(a2 + 64) = v11;
			sub_14083C740(a1);
		}
		else
		{
			v10 = (int*)sub_1408819F0(dword_140C10F20, v9);
			*(_QWORD*)(a2 + 64) = v10;
			if (v10)
			{
				*(_BYTE*)(a2 + 120) |= 2u;
				sub_14083C5D0(a1, v10, v9);
			}
			else
			{
				v6 = 52;
			}
		}
		result = v6;
		if (*(_QWORD*)(a2 + 64))
			*(_DWORD*)(a2 + 56) = v8;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

