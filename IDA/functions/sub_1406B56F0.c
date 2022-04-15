#include "../winhttp.h"

//----- (00000001406B56F0) ----------------------------------------------------
__int64 __fastcall sub_1406B56F0(__int64 a1)
{
	__int64 v2; // r15
	int* v3; // rax
	__int64 v4; // rdx
	bool v5; // zf
	int* v6; // rax
	int* v7; // rbx
	_DWORD* v8; // rax
	__int64 v9; // r8
	_DWORD* v10; // rcx
	unsigned __int64 v11; // rdx
	__int64 v12; // rdx
	_QWORD* v13; // rdi
	int v14; // r13d
	__int64 v15; // r9
	_DWORD* v16; // rdx
	__int64 v17; // rcx
	__int64* v18; // rax
	__int64 v19; // rdx
	__int64 v20; // r14
	__int64 v21; // r12
	int* v22; // rax
	__int64 v23; // rdx
	__int64 v24; // rsi
	__int64 v26; // [rsp+28h] [rbp-49h] BYREF
	__int64 v27; // [rsp+30h] [rbp-41h]
	char v28[8]; // [rsp+38h] [rbp-39h] BYREF
	int v29; // [rsp+40h] [rbp-31h]
	_QWORD* v30; // [rsp+48h] [rbp-29h]
	__int64(__fastcall * *v31)(); // [rsp+50h] [rbp-21h] BYREF
	int v32; // [rsp+58h] [rbp-19h]
	__int64 v33; // [rsp+60h] [rbp-11h]
	int v34; // [rsp+68h] [rbp-9h]
	__int64(__fastcall * *v35)(); // [rsp+70h] [rbp-1h] BYREF
	int v36; // [rsp+78h] [rbp+7h]
	__int64 v37; // [rsp+80h] [rbp+Fh]
	__int64(__fastcall * **v38)(); // [rsp+88h] [rbp+17h]
	double v39; // [rsp+D8h] [rbp+67h]

	v2 = 0i64;
	v27 = 0i64;
	v3 = sub_14018B280(416i64, 0);
	if (v3)
	{
		*((_QWORD*)v3 + 1) = 50i64;
		*(_QWORD*)v3 = off_140B55060;
	}
	else
	{
		v3 = 0i64;
	}
	v5 = v3 + 4 == 0i64;
	v6 = v3 + 4;
	v33 = a1;
	v34 = 1;
	v32 = -2;
	v7 = 0i64;
	if (!v5)
		v7 = v6;
	v31 = off_140B569F0;
	v8 = *(_DWORD**)(a1 + 24);
	v26 = (__int64)v7;
	if ((unsigned __int64)v8 < *(_QWORD*)(a1 + 16) && v8 != dword_140A12138 && v8[2] == 5)
	{
		sub_1400579E0(a1, v4, -2);
		v9 = v33;
		v10 = dword_140A12138;
		v11 = *(_QWORD*)(v33 + 16);
		if (*(_QWORD*)(v33 + 24) < v11)
			v10 = *(_DWORD**)(v33 + 24);
		*(_QWORD*)v11 = *(_QWORD*)v10;
		*(_DWORD*)(v11 + 8) = v10[2];
		*(_QWORD*)(v9 + 16) += 16i64;
		a1 = v33;
		v32 = sub_1400578C0(v33);
	}
	v37 = a1;
	v36 = -2;
	v38 = &v31;
	v35 = off_140B56A08;
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	((void(__fastcall*)(__int64(__fastcall***)(), __int64))v35[2])(&v35, 0xFFFFFFFFi64);
	*(_QWORD*)(v33 + 16) -= 16i64;
	while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v38)[1])(v38)
		&& (unsigned int)sub_1400FCBA0((__int64)&v35))
	{
		sub_1400FB8D0((__int64)&v35, (__int64)v28);
		v13 = v30;
		v14 = v29;
		v15 = *(_QWORD*)(v30[4] + 160i64);
		if ((unsigned int)(v29 - 1) >= *(_DWORD*)(v15 + 56))
		{
			if ((double)v29 == 0.0)
			{
				v16 = *(_DWORD**)(v15 + 32);
			}
			else
			{
				v39 = (double)v29;
				v16 = (_DWORD*)(*(_QWORD*)(v15 + 32)
					+ 40 * ((unsigned int)(LODWORD(v39) + HIDWORD(v39)) % (((1i64 << *(_BYTE*)(v15 + 11)) - 1) | 1)));
			}
			while (v16[6] != 3 || (double)v29 != *((double*)v16 + 2))
			{
				v16 = (_DWORD*)*((_QWORD*)v16 + 4);
				if (!v16)
				{
					v16 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v16 = (_DWORD*)(*(_QWORD*)(v15 + 24) + 16i64 * (v29 - 1));
		}
		v17 = v30[2];
		*(_QWORD*)v17 = *(_QWORD*)v16;
		*(_DWORD*)(v17 + 8) = v16[2];
		v13[2] += 16i64;
		v18 = (__int64*)sub_140056AB0(v13, 0xFFFFFFFF);
		if (!v18 || (v20 = *v18) == 0)
		{
			sub_1400579E0((__int64)v13, v19, v14);
			goto LABEL_34;
		}
		v13[2] -= 16i64;
		v21 = v2 + 1;
		v22 = sub_14018DB00((__int64)v7, v2 + 1, 8i64);
		*(_QWORD*)&v22[2 * v2] = v20;
		v24 = (__int64)v22;
		if (v7 != v22)
		{
			sub_1407DB590(v22, v7, 8 * v2);
			if (v7)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
			v7 = (int*)v24;
			v26 = v24;
		}
		++v2;
		v27 = v21;
		sub_1400579E0((__int64)v13, v23, v14);
	}
	if (v2)
		sub_14062AA70((int*)(qword_140C65898 + 27592), &v26);
LABEL_34:
	v35 = off_140B56A08;
	if (v37)
		sub_1400579E0(v37, v12, v36);
	v31 = off_140B56A08;
	if (v33)
		sub_1400579E0(v33, v12, v32);
	if (v7)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
	return 0i64;
}
// 1406B5797: variable 'v4' is possibly undefined
// 1406B597A: variable 'v23' is possibly undefined
// 1406B5991: variable 'v19' is possibly undefined
// 1406B59FC: variable 'v12' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406B56F0: using guessed type char var_90[8];

