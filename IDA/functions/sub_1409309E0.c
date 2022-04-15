//----- (00000001409309E0) ----------------------------------------------------
__int64 __fastcall sub_1409309E0(__int64 a1)
{
	unsigned int* v1; // rbx
	__int64 v3; // rcx
	char* v4; // rax
	_QWORD* v5; // rdi
	_QWORD* v6; // rbp
	_QWORD* v7; // rax
	__int64 v8; // rcx
	_QWORD* v9; // rax

	v1 = *(unsigned int**)a1;
	if (!**(_DWORD**)a1)
	{
		v3 = *(_QWORD*)a1;
		v1[26] = 0;
		v4 = sub_14092D140(v3, 2, 1, 0i64, 262, 0i64);
		if (v4)
			*(_WORD*)v4 = -18673;
	}
	if (*(_DWORD*)(a1 + 316))
	{
		v5 = sub_140931B80(v1, 2, 1, 0i64, 512, 55296i64);
		v6 = sub_140932450((__int64)v1, 23);
		if (!*v1)
		{
			v7 = sub_14092D590((__int64)v1, 16i64);
			if (v7)
			{
				v8 = *(_QWORD*)(a1 + 320);
				*v7 = v6;
				v7[1] = v8;
				*(_QWORD*)(a1 + 320) = v7;
			}
		}
		v9 = sub_140932570((__int64)v1);
		if (v5 && v9)
		{
			v5[2] &= ~2ui64;
			v5[2] |= 1ui64;
			v5[3] = v9;
		}
	}
	return sub_140932A90(v1, 25, 6, 0i64, 6, 0i64, 512, 2i64);
}

