//----- (0000000140920C40) ----------------------------------------------------
unsigned __int16* __fastcall sub_140920C40(__int64 a1, unsigned __int16* a2, __int64 a3)
{
	unsigned int* v3; // rbx
	_QWORD* v4; // rax
	unsigned __int16* v7; // rbp
	__int64* v8; // r15
	_QWORD* v9; // r13
	unsigned __int16* result; // rax
	__int64 v11; // rax
	unsigned __int16 v12; // si
	int v13; // ecx
	int v14; // ecx
	int v15; // ecx
	int v16; // ecx
	int v17; // ecx
	int v18; // eax
	int v19; // r12d
	__int64 v20; // rax
	char* v21; // rax
	int v22; // edi
	unsigned __int16* v23; // rdx
	__int64 v24; // rbp
	int v25; // r12d
	int v26; // eax
	int v27; // r12d
	_QWORD* v28; // rdi
	__int64* v29; // rax
	__int64 v30; // r9
	_QWORD* v31; // rdi
	__int64* v32; // rax
	_QWORD* v33; // rax
	_QWORD* v34; // rax
	__int64* i; // rdx
	__int64 v36; // rcx
	int v37; // r8d
	__int64 v38; // r9
	_QWORD* v39; // rax
	_QWORD* j; // rax
	__int64 v41; // rcx
	int v42; // [rsp+40h] [rbp-58h]
	int v43; // [rsp+44h] [rbp-54h]
	int v44; // [rsp+48h] [rbp-50h]
	int v45; // [rsp+4Ch] [rbp-4Ch]
	_QWORD* v46; // [rsp+50h] [rbp-48h]
	int v47; // [rsp+50h] [rbp-48h]
	__int64 v48; // [rsp+58h] [rbp-40h]
	int v50; // [rsp+B8h] [rbp+20h]

	v3 = *(unsigned int**)a1;
	v4 = 0i64;
	v45 = 0;
	v43 = 0;
	v50 = 0;
	v7 = 0i64;
	v8 = 0i64;
	if (!**(_DWORD**)a1)
		v4 = sub_14092D590((__int64)v3, 56i64);
	v9 = v4;
	result = 0i64;
	if (*v3)
		return result;
	*v9 = 0i64;
	v9[1] = 0i64;
	v9[2] = 0i64;
	v9[3] = 0i64;
	v9[4] = 0i64;
	v9[5] = 0i64;
	v9[6] = 0i64;
	v11 = *(_QWORD*)(a3 + 16);
	v9[4] = a2;
	*v9 = v11;
	*(_QWORD*)(a3 + 16) = v9;
	if (*a2 == 142)
	{
		v50 = 1;
		++a2;
	}
	v12 = *a2;
	v13 = *a2;
	v44 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4 * (((__int64)a2 - *(_QWORD*)(a1 + 8)) >> 1));
	*((_DWORD*)v9 + 10) = v44;
	v14 = v13 - 126;
	if (!v14)
		goto LABEL_11;
	v15 = v14 - 2;
	if (!v15)
	{
	LABEL_10:
		v17 = a2[2];
		v7 = a2 + 3;
		v45 = *(_DWORD*)(a1 + 32) + 8 * v17;
		v43 = 2 * v17;
		goto LABEL_12;
	}
	v16 = v15 - 3;
	if (!v16)
	{
	LABEL_11:
		v7 = a2 + 2;
		goto LABEL_12;
	}
	if (v16 == 2)
		goto LABEL_10;
