#include "../winhttp.h"

//----- (0000000140025C50) ----------------------------------------------------
__int64 __fastcall sub_140025C50(_QWORD* a1)
{
	__int64 v1; // rbx
	_DWORD* v3; // rax
	int v4; // r14d
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // ebx
	unsigned int v10; // esi
	unsigned int v11; // eax
	unsigned int v12; // ebp
	__int64 v13; // rcx
	unsigned __int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // rdx
	int v18; // ebx
	__int64 v19; // rax
	_DWORD* v20; // r8
	__int64 v21; // rcx
	__int64 v22; // rax
	__int64* v23; // rax
	__int64 v24; // r9
	_DWORD* v25; // rcx
	__int64 v26; // r8
	__int64 v27; // rdx
	__int64(__fastcall * *v29)(); // [rsp+20h] [rbp-68h] BYREF
	int v30; // [rsp+28h] [rbp-60h]
	_QWORD* v31; // [rsp+30h] [rbp-58h]
	int v32; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v33)(); // [rsp+40h] [rbp-48h] BYREF
	int v34; // [rsp+48h] [rbp-40h]
	_QWORD* v35; // [rsp+50h] [rbp-38h]
	int v36; // [rsp+58h] [rbp-30h]
	double v37; // [rsp+90h] [rbp+8h] BYREF
	__int64 v38; // [rsp+98h] [rbp+10h] BYREF

	v1 = qword_140C66DA8;
	if (!*(_QWORD*)(qword_140C66DA8 + 312))
		sub_140021BB0((_QWORD*)qword_140C66DA8);
	if (!*(_QWORD*)(v1 + 344))
		sub_140021D40(v1);
	v3 = (_DWORD*)a1[3];
	if ((unsigned __int64)v3 >= a1[2] || v3 == dword_140A12138 || (int)v3[2] <= 0)
		v4 = 0;
	else
		v4 = sub_140056D60(a1, 1u);
	v5 = a1[4];
	v31 = a1;
	v6 = *(_QWORD*)(v5 + 112);
	v29 = off_140B569F0;
	v32 = 1;
	if (*(_QWORD*)(v5 + 120) >= v6)
		sub_14005E2C0((__int64)a1);
	v7 = a1[2];
	v8 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	a1[2] += 16i64;
	v9 = sub_1400578C0((__int64)a1);
	v30 = v9;
	v10 = 0;
	if (qword_140C63838)
	{
		v11 = qword_140C63838(off_140A696B0, qword_140C63858);
		goto LABEL_17;
	}
	if (!dword_140C64324 && (int)sub_1401EFC80() >= 0)
	{
		v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63F68 + 40i64))(qword_140C63F68);
	LABEL_17:
		v12 = v11;
		if (!v11)
			goto LABEL_42;
		while (1)
		{
			v13 = a1[4];
			v33 = off_140B569F0;
			v35 = a1;
			v14 = *(_QWORD*)(v13 + 112);
			v36 = 1;
			if (*(_QWORD*)(v13 + 120) >= v14)
				sub_14005E2C0((__int64)a1);
			v15 = a1[2];
			v16 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v15 + 8) = 5;
			*(_QWORD*)v15 = v16;
			a1[2] += 16i64;
			v18 = sub_1400578C0((__int64)a1);
			v34 = v18;
			if (qword_140C63848)
				break;
			if (dword_140C64324)
			{
				v20 = 0i64;
			}
			else
			{
				if ((int)sub_1401EFC80() >= 0)
				{
					v19 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63F68 + 32i64))(qword_140C63F68, v10);
					goto LABEL_27;
				}
				v20 = 0i64;
			}
		LABEL_28:
			if (v20[23] == v4)
			{
				v21 = *(_QWORD*)(qword_140C66DA8 + 304);
				v17 = v21;
				v22 = *(_QWORD*)(v21 + 8);
				while (v22)
				{
					if (*(_DWORD*)(v22 + 32) < *v20)
					{
						v22 = *(_QWORD*)(v22 + 24);
					}
					else
					{
						v17 = v22;
						v22 = *(_QWORD*)(v22 + 16);
					}
				}
				if (v17 == v21 || *v20 < *(_DWORD*)(v17 + 32))
				{
					v38 = *(_QWORD*)(qword_140C66DA8 + 304);
					v23 = &v38;
				}
				else
				{
					v37 = *(double*)&v17;
					v23 = (__int64*)&v37;
				}
				if (*v23 != v21)
				{
					sub_140025070((__int64)&v33, v20);
					sub_1400FB1D0((__int64)&v29);
				}
			}
			sub_1400579E0((__int64)a1, v17, v18);
			if (++v10 >= v12)
			{
				a1 = v31;
				v9 = v30;
				goto LABEL_42;
			}
		}
		v19 = qword_140C63848(off_140A696B0, v10, qword_140C63858);
	LABEL_27:
		v20 = (_DWORD*)v19;
		goto LABEL_28;
	}
LABEL_42:
	v24 = *(_QWORD*)(a1[4] + 160i64);
	if ((unsigned int)(v9 - 1) >= *(_DWORD*)(v24 + 56))
	{
		v37 = (double)v9;
		if ((double)v9 == 0.0)
			v25 = *(_DWORD**)(v24 + 32);
		else
			v25 = (_DWORD*)(*(_QWORD*)(v24 + 32)
				+ 40 * ((unsigned int)(LODWORD(v37) + HIDWORD(v37)) % (((1i64 << *(_BYTE*)(v24 + 11)) - 1) | 1)));
		while (v25[6] != 3 || (double)v9 != *((double*)v25 + 2))
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
		v25 = (_DWORD*)(*(_QWORD*)(v24 + 24) + 16i64 * (v9 - 1));
	}
	v26 = a1[2];
	*(_QWORD*)v26 = *(_QWORD*)v25;
	v27 = (unsigned int)v25[2];
	*(_DWORD*)(v26 + 8) = v27;
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v27, v9);
	return 1i64;
}
// 140025EBB: variable 'v17' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A696B0: using guessed type wchar_t *off_140A696B0[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F68: using guessed type __int64 qword_140C63F68;
// 140C64324: using guessed type int dword_140C64324;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

