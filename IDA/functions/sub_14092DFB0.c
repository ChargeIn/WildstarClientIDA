//----- (000000014092DFB0) ----------------------------------------------------
_QWORD* __fastcall sub_14092DFB0(__int64 a1, int a2)
{
	unsigned int* v2; // rbx
	_QWORD* v5; // rbp
	char* v6; // rax
	__int64 v7; // rax
	_QWORD* v8; // rsi
	_QWORD* v9; // rbp
	_QWORD* v10; // r15
	_QWORD* v11; // r14
	_QWORD* v12; // rax
	_QWORD* v13; // rax
	_QWORD* v14; // rax
	_QWORD* v15; // rax
	_QWORD* result; // rax
	_QWORD* v17; // r14
	_QWORD* v18; // rsi
	_QWORD* v19; // r15
	__int64* i; // rcx
	__int64 v21; // rax
	_QWORD* v22; // rdi
	_QWORD* v23; // rax
	_QWORD* v24; // rsi
	_QWORD* v25; // rax
	_QWORD* v26; // rax
	_QWORD* v27; // rax
	__int64* v28; // [rsp+70h] [rbp+8h] BYREF

	v2 = *(unsigned int**)a1;
	v5 = 0i64;
	v28 = 0i64;
	if (a2)
	{
		if (!*v2)
		{
			v2[26] = 0;
			v6 = sub_14092D140((__int64)v2, 1, 7, 0i64, 5, 0i64);
			if (v6)
				*v6 = -119;
		}
		v7 = *(int*)(a1 + 56);
		if (!*v2)
		{
			v2[26] = 0;
			sub_14092AA10(v2, 7, 0i64, 267, v7 + 48);
		}
	}
	if (*(_DWORD*)(a1 + 84) || *(int*)(a1 + 88) <= 255)
	{
		sub_140932690(v2, 6, 1, 0i64, 9, 0i64);
		sub_140932690(v2, 6, 3, 0i64, 257, 8i64);
		v17 = sub_140931B80(v2, 5, 6, 0i64, 3, 0i64);
		sub_1409318F0(a1);
		v18 = sub_140932570((__int64)v2);
		sub_1409309E0(a1);
		v19 = sub_140931B80(v2, 3, 6, 0i64, 7, 0i64);
		if ((unsigned int)(*(_DWORD*)(a1 + 84) - 1) <= 1)
			v5 = sub_140931B80(v2, 0, 1, 0i64, 512, 13i64);
		sub_14091C090(a1, *(_DWORD*)(a1 + 84), &v28, 0);
		for (i = v28; i; i = (__int64*)i[1])
		{
			v21 = *i;
			if (*i && v18)
			{
				*(_QWORD*)(v21 + 16) &= ~2ui64;
				*(_QWORD*)(v21 + 16) |= 1ui64;
				*(_QWORD*)(v21 + 24) = v18;
			}
		}
		if ((unsigned int)(*(_DWORD*)(a1 + 84) - 1) <= 1)
		{
			v22 = sub_140932450((__int64)v2, 22);
			v23 = sub_140932570((__int64)v2);
			if (v5 && v23)
			{
				v5[2] &= ~2ui64;
				v5[2] |= 1ui64;
				v5[3] = v23;
			}
			v24 = sub_140931B80(v2, 3, 6, 0i64, 7, 0i64);
			sub_140932690(v2, 9, 1, 0i64, 262, 0i64);
			sub_140932A90(v2, 539, 0, 0i64, 1, 0i64, 512, 10i64);
			sub_140932FC0(v2, 6, 1, 0i64, 0, 0, 0);
			sub_140932A90(v2, 33, 1, 0i64, 1, 0i64, 512, 1i64);
			sub_140932A90(v2, 25, 6, 0i64, 6, 0i64, 1, 0i64);
			v25 = sub_140932570((__int64)v2);
			if (v24 && v25)
			{
				v24[2] &= ~2ui64;
				v24[2] |= 1ui64;
				v24[3] = v25;
			}
			v26 = sub_140932570((__int64)v2);
			if (v22 && v26)
			{
				v22[2] &= ~2ui64;
				v22[2] |= 1ui64;
				v22[3] = v26;
			}
		}
		v27 = sub_140932570((__int64)v2);
		if (v19 && v27)
		{
			v19[2] &= ~2ui64;
			v19[2] |= 1ui64;
			v19[3] = v27;
		}
		result = sub_140932570((__int64)v2);
		if (v17 && result)
		{
			v17[2] &= ~2ui64;
			v17[2] |= 1ui64;
			v17[3] = result;
		}
		if (a2)
			return (_QWORD*)sub_140932690(v2, 6, 7, 0i64, 5, 0i64);
	}
	else
	{
		v8 = sub_140931B80(v2, 3, 6, 0i64, 7, 0i64);
		if (!*v2)
		{
			v2[26] = 0;
			sub_14092AA10(v2, 1, 0i64, 9, 0i64);
			if (!*v2)
			{
				v2[26] = 0;
				sub_14092AA10(v2, 3, 0i64, 257, 8i64);
				if (!*v2)
				{
					v2[26] = 0;
					sub_14092AA10(v2, 1, 0i64, 257, 16i64);
				}
			}
		}
		v9 = sub_140931B80(v2, 5, 6, 0i64, 3, 0i64);
		sub_140932A90(v2, 25, 1, 0i64, 1, 0i64, 512, 4i64);
		sub_140932A90(v2, 2075, 0, 0i64, 6, 0i64, 1, 0i64);
		sub_140932FC0(v2, 6, 3, 0i64, 0, 0, 3);
		sub_140932A90(v2, 33, 3, 0i64, 3, 0i64, 512, 1i64);
		sub_140932A90(v2, 27, 6, 0i64, 6, 0i64, 3, 0i64);
		v10 = sub_140932570((__int64)v2);
		sub_140932A90(v2, 25, 6, 0i64, 6, 0i64, 512, 2i64);
		v11 = sub_140931B80(v2, 3, 6, 0i64, 7, 0i64);
		sub_140932690(v2, 9, 1, 0i64, 262, -4i64);
		sub_140932690(v2, 9, 3, 0i64, 262, -2i64);
		v12 = sub_140931B80(v2, 1, 1, 0i64, 512, (unsigned __int8)BYTE1(*(_DWORD*)(a1 + 88)));
		if (v12 && v10)
		{
			v12[2] &= ~2ui64;
			v12[2] |= 1ui64;
			v12[3] = v10;
		}
		v13 = sub_140931B80(v2, 1, 3, 0i64, 512, *(unsigned __int8*)(a1 + 88));
		if (v13 && v10)
		{
			v13[2] &= ~2ui64;
			v13[2] |= 1ui64;
			v13[3] = v10;
		}
		v14 = sub_140932570((__int64)v2);
		if (v11 && v14)
		{
			v11[2] &= ~2ui64;
			v11[2] |= 1ui64;
			v11[3] = v14;
		}
		v15 = sub_140932570((__int64)v2);
		if (v9 && v15)
		{
			v9[2] &= ~2ui64;
			v9[2] |= 1ui64;
			v9[3] = v15;
		}
		result = sub_140932570((__int64)v2);
		if (v8 && result)
		{
			v8[2] &= ~2ui64;
			v8[2] |= 1ui64;
			v8[3] = result;
		}
		if (a2)
			return (_QWORD*)sub_140932690(v2, 6, 7, 0i64, 267, 16i64);
	}
	return result;
}

