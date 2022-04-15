#include "../winhttp.h"

//----- (00000001404F0DB0) ----------------------------------------------------
__int64 __fastcall sub_1404F0DB0(__int64 a1)
{
	unsigned __int64 v1; // rdx
	unsigned int v2; // ebp
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // r15
	__int64 v8; // rcx
	__int64 v9; // r14
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // r9d
	__int64 v14; // rcx
	__int64 v15; // rsi
	__int64 v16; // rcx
	unsigned __int64 v17; // rax
	__int64 v18; // rbx
	__int64 v19; // rax
	int v20; // ebx
	__int64 v21; // rdx
	__int64 v22; // r10
	_DWORD* v23; // rcx
	__int64 v24; // r8
	__int64 v25; // rdx
	__int64(__fastcall * *v27)(); // [rsp+20h] [rbp-68h] BYREF
	int v28; // [rsp+28h] [rbp-60h]
	__int64 v29; // [rsp+30h] [rbp-58h]
	int v30; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v31)(); // [rsp+40h] [rbp-48h] BYREF
	int v32; // [rsp+48h] [rbp-40h]
	__int64 v33; // [rsp+50h] [rbp-38h]
	int v34; // [rsp+58h] [rbp-30h]
	double v35; // [rsp+90h] [rbp+8h]

	v1 = *(_QWORD*)(qword_140C63650 + 768);
	v2 = 0;
	v4 = 0;
	if (v1)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v1)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = *(_QWORD*)(a1 + 32);
	v9 = qword_140C65908;
	v10 = *(_QWORD*)(v8 + 112);
	v27 = off_140B569F0;
	v29 = a1;
	v30 = 1;
	if (*(_QWORD*)(v8 + 120) >= v10)
		sub_14005E2C0(a1);
	v11 = *(_QWORD*)(a1 + 16);
	v12 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	*(_QWORD*)(a1 + 16) += 16i64;
	v13 = sub_1400578C0(a1);
	v28 = v13;
	if (*(_QWORD*)(v9 + 384))
	{
		v14 = 0i64;
		do
		{
			v15 = *(_QWORD*)(*(_QWORD*)(v9 + 376) + 8 * v14);
			if ((unsigned int)sub_1404EA830(v15))
			{
				v16 = *(_QWORD*)(a1 + 32);
				v31 = off_140B569F0;
				v33 = a1;
				v17 = *(_QWORD*)(v16 + 112);
				v34 = 1;
				if (*(_QWORD*)(v16 + 120) >= v17)
					sub_14005E2C0(a1);
				v18 = *(_QWORD*)(a1 + 16);
				v19 = sub_14005C1B0(a1, 0, 0);
				*(_DWORD*)(v18 + 8) = 5;
				*(_QWORD*)v18 = v19;
				*(_QWORD*)(a1 + 16) += 16i64;
				v20 = sub_1400578C0(a1);
				v32 = v20;
				sub_1404EA950((__int64)&v31, v15);
				sub_1400FB1D0((__int64)&v27);
				if (*(_DWORD*)(v15 + 12))
					sub_1404EA4F0(v7, *(int**)(v15 + 16), *(__m128i**)(v15 + 24), *(_DWORD*)(v15 + 4));
				sub_1400579E0(a1, v21, v20);
			}
			v14 = ++v2;
		} while ((unsigned __int64)v2 < *(_QWORD*)(v9 + 384));
		a1 = v29;
		v13 = v28;
	}
	v22 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v13 - 1) >= *(_DWORD*)(v22 + 56))
	{
		if ((double)v13 == 0.0)
		{
			v23 = *(_DWORD**)(v22 + 32);
		}
		else
		{
			v35 = (double)v13;
			v23 = (_DWORD*)(*(_QWORD*)(v22 + 32)
				+ 40 * ((unsigned int)(LODWORD(v35) + HIDWORD(v35)) % (((1i64 << *(_BYTE*)(v22 + 11)) - 1) | 1)));
		}
		while (v23[6] != 3 || (double)v13 != *((double*)v23 + 2))
		{
			v23 = (_DWORD*)*((_QWORD*)v23 + 4);
			if (!v23)
			{
				v23 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v23 = (_DWORD*)(*(_QWORD*)(v22 + 24) + 16i64 * (v13 - 1));
	}
	v24 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v24 = *(_QWORD*)v23;
	v25 = (unsigned int)v23[2];
	*(_DWORD*)(v24 + 8) = v25;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v25, v13);
	return 1i64;
}
// 1404F0F3A: variable 'v21' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65908: using guessed type __int64 qword_140C65908;

