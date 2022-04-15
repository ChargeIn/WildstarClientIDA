//----- (000000014091C780) ----------------------------------------------------
_QWORD* __fastcall sub_14091C780(__int64 a1)
{
	unsigned int* v1; // rbx
	bool v2; // zf
	unsigned int* v4; // rcx
	_QWORD* v6; // rax
	__int64 v7; // r9
	_QWORD* v8; // rbp
	_QWORD* v9; // rsi
	__int64 v10; // r8
	_QWORD* v11; // rax
	_QWORD* v12; // r14
	_QWORD* v13; // rax
	__int64 v14; // rsi
	_QWORD* v15; // rax
	_QWORD* v16; // rsi
	_QWORD* v17; // rax
	__int64 v18; // rcx
	_QWORD* v19; // rax

	v1 = *(unsigned int**)a1;
	v2 = *(_DWORD*)(a1 + 80) == 0;
	v4 = *(unsigned int**)a1;
	if (v2)
		return sub_140931B80(v4, 3, 6, 0i64, 7, 0i64);
	v6 = sub_140931B80(v4, 2, 6, 0i64, 7, 0i64);
	v7 = *(int*)(a1 + 48);
	v8 = v6;
	if (*(_DWORD*)(a1 + 80) == 1)
	{
		v9 = sub_140931B80(v1, 3, 267, v7, 6, 0i64);
		if (!*v1)
		{
			v10 = *(int*)(a1 + 52) + 48i64;
			v1[26] = 0;
			sub_14092AA10(v1, 267, v10, 512, -1i64);
		}
		v11 = sub_140932570((__int64)v1);
		if (v9 && v11)
		{
			v9[2] &= ~2ui64;
			v9[2] |= 1ui64;
			v9[3] = v11;
		}
		v12 = sub_140932450((__int64)v1, 22);
	}
	else
	{
		v13 = sub_140931B80(v1, 3, 267, v7, 6, 0i64);
		v14 = *(_QWORD*)(a1 + 168);
		v12 = v13;
		v15 = sub_140932450((__int64)v1, 22);
		if (v14)
		{
			if (v15)
			{
				v15[2] &= ~2ui64;
				v15[2] |= 1ui64;
				v15[3] = v14;
			}
		}
		else
		{
			v16 = v15;
			if (!*v1)
			{
				v17 = sub_14092D590((__int64)v1, 16i64);
				if (v17)
				{
					v18 = *(_QWORD*)(a1 + 216);
					*v17 = v16;
					v17[1] = v18;
					*(_QWORD*)(a1 + 216) = v17;
				}
			}
		}
	}
	v19 = sub_140932570((__int64)v1);
	if (v8)
	{
		if (v19)
		{
			v8[2] &= ~2ui64;
			v8[2] |= 1ui64;
			v8[3] = v19;
		}
	}
	return v12;
}
// 14091C89C: conditional instruction was optimized away because rsi.8!=0

