//----- (0000000140927420) ----------------------------------------------------
__int64 __fastcall sub_140927420(__int64 a1, char* a2, __int64* a3)
{
	unsigned int* v3; // rbp
	int v4; // r15d
	__int64* v5; // r14
	__int64* v8; // rsi
	char v9; // al
	_BYTE* v10; // rbx
	char* v11; // rax
	_QWORD* v12; // rdi
	_QWORD* v13; // rax
	_QWORD* v14; // rax
	__int64 result; // rax
	unsigned __int16* v16; // rdi
	int v17; // r13d
	bool v18; // zf
	int v19; // ecx
	_BYTE* v20; // rbx
	int v21; // r14d
	__int16 v22; // si
	int v23; // edx
	int v24; // edx
	int v25; // edx
	int v26; // ebx
	_WORD* v27; // rdi
	int v28; // edx
	__int64 v29; // rax
	int v30; // edx
	int v31; // edx
	__int64 v32; // rsi
	__int64* v33; // rbx
	__int64 v34; // rcx
	__int64 v35; // rcx
	int v36; // [rsp+30h] [rbp-48h]
	__int64* v37; // [rsp+80h] [rbp+8h] BYREF
	__int64* v38; // [rsp+88h] [rbp+10h]
	__int64* v39; // [rsp+90h] [rbp+18h]

	v39 = a3;
	v3 = *(unsigned int**)a1;
	v4 = 0;
	v5 = (__int64*)&v37;
	if ((*a2 & 1) != 0)
		v5 = a3;
	v8 = 0i64;
	v37 = 0i64;
	v38 = v5;
	sub_1409286A0(a1, a3);
	sub_1409309E0(a1);
	v9 = *a2;
	v10 = a2 + 2;
	if ((v9 & 2) != 0)
	{
		if (!*v3)
		{
			v3[26] = 0;
			v11 = sub_14092D140((__int64)v3, 1, 1, 0i64, 5, 0i64);
			if (v11)
				*v11 = -119;
		}
		v12 = sub_140931B80(v3, 4, 1, 0i64, 512, 255i64);
		if (!(unsigned int)sub_14091BC20((unsigned int**)a1, v10, 1, v5))
		{
			sub_140932A90(v3, 30, 3, 0i64, 1, 0i64, 512, 7i64);
			sub_140932A90(v3, 34, 1, 0i64, 1, 0i64, 512, 3i64);
			sub_140932690(v3, 7, 1, 0i64, 257, (__int64)v10);
			sub_140932A90(v3, 33, 3, 0i64, 512, 1i64, 3, 0i64);
			sub_140932A90(v3, 542, 0, 0i64, 1, 0i64, 3, 0i64);
			v13 = sub_140932450((__int64)v3, 1);
			sub_14091B490(v3, v5, (__int64)v13);
		}
		v14 = sub_140932570((__int64)v3);
		if (v12 && v14)
		{
			v12[2] &= ~2ui64;
			v12[2] |= 1ui64;
			v12[3] = v14;
		}
		if (!*v3)
		{
			v3[26] = 0;
			sub_14092AA10(v3, 1, 0i64, 5, 0i64);
		}
		v8 = v37;
		v10 += 32;
	}
	result = *(unsigned __int16*)v10;
	v16 = (unsigned __int16*)v10;
	v17 = 0;
	if ((_WORD)result)
	{
		while (1)
		{
			++v17;
			if ((_WORD)result == 1)
				break;
			if ((_WORD)result == 2)
			{
				v19 = *(_DWORD*)(a1 + 316);
				v20 = v10 + 4;
				if (v19 && (*((_WORD*)v20 - 1) & 0xFC00) == 0xD800)
					v20 += 2;
				v10 = v20 + 2;
				v18 = v19 == 0;
				goto LABEL_23;
			}
		LABEL_26:
			result = *(unsigned __int16*)v10;
			if (!(_WORD)result)
				goto LABEL_27;
		}
		v10 += 4;
		v18 = *(_DWORD*)(a1 + 316) == 0;
	LABEL_23:
		if (!v18 && (*((_WORD*)v10 - 1) & 0xFC00) == 0xD800)
			v10 += 2;
		goto LABEL_26;
	}
LABEL_27:
	v21 = 0;
	if (!*v16)
		goto LABEL_71;
	do
	{
		if (--v17 || (v22 = 1, v38 == v39))
			v22 = 0;
		result = *v16;
		if ((_WORD)result == 1)
		{
			v23 = v16[1];
			v16 += 2;
			if (*(_DWORD*)(a1 + 316) && (v23 & 0xFC00) == 55296)
				v23 = (((v23 & 0x3FF) << 10) | *v16++ & 0x3FF) + 0x10000;
			if (v21 < 3 && (unsigned __int16)(*v16 - 1) <= 1u)
			{
				sub_140932A90(v3, 539, 0, 0i64, 1, 0i64, 512, v23 - v4);
				v36 = 0;
			LABEL_38:
				v24 = 31;
				if (!v21)
					v24 = 6;
				result = sub_140932FC0(v3, v24, 3, 0i64, v21++ != 0 ? 3 : 0, 0, v36);
				continue;
			}
			v25 = v23 - v4;
			if (v21 > 0)
			{
				sub_140932A90(v3, 539, 0, 0i64, 1, 0i64, 512, v25);
				sub_140932FC0(v3, 543, 3, 0i64, 3, 0, 0);
			LABEL_43:
				result = (__int64)sub_140932450((__int64)v3, v22 ^ 1u);
				goto LABEL_63;
			}
			result = (__int64)sub_140931B80(v3, v22, 1, 0i64, 512, v25);
		}
		else
		{
			if ((_WORD)result != 2)
				continue;
			v26 = v16[1];
			v27 = v16 + 2;
			if (*(_DWORD*)(a1 + 316) && (v26 & 0xFC00) == 55296)
				v26 = (((v26 & 0x3FF) << 10) | *v27++ & 0x3FF) + 0x10000;
			if (v26 != v4)
			{
				if (v26 <= v4)
				{
					v28 = 25;
					v29 = v4 - v26;
				}
				else
				{
					v28 = 27;
					v29 = v26 - v4;
				}
				sub_140932A90(v3, v28, 1, 0i64, 1, 0i64, 512, v29);
			}
			v30 = (unsigned __int16)*v27;
			v16 = v27 + 1;
			v4 = v26;
			if (*(_DWORD*)(a1 + 316) && (v30 & 0xFC00) == 55296)
				v30 = (((v30 & 0x3FF) << 10) | *v16++ & 0x3FF) + 0x10000;
			if (v21 < 3 && (unsigned __int16)(*v16 - 1) <= 1u)
			{
				sub_140932A90(v3, 2075, 0, 0i64, 1, 0i64, 512, v30 - v26);
				v36 = 5;
				goto LABEL_38;
			}
			v31 = v30 - v26;
			if (v21 > 0)
			{
				sub_140932A90(v3, 2075, 0, 0i64, 1, 0i64, 512, v31);
				sub_140932FC0(v3, 543, 3, 0i64, 3, 0, 5);
				goto LABEL_43;
			}
			result = (__int64)sub_140931B80(v3, v22 ^ 5u, 1, 0i64, 512, v31);
		}
	LABEL_63:
		v21 = 0;
		v32 = result;
		if (result)
		{
			v33 = v39;
			if (v17 > 0)
				v33 = v38;
			if (!*v3)
			{
				result = (__int64)sub_14092D590((__int64)v3, 16i64);
				if (result)
				{
					v34 = *v33;
					*(_QWORD*)result = v32;
					*(_QWORD*)(result + 8) = v34;
					*v33 = result;
				}
			}
		}
	} while (*v16);
	v8 = v37;
LABEL_71:
	if (v8)
	{
		result = (__int64)sub_140932570((__int64)v3);
		do
		{
			v35 = *v8;
			if (*v8)
			{
				if (result)
				{
					*(_QWORD*)(v35 + 16) &= ~2ui64;
					*(_QWORD*)(v35 + 16) |= 1ui64;
					*(_QWORD*)(v35 + 24) = result;
				}
			}
			v8 = (__int64*)v8[1];
		} while (v8);
	}
	return result;
}

