#include "../winhttp.h"

//----- (000000014075C370) ----------------------------------------------------
__int64 __fastcall sub_14075C370(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // ebx
	unsigned int v7; // ebp
	unsigned int v8; // eax
	unsigned int v9; // r14d
	__int64 v10; // rax
	__int64 v11; // rsi
	__int64 v12; // rbx
	__int64 v13; // rax
	_QWORD* v14; // rax
	__int64 v15; // rdx
	int v16; // r10d
	__int64 v17; // rcx
	_QWORD* v18; // rax
	__int64 v19; // rdx
	unsigned __int16* v20; // r10
	__int64 v21; // rdx
	__int64 v22; // r9
	_DWORD* v23; // rcx
	__int64 v24; // r8
	__int64 v25; // rdx
	__int64(__fastcall * *v27)(); // [rsp+20h] [rbp-38h] BYREF
	int v28; // [rsp+28h] [rbp-30h]
	__int64 v29; // [rsp+30h] [rbp-28h]
	int v30; // [rsp+38h] [rbp-20h]
	double v31; // [rsp+60h] [rbp+8h]

	v1 = a1;
	v29 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v27 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 112);
	v30 = 1;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0(v1);
	v4 = *(_QWORD*)(v1 + 16);
	v5 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v1 + 16) += 16i64;
	v6 = sub_1400578C0(v1);
	v28 = v6;
	v7 = 0;
	if (qword_140C63838)
	{
		v8 = qword_140C63838(off_140A6A168, qword_140C63858);
		goto LABEL_8;
	}
	if (!dword_140C63EAC && (int)sub_1401FCCC0() >= 0)
	{
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63AE0 + 40i64))(qword_140C63AE0);
	LABEL_8:
		v9 = v8;
		if (!v8)
			goto LABEL_23;
		while (!qword_140C63848)
		{
			if (dword_140C63EAC)
			{
				v11 = 0i64;
			}
			else
			{
				if ((int)sub_1401FCCC0() >= 0)
				{
					v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63AE0 + 32i64))(qword_140C63AE0, v7);
					goto LABEL_16;
				}
				v11 = 0i64;
			}
		LABEL_17:
			if ((*(_BYTE*)(v11 + 4) & 1) != 0)
			{
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v12 = *(_QWORD*)(v1 + 16);
				v13 = sub_14005C1B0(v1, 0, 0);
				*(_DWORD*)(v12 + 8) = 5;
				*(_QWORD*)v12 = v13;
				*(_QWORD*)(v1 + 16) += 16i64;
				LODWORD(v12) = sub_1400578C0(v1);
				v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v12);
				v15 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v15 = *v14;
				*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				sub_1400F06F0(v1, v15, L"idDye", v16);
				*(_QWORD*)(v1 + 16) -= 16i64;
				sub_14034BDD0(v17, *(_DWORD*)(v11 + 8));
				v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v12);
				v19 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v19 = *v18;
				*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				sub_1400F0870(v1, v19, L"strName", v20);
				*(_QWORD*)(v1 + 16) -= 16i64;
				sub_1400FB1D0((__int64)&v27);
				sub_1400579E0(v1, v21, v12);
			}
			if (++v7 >= v9)
			{
				v1 = v29;
				v6 = v28;
				goto LABEL_23;
			}
		}
		v10 = qword_140C63848(off_140A6A168, v7, qword_140C63858);
	LABEL_16:
		v11 = v10;
		goto LABEL_17;
	}
LABEL_23:
	v22 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v6 - 1) >= *(_DWORD*)(v22 + 56))
	{
		if ((double)v6 == 0.0)
		{
			v23 = *(_DWORD**)(v22 + 32);
		}
		else
		{
			v31 = (double)v6;
			v23 = (_DWORD*)(*(_QWORD*)(v22 + 32)
				+ 40 * ((unsigned int)(LODWORD(v31) + HIDWORD(v31)) % (((1i64 << *(_BYTE*)(v22 + 11)) - 1) | 1)));
		}
		while (v23[6] != 3 || (double)v6 != *((double*)v23 + 2))
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
		v23 = (_DWORD*)(*(_QWORD*)(v22 + 24) + 16i64 * (v6 - 1));
	}
	v24 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v24 = *(_QWORD*)v23;
	v25 = (unsigned int)v23[2];
	*(_DWORD*)(v24 + 8) = v25;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v25, v6);
	return 1i64;
}
// 14075C50D: variable 'v16' is possibly undefined
// 14075C51A: variable 'v17' is possibly undefined
// 14075C556: variable 'v20' is possibly undefined
// 14075C572: variable 'v21' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6A168: using guessed type wchar_t *off_140A6A168[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B75CE0: using guessed type wchar_t aStrname_104[8];
// 140B75CF0: using guessed type wchar_t aIddye[6];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AE0: using guessed type __int64 qword_140C63AE0;
// 140C63EAC: using guessed type int dword_140C63EAC;

