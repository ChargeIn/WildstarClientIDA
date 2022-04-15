#include "../winhttp.h"

//----- (000000014068F700) ----------------------------------------------------
__int64 __fastcall sub_14068F700(_QWORD* a1)
{
	__int64 v1; // rdx
	unsigned __int64 v3; // rax
	__int64 v4; // r13
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // esi
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	_QWORD* v13; // rax
	__int64 v14; // rdx
	unsigned int v15; // r14d
	__int64 v16; // r15
	unsigned __int64 v17; // rbx
	int* v18; // rax
	__int64 v19; // r12
	unsigned int v20; // r15d
	__int64 v21; // rsi
	unsigned int v22; // ebx
	unsigned int* v23; // rax
	unsigned int* v24; // rbx
	unsigned int v25; // r8d
	__int64 v26; // rsi
	unsigned int v27; // ebx
	unsigned int* v28; // rax
	unsigned int* v29; // rbx
	unsigned int v30; // r8d
	unsigned int v31; // edx
	__int64 v32; // r9
	_DWORD* v33; // rdx
	__int64 v34; // rcx
	_QWORD* v35; // rax
	__int64 v36; // r8
	__int64 v38; // [rsp+30h] [rbp-39h] BYREF
	unsigned __int64 v39; // [rsp+38h] [rbp-31h]
	__m128 v40; // [rsp+40h] [rbp-29h] BYREF
	__int64(__fastcall * *v41)(); // [rsp+50h] [rbp-19h] BYREF
	int v42; // [rsp+58h] [rbp-11h]
	_QWORD* v43; // [rsp+60h] [rbp-9h]
	int v44; // [rsp+68h] [rbp-1h]
	char v45[8]; // [rsp+70h] [rbp+7h] BYREF
	int* v46; // [rsp+78h] [rbp+Fh]
	__int64 v47; // [rsp+80h] [rbp+17h]
	unsigned int v48; // [rsp+D0h] [rbp+67h]
	double v49; // [rsp+D0h] [rbp+67h]
	unsigned __int64 v50; // [rsp+D8h] [rbp+6Fh]

	v1 = a1[4];
	v41 = off_140B569F0;
	v3 = *(_QWORD*)(v1 + 112);
	v4 = (__int64)a1;
	v43 = a1;
	v44 = 1;
	if (*(_QWORD*)(v1 + 120) >= v3)
		sub_14005E2C0((__int64)a1);
	v5 = a1[2];
	v6 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	a1[2] += 16i64;
	v7 = sub_1400578C0((__int64)a1);
	v42 = v7;
	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v8 = sub_140056AB0(a1, 1u)) == 0
		|| (v9 = *(_QWORD*)(v8 + 8)) == 0
		|| (v10 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 48i64))(
			qword_140C65980,
			**(unsigned int**)(*(_QWORD*)(v9 + 8) + 8i64),
			0i64),
			(v11 = v10) == 0)
		|| !(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 40i64))(v10)
		|| !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 104i64))(v11)
		|| (v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 40i64))(v11),
			!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v12 + 104i64))(v12)))
	{
		v35 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
		v36 = a1[2];
		*(_QWORD*)v36 = *v35;
		v14 = *((unsigned int*)v35 + 2);
		*(_DWORD*)(v36 + 8) = v14;
		goto LABEL_58;
	}
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v11 + 488i64))(v11))
	{
		v13 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v7);
		v14 = a1[2];
		*(_QWORD*)v14 = *v13;
		*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
	LABEL_58:
		a1[2] += 16i64;
		goto LABEL_59;
	}
	v15 = 0;
	v46 = sub_14018B280(40i64, 0);
	v47 = 0i64;
	*(_BYTE*)v46 = 0;
	*((_QWORD*)v46 + 1) = 0i64;
	*((_QWORD*)v46 + 2) = v46;
	*((_QWORD*)v46 + 3) = v46;
	v48 = *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 48i64))(v11) + 496);
	(*(void(__fastcall**)(__int64, __int64*, _QWORD, _QWORD))(*(_QWORD*)v11 + 464i64))(v11, &v38, 0i64, 0i64);
	v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 312i64))(v11);
	v17 = *(_QWORD*)(v16 + 8);
	v50 = v17;
	if (v17)
	{
		v18 = sub_14018B280(8 * v17 + 16, 0);
		if (v18)
		{
			*((_QWORD*)v18 + 1) = v17;
			v19 = (__int64)(v18 + 4);
			*(_QWORD*)v18 = off_140B55060;
		}
		else
		{
			v19 = 16i64;
		}
	}
	else
	{
		v19 = 0i64;
	}
	sub_1407DB590((int*)v19, *(int**)v16, 8 * v17);
	v20 = 0;
	if (v39)
	{
		v21 = 0i64;
		while (1)
		{
			v22 = *(_DWORD*)(v38 + 4 * v21);
			if (qword_140C63840)
				break;
			if (!dword_140C63E98 && (int)sub_14024B720() >= 0)
			{
				v23 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(
					qword_140C65388,
					v22);
				goto LABEL_24;
			}
		LABEL_28:
			v21 = ++v20;
			if (v20 >= v39)
			{
				v4 = (__int64)v43;
				v7 = v42;
				v17 = v50;
				goto LABEL_30;
			}
		}
		v23 = (unsigned int*)qword_140C63840(off_140A6E228, v22, qword_140C63858);
	LABEL_24:
		v24 = v23;
		if (v23)
		{
			if ((*(_DWORD*)(qword_140C65898 + 26444) & v23[12]) != 0)
			{
				v25 = *(_DWORD*)(v38 + 4 * v21);
				v40 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v23[3], (__m128)v23[5]),
					_mm_unpacklo_ps((__m128)v23[4], (__m128)0i64));
				if ((unsigned int)sub_14043E6D0(qword_140C65898, v48, v25, v40.m128_f32))
					sub_14068FC30((__int64)a1, &v40, COERCE_DOUBLE((unsigned __int64)v24[1]), v24[11], (__int64)&v41);
			}
		}
		goto LABEL_28;
	}
