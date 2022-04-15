//----- (000000014068A1A0) ----------------------------------------------------
__int64 __fastcall sub_14068A1A0(__int64 a1)
{
	unsigned __int64 v1; // rdi
	_QWORD* v2; // rsi
	__int64 v3; // rcx
	unsigned __int64 v4; // rax
	unsigned __int64 v5; // r12
	__int64 v6; // r15
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // ebx
	__int64 v10; // rax
	__int64 v11; // rcx
	unsigned int v12; // eax
	__int64 v13; // rax
	__int64 v14; // r14
	__int64* v15; // rax
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rax
	unsigned int v20; // ebx
	__int64 v21; // rax
	unsigned int* v22; // rbx
	__m128* v23; // r8
	int v24; // ebx
	__int64 v25; // rdx
	__int64 v26; // r9
	_DWORD* v27; // rcx
	__int64 v28; // r8
	__int64 v29; // rdx
	__int64 v31; // [rsp+28h] [rbp-39h] BYREF
	unsigned __int64 v32; // [rsp+30h] [rbp-31h]
	float v33[4]; // [rsp+38h] [rbp-29h] BYREF
	__m128 v34; // [rsp+48h] [rbp-19h] BYREF
	__int64(__fastcall * *v35)(); // [rsp+58h] [rbp-9h] BYREF
	int v36; // [rsp+60h] [rbp-1h]
	_QWORD* v37; // [rsp+68h] [rbp+7h]
	int v38; // [rsp+70h] [rbp+Fh]
	char v39[8]; // [rsp+78h] [rbp+17h] BYREF
	int v40; // [rsp+80h] [rbp+1Fh]
	__int64 v41; // [rsp+88h] [rbp+27h]
	double v42; // [rsp+C8h] [rbp+67h]

	v1 = 0i64;
	v2 = (_QWORD*)a1;
	v37 = (_QWORD*)a1;
	v3 = *(_QWORD*)(a1 + 32);
	v35 = off_140B569F0;
	v4 = *(_QWORD*)(v3 + 112);
	v5 = 0i64;
	v32 = 0i64;
	v6 = 0i64;
	v31 = 0i64;
	v38 = 1;
	if (*(_QWORD*)(v3 + 120) >= v4)
		sub_14005E2C0((__int64)v2);
	v7 = v2[2];
	v8 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	v2[2] += 16i64;
	v9 = sub_1400578C0((__int64)v2);
	v36 = v9;
	if (*(_QWORD*)(qword_140C65898 + 120) && (v10 = sub_140056AB0(v2, 1u)) != 0 && (v11 = *(_QWORD*)(v10 + 8)) != 0)
	{
		v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + 8) + 32i64))(*(_QWORD*)(v11 + 8));
		v13 = sub_140498A40(qword_140C65980, v12, 0);
		v14 = v13;
		if (v13)
		{
			v15 = (__int64*)(*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v13 + 344i64))(v13, &v31);
			v5 = v15[1];
			v6 = *v15;
			v15[1] = 0i64;
			*v15 = 0i64;
			if (v31)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v31 - 16) + 8i64))(v31 - 16);
			goto LABEL_15;
		}
	}
	else
	{
		v14 = 0i64;
	}
	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v16 = sub_140056AB0(v2, 1u);
		if (v16)
		{
			v17 = *(_QWORD*)(v16 + 8);
			if (v17)
			{
				v18 = *(_QWORD*)(v17 + 8);
				if (v18)
				{
					v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 24i64))(v18);
					sub_140003460(&v31, (int*)(v19 + 20));
					v5 = v32;
					v6 = v31;
				}
			}
		}
	}
LABEL_15:
	if (!v5)
		goto LABEL_30;
	do
	{
		v20 = *(_DWORD*)(v6 + 4 * v1);
		if (qword_140C63840)
		{
			v21 = qword_140C63840(off_140A6E228, v20, qword_140C63858);
		}
		else
		{
			if (dword_140C63E98 || (int)sub_14024B720() < 0)
				goto LABEL_28;
			v21 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(qword_140C65388, v20);
		}
		v22 = (unsigned int*)v21;
		if (v21)
		{
			if (v14 && (unsigned int)sub_14043E6D0(qword_140C65898, *(_DWORD*)(v14 + 496), *(_DWORD*)(v6 + 4 * v1), v33))
			{
				v23 = (__m128*)v33;
			}
			else
			{
				v23 = &v34;
				v34 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v22[3], (__m128)v22[5]),
					_mm_unpacklo_ps((__m128)v22[4], (__m128)0i64));
			}
			sub_1400FA3C0((__int64)v39, (__int64)v2, v23->m128_f32);
			v24 = v40;
			sub_1400FB1D0((__int64)&v35);
			if (v41)
				sub_1400579E0(v41, v25, v24);
		}
	LABEL_28:
		++v1;
	} while (v1 < v5);
	v2 = v37;
	v9 = v36;
LABEL_30:
	v26 = *(_QWORD*)(v2[4] + 160i64);
	if ((unsigned int)(v9 - 1) >= *(_DWORD*)(v26 + 56))
	{
		if ((double)v9 == 0.0)
		{
			v27 = *(_DWORD**)(v26 + 32);
		}
		else
		{
			v42 = (double)v9;
			v27 = (_DWORD*)(*(_QWORD*)(v26 + 32)
				+ 40 * ((unsigned int)(LODWORD(v42) + HIDWORD(v42)) % (((1i64 << *(_BYTE*)(v26 + 11)) - 1) | 1)));
		}
		while (v27[6] != 3 || (double)v9 != *((double*)v27 + 2))
		{
			v27 = (_DWORD*)*((_QWORD*)v27 + 4);
			if (!v27)
			{
				v27 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v27 = (_DWORD*)(*(_QWORD*)(v26 + 24) + 16i64 * (v9 - 1));
	}
	v28 = v2[2];
	*(_QWORD*)v28 = *(_QWORD*)v27;
	v29 = (unsigned int)v27[2];
	*(_DWORD*)(v28 + 8) = v29;
	v2[2] += 16i64;
	sub_1400579E0((__int64)v2, v29, v9);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	return 1i64;
}
// 14068A3E8: variable 'v25' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6E228: using guessed type wchar_t *off_140A6E228[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E98: using guessed type int dword_140C63E98;
// 140C65388: using guessed type __int64 qword_140C65388;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;
// 14068A1A0: using guessed type float var_80[4];
// 14068A1A0: using guessed type char var_40[8];

