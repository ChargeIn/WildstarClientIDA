//----- (000000014068F2F0) ----------------------------------------------------
__int64 __fastcall sub_14068F2F0(_QWORD* a1)
{
	__int64 v1; // rdx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // r15d
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	unsigned int v12; // r13d
	__int64 v13; // rdi
	unsigned __int64 v14; // r12
	int* v15; // rax
	__int64 v16; // rbx
	__int64 v17; // r14
	__int64 v18; // rdi
	int v19; // edi
	__int64 v20; // rdx
	int v21; // ebx
	__int64 v22; // rdx
	__int64 v23; // r9
	_DWORD* v24; // r8
	__int64 v25; // rdx
	__int64 v26; // rcx
	_QWORD* v27; // rax
	__int64 v29; // [rsp+20h] [rbp-29h] BYREF
	unsigned __int64 v30; // [rsp+28h] [rbp-21h]
	float v31[4]; // [rsp+30h] [rbp-19h] BYREF
	__int64(__fastcall * *v32)(); // [rsp+40h] [rbp-9h] BYREF
	int v33; // [rsp+48h] [rbp-1h]
	_QWORD* v34; // [rsp+50h] [rbp+7h]
	int v35; // [rsp+58h] [rbp+Fh]
	char v36[8]; // [rsp+60h] [rbp+17h] BYREF
	int v37; // [rsp+68h] [rbp+1Fh]
	__int64 v38; // [rsp+70h] [rbp+27h]
	double v39; // [rsp+B0h] [rbp+67h]

	v1 = a1[4];
	v32 = off_140B569F0;
	v3 = *(_QWORD*)(v1 + 112);
	v34 = a1;
	v35 = 1;
	if (*(_QWORD*)(v1 + 120) >= v3)
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v6 = sub_1400578C0((__int64)a1);
	v33 = v6;
	if (*(_QWORD*)(qword_140C65898 + 120)
		&& (v7 = sub_140056AB0(a1, 1u)) != 0
		&& (v8 = *(_QWORD*)(v7 + 8)) != 0
		&& (v9 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			**(unsigned int**)(*(_QWORD*)(v8 + 8) + 8i64),
			0i64),
			(v10 = v9) != 0)
		&& (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 40i64))(v9)
		&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 104i64))(v10)
		&& (v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 40i64))(v10),
			(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 104i64))(v11))
		&& !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 488i64))(v10))
	{
		(*(void(__fastcall**)(__int64, __int64*, _QWORD, _QWORD))(*(_QWORD*)v10 + 464i64))(v10, &v29, 0i64, 0i64);
		v12 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 48i64))(v10) + 496);
		v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 312i64))(v10);
		v14 = *(_QWORD*)(v13 + 8);
		if (v14)
		{
			v15 = sub_14018B280(8 * v14 + 16, 0);
			v16 = 0i64;
			if (v15)
			{
				*((_QWORD*)v15 + 1) = v14;
				v17 = (__int64)(v15 + 4);
				*(_QWORD*)v15 = off_140B55060;
			}
			else
			{
				v17 = 16i64;
			}
		}
		else
		{
			v16 = 0i64;
			v17 = 0i64;
		}
		sub_1407DB590((int*)v17, *(int**)v13, 8 * v14);
		v18 = 0i64;
		if (v30)
		{
			while (!(unsigned int)sub_14043E6D0(qword_140C65898, v12, *(_DWORD*)(v29 + 4 * v18), v31))
			{
				if (++v18 >= v30)
					goto LABEL_23;
			}
			sub_1400FA3C0((__int64)v36, (__int64)a1, v31);
			v19 = v37;
			sub_1400FB1D0((__int64)&v32);
			if (v38)
				sub_1400579E0(v38, v20, v19);
			v6 = v33;
		}
	LABEL_23:
		if (v14)
		{
			while (!(unsigned int)sub_14043E6D0(
				qword_140C65898,
				*(_DWORD*)(v17 + 8 * v16),
				*(_DWORD*)(v17 + 8 * v16 + 4),
				v31))
			{
				if (++v16 >= v14)
					goto LABEL_30;
			}
			sub_1400FA3C0((__int64)v36, (__int64)a1, v31);
			v21 = v37;
			sub_1400FB1D0((__int64)&v32);
			if (v38)
				sub_1400579E0(v38, v22, v21);
			v6 = v33;
		}
	LABEL_30:
		v23 = *(_QWORD*)(v34[4] + 160i64);
		if ((unsigned int)(v6 - 1) >= *(_DWORD*)(v23 + 56))
		{
			if ((double)v6 == 0.0)
			{
				v24 = *(_DWORD**)(v23 + 32);
			}
			else
			{
				v39 = (double)v6;
				v24 = (_DWORD*)(*(_QWORD*)(v23 + 32)
					+ 40 * ((unsigned int)(LODWORD(v39) + HIDWORD(v39)) % (((1i64 << *(_BYTE*)(v23 + 11)) - 1) | 1)));
			}
			while (v24[6] != 3 || (double)v6 != *((double*)v24 + 2))
			{
				v24 = (_DWORD*)*((_QWORD*)v24 + 4);
				if (!v24)
				{
					v24 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v24 = (_DWORD*)(*(_QWORD*)(v23 + 24) + 16i64 * (v6 - 1));
		}
		v25 = (__int64)v34;
		v26 = v34[2];
		*(_QWORD*)v26 = *(_QWORD*)v24;
		*(_DWORD*)(v26 + 8) = v24[2];
		*(_QWORD*)(v25 + 16) += 16i64;
		if (v17)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
		if (v29)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v29 - 16) + 8i64))(v29 - 16);
	}
	else
	{
		v27 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
		v25 = a1[2];
		*(_QWORD*)v25 = *v27;
		*(_DWORD*)(v25 + 8) = *((_DWORD*)v27 + 2);
		a1[2] += 16i64;
	}
	sub_1400579E0((__int64)v34, v25, v6);
	return 1i64;
}
// 14068F544: variable 'v20' is possibly undefined
// 14068F5C1: variable 'v22' is possibly undefined
// 14068F6DB: variable 'v25' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;
// 14068F2F0: using guessed type float var_70[4];
// 14068F2F0: using guessed type char var_40[8];

