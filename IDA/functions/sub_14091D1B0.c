//----- (000000014091D1B0) ----------------------------------------------------
_WORD* __fastcall sub_14091D1B0(__int64 a1, _WORD* a2, __int64 a3, int a4)
{
	unsigned int* v4; // rsi
	int v5; // ebp
	_WORD* v7; // rbx
	__int16 v9; // r12
	int v10; // edi
	int v11; // eax
	__int64 v12; // r15
	int v13; // r13d
	__int64* v14; // rax
	_WORD* v15; // rdi
	char* v16; // rax
	_QWORD* v17; // rax
	__int64* v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // rbx
	_QWORD* v21; // rdi
	_QWORD* v22; // rax
	__int64 v23; // rcx
	__int64 v24; // r9
	int v25; // r8d
	_QWORD* v26; // rbx
	_QWORD* v27; // rax
	__int64* v28; // rdx
	__int64 v29; // rcx
	_QWORD* v30; // rax
	__int64* i; // rdx
	__int64 v32; // rcx
	_QWORD* v33; // rax
	__int64* j; // rdx
	__int64 v35; // rcx
	__int64 v36; // r13
	__int64 v37; // rbx
	_QWORD* v38; // rax
	_QWORD* v39; // rax
	_QWORD* v40; // rax
	int v41; // ebp
	_QWORD* v42; // rbx
	_QWORD* v43; // rax
	__int64* k; // rdx
	__int64 v45; // rcx
	_QWORD* v46; // rax
	__int64 v47; // rbx
	_QWORD* v48; // rax
	_QWORD* v49; // rax
	_QWORD* v50; // rax
	_QWORD* v51; // rax
	__int64 v53; // [rsp+28h] [rbp-D0h]
	_WORD* v54; // [rsp+40h] [rbp-B8h]
	__int64 v55; // [rsp+48h] [rbp-B0h]
	__int64 v56; // [rsp+50h] [rbp-A8h]
	__int64 v57; // [rsp+58h] [rbp-A0h]
	__int64 v58; // [rsp+60h] [rbp-98h]
	_QWORD* v59; // [rsp+68h] [rbp-90h]
	__int64* v60; // [rsp+70h] [rbp-88h]
	__int64* v61; // [rsp+78h] [rbp-80h] BYREF
	__int64 v62[2]; // [rsp+80h] [rbp-78h] BYREF
	__int64 v63; // [rsp+90h] [rbp-68h]
	__int64* v64; // [rsp+98h] [rbp-60h]
	_WORD* v65; // [rsp+A0h] [rbp-58h]
	__int64* v66; // [rsp+A8h] [rbp-50h]
	__int16 v67; // [rsp+100h] [rbp+8h]
	int v68; // [rsp+108h] [rbp+10h]

	v4 = *(unsigned int**)a1;
	v5 = a4;
	v7 = a2;
	v9 = 125;
	v61 = 0i64;
	if (a4)
		v60 = (__int64*)(a3 + 40);
	else
		v60 = (__int64*)(a3 + 24);
	v58 = *(_QWORD*)(a1 + 176);
	v55 = *(_QWORD*)(a1 + 184);
	v56 = *(_QWORD*)(a1 + 224);
	v57 = *(_QWORD*)(a1 + 232);
	v59 = 0i64;
	if ((unsigned __int16)(*a2 - 140) <= 1u)
	{
		v9 = *a2;
		v7 = a2 + 1;
	}
	v10 = *(_DWORD*)(*(_QWORD*)(a1 + 16) + 4 * (((__int64)v7 - *(_QWORD*)(a1 + 8)) >> 1));
	v68 = v10;
	v11 = sub_14092EF20(a1, v7, 0);
	*(_DWORD*)(a3 + 52) = v10;
	v12 = v11;
	*(_DWORD*)(a3 + 48) = v11;
	v13 = 512;
	v67 = *v7;
	v14 = (__int64*)&v61;
	if (((*v7 - 119) & 0xFFFD) != 0)
		v14 = v60;
	v66 = v14;
	v15 = &v7[(unsigned __int16)v7[1]];
	v54 = v15;
	if (v9 == 141)
	{
		if (!*v4)
		{
			v4[26] = 0;
			v16 = sub_14092D140((__int64)v4, 1, 6, 0i64, 258, -8i64);
			if (v16)
				*v16 = -117;
		}
		sub_140932A90(*(unsigned int**)a1, 27, 2, 0i64, 2, 0i64, 512, 8i64);
		v59 = sub_140931B80(v4, 0, 6, 0i64, 512, 0i64);
	}
	if ((int)v12 >= 0)
	{
		sub_14091B4D0(a1, v12 + 2);
		if (!*v4)
		{
			v4[26] = 0;
			sub_14092AA10(v4, 1, 0i64, 267, v68 + 48i64);
		}
		sub_140932A90(v4, 27, 3, 0i64, 2, 0i64, 512, 8 * (int)v12 + 16);
		sub_140932690(v4, 6, 267, v68, 3, 0i64);
		sub_140932690(v4, 6, 258, -8i64, 6, 0i64);
		sub_140932690(v4, 6, 258, -16i64, 1, 0i64);
		sub_14092FA70(a1, v7, v12 + 1, 2i64, 0);
		v5 = a4;
	}
	else
	{
		if (!*v4)
		{
			v4[26] = 0;
			sub_14092AA10(v4, 267, v68 + 48i64, 2, 0i64);
		}
		sub_14091B4D0(a1, 1);
		sub_140932690(v4, 6, 258, -8i64, 6, 0i64);
	}
	v62[0] = 0i64;
	v62[1] = 0i64;
	v63 = 0i64;
	v64 = 0i64;
	v65 = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 224) = 0i64;
	while (1)
	{
		*(_QWORD*)(a1 + 184) = 0i64;
		*(_QWORD*)(a1 + 232) = 0i64;
		v63 = 0i64;
		v64 = 0i64;
		if (*v7 == 113 && !*v4)
		{
			v4[26] = 0;
			sub_14092AA10(v4, 6, 0i64, 258, -8i64);
		}
		v65 = v7;
		sub_140925310(a1, v7 + 2, v15, v62);
		if (*v4)
			break;
		v17 = sub_140932570((__int64)v4);
		v18 = *(__int64**)(a1 + 232);
		for (*(_QWORD*)(a1 + 184) = v17; v18; v18 = (__int64*)v18[1])
		{
			v19 = *v18;
			if (*v18 && v17)
			{
				*(_QWORD*)(v19 + 16) &= ~2ui64;
				*(_QWORD*)(v19 + 16) |= 1ui64;
				*(_QWORD*)(v19 + 24) = v17;
			}
		}
		if ((int)v12 >= 0)
		{
			if (((v67 - 120) & 0xFFFD) != 0 || v5)
			{
				v20 = v68;
				sub_140932A90(v4, 25, 2, 0i64, 267, v68, 512, 8i64 * ((int)v12 + 1));
			}
			else
			{
				v20 = v68;
				sub_140932690(v4, 6, 2, 0i64, 267, v68);
				v21 = sub_140932450((__int64)v4, 23);
				if (!*v4)
				{
					v22 = sub_14092D590((__int64)v4, 16i64);
					if (v22)
					{
						v23 = *(_QWORD*)(a1 + 256);
						*v22 = v21;
						v22[1] = v23;
						*(_QWORD*)(a1 + 256) = v22;
					}
				}
				v15 = v54;
			}
		}
		else
		{
			v20 = v68;
			sub_140932690(v4, 6, 2, 0i64, 267, v68);
		}
		if (((v67 - 120) & 0xFFFD) == 0)
		{
			if (v5)
			{
				v53 = 0i64;
				v24 = 0i64;
				v25 = 6;
			LABEL_49:
				sub_140932690(v4, 6, v25, v24, 258, v53);
				goto LABEL_50;
			}
			if (v9 == 140)
			{
				if ((int)v12 >= 0)
				{
					sub_140932690(v4, 6, 1, 0i64, 258, 8 * v12);
					sub_140932690(v4, 6, 6, 0i64, 258, 8i64 * ((int)v12 + 1));
					sub_140932690(v4, 6, 267, v20, 1, 0i64);
				}
				else
				{
					sub_140932690(v4, 6, 6, 0i64, 258, 0i64);
				}
				sub_140932A90(v4, 25, 2, 0i64, 2, 0i64, 512, 8i64);
				sub_140932690(v4, 6, 258, -8i64, 512, 0i64);
			}
			else if ((int)v12 >= 0)
			{
				v24 = v20;
				v25 = 267;
				v53 = 8 * v12;
				goto LABEL_49;
			}
		}
	LABEL_50:
		v26 = sub_140932450((__int64)v4, 22);
		if (!*v4)
		{
			v27 = sub_14092D590((__int64)v4, 16i64);
			if (v27)
			{
				v28 = v66;
				v29 = *v66;
				*v27 = v26;
				v27[1] = v29;
				*v28 = (__int64)v27;
			}
		}
		sub_14091DFC0(a1, v63);
		if (*v4)
			break;
		v30 = sub_140932570((__int64)v4);
		for (i = v64; i; i = (__int64*)i[1])
		{
			v32 = *i;
			if (*i && v30)
			{
				*(_QWORD*)(v32 + 16) &= ~2ui64;
				*(_QWORD*)(v32 + 16) |= 1ui64;
				*(_QWORD*)(v32 + 24) = v30;
			}
		}
		if (*v15 != 113)
		{
			if (*(_QWORD*)(a1 + 224))
			{
				v33 = sub_140932570((__int64)v4);
				for (j = *(__int64**)(a1 + 224); j; j = (__int64*)j[1])
				{
					v35 = *j;
					if (*j && v33)
					{
						*(_QWORD*)(v35 + 16) &= ~2ui64;
						*(_QWORD*)(v35 + 16) |= 1ui64;
						*(_QWORD*)(v35 + 24) = v33;
					}
				}
			}
			if (((v67 - 119) & 0xFFFD) != 0)
			{
				sub_140932690(v4, 6, 6, 0i64, 258, -8i64);
				if ((int)v12 < 0)
				{
					if (v9 != 125)
					{
						sub_140932690(v4, 6, 258, -8i64, 512, 0i64);
						goto LABEL_76;
					}
					sub_14092EC50((unsigned int**)a1, 1);
				LABEL_131:
					*(_QWORD*)(a1 + 176) = v58;
					*(_QWORD*)(a1 + 184) = v55;
					*(_QWORD*)(a1 + 224) = v56;
					*(_QWORD*)(a1 + 232) = v57;
					return v15 + 2;
				}
				sub_140932690(v4, 6, 1, 0i64, 258, -16i64);
				if (v9 == 125)
				{
					sub_14092EC50((unsigned int**)a1, v12 + 2);
				}
				else
				{
					sub_14092EC50((unsigned int**)a1, v12 + 1);
					sub_140932690(v4, 6, 258, -8i64, 512, 0i64);
				}
				sub_140932690(v4, 6, 267, v68, 1, 0i64);
			LABEL_76:
				switch (v9)
				{
				case 140:
					v36 = a3;
					*(_QWORD*)(a3 + 56) = sub_140932570((__int64)v4);
					break;
				case 141:
					v36 = a3;
					v37 = *(_QWORD*)(a3 + 56);
					v38 = sub_140932450((__int64)v4, 22);
					if (v38 && v37)
					{
						v38[2] &= ~2ui64;
						v38[2] |= 1ui64;
						v38[3] = v37;
					}
					v39 = sub_140932570((__int64)v4);
					if (v59)
					{
						if (v39)
						{
							v59[2] &= ~2ui64;
							v59[2] |= 1ui64;
							v59[3] = v39;
						}
					}
					break;
				case 125:
					goto LABEL_131;
				default:
					v36 = a3;
					break;
				}
				v40 = sub_140932570((__int64)v4);
				sub_140931600(*(__int64**)(v36 + 24), (__int64)v40);
				*(_QWORD*)(v36 + 24) = 0i64;
				goto LABEL_131;
			}
			if (v5 || v9 == 140)
				sub_140932690(v4, 6, 6, 0i64, 258, -8i64);
			if ((int)v12 >= 0)
			{
				sub_140932690(v4, 6, 1, 0i64, 258, -16i64);
				if (v9 == 140)
				{
					sub_14092EC50((unsigned int**)a1, v12 + 1);
					sub_140932690(v4, 6, 258, -8i64, 512, 0i64);
				}
				else
				{
					sub_14092EC50((unsigned int**)a1, v12 + 2);
				}
				v41 = v68;
				sub_140932690(v4, 6, 267, v68, 1, 0i64);
			}
			else
			{
				if (v9 == 140)
					sub_140932690(v4, 6, 258, -8i64, 512, 0i64);
				else
					sub_14092EC50((unsigned int**)a1, 1);
				v41 = v68;
			}
			v42 = sub_140932450((__int64)v4, 22);
			if (v9 != 140)
				sub_14091B490(v4, v60, (__int64)v42);
			v43 = sub_140932570((__int64)v4);
			for (k = v61; k; k = (__int64*)k[1])
			{
				v45 = *k;
				if (*k && v43)
				{
					*(_QWORD*)(v45 + 16) &= ~2ui64;
					*(_QWORD*)(v45 + 16) |= 1ui64;
					*(_QWORD*)(v45 + 24) = v43;
				}
			}
			if ((int)v12 >= 0)
			{
				if (v9 == 125)
				{
					sub_140932A90(v4, 25, 2, 0i64, 267, v41, 512, 8i64 * ((int)v12 + 1));
					sub_140932690(v4, 6, 6, 0i64, 258, 0i64);
					goto LABEL_131;
				}
				sub_140932A90(v4, 25, 2, 0i64, 267, v41, 512, 8i64 * ((int)v12 + 2));
				sub_140932690(v4, 6, 6, 0i64, 258, -8i64);
				if (v9 == 140)
					v13 = 6;
				sub_140932690(v4, 6, 258, -8i64, v13, 0i64);
			}
			else
			{
				sub_140932690(v4, 6, 6, 0i64, 258, 0i64);
				if (v9 == 140)
				{
					sub_140932A90(v4, 25, 2, 0i64, 2, 0i64, 512, 8i64);
				LABEL_118:
					v46 = sub_140932570((__int64)v4);
					*(_QWORD*)(a3 + 56) = v46;
					if (v42 && v46)
					{
						v42[2] &= ~2ui64;
						v42[2] |= 1ui64;
						v42[3] = v46;
					}
					goto LABEL_131;
				}
				if (v9 == 141)
				{
					sub_140932A90(v4, 25, 2, 0i64, 2, 0i64, 512, 8i64);
					sub_140932690(v4, 6, 258, -8i64, 512, 0i64);
					goto LABEL_122;
				}
			}
			if (v9 == 140)
				goto LABEL_118;
			if (v9 != 141)
				goto LABEL_131;
		LABEL_122:
			v47 = *(_QWORD*)(a3 + 56);
			v48 = sub_140932450((__int64)v4, 22);
			if (v48 && v47)
			{
				v48[2] &= ~2ui64;
				v48[2] |= 1ui64;
				v48[3] = v47;
			}
			v49 = sub_140932570((__int64)v4);
			if (v59 && v49)
			{
				v59[2] &= ~2ui64;
				v59[2] |= 1ui64;
				v59[3] = v49;
			}
			if ((int)v12 >= 0)
			{
				sub_140932690(v4, 6, 2, 0i64, 267, v41);
				v50 = sub_140932450((__int64)v4, 23);
				sub_14091B490(v4, (__int64*)(a1 + 256), (__int64)v50);
				sub_140932690(v4, 6, 267, v41, 258, 8 * v12);
				v15 = v54;
			}
			v51 = sub_140932570((__int64)v4);
			sub_140931600(*(__int64**)(a3 + 24), (__int64)v51);
			goto LABEL_131;
		}
		v7 = v15;
		v15 += (unsigned __int16)v15[1];
		v54 = v15;
	}
	*(_QWORD*)(a1 + 176) = v58;
	*(_QWORD*)(a1 + 184) = v55;
	*(_QWORD*)(a1 + 224) = v56;
	*(_QWORD*)(a1 + 232) = v57;
	return 0i64;
}
// 14091DFC0: using guessed type __int64 __fastcall sub_14091DFC0(_QWORD, _QWORD);
// 140925310: using guessed type __int64 __fastcall sub_140925310(_QWORD, _QWORD, _QWORD, _QWORD);

