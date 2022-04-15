//----- (00000001406128B0) ----------------------------------------------------
__int64 __fastcall sub_1406128B0(__int64 a1, __int64 a2)
{
	__int64 v3; // rsi
	int* v5; // rax
	int* v6; // rbx
	int* v7; // r14
	unsigned int v8; // r12d
	unsigned int v9; // edi
	unsigned int v10; // r13d
	__int64 v11; // rbx
	__int64* v12; // rsi
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rcx
	unsigned __int64 v16; // rcx
	unsigned __int16* v17; // rdx
	int* v18; // r15
	unsigned __int64 v19; // rdx
	int* v20; // rcx
	unsigned __int64 v21; // rcx
	unsigned __int16* v22; // rdx
	int* v23; // rsi
	__int64 v25; // [rsp+48h] [rbp-31h] BYREF
	int* v26; // [rsp+50h] [rbp-29h]
	int* v27; // [rsp+58h] [rbp-21h]
	int* v28; // [rsp+60h] [rbp-19h]
	__int64 v29; // [rsp+68h] [rbp-11h]
	__int64 v30; // [rsp+70h] [rbp-9h] BYREF
	__int64 v31; // [rsp+78h] [rbp-1h]
	__int64 v32; // [rsp+80h] [rbp+7h]
	__int64 v33; // [rsp+88h] [rbp+Fh]
	__int64 v34; // [rsp+90h] [rbp+17h]

	v3 = sub_140211F40(*(_DWORD*)a2);
	v29 = v3;
	if (!v3)
		return 2147500037i64;
	v5 = sub_14018B280(8i64, 0);
	v6 = v5;
	v26 = v5;
	v7 = v5;
	v27 = v5;
	v28 = v5 + 2;
	if (v5)
		*(_BYTE*)v5 = 0;
	v8 = 5;
	if (*(_DWORD*)(a2 + 4) < 5u)
		v8 = *(_DWORD*)(a2 + 4);
	v9 = 0;
	v10 = 0;
	if (v8)
	{
		v11 = 0i64;
		v12 = &v30;
		while (2)
		{
			v13 = *(_QWORD*)(a2 + 8);
			*v12 = *(_QWORD*)(v13 + v11 + 8);
			switch (*(_DWORD*)(v13 + v11))
			{
			case 0:
				sub_140613330(&v25, 105);
				goto LABEL_17;
			case 1:
				sub_140613330(&v25, 115);
				goto LABEL_17;
			case 2:
				sub_140613330(&v25, 85);
				goto LABEL_17;
			case 3:
				sub_140613330(&v25, 98);
				goto LABEL_17;
			case 4:
				sub_140613330(&v25, 111);
				v14 = (__int64)sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v11 + *(_QWORD*)(a2 + 8) + 8), 0i64);
				goto LABEL_16;
			case 5:
				sub_140613330(&v25, 81);
				v14 = sub_1405A8A40(v15, *(_DWORD*)(v11 + *(_QWORD*)(a2 + 8) + 8));
			LABEL_16:
				*v12 = v14;
			LABEL_17:
				++v10;
				v11 += 16i64;
				++v12;
				if (v10 < v8)
					continue;
				v7 = v27;
				v6 = v26;
				v3 = v29;
				break;
			default:
				v6 = v26;
				v9 = -2147467259;
				goto LABEL_48;
			}
			break;
		}
	}
	v16 = *(_QWORD*)(v3 + 16);
	if (v16)
	{
		if (v16 <= qword_140C3FE70)
			v17 = (unsigned __int16*)(v16 + qword_140C3FE68);
		else
			v17 = 0i64;
	}
	else
	{
		v17 = 0i64;
	}
	sub_14018F0E0(&v25, v17);
	v18 = v26;
	if (v27 != v26)
	{
		v19 = (char*)v7 - (char*)v6;
		if ((char*)v7 - (char*)v6 > (unsigned __int64)((char*)v27 - (char*)v26))
		{
		LABEL_33:
			v9 = -2147467259;
			goto LABEL_46;
		}
		if (v19)
		{
			v20 = v6;
			while (*(_BYTE*)v20 == *((_BYTE*)v20 + (char*)v26 - (char*)v6))
			{
				v20 = (int*)((char*)v20 + 1);
				if ((char*)v20 - (char*)v6 >= v19)
					goto LABEL_31;
			}
			goto LABEL_33;
		}
	}
LABEL_31:
	v21 = *(_QWORD*)(v3 + 8);
	if (v21)
	{
		if (v21 <= qword_140C3FE70)
			v22 = (unsigned __int16*)(v21 + qword_140C3FE68);
		else
			v22 = 0i64;
	}
	else
	{
		v22 = 0i64;
	}
	sub_14018F0E0(&v25, v22);
	v23 = v26;
	switch ((char*)v7 - (char*)v6)
	{
	case 0i64:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), v26, &unk_1409D143A);
		break;
	case 1i64:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), v26, v6, v30);
		break;
	case 2i64:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), v26, v6, v30, v31);
		break;
	case 3i64:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), v26, v6, v30, v31, v32);
		break;
	case 4i64:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), v26, v6, v30, v31, v32, v33);
		break;
	case 5i64:
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), v26, v6, v30, v31, v32, v33, v34);
		break;
	default:
		break;
	}
	if (v23)
		sub_14018B900((__int64)v23, 0);
LABEL_46:
	if (v18)
		sub_14018B900((__int64)v18, 0);
LABEL_48:
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return v9;
}
// 1406129FF: variable 'v15' is possibly undefined
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C658F0: using guessed type __int64 qword_140C658F0;

