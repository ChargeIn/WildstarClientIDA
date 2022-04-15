#include "../winhttp.h"

//----- (0000000140926FB0) ----------------------------------------------------
_WORD* __fastcall sub_140926FB0(__int64 a1, _WORD* a2, __int64* a3, int a4, int a5)
{
	unsigned int* v5; // rbx
	int v7; // r15d
	__int64 v8; // rax
	_QWORD* v9; // rsi
	char* v13; // rax
	_QWORD* v14; // rax
	_QWORD* v15; // r15
	_QWORD* v16; // rax
	__int64 v17; // rcx
	__int64* v18; // rbp
	_QWORD* v19; // r12
	_QWORD* v20; // rax
	__int64 v21; // rcx
	_QWORD* v22; // rbp
	_QWORD* v23; // rax
	__int64 v24; // rcx
	_QWORD* v25; // rbp
	_QWORD* v26; // rax
	_QWORD* v27; // r15
	_QWORD* v28; // r12
	_QWORD* v29; // rax
	_QWORD* v30; // r12
	_QWORD* v31; // rax
	__int64 v32; // rcx
	_QWORD* v33; // rax
	_QWORD* v34; // rdi
	_QWORD* v35; // rax
	__int64 v36; // rcx
	_QWORD* v37; // rax
	_QWORD* v38; // rax
	_QWORD* v40; // [rsp+70h] [rbp+8h]

	v5 = *(unsigned int**)a1;
	v7 = 2 * (unsigned __int16)a2[1];
	v8 = *(int*)(a1 + 36) + 48i64;
	v9 = 0i64;
	if (!**(_DWORD**)a1)
	{
		v5[26] = 0;
		v13 = sub_14092D140((__int64)v5, 1, 1, 0i64, 267, v8 + 8i64 * v7);
		if (v13)
			*v13 = -117;
	}
	if (a4 && !*(_DWORD*)(a1 + 312))
	{
		v14 = sub_140931B80(v5, 0, 1, 0i64, 267, *(int*)(a1 + 36) + 8i64);
		sub_14091B490(v5, a3, (__int64)v14);
	}
	sub_140932A90(v5, 539, 3, 0i64, 267, *(int*)(a1 + 36) + 8i64 * (v7 + 1), 1, 0i64);
	if (a4)
		v9 = sub_140932450((__int64)v5, 0);
	sub_140932A90(v5, 25, 6, 0i64, 6, 0i64, 3, 0i64);
	v15 = sub_140931B80(v5, 4, 6, 0i64, 7, 0i64);
	if (!*(_DWORD*)(a1 + 80) && !*v5)
	{
		v16 = sub_14092D590((__int64)v5, 16i64);
		if (v16)
		{
			v17 = *a3;
			*v16 = v15;
			v16[1] = v17;
			*a3 = (__int64)v16;
		}
	}
	v18 = (__int64*)(a1 + 296);
	if (*a2 != 109)
		v18 = (__int64*)(a1 + 304);
	v19 = sub_140932450((__int64)v5, 23);
	if (!*v5)
	{
		v20 = sub_14092D590((__int64)v5, 16i64);
		if (v20)
		{
			v21 = *v18;
			*v20 = v19;
			v20[1] = v21;
			*v18 = (__int64)v20;
		}
	}
	v22 = sub_140931B80(v5, 1, 3, 0i64, 512, 0i64);
	if (!*v5)
	{
		v23 = sub_14092D590((__int64)v5, 16i64);
		if (v23)
		{
			v24 = *a3;
			*v23 = v22;
			v23[1] = v24;
			*a3 = (__int64)v23;
		}
	}
	if (*(_DWORD*)(a1 + 80))
	{
		v25 = sub_140932450((__int64)v5, 22);
		v26 = sub_140932570((__int64)v5);
		if (v15 && v26)
		{
			v15[2] &= ~2ui64;
			v15[2] |= 1ui64;
			v15[3] = v26;
		}
		sub_140932A90(v5, 27, 3, 0i64, 3, 0i64, 6, 0i64);
		sub_140932A90(v5, 25, 3, 0i64, 3, 0i64, 7, 0i64);
		v27 = sub_140931B80(v5, 0, 3, 0i64, 512, 0i64);
		if (!*v5)
		{
			v5[26] = 0;
			sub_14092AA10(v5, 6, 0i64, 7, 0i64);
		}
		v28 = (_QWORD*)(a1 + 296);
		if (*a2 != 109)
			v28 = (_QWORD*)(a1 + 304);
		v40 = sub_140932450((__int64)v5, 23);
		if (!*v5)
		{
			v29 = sub_14092D590((__int64)v5, 16i64);
			if (v29)
			{
				v29[1] = *v28;
				*v29 = v40;
				*v28 = v29;
			}
		}
		v30 = sub_140931B80(v5, 1, 3, 0i64, 512, 0i64);
		if (!*v5)
		{
			v31 = sub_14092D590((__int64)v5, 16i64);
			if (v31)
			{
				v32 = *a3;
				*v31 = v30;
				v31[1] = v32;
				*a3 = (__int64)v31;
			}
		}
		v33 = sub_140932570((__int64)v5);
		if (v27 && v33)
		{
			v27[2] &= ~2ui64;
			v27[2] |= 1ui64;
			v27[3] = v33;
		}
		sub_14091C240(a1, 0);
		v34 = sub_140932450((__int64)v5, 22);
		if (!*v5)
		{
			v35 = sub_14092D590((__int64)v5, 16i64);
			if (v35)
			{
				v36 = *a3;
				*v35 = v34;
				v35[1] = v36;
				*a3 = (__int64)v35;
			}
		}
		v37 = sub_140932570((__int64)v5);
		if (v25 && v37)
		{
			v25[2] &= ~2ui64;
			v25[2] |= 1ui64;
			v25[3] = v37;
		}
	}
	if (v9)
	{
		if (a5)
		{
			sub_14091B490(v5, a3, (__int64)v9);
		}
		else
		{
			v38 = sub_140932570((__int64)v5);
			if (v38)
			{
				v9[2] &= ~2ui64;
				v9[2] |= 1ui64;
				v9[3] = v38;
			}
		}
	}
	return a2 + 2;
}

