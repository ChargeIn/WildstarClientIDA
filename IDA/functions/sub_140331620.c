#include "../winhttp.h"

//----- (0000000140331620) ----------------------------------------------------
__int64 __fastcall sub_140331620(_DWORD* a1, __int64* a2, _DWORD* a3, _QWORD* a4, __int64 a5)
{
	unsigned int* v6; // rcx
	unsigned __int64 v10; // r12
	unsigned int v11; // ebx
	unsigned int v12; // ebx
	__int64 v13; // rax
	__int64 v14; // r15
	__int64* v15; // rax
	__int64 v16; // rax
	unsigned __int64 v17; // rdx
	__int64 v18; // rax
	int(__fastcall * v19)(__int64(__fastcall***)(), _QWORD*, __int64); // r9
	__int64* v20; // rax
	__int64 v21; // rax
	__int64 v22; // r9
	__int64* v23; // rax
	__int64 v24; // rax
	__int64 v25; // rcx
	__int64 v26; // [rsp+30h] [rbp-61h] BYREF
	__int64 v27; // [rsp+38h] [rbp-59h]
	__int64(__fastcall * *v28)(); // [rsp+50h] [rbp-41h] BYREF
	int v29; // [rsp+58h] [rbp-39h]
	__int64* v30; // [rsp+60h] [rbp-31h]
	unsigned int* v31; // [rsp+68h] [rbp-29h]
	__int64 v32; // [rsp+70h] [rbp-21h]
	__int64 v33; // [rsp+78h] [rbp-19h]
	__int64 v34; // [rsp+80h] [rbp-11h]
	__int64 v35[2]; // [rsp+88h] [rbp-9h] BYREF
	unsigned int* v36; // [rsp+98h] [rbp+7h]
	__int64 v37; // [rsp+A0h] [rbp+Fh]
	__int64 v38; // [rsp+A8h] [rbp+17h]
	int v39; // [rsp+B0h] [rbp+1Fh]

	v6 = (unsigned int*)a5;
	if (!a5)
		return 14i64;
	a1[29] = 1;
	if (!a4 || !a2 || !a3)
	{
		a1[29] = 0;
		return 12i64;
	}
	v10 = *v6;
	if ((unsigned int)v10 < 6ui64)
	{
		a1[29] = 0;
		return 5i64;
	}
	v36 = v6;
	v31 = v6;
	v37 = (__int64)v6 + v10;
	v38 = (__int64)v6 + v10;
	v30 = v35;
	v28 = off_140B64918;
	v35[1] = v10;
	v35[0] = v10;
	v39 = 0;
	v29 = 0;
	v32 = 0i64;
	v33 = 0i64;
	v34 = 0i64;
	if ((int)sub_140336C60((__int64)&v28, &a5, 0x20ui64) >= 0 && (int)sub_140336C60((__int64)&v28, &a5, 0x10ui64) >= 0)
	{
		v12 = a5;
		*a3 = a5;
		v13 = (*(__int64(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)a1 + 304i64))(a1, v12);
		v14 = v13;
		if (v13)
		{
			sub_140334A70(v13 + 80, v10, 2);
			a4[6] = a4[4];
			v17 = *(_QWORD*)(v14 + 8);
			if (v17 > a4[3])
			{
				a5 = 0x141DEBC20i64;
				sub_1401A2E50(0xBu, 0, &a5);
				sub_14018B900((__int64)a4, 0);
				v11 = 4;
				goto LABEL_36;
			}
			v18 = sub_1403374E0(a4 + 2, v17);
			if (!v18)
			{
				v11 = 6;
				goto LABEL_36;
			}
			*a2 = v18;
			a1[28] = 0;
			v19 = *(int(__fastcall**)(__int64(__fastcall***)(), _QWORD*, __int64))(v14 + 32);
			if (!v19)
			{
				if (qword_140C65828)
				{
					v20 = sub_140335F10(&v26, v12);
				}
				else
				{
					sub_14018EE90(&v26, (__int64)"Message Id #%d", v12);
					v20 = &v26;
				}
				v21 = v20[1];
				v22 = v12;
				a5 = 0x141DEBBB0i64;
				v11 = 11;
				sub_1401A3130(11, 0, &a5, v22, v21);
				if (v27)
					sub_14018B900(v27, 0);
				goto LABEL_36;
			}
			if (v19(&v28, a4 + 2, v18) >= 0)
			{
				v11 = 0;
				goto LABEL_36;
			}
			if (qword_140C65828)
			{
				v23 = sub_140335F10(&v26, v12);
			}
			else
			{
				sub_14018EE90(&v26, (__int64)"Message Id #%d", v12);
				v23 = &v26;
			}
			v24 = v23[1];
			a5 = 0x141DEBC88i64;
			sub_1401A2E50(0xBu, 0, &a5, v12, v24);
			if (v27)
			{
				sub_14018B900(v27, 0);
				v11 = 8;
				goto LABEL_36;
			}
		}
		else
		{
			if (qword_140C65828)
			{
				v15 = sub_140335F10(&v26, v12);
			}
			else
			{
				sub_14018EE90(&v26, (__int64)"Message Id #%d", v12);
				v15 = &v26;
			}
			v16 = v15[1];
			a5 = 0x141DEBB58i64;
			sub_1401A2E50(0xBu, 0, &a5, v12, v16);
			if (v27)
				sub_14018B900(v27, 0);
		}
		v11 = 8;
	}
	else
	{
		v11 = 12;
	}
LABEL_36:
	v25 = v34;
	a1[29] = 0;
	v28 = off_140B64918;
	if (v25)
	{
		sub_14018B900(v25, 0);
		v34 = 0i64;
	}
	if (v39)
		sub_14018B900((__int64)v36, 0);
	return v11;
}
// 140B64918: using guessed type __int64 (__fastcall *off_140B64918[12])();
// 140C65828: using guessed type __int64 qword_140C65828;

