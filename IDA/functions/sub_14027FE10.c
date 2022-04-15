#include "../winhttp.h"

//----- (000000014027FE10) ----------------------------------------------------
_DWORD* __fastcall sub_14027FE10(_DWORD* a1, int a2, int a3, int a4)
{
	_DWORD* result; // rax
	__int64 v6; // rcx
	_DWORD* v7; // rdi
	_DWORD* v8; // r11
	__int64 v9; // r8
	_DWORD* v10; // rdx

	if (a2 != 1 || a3 || a4)
	{
		v6 = 4i64 * a2;
		v7 = (_DWORD*)(0x140000000i64 + 4i64 * a3 + 11436136);
		v8 = (_DWORD*)((char*)&unk_140AE8040 + 4 * a3);
		result = a1 + 1853;
		v9 = 4i64;
		v10 = (_DWORD*)((char*)&unk_140AE8090 + 4 * a4);
		do
		{
			*(result - 1) = 1;
			result += 8;
			*(result - 8) = *(_DWORD*)((char*)&unk_140AE8040 + v6);
			*(result - 7) = *v8;
			*(result - 6) = *v10;
			*(result - 5) = *(_DWORD*)((char*)&unk_140AE8068 + v6);
			*(result - 4) = *v7;
			*(result - 3) = *v10;
			--v9;
		} while (v9);
		a1[1794] |= 4u;
	}
	else
	{
		result = 0i64;
		a1[1852] = 0;
		a1[1860] = 0;
		a1[1868] = 0;
		a1[1876] = 0;
		a1[1794] |= 4u;
	}
	return result;
}

