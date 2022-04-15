#include "../winhttp.h"

//----- (00000001404E6F40) ----------------------------------------------------
__int64 __fastcall sub_1404E6F40(_QWORD* a1)
{
	_QWORD* v1; // rdi
	unsigned int v2; // eax
	unsigned __int64 v3; // r8
	unsigned int v4; // edx
	_DWORD* v5; // rax
	_DWORD* v6; // rcx
	int v7; // eax
	__int64 v8; // rax
	unsigned __int64 v9; // rsi
	__int64 v10; // rcx
	unsigned __int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	int v14; // r9d
	__int64 v15; // rcx
	unsigned __int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax
	int v19; // eax
	__int64 v20; // rbx
	int v21; // r13d
	int v22; // r12d
	unsigned int v23; // r15d
	__int64 v24; // r9
	_DWORD* v25; // rdx
	__int64 v26; // rcx
	unsigned __int64* v27; // r14
	unsigned __int64 v28; // rsi
	__int64 v29; // rbx
	__int64 v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rax
	__int64* v33; // rax
	__int64 v34; // r9
	__int64 v35; // r10
	int v36; // r12d
	_DWORD* v37; // rcx
	unsigned __int64* v38; // r14
	unsigned __int64 v39; // rsi
	__int64 v40; // rbx
	__int64 v41; // rax
	__int64 v42; // rcx
	__int64 v43; // rax
	__int64* v44; // rax
	__int64 v45; // rdx
	__int64 v46; // r10
	_DWORD* v47; // rcx
	__int64 v48; // r8
	__int64 v49; // rdx
	__int64 v51; // [rsp+28h] [rbp-59h] BYREF
	unsigned __int64 v52; // [rsp+30h] [rbp-51h]
	__int64(__fastcall * *v53)(); // [rsp+38h] [rbp-49h] BYREF
	int v54; // [rsp+40h] [rbp-41h]
	_QWORD* v55; // [rsp+48h] [rbp-39h]
	int v56; // [rsp+50h] [rbp-31h]
	__int64(__fastcall * *v57)(); // [rsp+58h] [rbp-29h] BYREF
	int v58; // [rsp+60h] [rbp-21h]
	_QWORD* v59; // [rsp+68h] [rbp-19h]
	int v60; // [rsp+70h] [rbp-11h]
	__int64 v61; // [rsp+78h] [rbp-9h] BYREF
	__int64 v62; // [rsp+80h] [rbp-1h]
	unsigned __int64 v63; // [rsp+E8h] [rbp+67h]
	double v64; // [rsp+E8h] [rbp+67h]
	double v65; // [rsp+F0h] [rbp+6Fh]
	double v66; // [rsp+F0h] [rbp+6Fh]
	__int64 v67; // [rsp+F8h] [rbp+77h]

	v1 = a1;
	v2 = sub_140056D60(a1, 1u);
	v3 = v1[2];
	v4 = v2;
	v5 = (_DWORD*)(v1[3] + 16i64);
	if ((unsigned __int64)v5 >= v3 || v5 == dword_140A12138 || *(_DWORD*)(v1[3] + 24i64) != 1)
		goto LABEL_12;
	v6 = dword_140A12138;
	if ((unsigned __int64)v5 < v3)
		v6 = (_DWORD*)(v1[3] + 16i64);
	v7 = v6[2];
	if (v7 && (v7 != 1 || *v6))
	{
		if (v4 > *(_DWORD*)(qword_140C658C8 + 4))
			v4 = *(_DWORD*)(qword_140C658C8 + 4);
		v8 = sub_140020690(qword_140C658C8, v4);
	}
	else
	{
	LABEL_12:
		if (v4 > *(_DWORD*)(qword_140C658C8 + 4))
			v4 = *(_DWORD*)(qword_140C658C8 + 4);
		v8 = sub_140436D70(qword_140C658C8, v4);
	}
	v9 = 0i64;
	v67 = v8;
	v52 = 0i64;
	v51 = 0i64;
	sub_1403ABAB0(v8, &v51);
	v10 = v1[4];
	v11 = *(_QWORD*)(v10 + 112);
	v53 = off_140B569F0;
	v55 = v1;
	v56 = 1;
	if (*(_QWORD*)(v10 + 120) >= v11)
		sub_14005E2C0((__int64)v1);
	v12 = v1[2];
	v13 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v12 + 8) = 5;
	*(_QWORD*)v12 = v13;
	v1[2] += 16i64;
	v14 = sub_1400578C0((__int64)v1);
	v54 = v14;
	v63 = 0i64;
	if (v52)
	{
		do
		{
			v15 = v1[4];
			v57 = off_140B569F0;
			v59 = v1;
			v16 = *(_QWORD*)(v15 + 112);
			v60 = 1;
			if (*(_QWORD*)(v15 + 120) >= v16)
				sub_14005E2C0((__int64)v1);
			v17 = v1[2];
			v18 = sub_14005C1B0((__int64)v1, 0, 0);
			*(_DWORD*)(v17 + 8) = 5;
			*(_QWORD*)v17 = v18;
			v1[2] += 16i64;
			v19 = sub_1400578C0((__int64)v1);
			v20 = v51;
			v21 = v19;
			v58 = v19;
			v22 = *(_DWORD*)(v51 + 8 * v9);
			v23 = v19 - 1;
			v24 = *(_QWORD*)(v1[4] + 160i64);
			if ((unsigned int)(v19 - 1) >= *(_DWORD*)(v24 + 56))
			{
				if ((double)v19 == 0.0)
				{
					v25 = *(_DWORD**)(v24 + 32);
				}
				else
				{
					v65 = (double)v19;
					v25 = (_DWORD*)(*(_QWORD*)(v24 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v65) + HIDWORD(v65)) % (((1i64 << *(_BYTE*)(v24 + 11)) - 1) | 1)));
				}
				while (v25[6] != 3 || (double)v19 != *((double*)v25 + 2))
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
				v25 = (_DWORD*)(*(_QWORD*)(v24 + 24) + 16i64 * (v19 - 1));
			}
			v26 = v1[2];
			*(_QWORD*)v26 = *(_QWORD*)v25;
			*(_DWORD*)(v26 + 8) = v25[2];
			v1[2] += 16i64;
			v27 = (unsigned __int64*)sub_14018F0E0(&v61, L"eRewardProperty")[1];
			if (v27)
			{
				v28 = -1i64;
				do
					++v28;
				while (*((_BYTE*)v27 + v28));
				if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
					sub_14005E2C0((__int64)v1);
				v29 = v1[2];
				v30 = sub_140062650((__int64)v1, v27, v28);
				v9 = v63;
				*(_DWORD*)(v29 + 8) = 4;
				*(_QWORD*)v29 = v30;
				v20 = v51;
			}
			else
			{
				*(_DWORD*)(v1[2] + 8i64) = 0;
			}
			v31 = v62;
			v1[2] += 16i64;
			if (v31)
				sub_14018B900(v31, 0);
			v32 = v1[2];
			*(_DWORD*)(v32 + 8) = 3;
			*(double*)v32 = (double)v22;
			v1[2] += 16i64;
			v33 = (__int64*)sub_1400580E0((__int64)v1, -3);
			sub_14005EA50((__int64)v1, v33, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
			v1[2] -= 48i64;
			v34 = *(_QWORD*)(v1[4] + 160i64);
			v35 = v1[2];
			v36 = *(_DWORD*)(v20 + 8 * v9 + 4);
			if (v23 >= *(_DWORD*)(v34 + 56))
			{
				if ((double)v21 == 0.0)
				{
					v37 = *(_DWORD**)(v34 + 32);
				}
				else
				{
					v66 = (double)v21;
					v37 = (_DWORD*)(*(_QWORD*)(v34 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v66) + HIDWORD(v66)) % (((1i64 << *(_BYTE*)(v34 + 11)) - 1) | 1)));
				}
				while (v37[6] != 3 || (double)v21 != *((double*)v37 + 2))
				{
					v37 = (_DWORD*)*((_QWORD*)v37 + 4);
					if (!v37)
					{
						v37 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v37 = (_DWORD*)(*(_QWORD*)(v34 + 24) + 16i64 * (v21 - 1));
			}
			*(_QWORD*)v35 = *(_QWORD*)v37;
			*(_DWORD*)(v35 + 8) = v37[2];
			v1[2] += 16i64;
			v38 = (unsigned __int64*)sub_14018F0E0(&v61, L"nObjectId")[1];
			if (v38)
			{
				v39 = -1i64;
				do
					++v39;
				while (*((_BYTE*)v38 + v39));
				if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
					sub_14005E2C0((__int64)v1);
				v40 = v1[2];
				v41 = sub_140062650((__int64)v1, v38, v39);
				v9 = v63;
				*(_DWORD*)(v40 + 8) = 4;
				*(_QWORD*)v40 = v41;
				v20 = v51;
			}
			else
			{
				*(_DWORD*)(v1[2] + 8i64) = 0;
			}
			v42 = v62;
			v1[2] += 16i64;
			if (v42)
				sub_14018B900(v42, 0);
			v43 = v1[2];
			*(_DWORD*)(v43 + 8) = 3;
			*(double*)v43 = (double)v36;
			v1[2] += 16i64;
			v44 = (__int64*)sub_1400580E0((__int64)v1, -3);
			sub_14005EA50((__int64)v1, v44, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
			v1[2] -= 48i64;
			sub_1403ABC00(v67, *(_DWORD*)(v20 + 8 * v9), *(_DWORD*)(v20 + 8 * v9 + 4), (__int64)&v57);
			sub_1400FB1D0((__int64)&v53);
			sub_1400579E0((__int64)v1, v45, v21);
			v63 = ++v9;
		} while (v9 < v52);
		v1 = v55;
		v14 = v54;
	}
	else
	{
		v20 = v51;
	}
	v46 = *(_QWORD*)(v1[4] + 160i64);
	if ((unsigned int)(v14 - 1) >= *(_DWORD*)(v46 + 56))
	{
		if ((double)v14 == 0.0)
		{
			v47 = *(_DWORD**)(v46 + 32);
		}
		else
		{
			v64 = (double)v14;
			v47 = (_DWORD*)(*(_QWORD*)(v46 + 32)
				+ 40 * ((unsigned int)(LODWORD(v64) + HIDWORD(v64)) % (((1i64 << *(_BYTE*)(v46 + 11)) - 1) | 1)));
		}
		while (v47[6] != 3 || (double)v14 != *((double*)v47 + 2))
		{
			v47 = (_DWORD*)*((_QWORD*)v47 + 4);
			if (!v47)
			{
				v47 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v47 = (_DWORD*)(*(_QWORD*)(v46 + 24) + 16i64 * (v14 - 1));
	}
	v48 = v1[2];
	*(_QWORD*)v48 = *(_QWORD*)v47;
	v49 = (unsigned int)v47[2];
	*(_DWORD*)(v48 + 8) = v49;
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v49, v14);
	if (v20)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
	return 1i64;
}
// 1404E73BC: variable 'v45' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B0BD00: using guessed type wchar_t aErewardpropert_1[16];
// 140B0BD20: using guessed type wchar_t aNobjectid_1[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C658C8: using guessed type __int64 qword_140C658C8;

