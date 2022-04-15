#include "../winhttp.h"

//----- (0000000140931270) ----------------------------------------------------
_QWORD* __fastcall sub_140931270(__int64 a1, unsigned __int16 a2, int a3, int a4)
{
	unsigned int* v4; // rdi
	__int64 v5; // rax
	_QWORD* v9; // r14
	char* v10; // rax
	_QWORD* v11; // rsi
	_QWORD* v12; // rbp
	_QWORD* v13; // r13
	unsigned int v14; // r15d
	__int64 v15; // rax
	unsigned int v16; // edx
	__int64 v17; // rbx
	_QWORD* v18; // rbx
	_QWORD* v19; // rax
	_QWORD* v20; // rax
	_QWORD* v21; // rax
	__int64 v22; // r8
	_QWORD* v23; // rax
	_QWORD* v24; // rax
	_QWORD* v26; // [rsp+40h] [rbp-48h]

	v4 = *(unsigned int**)a1;
	v5 = *(int*)(a1 + 40);
	v9 = 0i64;
	if (!**(_DWORD**)a1)
	{
		v4[26] = 0;
		v10 = sub_14092D140((__int64)v4, 1, 3, 0i64, 267, v5 + 48);
		if (v10)
			*v10 = -117;
	}
	sub_140932A90(v4, 25, 1, 0i64, 6, 0i64, 512, 1000i64);
	v11 = sub_140931B80(v4, 2, 1, 0i64, 7, 0i64);
	v12 = sub_140931B80(v4, 2, 6, 0i64, 3, 0i64);
	if (a4)
	{
		sub_140932A90(v4, 25, 1, 0i64, 6, 0i64, 512, 2i64);
	}
	else if (!*v4)
	{
		v4[26] = 0;
		sub_14092AA10(v4, 1, 0i64, 6, 0i64);
	}
	v26 = sub_140932570((__int64)v4);
	v13 = sub_140931B80(v4, 3, 1, 0i64, 7, 0i64);
	sub_140932690(v4, 9, 3, 0i64, 257, 0i64);
	v14 = a2;
	if (a3 && a2 <= 0xFFu)
		v14 = *(unsigned __int8*)(*(_QWORD*)(a1 + 64) + a2);
	if (a2 == v14)
	{
		v15 = a2;
	}
	else
	{
		v16 = v14 ^ a2;
		if (((v16 - 1) & v16) != 0)
		{
			v18 = sub_140931B80(v4, 0, 3, 0i64, 512, a2);
			v9 = sub_140931B80(v4, 0, 3, 0i64, 512, v14);
			goto LABEL_17;
		}
		v17 = v16;
		sub_140932A90(v4, 31, 3, 0i64, 3, 0i64, 512, v16);
		v15 = v17 | a2;
	}
	v18 = sub_140931B80(v4, 0, 3, 0i64, 512, v15);
LABEL_17:
	sub_140932A90(v4, 25, 1, 0i64, 1, 0i64, 512, 2i64);
	v19 = sub_140932450((__int64)v4, 22);
	if (v19 && v26)
	{
		v19[2] &= ~2ui64;
		v19[2] |= 1ui64;
		v19[3] = v26;
	}
	v20 = sub_140932570((__int64)v4);
	if (v18 && v20)
	{
		v18[2] &= ~2ui64;
		v18[2] |= 1ui64;
		v18[3] = v20;
	}
	if (v9)
	{
		v21 = sub_140932570((__int64)v4);
		if (v21)
		{
			v9[2] &= ~2ui64;
			v9[2] |= 1ui64;
			v9[3] = v21;
		}
	}
	if (!*v4)
	{
		v22 = *(int*)(a1 + 40) + 48i64;
		v4[26] = 0;
		sub_14092AA10(v4, 267, v22, 1, 0i64);
	}
	v23 = sub_140932570((__int64)v4);
	if (v12 && v23)
	{
		v12[2] &= ~2ui64;
		v12[2] |= 1ui64;
		v12[3] = v23;
	}
	v24 = sub_140932570((__int64)v4);
	if (v11 && v24)
	{
		v11[2] &= ~2ui64;
		v11[2] |= 1ui64;
		v11[3] = v24;
	}
	return v13;
}

