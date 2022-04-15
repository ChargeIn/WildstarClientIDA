//----- (00000001401DBC80) ----------------------------------------------------
__int64 __fastcall sub_1401DBC80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5, __int64 a6)
{
	int* v6; // r12
	__int64 v9; // rsi
	_BYTE* v10; // rdi
	bool v12; // zf
	_BYTE* v13; // rdi
	__int64 v14; // rsi
	__int64 v15; // rdi
	unsigned int v16; // ebp
	unsigned __int64 v17; // r13
	__int64 v18; // r15
	__int64 v19; // rax
	unsigned int v20; // edi
	int* v21; // rax
	int* v22; // r14
	unsigned int v23; // edi
	unsigned int v24; // esi
	__int64 v25; // rax
	unsigned int* v26; // rdx
	int v27; // eax
	__int64 v28; // rdi
	int* v29; // rsi
	__int64 v30; // rdi
	__int64* v31; // rsi
	unsigned __int64 v32; // rdx
	__int64 v33; // rbx
	int v34; // eax
	__int64 v35; // [rsp+30h] [rbp-A8h]
	__int64 v36; // [rsp+40h] [rbp-98h] BYREF
	__int64 v37[2]; // [rsp+48h] [rbp-90h] BYREF
	unsigned int v38; // [rsp+58h] [rbp-80h] BYREF
	__int64 v39; // [rsp+60h] [rbp-78h]
	unsigned __int64 v40; // [rsp+68h] [rbp-70h]
	unsigned __int64 v41[3]; // [rsp+70h] [rbp-68h] BYREF
	char v42[24]; // [rsp+88h] [rbp-50h] BYREF

	v6 = a5;
	v40 = a4;
	v39 = a3;
	v36 = a2;
	v9 = 4i64;
	v10 = (_BYTE*)(a1 + 12);
	if (!a6 || a1 == -12)
		return 2147500037i64;
	if (*(_DWORD*)(a6 + 96))
		goto LABEL_4;
	if (*(_DWORD*)(a6 + 100))
		return 2147500037i64;
	do
	{
		--v9;
		if (*(_DWORD*)(a6 + 100))
			break;
		*(_BYTE*)((__int16)(*(_WORD*)(a6 + 28))++ + a6 + 30) = *v10;
		v12 = *(_DWORD*)(a6 + 20) == -8;
		*(_DWORD*)(a6 + 20) += 8;
		if (v12)
		{
			v12 = (*(_DWORD*)(a6 + 24))++ == -1;
			if (v12)
				*(_DWORD*)(a6 + 100) = 1;
		}
		if (*(_WORD*)(a6 + 28) == 64)
			sub_1401C8CE0((int*)a6);
		++v10;
	} while (v9);
	v13 = (_BYTE*)(a1 + 16);
	v14 = 4i64;
	if (a1 == -16)
		return 2147500037i64;
	if (*(_DWORD*)(a6 + 96))
	{
	LABEL_4:
		*(_DWORD*)(a6 + 100) = 3;
		return 2147500037i64;
	}
	if (*(_DWORD*)(a6 + 100))
		return 2147500037i64;
	do
	{
		--v14;
		if (*(_DWORD*)(a6 + 100))
			break;
		*(_BYTE*)((__int16)(*(_WORD*)(a6 + 28))++ + a6 + 30) = *v13;
		v12 = *(_DWORD*)(a6 + 20) == -8;
		*(_DWORD*)(a6 + 20) += 8;
		if (v12)
		{
			v12 = (*(_DWORD*)(a6 + 24))++ == -1;
			if (v12)
				*(_DWORD*)(a6 + 100) = 1;
		}
		if (*(_WORD*)(a6 + 28) == 64)
			sub_1401C8CE0((int*)a6);
		++v13;
	} while (v14);
	v15 = v36;
	v16 = 0;
	v37[1] = a4;
	v37[0] = 0i64;
	sub_1401D3110(
		v41,
		(__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1401DC1E0,
		(unsigned __int64*)v37,
		v36,
		2);
	v17 = v41[2];
	v18 = 0i64;
	if (!a4)
	{
	LABEL_69:
		if ((unsigned int)sub_1401C8B70(a6, (__int64)v42))
		{
			v16 = -2147467259;
		}
		else
		{
			v32 = 41i64;
			v37[0] = (__int64)a5;
			v33 = 0i64;
			v36 = 41i64;
			while (1)
			{
				LODWORD(v35) = (unsigned __int8)v42[v33];
				v34 = sub_1401A3210(v6, v32, v37, (unsigned __int64*)&v36, 0, L"%0.2x", v35);
				if (v34 < 0)
					break;
				if ((unsigned __int64)++v33 >= 0x14)
					goto LABEL_76;
				v32 = v36;
				v6 = (int*)v37[0];
			}
			v16 = v34;
		}
		goto LABEL_76;
	}
	while (1)
	{
		v19 = *(_QWORD*)(v17 + 8 * v18);
		v20 = *(_DWORD*)(v15 + 4 * v19);
		LODWORD(v37[0]) = *(_DWORD*)(v39 + 4 * v19);
		v38 = v20;
		if (!qword_140C63840)
			break;
		v21 = (int*)qword_140C63840(off_140A6ADA8, v20, qword_140C63858);
	LABEL_30:
		v22 = v21;
		if (!v21)
			goto LABEL_68;
		if (!(unsigned int)sub_1401DBB90(*v21))
		{
			v23 = 0;
			v24 = sub_1401F57D0();
			if (v24)
			{
				while (!qword_140C63848)
				{
					if (dword_140C64080)
					{
						v26 = 0i64;
					}
					else
					{
						if ((int)sub_1401F55C0() >= 0)
						{
							v25 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65300 + 32i64))(
								qword_140C65300,
								v23);
							goto LABEL_40;
						}
						v26 = 0i64;
					}
				LABEL_41:
					v27 = v22[36];
					if ((!_bittest(&v27, v26[1]) || (int)v26[2] >= (int)v26[4] || (int)v26[3] >= (int)v26[5]) && ++v23 < v24)
						continue;
					goto LABEL_45;
				}
				v25 = qword_140C63848(off_140A69B48, v23, qword_140C63858);
			LABEL_40:
				v26 = (unsigned int*)v25;
				goto LABEL_41;
			}
		LABEL_45:
			if (v23 != v24)
			{
				v28 = 4i64;
				v29 = (int*)&v38;
				if (*(_DWORD*)(a6 + 96))
					goto LABEL_66;
				if (*(_DWORD*)(a6 + 100))
					goto LABEL_67;
				do
				{
					--v28;
					if (*(_DWORD*)(a6 + 100))
						break;
					*(_BYTE*)((__int16)(*(_WORD*)(a6 + 28))++ + a6 + 30) = *(_BYTE*)v29;
					v12 = *(_DWORD*)(a6 + 20) == -8;
					*(_DWORD*)(a6 + 20) += 8;
					if (v12)
					{
						v12 = (*(_DWORD*)(a6 + 24))++ == -1;
						if (v12)
							*(_DWORD*)(a6 + 100) = 1;
					}
					if (*(_WORD*)(a6 + 28) == 64)
						sub_1401C8CE0((int*)a6);
					v29 = (int*)((char*)v29 + 1);
				} while (v28);
				v30 = 4i64;
				v31 = v37;
				if (*(_DWORD*)(a6 + 96))
				{
				LABEL_66:
					*(_DWORD*)(a6 + 100) = 3;
				LABEL_67:
					v16 = -2147467259;
					goto LABEL_76;
				}
				if (*(_DWORD*)(a6 + 100))
					goto LABEL_67;
				do
				{
					--v30;
					if (*(_DWORD*)(a6 + 100))
						break;
					*(_BYTE*)((__int16)(*(_WORD*)(a6 + 28))++ + a6 + 30) = *(_BYTE*)v31;
					v12 = *(_DWORD*)(a6 + 20) == -8;
					*(_DWORD*)(a6 + 20) += 8;
					if (v12)
					{
						v12 = (*(_DWORD*)(a6 + 24))++ == -1;
						if (v12)
							*(_DWORD*)(a6 + 100) = 1;
					}
					if (*(_WORD*)(a6 + 28) == 64)
						sub_1401C8CE0((int*)a6);
					v31 = (__int64*)((char*)v31 + 1);
				} while (v30);
			}
		}
		if (++v18 >= v40)
			goto LABEL_69;
		v15 = v36;
	}
	if (!dword_140C64F64 && (int)sub_14020BAC0() >= 0)
	{
		v21 = (int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C654E8 + 24i64))(qword_140C654E8, v20);
		goto LABEL_30;
	}
LABEL_68:
	v16 = -2147418113;
LABEL_76:
	if (v41[0] < v41[1])
		sub_14018B900(v17 + 8 * v41[0], 0);
	return v16;
}
// 1401DC074: variable 'v35' is possibly undefined
// 140A47D08: using guessed type wchar_t a02x_0[6];
// 140A69B48: using guessed type wchar_t *off_140A69B48[2];
// 140A6ADA8: using guessed type wchar_t *off_140A6ADA8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64080: using guessed type int dword_140C64080;
// 140C64F64: using guessed type int dword_140C64F64;
// 140C65300: using guessed type __int64 qword_140C65300;
// 140C654E8: using guessed type __int64 qword_140C654E8;
// 1401DBC80: using guessed type char var_50[24];

