//----- (000000014092D690) ----------------------------------------------------
_QWORD* __fastcall sub_14092D690(__int64 a1, unsigned __int16 a2, int a3, int a4)
{
	unsigned int* v4; // rdi
	__int64 v9; // rcx
	char* v10; // rax
	__int64 v11; // rax
	_QWORD* v12; // r12
	_QWORD* v13; // rsi
	__int64 v14; // r15
	__int64 v15; // rbp
	__int64 v16; // rbx
	_QWORD* v17; // rax
	_QWORD* v18; // rbx
	_QWORD* v19; // rax
	_QWORD* v20; // rax
	_QWORD* result; // rax

	v4 = *(unsigned int**)a1;
	if (a4)
	{
		if (!*v4)
		{
			v9 = *(_QWORD*)a1;
			v4[26] = 0;
			v10 = sub_14092D140(v9, 1, 7, 0i64, 5, 0i64);
			if (v10)
				*v10 = -119;
		}
		v11 = *(int*)(a1 + 56);
		if (!*v4)
		{
			v4[26] = 0;
			sub_14092AA10(v4, 7, 0i64, 267, v11 + 48);
		}
	}
	v12 = sub_140932570((__int64)v4);
	v13 = sub_140931B80(v4, 3, 6, 0i64, 7, 0i64);
	sub_140932690(v4, 9, 1, 0i64, 262, 0i64);
	if (!a3 || a2 > 0xFFu || (v14 = a2, v15 = *(unsigned __int8*)(*(_QWORD*)(a1 + 64) + a2), a2 == (_WORD)v15))
	{
		v17 = sub_140931B80(v4, 0, 1, 0i64, 512, a2);
	}
	else if ((((unsigned __int16)(a2 ^ v15) - 1) & (unsigned __int16)(a2 ^ v15)) != 0)
	{
		sub_140932A90(v4, 539, 0, 0i64, 1, 0i64, 512, a2);
		sub_140932FC0(v4, 6, 3, 0i64, 0, 0, 0);
		sub_140932A90(v4, 539, 0, 0i64, 1, 0i64, 512, v15);
		sub_140932FC0(v4, 543, 3, 0i64, 3, 0, 0);
		v17 = sub_140932450((__int64)v4, 1);
	}
	else
	{
		v16 = (unsigned __int16)(a2 ^ v15);
		sub_140932A90(v4, 31, 3, 0i64, 1, 0i64, 512, v16);
		v17 = sub_140931B80(v4, 0, 3, 0i64, 512, v14 | v16);
	}
	v18 = v17;
	sub_140932A90(v4, 25, 6, 0i64, 6, 0i64, 512, 2i64);
	v19 = sub_140932450((__int64)v4, 22);
	if (v19 && v12)
	{
		v19[2] &= ~2ui64;
		v19[2] |= 1ui64;
		v19[3] = v12;
	}
	v20 = sub_140932570((__int64)v4);
	if (v18 && v20)
	{
		v18[2] &= ~2ui64;
		v18[2] |= 1ui64;
		v18[3] = v20;
	}
	result = sub_140932570((__int64)v4);
	if (v13 && result)
	{
		v13[2] &= ~2ui64;
		v13[2] |= 1ui64;
		v13[3] = result;
	}
	if (a4)
	{
		if (!*v4)
		{
			v4[26] = 0;
			return (_QWORD*)sub_14092AA10(v4, 7, 0i64, 5, 0i64);
		}
	}
	return result;
}