LABEL_30:
	if (!v17)
		goto LABEL_43;
	v26 = 0i64;
	do
	{
		v27 = *(_DWORD*)(v19 + 8 * v26 + 4);
		if (qword_140C63840)
		{
			v28 = (unsigned int*)qword_140C63840(off_140A6E228, v27, qword_140C63858);
		}
		else
		{
			if (dword_140C63E98 || (int)sub_14024B720() < 0)
				goto LABEL_41;
			v28 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65388 + 24i64))(
				qword_140C65388,
				v27);
		}
		v29 = v28;
		if (v28)
		{
			if ((*(_DWORD*)(qword_140C65898 + 26444) & v28[12]) != 0)
			{
				v30 = *(_DWORD*)(v19 + 8 * v26 + 4);
				v31 = *(_DWORD*)(v19 + 8 * v26);
				v40 = _mm_unpacklo_ps(
					_mm_unpacklo_ps((__m128)v28[3], (__m128)v28[5]),
					_mm_unpacklo_ps((__m128)v28[4], (__m128)0i64));
				if ((unsigned int)sub_14043E6D0(qword_140C65898, v31, v30, v40.m128_f32))
					sub_14068FC30((__int64)a1, &v40, COERCE_DOUBLE((unsigned __int64)v29[1]), v29[11], (__int64)&v41);
			}
		}
	LABEL_41:
		v26 = ++v15;
	} while (v15 < v50);
	v4 = (__int64)v43;
	v7 = v42;
LABEL_43:
	v32 = *(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64);
	if ((unsigned int)(v7 - 1) >= *(_DWORD*)(v32 + 56))
	{
		if ((double)v7 == 0.0)
		{
			v33 = *(_DWORD**)(v32 + 32);
		}
		else
		{
			v49 = (double)v7;
			v33 = (_DWORD*)(*(_QWORD*)(v32 + 32)
				+ 40 * ((unsigned int)(LODWORD(v49) + HIDWORD(v49)) % (((1i64 << *(_BYTE*)(v32 + 11)) - 1) | 1)));
		}
		while (v33[6] != 3 || (double)v7 != *((double*)v33 + 2))
		{
			v33 = (_DWORD*)*((_QWORD*)v33 + 4);
			if (!v33)
			{
				v33 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v33 = (_DWORD*)(*(_QWORD*)(v32 + 24) + 16i64 * (v7 - 1));
	}
	v34 = *(_QWORD*)(v4 + 16);
	*(_QWORD*)v34 = *(_QWORD*)v33;
	*(_DWORD*)(v34 + 8) = v33[2];
	*(_QWORD*)(v4 + 16) += 16i64;
	if (v19)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
	if (v38)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v38 - 16) + 8i64))(v38 - 16);
	sub_140008410((__int64)v45);
	sub_14018B900((__int64)v46, 0);
LABEL_59:
	sub_1400579E0(v4, v14, v7);
	return 1i64;
}
// 14068FC14: variable 'v14' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6E228: using guessed type wchar_t *off_140A6E228[2];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63E98: using guessed type int dword_140C63E98;
// 140C65388: using guessed type __int64 qword_140C65388;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;
// 14068F700: using guessed type char var_50[8];

