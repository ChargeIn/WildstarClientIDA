//----- (0000000140930B10) ----------------------------------------------------
_QWORD* __fastcall sub_140930B10(__int64 a1)
{
	unsigned int* v1; // rbx
	char* v3; // rax
	_QWORD* v4; // rsi
	_QWORD* v5; // rax
	_QWORD* result; // rax
	_QWORD* v7; // rdi

	v1 = *(unsigned int**)a1;
	if (*(_DWORD*)(a1 + 316))
	{
		if (!*v1)
		{
			v1[26] = 0;
			v3 = sub_14092D140((__int64)v1, 2, 3, 0i64, 262, 0i64);
			if (v3)
				*(_WORD*)v3 = -18673;
		}
		sub_140932A90(v1, 25, 6, 0i64, 6, 0i64, 512, 2i64);
		if (!*v1)
		{
			v1[26] = 0;
			sub_14092AA10(v1, 1, 0i64, 512, 0i64);
		}
		v4 = sub_140931B80(v1, 4, 3, 0i64, 512, 255i64);
		sub_140932690(v1, 7, 1, 0i64, 259, *(_QWORD*)(a1 + 104));
		v5 = sub_140932570((__int64)v1);
		if (v4)
		{
			if (v5)
			{
				v4[2] &= ~2ui64;
				v4[2] |= 1ui64;
				v4[3] = v5;
			}
		}
		sub_140932A90(v1, 30, 3, 0i64, 3, 0i64, 512, 64512i64);
		sub_140932A90(v1, 539, 0, 0i64, 3, 0i64, 512, 55296i64);
		sub_140932FC0(v1, 6, 3, 0i64, 0, 0, 0);
		sub_140932A90(v1, 33, 3, 0i64, 3, 0i64, 512, 1i64);
		return (_QWORD*)sub_140932A90(v1, 25, 6, 0i64, 6, 0i64, 3, 0i64);
	}
	else
	{
		sub_140932690(*(unsigned int**)a1, 9, 3, 0i64, 262, 0i64);
		sub_140932A90(v1, 25, 6, 0i64, 6, 0i64, 512, 2i64);
		if (!*v1)
		{
			v1[26] = 0;
			sub_14092AA10(v1, 1, 0i64, 512, 0i64);
		}
		v7 = sub_140931B80(v1, 4, 3, 0i64, 512, 255i64);
		sub_140932690(v1, 7, 1, 0i64, 259, *(_QWORD*)(a1 + 104));
		result = sub_140932570((__int64)v1);
		if (v7 && result)
		{
			v7[2] &= ~2ui64;
			v7[2] |= 1ui64;
			v7[3] = result;
		}
	}
	return result;
}
