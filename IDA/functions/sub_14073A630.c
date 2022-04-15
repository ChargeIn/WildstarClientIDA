//----- (000000014073A630) ----------------------------------------------------
_BOOL8 __fastcall sub_14073A630(__int64 a1, __int64 a2, __int64* a3)
{
	_QWORD* v4; // rbx
	_DWORD* v5; // rax
	__int64 v6; // rdx
	_DWORD* v7; // rax
	__int64 v8; // r11
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // r15
	int v13; // r14d
	__int64 v14; // r9
	_DWORD* v15; // rcx
	__int64 v16; // rdx
	__int64 v17; // rax
	__int64 v18; // rdx
	__int64 v19; // r13
	__int64 v20; // rbx
	int* v21; // rax
	int* v22; // rdi
	int* v23; // rdx
	BOOL v24; // edi
	char v26[8]; // [rsp+28h] [rbp-49h] BYREF
	int v27; // [rsp+30h] [rbp-41h]
	__int64 v28; // [rsp+38h] [rbp-39h]
	__int64(__fastcall * *v29)(); // [rsp+40h] [rbp-31h] BYREF
	int v30; // [rsp+48h] [rbp-29h]
	__int64 v31; // [rsp+50h] [rbp-21h]
	int v32; // [rsp+58h] [rbp-19h]
	__int64(__fastcall * *v33)(); // [rsp+60h] [rbp-11h] BYREF
	int v34; // [rsp+68h] [rbp-9h]
	__int64 v35; // [rsp+70h] [rbp-1h]
	__int64(__fastcall * **v36)(); // [rsp+78h] [rbp+7h]
	double v38; // [rsp+E8h] [rbp+77h]

	v4 = (_QWORD*)a1;
	v31 = a1;
	a3[1] = 0i64;
	v32 = 1;
	v29 = off_140B569F0;
	v30 = -2;
	v5 = sub_1400580E0(a1, 1);
	if (v5 != dword_140A12138 && v5[2] == 5)
	{
		sub_1400579E0(v31, v6, v30);
		v7 = sub_1400580E0(v31, 1);
		v9 = *(_QWORD*)(v8 + 16);
		*(_QWORD*)v9 = *(_QWORD*)v7;
		*(_DWORD*)(v9 + 8) = v7[2];
		*(_QWORD*)(v8 + 16) += 16i64;
		v30 = sub_1400578C0(v31);
	}
	v10 = v31;
	v34 = -2;
	v36 = &v29;
	v35 = v31;
	v33 = off_140B56A08;
	*(_DWORD*)(*(_QWORD*)(v31 + 16) + 8i64) = 0;
	*(_QWORD*)(v10 + 16) += 16i64;
	((void(__fastcall*)(__int64(__fastcall***)(), __int64))v33[2])(&v33, 0xFFFFFFFFi64);
	*(_QWORD*)(v31 + 16) -= 16i64;
	while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v36)[1])(v36)
		&& (unsigned int)sub_1400FCBA0((__int64)&v33))
	{
		sub_1400FB8D0((__int64)&v33, (__int64)v26);
		v12 = v28;
		v13 = v27;
		v14 = *(_QWORD*)(*(_QWORD*)(v28 + 32) + 160i64);
		if ((unsigned int)(v27 - 1) >= *(_DWORD*)(v14 + 56))
		{
			if ((double)v27 == 0.0)
			{
				v15 = *(_DWORD**)(v14 + 32);
			}
			else
			{
				v38 = (double)v27;
				v15 = (_DWORD*)(*(_QWORD*)(v14 + 32)
					+ 40 * ((unsigned int)(LODWORD(v38) + HIDWORD(v38)) % (((1i64 << *(_BYTE*)(v14 + 11)) - 1) | 1)));
			}
			while (v15[6] != 3 || (double)v27 != *((double*)v15 + 2))
			{
				v15 = (_DWORD*)*((_QWORD*)v15 + 4);
				if (!v15)
				{
					v15 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v15 = (_DWORD*)(*(_QWORD*)(v14 + 24) + 16i64 * (v27 - 1));
		}
		v16 = *(_QWORD*)(v28 + 16);
		*(_QWORD*)v16 = *(_QWORD*)v15;
		*(_DWORD*)(v16 + 8) = v15[2];
		*(_QWORD*)(v12 + 16) += 16i64;
		v17 = sub_140056AB0(v4, 0xFFFFFFFF);
		v4[2] -= 16i64;
		v19 = v17;
		if (v17)
		{
			v20 = a3[1];
			v21 = sub_14018DB00(*a3, v20 + 1, 8i64);
			v22 = v21;
			*(_QWORD*)&v21[2 * v20] = v19;
			v23 = (int*)*a3;
			if ((int*)*a3 != v21)
			{
				sub_1407DB590(v21, v23, 8 * a3[1]);
				if (*a3)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a3 - 16) + 8i64))(*a3 - 16);
				*a3 = (__int64)v22;
			}
			a3[1] = v20 + 1;
			sub_1400579E0(v12, (__int64)v23, v13);
			v4 = (_QWORD*)a1;
		}
		else
		{
			sub_1400579E0(v12, v18, v13);
		}
	}
	v33 = off_140B56A08;
	if (v35)
		sub_1400579E0(v35, v11, v34);
	v24 = a3[1] != 0;
	v29 = off_140B56A08;
	if (v31)
		sub_1400579E0(v31, v11, v30);
	return v24;
}
// 14073A6A3: variable 'v6' is possibly undefined
// 14073A6B7: variable 'v8' is possibly undefined
// 14073A82B: variable 'v18' is possibly undefined
// 14073A88D: variable 'v23' is possibly undefined
// 14073A8E2: variable 'v11' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 14073A630: using guessed type char var_A0[8];