LABEL_12:
	v18 = sub_14092EF20(a1, a2, 0);
	v42 = v18;
	*((_DWORD*)v9 + 11) = v18;
	if (v18 >= 0)
	{
		v25 = v18 + 1;
		v47 = v18 + 1;
		if (!v50)
		{
			v25 = v18 + 2;
			v47 = v18 + 2;
		}
		if (v12 == 126 || v12 == 131)
			v47 = ++v25;
		*((_DWORD*)v9 + 12) = v25;
		sub_14091B4D0(a1, v25);
		sub_140932690(v3, 6, 1, 0i64, 267, v44);
		v26 = 8 * v25;
		v27 = 0;
		sub_140932A90(v3, 27, 3, 0i64, 2, 0i64, 512, v26);
		sub_140932690(v3, 6, 267, v44, 3, 0i64);
		if (!v50)
		{
			sub_140932690(v3, 6, 258, -8i64, 512, 1i64);
			v27 = 1;
		}
		if (v12 == 126 || v12 == 131)
			sub_140932690(v3, 6, 258, 8 * (-1 - v27++), 6, 0i64);
		sub_140932690(v3, 6, 258, 8 * (-1 - v27), 1, 0i64);
		v19 = v47;
		v22 = v42;
		sub_14092FA70(a1, a2, v47 - 1, (unsigned int)(v47 - v42), 0);
	}
	else
	{
		if (v12 == 128 || (v19 = 1, v12 == 133))
			v19 = 2;
		if (!v50)
			++v19;
		*((_DWORD*)v9 + 12) = v19;
		sub_14091B4D0(a1, v19);
		if (!*v3)
		{
			v3[26] = 0;
			sub_14092AA10(v3, 267, v44 + 48i64, 2, 0i64);
		}
		if (v12 == 128 || v12 == 133)
		{
			v20 = *(int*)(a1 + 36);
			if (!*v3)
			{
				v3[26] = 0;
				v21 = sub_14092D140((__int64)v3, 1, 1, 0i64, 267, v20 + 8 * (v43 + 6i64));
				if (v21)
					*v21 = -117;
			}
			sub_140932690(v3, 6, 3, 0i64, 267, *(int*)(a1 + 36) + 8i64 * (v43 + 1));
			sub_140932690(v3, 6, 258, -8i64, 1, 0i64);
			sub_140932690(v3, 6, 258, -16i64, 3, 0i64);
		}
		else
		{
			sub_140932690(v3, 6, 258, -8i64, 6, 0i64);
		}
		if (!v50)
			sub_140932690(v3, 6, 258, -8 * v19, 512, 1i64);
		v22 = v42;
	}
	if (v12 == 128 || v12 == 133)
		sub_140932690(v3, 6, 267, v45, 6, 0i64);
	v46 = sub_140932570((__int64)v3);
	v48 = v22;
	if (*a2 != 117)
	{
		while (1)
		{
			v23 = v7;
			v24 = a1;
			v9[2] = 0i64;
			v9[3] = 0i64;
			a2 += a2[1];
			sub_140925310(a1, v23, a2, v9);
			if (*v3)
				return 0i64;
			if (v22 >= 0)
			{
				if (v12 == 128 || v12 == 133)
				{
					sub_140932A90(v3, 25, 2, 0i64, 267, v44, 512, 8i64 * v19);
					sub_140932690(v3, 6, 1, 0i64, 267, v45);
					sub_140932690(v3, 6, 267, *(int*)(a1 + 36) + 8i64 * (v43 + 1), 6, 0i64);
					sub_140932690(v3, 6, 267, v45, 6, 0i64);
					sub_140932690(v3, 6, 267, *(int*)(a1 + 36) + 8i64 * v43, 1, 0i64);
				}
				else
				{
					sub_140932690(v3, 6, 3, 0i64, 267, v44);
					sub_140932A90(v3, 25, 2, 0i64, 3, 0i64, 512, 8i64 * v19);
					if (v12 == 131)
						sub_140932690(v3, 6, 1, 0i64, 259, 8i64 * (v22 + 1));
					sub_140932690(v3, 6, 259, 8i64 * (v22 + 1), 6, 0i64);
				}
				if (((v12 - 131) & 0xFFFD) == 0)
				{
					v31 = sub_140931B80(v3, 0, 1, 0i64, 6, 0i64);
					if (!*v3)
					{
						v32 = sub_14092D590((__int64)v3, 16i64);
						if (v32)
						{
							v32[1] = (__int64)v8;
							*v32 = (__int64)v31;
							v8 = v32;
						}
					}
				}
				if (!v50)
				{
					v30 = -8i64;
					goto LABEL_71;
				}
			}
			else
			{
				sub_140932690(v3, 6, 2, 0i64, 267, v44);
				if (v12 == 128 || v12 == 133)
				{
					sub_140932690(v3, 6, 1, 0i64, 267, v45);
					sub_140932690(v3, 6, 267, *(int*)(a1 + 36) + 8i64 * (v43 + 1), 6, 0i64);
					sub_140932690(v3, 6, 267, v45, 6, 0i64);
					sub_140932690(v3, 6, 267, *(int*)(a1 + 36) + 8i64 * v43, 1, 0i64);
				}
				else
				{
					if (v12 == 131)
						sub_140932690(v3, 6, 1, 0i64, 258, -8i64);
					sub_140932690(v3, 6, 258, -8i64, 6, 0i64);
				}
				if (((v12 - 131) & 0xFFFD) == 0)
				{
					v28 = sub_140931B80(v3, 0, 1, 0i64, 6, 0i64);
					if (!*v3)
					{
						v29 = sub_14092D590((__int64)v3, 16i64);
						if (v29)
						{
							v29[1] = (__int64)v8;
							*v29 = (__int64)v28;
							v8 = v29;
						}
					}
				}
				if (!v50)
				{
					v30 = -8 * v19;
				LABEL_71:
					sub_140932690(v3, 6, 258, v30, 512, 0i64);
				}
			}
			v33 = sub_140932450((__int64)v3, 22);
			if (v33 && v46)
			{
				v33[2] &= ~2ui64;
				v33[2] |= 1ui64;
				v33[3] = v46;
			}
			sub_14092EB40(a1);
			sub_14091DFC0(a1, v9[2]);
			if (*v3)
				return 0i64;
			v34 = sub_140932570((__int64)v3);
			for (i = (__int64*)v9[3]; i; i = (__int64*)i[1])
			{
				v36 = *i;
				if (*i && v34)
				{
					*(_QWORD*)(v36 + 16) &= ~2ui64;
					*(_QWORD*)(v36 + 16) |= 1ui64;
					*(_QWORD*)(v36 + 24) = v34;
				}
			}
			if (v48 >= 0)
			{
				if (v12 != 128 && v12 != 133)
				{
					sub_140932690(v3, 6, 3, 0i64, 267, v44);
					v22 = v42;
					sub_140932690(v3, 6, 6, 0i64, 259, 8i64 * (v42 + 1));
					goto LABEL_92;
				}
				if (*a2 == 117)
					sub_140932690(v3, 6, 3, 0i64, 267, v44);
			LABEL_90:
				sub_140932690(v3, 6, 6, 0i64, 267, v45);
				goto LABEL_91;
			}
			if (v12 == 128 || v12 == 133)
				goto LABEL_90;
			sub_140932690(v3, 6, 6, 0i64, 258, -8i64);
		LABEL_91:
			v22 = v42;
		LABEL_92:
			if (*a2 == 117)
				goto LABEL_96;
			v7 = a2 + 2;
		}
	}
	v24 = a1;
LABEL_96:
	v9[3] = 0i64;
	if (!v50)
	{
		if (v42 >= 0)
		{
			v37 = 259;
			v38 = 8i64 * (v19 - 1);
		}
		else
		{
			v37 = 258;
			v38 = -8 * v19;
		}
		v39 = sub_140931B80(v3, 1, v37, v38, 512, 0i64);
		sub_14091B490(v3, v9 + 3, (__int64)v39);
	}
	for (j = sub_140932570((__int64)v3); v8; v8 = (__int64*)v8[1])
	{
		v41 = *v8;
		if (*v8)
		{
			if (j)
			{
				*(_QWORD*)(v41 + 16) &= ~2ui64;
				*(_QWORD*)(v41 + 16) |= 1ui64;
				*(_QWORD*)(v41 + 24) = j;
			}
		}
	}
	sub_140928600(v24);
	return a2 + 2;
}
// 14091DFC0: using guessed type __int64 __fastcall sub_14091DFC0(_QWORD, _QWORD);
// 140925310: using guessed type __int64 __fastcall sub_140925310(_QWORD, _QWORD, _QWORD, _QWORD);

