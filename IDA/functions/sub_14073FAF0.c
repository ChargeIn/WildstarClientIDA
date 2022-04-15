//----- (000000014073FAF0) ----------------------------------------------------
_QWORD* __fastcall sub_14073FAF0(unsigned int* a1, _QWORD* a2, int a3)
{
	int v3; // ebx
	bool v4; // zf
	_DWORD* v6; // rbp
	unsigned int* v7; // rax
	__int64 v8; // r12
	unsigned int v9; // edi
	int* v10; // r13
	int v11; // eax
	__int64 v12; // rax
	unsigned int v13; // r15d
	int v14; // esi
	_DWORD* v15; // r14
	unsigned int v16; // edi
	__int64 v17; // rax
	__int64 v18; // rbp
	unsigned int v19; // edi
	__int64 v20; // rax
	int v21; // eax
	float v22; // xmm0_4
	int v23; // eax
	__int64 v24; // rax
	_QWORD* v25; // rcx
	unsigned int* v26; // [rsp+30h] [rbp-78h]
	_DWORD* v27; // [rsp+38h] [rbp-70h]
	__int64 v28; // [rsp+40h] [rbp-68h] BYREF
	__int64 v29; // [rsp+48h] [rbp-60h]
	__int64 v30; // [rsp+50h] [rbp-58h]
	unsigned int v31; // [rsp+B0h] [rbp+8h]
	int v34; // [rsp+C8h] [rbp+20h] BYREF
	int v35; // [rsp+CCh] [rbp+24h]

	v3 = 0;
	v28 = 0i64;
	if (a3)
	{
		v29 = 15i64;
		v30 = 0x900000000i64;
	}
	else
	{
		v29 = 1i64;
		v30 = 0i64;
	}
	v4 = a1[56] == 0;
	*a2 = v28;
	a2[1] = v29;
	a2[2] = v30;
	if (v4)
		return a2;
	v6 = a1 + 14;
	v7 = a1 + 6;
	v8 = 0i64;
	v27 = a1 + 14;
	v9 = 0;
	v31 = 0;
	v26 = a1 + 6;
	do
	{
		v10 = sub_1400B5DF0(qword_140C658F0, *v7, 0i64);
		if (v10)
			goto LABEL_12;
		v11 = 20;
		if (v9 != 6)
			v11 = v9 + 1;
		v34 = 0;
		v35 = v11 - 1;
		v12 = sub_1403AC780(qword_140C65898 + 160, &v34);
		if (v12)
		{
			v10 = *(int**)(v12 + 64);
			if (v10)
			{
			LABEL_12:
				v13 = 0;
				v14 = 1;
				v15 = v6;
				while (1)
				{
					v16 = v15[21];
					if (v16 != *v15)
					{
						if (qword_140C63840)
						{
							v17 = qword_140C63840(off_140A6A168, v16, qword_140C63858);
						}
						else
						{
							if (dword_140C63EAC || (int)sub_1401FCCC0() < 0)
								goto LABEL_32;
							v17 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63AE0 + 24i64))(
								qword_140C63AE0,
								v16);
						}
						v18 = v17;
						if (v17)
						{
							v19 = v10[97];
							if (qword_140C63840)
							{
								v20 = qword_140C63840(off_140A6ADA8, v19, qword_140C63858);
								goto LABEL_25;
							}
							if (dword_140C64F64 || (int)sub_14020BAC0() < 0)
								goto LABEL_27;
							v20 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C654E8 + 24i64))(
								qword_140C654E8,
								v19);
						LABEL_25:
							if (!v20)
								LABEL_27 :
								v21 = 0;
							else
								v21 = *(_DWORD*)(v20 + 248);
							if ((v14 & v21) != 0)
							{
								v22 = *(float*)(v18 + 16);
								v28 = 0i64;
								v29 = 1i64;
								v30 = 0i64;
								if (qword_140C65898)
								{
									if ((unsigned int)sub_14070C8C0((__int64)v10, &v28, qword_140C65898, v13, v22))
										v8 += v28;
								}
							}
						}
					}
				LABEL_32:
					v14 = __ROL4__(v14, 1);
					++v13;
					++v15;
					if (v13 >= 3)
					{
						v9 = v31;
						v6 = v27;
						break;
					}
				}
			}
		}
		++v9;
		v6 += 3;
		v7 = v26 + 1;
		v31 = v9;
		v27 = v6;
		++v26;
	} while (v9 < 7);
	if (!a3)
	{
		v25 = a2;
		*a2 = v8;
		return v25;
	}
	if ((dword_140DC4D60 & 1) != 0)
	{
		v23 = dword_140DC4D6C;
	}
	else
	{
		dword_140DC4D6C = 0;
		dword_140DC4D60 |= 1u;
		v23 = 0;
	}
	if (!v8)
	{
	LABEL_45:
		v25 = a2;
		*a2 = v3;
		return v25;
	}
	if (v23)
	{
		v3 = dword_140DC4D68;
		goto LABEL_45;
	}
	dword_140DC4D6C = 1;
	v24 = sub_140200220(0x498u);
	if (v24)
		v3 = *(_DWORD*)(v24 + 4);
	v25 = a2;
	dword_140DC4D68 = v3;
	*a2 = v3;
	return v25;
}
// 140A6A168: using guessed type wchar_t *off_140A6A168[2];
// 140A6ADA8: using guessed type wchar_t *off_140A6ADA8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AE0: using guessed type __int64 qword_140C63AE0;
// 140C63EAC: using guessed type int dword_140C63EAC;
// 140C64F64: using guessed type int dword_140C64F64;
// 140C654E8: using guessed type __int64 qword_140C654E8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140DC4D60: using guessed type int dword_140DC4D60;
// 140DC4D68: using guessed type int dword_140DC4D68;
// 140DC4D6C: using guessed type int dword_140DC4D6C;

