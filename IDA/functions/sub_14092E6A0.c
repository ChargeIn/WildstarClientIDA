#include "../winhttp.h"

//----- (000000014092E6A0) ----------------------------------------------------
_QWORD* __fastcall sub_14092E6A0(__int64 a1, __int64 a2, int a3)
{
	unsigned int* v3; // rbx
	__int64 v7; // rcx
	char* v8; // rax
	__int64 v9; // rax
	_QWORD* v10; // rbp
	_QWORD* v11; // rsi
	_QWORD* v12; // rdi
	_QWORD* v13; // rax
	_QWORD* v14; // rdi
	_QWORD* v15; // rax
	_QWORD* v16; // rax
	_QWORD* v17; // rax
	_QWORD* result; // rax

	v3 = *(unsigned int**)a1;
	if (a3)
	{
		if (!*v3)
		{
			v7 = *(_QWORD*)a1;
			v3[26] = 0;
			v8 = sub_14092D140(v7, 1, 7, 0i64, 4, 0i64);
			if (v8)
				*v8 = -119;
		}
		v9 = *(int*)(a1 + 56);
		if (!*v3)
		{
			v3[26] = 0;
			sub_14092AA10(v3, 7, 0i64, 267, v9 + 48);
		}
	}
	v10 = sub_140932570((__int64)v3);
	v11 = sub_140931B80(v3, 3, 6, 0i64, 7, 0i64);
	sub_140932690(v3, 9, 1, 0i64, 262, 0i64);
	if (*(_DWORD*)(a1 + 316) && !*v3)
	{
		v3[26] = 0;
		sub_14092AA10(v3, 5, 0i64, 1, 0i64);
	}
	v12 = sub_140931B80(v3, 2, 1, 0i64, 512, 255i64);
	if (!*v3)
	{
		v3[26] = 0;
		sub_14092AA10(v3, 1, 0i64, 512, 255i64);
	}
	v13 = sub_140932570((__int64)v3);
	if (v12 && v13)
	{
		v12[2] &= ~2ui64;
		v12[2] |= 1ui64;
		v12[3] = v13;
	}
	sub_140932A90(v3, 30, 3, 0i64, 1, 0i64, 512, 7i64);
	sub_140932A90(v3, 34, 1, 0i64, 1, 0i64, 512, 3i64);
	sub_140932690(v3, 7, 1, 0i64, 257, a2);
	sub_140932A90(v3, 33, 3, 0i64, 512, 1i64, 3, 0i64);
	sub_140932A90(v3, 542, 0, 0i64, 1, 0i64, 3, 0i64);
	v14 = sub_140932450((__int64)v3, 1);
	if (*(_DWORD*)(a1 + 316))
		sub_140932690(v3, 6, 1, 0i64, 5, 0i64);
	sub_140932A90(v3, 25, 6, 0i64, 6, 0i64, 512, 2i64);
	if (*(_DWORD*)(a1 + 316))
	{
		v15 = sub_140931B80(v3, 2, 1, 0i64, 512, 55296i64);
		if (v15 && v10)
		{
			v15[2] &= ~2ui64;
			v15[2] |= 1ui64;
			v15[3] = v10;
		}
		sub_140932A90(v3, 30, 1, 0i64, 1, 0i64, 512, 64512i64);
		sub_140932A90(v3, 539, 0, 0i64, 1, 0i64, 512, 55296i64);
		sub_140932FC0(v3, 6, 1, 0i64, 0, 0, 0);
		sub_140932A90(v3, 33, 1, 0i64, 1, 0i64, 512, 1i64);
		sub_140932A90(v3, 25, 6, 0i64, 6, 0i64, 1, 0i64);
	}
	v16 = sub_140932450((__int64)v3, 22);
	if (v16 && v10)
	{
		v16[2] &= ~2ui64;
		v16[2] |= 1ui64;
		v16[3] = v10;
	}
	v17 = sub_140932570((__int64)v3);
	if (v14 && v17)
	{
		v14[2] &= ~2ui64;
		v14[2] |= 1ui64;
		v14[3] = v17;
	}
	result = sub_140932570((__int64)v3);
	if (v11 && result)
	{
		v11[2] &= ~2ui64;
		v11[2] |= 1ui64;
		v11[3] = result;
	}
	if (a3)
		return (_QWORD*)sub_140932690(v3, 6, 7, 0i64, 4, 0i64);
	return result;
}

