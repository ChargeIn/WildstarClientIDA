#include "../winhttp.h"

//----- (000000014091C690) ----------------------------------------------------
_QWORD* __fastcall sub_14091C690(__int64 a1)
{
	_QWORD* result; // rax
	unsigned int* v2; // rbx
	__int64 v4; // r9
	int v5; // r8d
	_QWORD* v6; // rdi
	__int64 v7; // r8

	result = (_QWORD*)*(unsigned int*)(a1 + 80);
	v2 = *(unsigned int**)a1;
	if ((_DWORD)result == 1)
	{
		sub_140932A90(v2, 25, 1, 0i64, 267, *(int*)(a1 + 48), 512, 1i64);
		v4 = 0i64;
		v5 = 1;
	}
	else
	{
		if ((_DWORD)result != 2)
			return result;
		v4 = *(int*)(a1 + 48);
		v5 = 267;
	}
	v6 = sub_140931B80(v2, 5, v5, v4, 6, 0i64);
	if (!*v2)
	{
		v7 = *(int*)(a1 + 48) + 48i64;
		v2[26] = 0;
		sub_14092AA10(v2, 267, v7, 6, 0i64);
	}
	result = sub_140932570((__int64)v2);
	if (v6)
	{
		if (result)
		{
			v6[2] &= ~2ui64;
			v6[3] = result;
			v6[2] |= 1ui64;
		}
	}
	return result;
}

