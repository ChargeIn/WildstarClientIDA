//----- (00000001405A1970) ----------------------------------------------------
__int64 __fastcall sub_1405A1970(_QWORD* a1)
{
	__int64 result; // rax
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rbp
	int v9; // r14d
	__int64 v10; // rax
	__int64 v11; // rsi
	int v12; // edx
	__int64 v13; // rcx
	__int64 v14; // rax
	int v15; // r10d
	unsigned int v16; // ecx
	unsigned __int64 v17; // r8
	__int64 v18; // rdi
	__int64 v19; // rdx
	__int64 v20; // rax
	__int64 v21; // rbx
	int v22; // r13d
	int v23; // eax
	__int64 v24; // rdx
	unsigned int v25; // ecx
	unsigned int v26; // eax
	__int64 v27; // rdi
	unsigned int v28; // r15d
	int* v29; // rbx
	__int64 v30; // r14
	int v31; // ebp
	unsigned int v32; // eax
	int* v33; // rax
	unsigned int v34; // eax
	unsigned int v35; // ebp
	unsigned int v36; // ebp
	unsigned int v37; // eax
	unsigned int v38; // eax
	int* v39; // rax
	__int64 v40; // rcx
	unsigned int* v41; // rbx
	unsigned int v42; // edx
	__int64 v43; // rax
	__int64 v44; // rbx
	unsigned int v45; // eax
	__int64 v46; // rbx
	__int64 v47; // rcx
	int v48; // eax
	unsigned int v49; // edx
	_DWORD v50[3]; // [rsp+30h] [rbp-68h] BYREF
	unsigned int v51; // [rsp+3Ch] [rbp-5Ch]
	unsigned int v52; // [rsp+40h] [rbp-58h]
	int v54; // [rsp+A8h] [rbp+10h]
	int v55; // [rsp+B0h] [rbp+18h]
	int* v56; // [rsp+B8h] [rbp+20h]

	if (*(_DWORD*)(qword_140C65898 + 6864))
		return 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_7;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_7:
		v7 = 0i64;
	}
	v8 = v7 + 384;
	result = sub_1405925D0(a1, 1u);
	v9 = result;
	v55 = result;
	if ((_DWORD)result)
	{
		v10 = sub_140245C00(result);
		v11 = v10;
		if (!v10)
			return 0i64;
		if (*(_DWORD*)(v10 + 8) == 22)
		{
			v12 = 79;
		}
		else if ((*(_BYTE*)(v10 + 32) & 4) == 0 || (v12 = 87, *(_DWORD*)(v10 + 28)))
		{
			v12 = 44;
		}
		if (!(unsigned int)sub_1403A0D20(qword_140C65898, v12))
			return 0i64;
		v56 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v11 + 12), 0i64);
		if (!v56)
			return 0i64;
		v14 = sub_1405BE150(v13, *(_DWORD*)(v11 + 8));
		v16 = 0;
		v17 = *(_QWORD*)(qword_140C65898 + 5792);
		v18 = v14;
		if (v17)
		{
			v19 = *(_QWORD*)(qword_140C65898 + 5784);
			v20 = 0i64;
			while (*(_DWORD*)(*(_QWORD*)(v19 + 8 * v20) + 8i64) != v15)
			{
				v20 = ++v16;
				if (v16 >= v17)
					goto LABEL_24;
			}
			v21 = *(_QWORD*)(v19 + 8i64 * v16);
		}
		else
		{
		LABEL_24:
			v21 = 0i64;
		}
		if (!v18 || !v21 && *(_DWORD*)(v11 + 28))
			return 0i64;
		sub_14039E400(qword_140C65898);
		v22 = *(_DWORD*)(v18 + 16) & 8;
		if ((*(_BYTE*)(v11 + 32) & 8) != 0 || (v54 = 0, *(_DWORD*)(v11 + 8) == 22))
			v54 = 1;
		v50[0] = 0;
		v23 = sub_1405926A0(v11);
		v50[1] = sub_1403A0D20(qword_140C65898, v23);
		v50[2] = v9;
		v52 = 0;
		v25 = sub_1400F26A0(v8, (unsigned int)(v22 != 0) + 2);
		v51 = v25;
		if (v21)
		{
			v26 = sub_1405E47C0(v21, *(_DWORD*)v11);
			v25 = v51;
		}
		else
		{
			v26 = 1;
		}
		if (v26 < v25)
			return 0i64;
		v27 = qword_140C65898;
		v28 = -1;
		v29 = (int*)(v11 + 36);
		v30 = 5i64;
		do
		{
			v31 = *v29;
			if (*v29 && v29[5])
			{
				v32 = sub_1405E6430(v27 + 5784, v24, *(_DWORD*)(v11 + 8), v56[81], *v29);
				if (!v32)
					v32 = v31;
				v33 = sub_1400B5DF0(qword_140C658F0, v32, 0i64);
				v27 = qword_140C65898;
				if (v33)
				{
					v34 = sub_1405E6300(qword_140C65898 + 5784, 6, *(_DWORD*)(v11 + 8), v56[81], v33[81]);
					v35 = v29[5];
					if (v34 < v35)
					{
						v36 = v35 - v34;
						v37 = sub_1403AC840(v27 + 160, 1030, *v29);
						v27 = qword_140C65898;
						v24 = v37 % v36;
						v38 = v37 / v36;
						if (v38 < v28)
							v28 = v38;
					}
				}
			}
			++v29;
			--v30;
		} while (v30);
		if (v28 < v51)
			return 0i64;
		if (v22)
		{
			v39 = sub_140417BF0(a1, 2u);
			v41 = (unsigned int*)v39;
			if (v39)
			{
				v42 = v39[113];
				if (v42)
				{
					if (!(unsigned int)sub_1405BE550(v40, v42))
						return 0i64;
					v43 = sub_140244280(v41[113]);
					if (!v43
						|| *(_DWORD*)(v11 + 8) != *(_DWORD*)(v43 + 4)
						|| *(_DWORD*)(v11 + 28) != *(_DWORD*)(v43 + 8)
						|| (unsigned int)sub_1403AC840(qword_140C65898 + 160, 2, *v41) < v51)
					{
						return 0i64;
					}
					v52 = *v41;
				}
			}
			v27 = qword_140C65898;
		}
		if (v54)
		{
			v44 = *(_QWORD*)(v27 + 120);
			v45 = sub_1405A3CA0();
			v46 = sub_1403ACD90(qword_140C65B70, v45, v44);
			v48 = sub_140399630(v47, v46, v50);
			if (v48 && v48 != 317)
			{
				sub_1403A12A0(qword_140C65898, v48, v46, 0);
				return 0i64;
			}
		}
		else
		{
			v49 = 2129;
			if (!v22)
				v49 = 2130;
			sub_1403F4900(v27, v49, (__int64)v50);
		}
		sub_1405E65F0((_DWORD*)(qword_140C65898 + 5784), v55, v51);
		return 1i64;
	}
	return result;
}
// 1405A1A9B: variable 'v13' is possibly undefined
// 1405A1ACB: variable 'v15' is possibly undefined
// 1405A1BEB: variable 'v24' is possibly undefined
// 1405A1CAF: variable 'v40' is possibly undefined
// 1405A1D47: variable 'v47' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

