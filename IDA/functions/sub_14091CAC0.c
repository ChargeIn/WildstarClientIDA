#include "../winhttp.h"

//----- (000000014091CAC0) ----------------------------------------------------
__int64 __fastcall sub_14091CAC0(__int64 a1)
{
	unsigned int* v1; // rbx
	__int64 v3; // rcx
	char* v4; // rax
	char* v5; // rax
	_QWORD* v6; // rsi
	_QWORD* v7; // rdi
	_QWORD* v8; // rax
	_QWORD* v9; // rax
	_QWORD* v10; // rdi
	_QWORD* v11; // rsi
	_QWORD* v12; // rax
	_QWORD* v13; // rax

	v1 = *(unsigned int**)a1;
	if (!**(_DWORD**)a1)
	{
		v3 = *(_QWORD*)a1;
		v1[26] = 1;
		v4 = sub_14092D140(v3, 1, 0, 0i64, 267, 48i64);
		if (v4)
			*v4 = -113;
		if (!*v1)
		{
			v1[26] = 0;
			v5 = sub_14092D140((__int64)v1, 1, 9, 0i64, 1, 0i64);
			if (v5)
				*v5 = -119;
			if (!*v1)
			{
				v1[26] = 0;
				sub_14092AA10(v1, 1, 0i64, 257, 16i64);
				if (!*v1)
				{
					v1[26] = 0;
					sub_14092AA10(v1, 267, 56i64, 512, 0i64);
				}
			}
		}
	}
	v6 = sub_140931B80(v1, 5, 6, 0i64, 1, 0i64);
	sub_1409318F0(a1);
	sub_14091C690(a1);
	sub_1409309E0(a1);
	v7 = sub_140931B80(v1, 4, 1, 0i64, 512, 255i64);
	sub_140932690(v1, 7, 1, 0i64, 257, *(_QWORD*)(a1 + 104));
	sub_140932A90(v1, 34, 1, 0i64, 1, 0i64, 512, 4i64);
	sub_140932A90(v1, 30, 1, 0i64, 1, 0i64, 512, 1i64);
	if (!*v1)
	{
		v1[26] = 0;
		sub_14092AA10(v1, 267, 56i64, 1, 0i64);
	}
	v8 = sub_140932570((__int64)v1);
	if (v7 && v8)
	{
		v7[2] &= ~2ui64;
		v7[2] |= 1ui64;
		v7[3] = v8;
	}
	v9 = sub_140932570((__int64)v1);
	if (v6 && v9)
	{
		v6[2] &= ~2ui64;
		v6[2] |= 1ui64;
		v6[3] = v9;
	}
	sub_140932690(v1, 6, 3, 0i64, 512, 0i64);
	v10 = sub_14091C780(a1);
	sub_1409308B0(a1);
	sub_140932690(v1, 6, 3, 0i64, 512, 0i64);
	v11 = sub_140931B80(v1, 4, 1, 0i64, 512, 255i64);
	sub_140932690(v1, 7, 3, 0i64, 257, *(_QWORD*)(a1 + 104));
	sub_140932A90(v1, 34, 3, 0i64, 3, 0i64, 512, 4i64);
	sub_140932A90(v1, 30, 3, 0i64, 3, 0i64, 512, 1i64);
	v12 = sub_140932570((__int64)v1);
	if (v11 && v12)
	{
		v11[2] &= ~2ui64;
		v11[2] |= 1ui64;
		v11[3] = v12;
	}
	v13 = sub_140932570((__int64)v1);
	if (v10 && v13)
	{
		v10[2] &= ~2ui64;
		v10[2] |= 1ui64;
		v10[3] = v13;
	}
	sub_140932A90(v1, 544, 0, 0i64, 3, 0i64, 267, 8i64);
	return sub_1409320B0(v1, 267, 0i64);
}

