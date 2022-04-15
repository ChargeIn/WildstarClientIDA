//----- (0000000140925A10) ----------------------------------------------------
__int64 __fastcall sub_140925A10(__int64 a1)
{
	unsigned int* v1; // rdi
	int v2; // r14d
	_WORD* v4; // rbx
	_WORD* v5; // rdx
	_WORD* v6; // r12
	__int64 v7; // rax
	bool v8; // zf
	int v9; // r15d
	int v10; // ebp
	__int64 v11; // rax
	__int64* v12; // rcx
	__int64 i; // rdx
	__int64 v14; // rax
	int v15; // r13d
	int v16; // r15d
	__int64 v17; // r8
	_WORD* v18; // rcx
	_WORD* j; // r14
	char* v20; // rax
	_QWORD* v21; // rbx
	_QWORD* v22; // rax
	__int64 v23; // rcx
	_QWORD* v24; // rax
	__int64* k; // rdx
	__int64 v26; // rcx
	_QWORD* v27; // rax
	__int64* m; // r8
	__int64 v29; // rcx
	_QWORD* v30; // rbp
	_QWORD* v31; // rax
	__int64* n; // rdx
	__int64 v33; // rcx
	_QWORD* v34; // rax
	_QWORD* v35; // rax
	__int64 result; // rax
	__int64 v37[2]; // [rsp+40h] [rbp-78h] BYREF
	_QWORD* v38; // [rsp+50h] [rbp-68h]
	__int64* v39; // [rsp+58h] [rbp-60h]
	_WORD* v40; // [rsp+60h] [rbp-58h]
	BOOL v41; // [rsp+C0h] [rbp+8h]
	__int64 v42; // [rsp+C8h] [rbp+10h]
	__int64 v43; // [rsp+D0h] [rbp+18h]
	unsigned __int64 v44; // [rsp+D8h] [rbp+20h]

	v1 = *(unsigned int**)a1;
	v2 = 0;
	v4 = (_WORD*)(*(_QWORD*)(a1 + 8) + 2i64 * *(int*)(*(_QWORD*)(a1 + 208) + 24i64));
	v5 = v4;
	v6 = &v4[(*v4 != 125) + 2];
	do
	{
		v7 = (unsigned __int16)v5[1];
		v8 = v5[v7] == 113;
		v5 += v7;
	} while (v8);
	v44 = (unsigned __int64)(v5 + 2);
	v9 = sub_14092F7C0(a1, v6, (unsigned __int64)(v5 + 2));
	v10 = sub_14092EF20(a1, v4, 1);
	v42 = *(_QWORD*)(a1 + 176);
	v43 = *(_QWORD*)(a1 + 224);
	v41 = v10 >= 0;
	if (v10 < 0)
		v10 = 0;
	LOBYTE(v2) = v4[(unsigned __int16)v4[1]] == 113;
	*(_QWORD*)(*(_QWORD*)(a1 + 208) + 8i64) = sub_140932570((__int64)v1);
	v11 = *(_QWORD*)(a1 + 208);
	v12 = *(__int64**)(v11 + 16);
	for (i = *(_QWORD*)(v11 + 8); v12; v12 = (__int64*)v12[1])
	{
		v14 = *v12;
		if (*v12 && i)
		{
			*(_QWORD*)(v14 + 16) &= ~2ui64;
			*(_QWORD*)(v14 + 16) |= 1ui64;
			*(_QWORD*)(v14 + 24) = i;
		}
	}
	sub_140931FA0(v1, 3, 0i64);
	v15 = v2 + v10;
	v16 = v2 + v10 + v9;
	sub_14091B4D0(a1, v16);
	if (!*v1)
	{
		v1[26] = 0;
		sub_14092AA10(v1, 258, -8 * v16, 3, 0i64);
	}
	sub_140927F00((unsigned int**)a1, v6, v44, 1, v16, v15);
	if (!*v1)
	{
		v17 = *(int*)(a1 + 44) + 48i64;
		v1[26] = 0;
		sub_14092AA10(v1, 267, v17, 2, 0i64);
	}
	if (v41)
		sub_14092FA70(a1, v4, v15 - 1, (unsigned int)v2, 1);
	if (v2 > 0 && !*v1)
	{
		v1[26] = 0;
		sub_14092AA10(v1, 258, -8i64, 6, 0i64);
	}
	v18 = v6;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 224) = 0i64;
	v40 = v6;
	v37[0] = 0i64;
	v37[1] = 0i64;
	v38 = 0i64;
	v39 = 0i64;
	*(_QWORD*)(a1 + 232) = 0i64;
	for (j = &v4[(unsigned __int16)v4[1]]; ; j += (unsigned __int16)j[1])
	{
		v38 = 0i64;
		v39 = 0i64;
		if (v18 != v6 && !*v1)
		{
			v1[26] = 0;
			v20 = sub_14092D140((__int64)v1, 1, 6, 0i64, 258, -8i64);
			if (v20)
				*v20 = -117;
			v18 = v40;
		}
		sub_140925310(a1, v18, (unsigned __int64)j, (__int64)v37);
		if (*v1)
			break;
		v21 = sub_140932450((__int64)v1, 22);
		if (!*v1)
		{
			v22 = sub_14092D590((__int64)v1, 16i64);
			if (v22)
			{
				v23 = *(_QWORD*)(a1 + 232);
				*v22 = v21;
				v22[1] = v23;
				*(_QWORD*)(a1 + 232) = v22;
			}
		}
		sub_14091DFC0(a1, v38);
		if (*v1)
			break;
		v24 = sub_140932570((__int64)v1);
		for (k = v39; k; k = (__int64*)k[1])
		{
			v26 = *k;
			if (*k && v24)
			{
				*(_QWORD*)(v26 + 16) &= ~2ui64;
				*(_QWORD*)(v26 + 16) |= 1ui64;
				*(_QWORD*)(v26 + 24) = v24;
			}
		}
		if (*j != 113)
		{
			if (*(_QWORD*)(a1 + 224))
			{
				v27 = sub_140932570((__int64)v1);
				for (m = *(__int64**)(a1 + 224); m; m = (__int64*)m[1])
				{
					v29 = *m;
					if (*m && v27)
					{
						*(_QWORD*)(v29 + 16) &= ~2ui64;
						*(_QWORD*)(v29 + 16) |= 1ui64;
						*(_QWORD*)(v29 + 24) = v27;
					}
				}
			}
			sub_140932690(v1, 6, 5, 0i64, 512, 0i64);
			v30 = sub_140932450((__int64)v1, 22);
			v31 = sub_140932570((__int64)v1);
			for (n = *(__int64**)(a1 + 232); n; n = (__int64*)n[1])
			{
				v33 = *n;
				if (*n && v31)
				{
					*(_QWORD*)(v33 + 16) &= ~2ui64;
					*(_QWORD*)(v33 + 16) |= 1ui64;
					*(_QWORD*)(v33 + 24) = v31;
				}
			}
			sub_140932690(v1, 6, 2, 0i64, 267, *(int*)(a1 + 44));
			if (v41)
			{
				sub_140932A90(v1, 27, 2, 0i64, 2, 0i64, 512, 8i64 * v15);
				v34 = sub_140932450((__int64)v1, 23);
				sub_14091B490(v1, (__int64*)(a1 + 256), (__int64)v34);
				sub_140932A90(v1, 25, 2, 0i64, 2, 0i64, 512, 8i64 * v15);
			}
			sub_140932690(v1, 6, 5, 0i64, 512, 1i64);
			v35 = sub_140932570((__int64)v1);
			if (v30 && v35)
			{
				v30[2] &= ~2ui64;
				v30[2] |= 1ui64;
				v30[3] = v35;
			}
			sub_140927F00((unsigned int**)a1, v6, v44, 0, v16, v15);
			sub_14092EC50((unsigned int**)a1, v16);
			sub_140932690(v1, 6, 3, 0i64, 258, 8i64);
			sub_140932690(v1, 6, 1, 0i64, 5, 0i64);
			sub_140932690(v1, 6, 267, *(int*)(a1 + 44), 3, 0i64);
			sub_1409320B0(v1, 258, 0i64);
			break;
		}
		v18 = j + 2;
		v40 = j + 2;
	}
	*(_QWORD*)(a1 + 176) = v42;
	result = v43;
	*(_QWORD*)(a1 + 224) = v43;
	return result;
}

