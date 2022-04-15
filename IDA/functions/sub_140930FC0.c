#include "../winhttp.h"

//----- (0000000140930FC0) ----------------------------------------------------
_QWORD* __fastcall sub_140930FC0(__int64 a1, __int64 a2)
{
	unsigned int* v2; // rbx
	__int64 v5; // rcx
	char* v6; // rax
	_QWORD* v7; // rax
	int v8; // eax
	_QWORD* result; // rax

	v2 = *(unsigned int**)a1;
	if (!**(_DWORD**)a1)
	{
		v5 = *(_QWORD*)a1;
		v2[26] = 0;
		v6 = sub_14092D140(v5, 1, 9, 0i64, 2, 0i64);
		if (v6)
			*v6 = -119;
		if (!*v2)
		{
			v2[26] = 0;
			sub_14092AA10(v2, 1, 0i64, 512, -12i64);
			if (!*v2)
			{
				v2[26] = 0;
				sub_14092AEE0(v2, 1, 3, 0i64, 258, 0x38ui64);
			}
		}
	}
	v7 = sub_140931B80(v2, 2, 3, 0i64, 512, 2i64);
	if (v7 && a2)
	{
		v7[2] &= ~2ui64;
		v7[2] |= 1ui64;
		v7[3] = a2;
	}
	if (!*v2)
	{
		v2[26] = 0;
		sub_14092AA10(v2, 6, 0i64, 258, 16i64);
		if (!*v2)
		{
			v2[26] = 0;
			sub_14092AA10(v2, 2, 0i64, 258, 32i64);
		}
	}
	if (*(_DWORD*)(a1 + 80) == 2)
		v8 = *(_DWORD*)(a1 + 48);
	else
		v8 = *(_DWORD*)(a1 + 52);
	if (!*v2)
	{
		v2[26] = 0;
		sub_14092AA10(v2, 3, 0i64, 267, v8 + 48i64);
	}
	sub_140932A90(v2, 27, 7, 0i64, 7, 0i64, 6, 0i64);
	sub_140932A90(v2, 35, 7, 0i64, 7, 0i64, 512, 1i64);
	if (!*v2)
	{
		v2[26] = 0;
		sub_14092AEE0(v2, 1, 258, 4i64, 7, 0i64);
	}
	sub_140932A90(v2, 27, 3, 0i64, 3, 0i64, 6, 0i64);
	sub_140932A90(v2, 35, 3, 0i64, 3, 0i64, 512, 1i64);
	if (!*v2)
	{
		v2[26] = 0;
		sub_14092AEE0(v2, 1, 258, 0i64, 3, 0i64);
	}
	result = sub_140932450((__int64)v2, 22);
	if (result)
	{
		if (a2)
		{
			result[2] &= ~2ui64;
			result[2] |= 1ui64;
			result[3] = a2;
		}
	}
	return result;
}

