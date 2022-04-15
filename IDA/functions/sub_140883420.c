#include "../winhttp.h"

//----- (0000000140883420) ----------------------------------------------------
__int64 __fastcall sub_140883420(__int64 a1, char* a2, _QWORD* a3, int a4)
{
	int v4; // eax
	__int64 v7; // rdi
	__int64 v8; // rdi
	__int64 v9; // r14
	unsigned __int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rbx

	*(_DWORD*)(a1 + 44) |= 1u;
	v4 = *(_DWORD*)(a1 + 44);
	*(_DWORD*)(a1 + 40) = a4;
	if (a3)
	{
		*(_DWORD*)(a1 + 44) = v4 | 2;
		*(_QWORD*)(a1 + 8) = *a3;
		*(_QWORD*)(a1 + 16) = a3[1];
		*(_QWORD*)(a1 + 24) = a3[2];
		*(_QWORD*)(a1 + 32) = a3[3];
	}
	else
	{
		*(_DWORD*)(a1 + 44) = v4 & 0xFFFFFFFD;
	}
	v7 = -1i64;
	do
		++v7;
	while (*(_WORD*)&a2[2 * v7]);
	v8 = v7 + 1;
	v9 = sub_1408819F0(dword_140C111C0, 2 * v8);
	*(_QWORD*)a1 = v9;
	if (!v9)
		return 2i64;
	v11 = v8 - 1;
	v12 = -1i64;
	do
		++v12;
	while (*(_WORD*)&a2[2 * v12]);
	if (v11 >= v12 + 1)
	{
		v13 = -1i64;
		do
			++v13;
		while (*(_WORD*)&a2[2 * v13]);
		v11 = v13 + 1;
	}
	sub_1407E6D08(v9, v8, a2, v11);
	*(_WORD*)(v9 + 2 * v11) = 0;
	return 1i64;
}
// 140C111C0: using guessed type int dword_140C111C0;

