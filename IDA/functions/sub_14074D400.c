#include "../winhttp.h"

//----- (000000014074D400) ----------------------------------------------------
__int64 __fastcall sub_14074D400(_QWORD* a1)
{
	int v1; // ebp
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rbx
	int v8; // eax
	__int64 v9; // rdx
	_DWORD* v10; // rcx
	int v11; // r15d
	int v12; // eax
	BOOL v13; // eax
	int v14; // r14d
	_DWORD* v15; // rcx
	int v16; // eax
	BOOL v17; // ebx
	int* v18; // rax
	int* v19; // rsi
	__int64 v20; // rcx
	__int64 v21; // rcx
	unsigned __int64 v22; // rax
	__int64 v23; // rbx
	__int64 v24; // rax
	int v25; // eax
	int* v26; // rbx
	int v27; // r9d
	__int64 v28; // rdx
	__int64 v29; // r10
	_DWORD* v30; // rcx
	__int64 v31; // rdx
	int* v32; // rbx
	__int64 v33; // rcx
	__int64(__fastcall * *v35)(); // [rsp+30h] [rbp-38h] BYREF
	int* v36; // [rsp+38h] [rbp-30h]
	_QWORD* v37; // [rsp+40h] [rbp-28h]
	int v38; // [rsp+48h] [rbp-20h]
	double v39; // [rsp+70h] [rbp+8h]

	v1 = 0;
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
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = *(_QWORD*)(v7 + 400);
	v10 = dword_140A12138;
	v11 = v8;
	if ((unsigned __int64)(*(_QWORD*)(v9 + 24) + 16i64) < *(_QWORD*)(v9 + 16))
		v10 = (_DWORD*)(*(_QWORD*)(v9 + 24) + 16i64);
	v12 = v10[2];
	v13 = v12 && (v12 != 1 || *v10);
	v14 = v13;
	v15 = dword_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(v9 + 24) + 32i64) < *(_QWORD*)(v9 + 16))
		v15 = (_DWORD*)(*(_QWORD*)(v9 + 24) + 32i64);
	v16 = v15[2];
	v17 = v16 && (v16 != 1 || *v15);
	v18 = sub_14018B280(24i64, 0);
	LOBYTE(v1) = v17;
	*(_QWORD*)v18 = v18;
	v19 = v18;
	v36 = v18;
	*((_QWORD*)v18 + 1) = v18;
	sub_140644610(v20, v11, (__int64)&v35, v1, v14, 1);
	v21 = a1[4];
	v35 = off_140B569F0;
	v22 = *(_QWORD*)(v21 + 112);
	v37 = a1;
	v38 = 1;
	if (*(_QWORD*)(v21 + 120) >= v22)
		sub_14005E2C0((__int64)a1);
	v23 = a1[2];
	v24 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v23 + 8) = 5;
	*(_QWORD*)v23 = v24;
	a1[2] += 16i64;
	v25 = sub_1400578C0((__int64)a1);
	v26 = *(int**)v19;
	v27 = v25;
	LODWORD(v36) = v25;
	if (v26 != v19)
	{
		do
		{
			v28 = *(_QWORD*)(*((_QWORD*)v26 + 2) + 40i64);
			if (v28 && (unsigned int)sub_1404332A0(a1, v28))
			{
				sub_1400FB470((__int64)&v35);
				a1 = v37;
				v37[2] -= 16i64;
			}
			v26 = *(int**)v26;
		} while (v26 != v19);
		v27 = (int)v36;
	}
	v29 = *(_QWORD*)(a1[4] + 160i64);
	if ((unsigned int)(v27 - 1) >= *(_DWORD*)(v29 + 56))
	{
		if ((double)v27 == 0.0)
		{
			v30 = *(_DWORD**)(v29 + 32);
		}
		else
		{
			v39 = (double)v27;
			v30 = (_DWORD*)(*(_QWORD*)(v29 + 32)
				+ 40 * ((unsigned int)(LODWORD(v39) + HIDWORD(v39)) % (((1i64 << *(_BYTE*)(v29 + 11)) - 1) | 1)));
		}
		while (v30[6] != 3 || (double)v27 != *((double*)v30 + 2))
		{
			v30 = (_DWORD*)*((_QWORD*)v30 + 4);
			if (!v30)
			{
				v30 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v30 = (_DWORD*)(*(_QWORD*)(v29 + 24) + 16i64 * (v27 - 1));
	}
	v31 = a1[2];
	*(_QWORD*)v31 = *(_QWORD*)v30;
	*(_DWORD*)(v31 + 8) = v30[2];
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v31, v27);
	v32 = *(int**)v19;
	while (v32 != v19)
	{
		v33 = (__int64)v32;
		v32 = *(int**)v32;
		sub_14018B900(v33, 0);
	}
	*(_QWORD*)v19 = v19;
	*((_QWORD*)v19 + 1) = v19;
	sub_14018B900((__int64)v19, 0);
	return 1i64;
}
// 14074D51E: variable 'v20' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;

