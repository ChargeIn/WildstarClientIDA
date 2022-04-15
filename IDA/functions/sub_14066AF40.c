#include "../winhttp.h"

//----- (000000014066AF40) ----------------------------------------------------
__int64 __fastcall sub_14066AF40(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rcx
	int v6; // ebp
	unsigned int v7; // eax
	unsigned int v8; // esi
	unsigned int v9; // ebx
	__int64 v10; // rax
	__int64 v11; // r9
	_DWORD* v12; // rcx
	__int64 v13; // r8
	__int64 v14; // rdx
	__int64(__fastcall * *v16)(); // [rsp+20h] [rbp-28h] BYREF
	int v17; // [rsp+28h] [rbp-20h]
	__int64 v18; // [rsp+30h] [rbp-18h]
	int v19; // [rsp+38h] [rbp-10h]
	double v20; // [rsp+50h] [rbp+8h]

	v1 = a1;
	v18 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v16 = off_140B569F0;
	v19 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0(v1);
	v3 = *(_QWORD*)(v1 + 16);
	v4 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	*(_QWORD*)(v1 + 16) += 16i64;
	v6 = sub_1400578C0(v1);
	v17 = v6;
	if (qword_140C63838)
	{
		v7 = qword_140C63838(off_140A69330, qword_140C63858);
	}
	else
	{
		if (dword_140C64D1C)
		{
			v8 = 0;
			goto LABEL_11;
		}
		if ((int)sub_1401EB880() < 0)
		{
			v8 = 0;
			goto LABEL_11;
		}
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64FB0 + 40i64))(qword_140C64FB0);
	}
	v8 = v7;
LABEL_11:
	v9 = 0;
	if (v8)
	{
		do
		{
			if (qword_140C63848)
			{
				v10 = qword_140C63848(off_140A69330, v9, qword_140C63858);
			}
			else if (dword_140C64D1C)
			{
				v10 = 0i64;
			}
			else if ((int)sub_1401EB880() >= 0)
			{
				v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64FB0 + 32i64))(qword_140C64FB0, v9);
			}
			else
			{
				v10 = 0i64;
			}
			sub_14034BDD0(v5, *(_DWORD*)(v10 + 4));
			sub_1400FAD30((__int64)&v16);
			++v9;
		} while (v9 < v8);
		v1 = v18;
		v6 = v17;
	}
	v11 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v6 - 1) >= *(_DWORD*)(v11 + 56))
	{
		if ((double)v6 == 0.0)
		{
			v12 = *(_DWORD**)(v11 + 32);
		}
		else
		{
			v20 = (double)v6;
			v12 = (_DWORD*)(*(_QWORD*)(v11 + 32)
				+ 40 * ((unsigned int)(LODWORD(v20) + HIDWORD(v20)) % (((1i64 << *(_BYTE*)(v11 + 11)) - 1) | 1)));
		}
		while (v12[6] != 3 || (double)v6 != *((double*)v12 + 2))
		{
			v12 = (_DWORD*)*((_QWORD*)v12 + 4);
			if (!v12)
			{
				v12 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v12 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 16i64 * (v6 - 1));
	}
	v13 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v13 = *(_QWORD*)v12;
	v14 = (unsigned int)v12[2];
	*(_DWORD*)(v13 + 8) = v14;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v14, v6);
	return 1i64;
}
// 14066B04D: variable 'v5' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A69330: using guessed type wchar_t *off_140A69330[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64D1C: using guessed type int dword_140C64D1C;
// 140C64FB0: using guessed type __int64 qword_140C64FB0;

