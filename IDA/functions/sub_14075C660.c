#include "../winhttp.h"

//----- (000000014075C660) ----------------------------------------------------
__int64 __fastcall sub_14075C660(__int64 a1, int a2)
{
	__int64 v2; // rdi
	__int64 v3; // rcx
	unsigned __int64 v4; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // ebx
	unsigned int v9; // ebp
	unsigned int v10; // eax
	unsigned int v11; // r14d
	__int64 v12; // rax
	__int64 v13; // rsi
	__int64 v14; // rbx
	__int64 v15; // rax
	_QWORD* v16; // rax
	__int64 v17; // rdx
	int v18; // r10d
	__int64 v19; // rcx
	_QWORD* v20; // rax
	__int64 v21; // rdx
	unsigned __int16* v22; // r10
	__int64 v23; // rdx
	__int64 v24; // r9
	_DWORD* v25; // rcx
	__int64 v26; // r8
	__int64 v27; // rdx
	__int64(__fastcall * *v29)(); // [rsp+20h] [rbp-38h] BYREF
	int v30; // [rsp+28h] [rbp-30h]
	__int64 v31; // [rsp+30h] [rbp-28h]
	int v32; // [rsp+38h] [rbp-20h]
	double v33; // [rsp+60h] [rbp+8h]

	v2 = a1;
	v31 = a1;
	v3 = *(_QWORD*)(a1 + 32);
	v29 = off_140B569F0;
	v4 = *(_QWORD*)(v3 + 112);
	v32 = 1;
	if (*(_QWORD*)(v3 + 120) >= v4)
		sub_14005E2C0(v2);
	v6 = *(_QWORD*)(v2 + 16);
	v7 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(v2 + 16) += 16i64;
	v8 = sub_1400578C0(v2);
	v30 = v8;
	v9 = 0;
	if (qword_140C63838)
	{
		v10 = qword_140C63838(off_140A6A600, qword_140C63858);
		goto LABEL_8;
	}
	if (!dword_140C63B20 && (int)sub_140202600() >= 0)
	{
		v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64AA0 + 40i64))(qword_140C64AA0);
	LABEL_8:
		v11 = v10;
		if (!v10)
			goto LABEL_23;
		while (!qword_140C63848)
		{
			if (dword_140C63B20)
			{
				v13 = 0i64;
			}
			else
			{
				if ((int)sub_140202600() >= 0)
				{
					v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64AA0 + 32i64))(qword_140C64AA0, v9);
					goto LABEL_16;
				}
				v13 = 0i64;
			}
		LABEL_17:
			if (*(_DWORD*)(v13 + 4) == a2)
			{
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v14 = *(_QWORD*)(v2 + 16);
				v15 = sub_14005C1B0(v2, 0, 0);
				*(_DWORD*)(v14 + 8) = 5;
				*(_QWORD*)v14 = v15;
				*(_QWORD*)(v2 + 16) += 16i64;
				LODWORD(v14) = sub_1400578C0(v2);
				v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v14);
				v17 = *(_QWORD*)(v2 + 16);
				*(_QWORD*)v17 = *v16;
				*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
				*(_QWORD*)(v2 + 16) += 16i64;
				sub_1400F06F0(v2, v17, L"idBannerPart", v18);
				*(_QWORD*)(v2 + 16) -= 16i64;
				sub_14034BDD0(v19, *(_DWORD*)(v13 + 8));
				v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v14);
				v21 = *(_QWORD*)(v2 + 16);
				*(_QWORD*)v21 = *v20;
				*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
				*(_QWORD*)(v2 + 16) += 16i64;
				sub_1400F0870(v2, v21, L"strName", v22);
				*(_QWORD*)(v2 + 16) -= 16i64;
				sub_1400FB1D0((__int64)&v29);
				sub_1400579E0(v2, v23, v14);
			}
			if (++v9 >= v11)
			{
				v2 = v31;
				v8 = v30;
				goto LABEL_23;
			}
		}
		v12 = qword_140C63848(off_140A6A600, v9, qword_140C63858);
	LABEL_16:
		v13 = v12;
		goto LABEL_17;
	}
LABEL_23:
	v24 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
	if ((unsigned int)(v8 - 1) >= *(_DWORD*)(v24 + 56))
	{
		if ((double)v8 == 0.0)
		{
			v25 = *(_DWORD**)(v24 + 32);
		}
		else
		{
			v33 = (double)v8;
			v25 = (_DWORD*)(*(_QWORD*)(v24 + 32)
				+ 40 * ((unsigned int)(LODWORD(v33) + HIDWORD(v33)) % (((1i64 << *(_BYTE*)(v24 + 11)) - 1) | 1)));
		}
		while (v25[6] != 3 || (double)v8 != *((double*)v25 + 2))
		{
			v25 = (_DWORD*)*((_QWORD*)v25 + 4);
			if (!v25)
			{
				v25 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v25 = (_DWORD*)(*(_QWORD*)(v24 + 24) + 16i64 * (v8 - 1));
	}
	v26 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v26 = *(_QWORD*)v25;
	v27 = (unsigned int)v25[2];
	*(_DWORD*)(v26 + 8) = v27;
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400579E0(v2, v27, v8);
	return 1i64;
}
// 14075C7FD: variable 'v18' is possibly undefined
// 14075C80A: variable 'v19' is possibly undefined
// 14075C846: variable 'v22' is possibly undefined
// 14075C862: variable 'v23' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6A600: using guessed type wchar_t *off_140A6A600[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B75CC0: using guessed type wchar_t aIdbannerpart[13];
// 140B75CE0: using guessed type wchar_t aStrname_104[8];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B20: using guessed type int dword_140C63B20;
// 140C64AA0: using guessed type __int64 qword_140C64AA0;

