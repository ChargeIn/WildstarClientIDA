#include "../winhttp.h"

//----- (0000000140856540) ----------------------------------------------------
__int64 __fastcall sub_140856540(__int64 a1, int a2, int a3, char* a4, int a5, char a6, char a7)
{
	__int64 v11; // rdx
	__int64 v12; // rdi
	__int64 v13; // rdi
	__int64 v14; // rax
	__int64 result; // rax

	if ((*(_BYTE*)(a1 + 16) & 0x7C) == 4)
	{
		v11 = *(_QWORD*)(a1 + 24);
		if (v11)
		{
			sub_140881720(dword_140C10F20, v11);
			*(_QWORD*)(a1 + 24) = 0i64;
		}
	}
	*(_DWORD*)(a1 + 16) &= 0xFFFFF800;
	*(_DWORD*)a1 = 0;
	*(_DWORD*)(a1 + 4) = -1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 16) &= ~0x80u;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_DWORD*)(a1 + 32) = a3;
	if (a4)
	{
		v12 = -1i64;
		do
			++v12;
		while (*(_WORD*)&a4[2 * v12]);
		v13 = v12 + 1;
		v14 = sub_1408819F0(dword_140C10F20, 2 * v13);
		*(_QWORD*)(a1 + 24) = v14;
		if (v14)
			sub_140856440(v14, a4, v13);
	}
	*(_DWORD*)(a1 + 16) &= 0xFFFFFC84;
	*(_DWORD*)(a1 + 4) = a5;
	result = a7 & 1;
	*(_DWORD*)a1 = a2;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_DWORD*)(a1 + 16) |= (((unsigned int)result | (2 * (a6 & 1))) << 8) | 0x484;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

