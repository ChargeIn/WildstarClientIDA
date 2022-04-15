#include "../winhttp.h"

//----- (000000014076A0E0) ----------------------------------------------------
__int64 __fastcall sub_14076A0E0(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rcx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // r9d
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // r15
	__int64 v10; // r12
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // eax
	int v14; // r14d
	int v15; // r13d
	_QWORD* v16; // rax
	__int64 v17; // rdx
	unsigned __int64* v18; // rbp
	unsigned __int64 v19; // rsi
	__int64 v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rax
	__int64* v24; // rax
	int v25; // r14d
	_QWORD* v26; // rax
	__int64 v27; // r10
	unsigned __int64* v28; // rbp
	unsigned __int64 v29; // rsi
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rax
	__int64* v34; // rax
	int v35; // r14d
	_QWORD* v36; // rax
	__int64 v37; // r10
	unsigned __int64* v38; // rbp
	unsigned __int64 v39; // rsi
	__int64 v40; // rbx
	__int64 v41; // rax
	__int64 v42; // rcx
	__int64 v43; // rax
	__int64* v44; // rax
	int v45; // r14d
	_QWORD* v46; // rax
	__int64 v47; // r10
	unsigned __int64* v48; // rbp
	unsigned __int64 v49; // rsi
	__int64 v50; // rbx
	__int64 v51; // rax
	__int64 v52; // rcx
	__int64 v53; // rax
	__int64* v54; // rax
	__int64 v55; // rdx
	__int64 v56; // r10
	_DWORD* v57; // rcx
	__int64 v58; // r8
	__int64 v59; // rdx
	__int64(__fastcall * *v61)(); // [rsp+20h] [rbp-68h] BYREF
	int v62; // [rsp+28h] [rbp-60h]
	__int64 v63; // [rsp+30h] [rbp-58h]
	int v64; // [rsp+38h] [rbp-50h]
	__int64 v65; // [rsp+40h] [rbp-48h] BYREF
	__int64 v66; // [rsp+48h] [rbp-40h]
	__int64 v67; // [rsp+90h] [rbp+8h]
	double v68; // [rsp+90h] [rbp+8h]

	v1 = a1;
	v63 = a1;
	v2 = *(_QWORD*)(a1 + 32);
	v61 = off_140B569F0;
	v3 = *(_QWORD*)(v2 + 112);
	v64 = 1;
	if (*(_QWORD*)(v2 + 120) >= v3)
		sub_14005E2C0(v1);
	v4 = *(_QWORD*)(v1 + 16);
	v5 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(v1 + 16) += 16i64;
	v6 = sub_1400578C0(v1);
	v62 = v6;
	v7 = qword_140C65B98;
	v8 = *(_QWORD*)(qword_140C65B98 + 424);
	v67 = v8;
	if (v8)
	{
		v9 = 0i64;
		do
		{
			v10 = *(_QWORD*)(v7 + 416);
			if (*(_DWORD*)(v9 + v10 + 8))
			{
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v11 = *(_QWORD*)(v1 + 16);
				v12 = sub_14005C1B0(v1, 0, 0);
				*(_DWORD*)(v11 + 8) = 5;
				*(_QWORD*)v11 = v12;
				*(_QWORD*)(v1 + 16) += 16i64;
				v13 = sub_1400578C0(v1);
				v14 = *(unsigned __int8*)(v9 + v10);
				v15 = v13;
				v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v13);
				v17 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v17 = *v16;
				*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				v18 = (unsigned __int64*)sub_14018F0E0(&v65, L"nPlugIndex")[1];
				if (v18)
				{
					v19 = -1i64;
					do
						++v19;
					while (*((_BYTE*)v18 + v19));
					if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
						sub_14005E2C0(v1);
					v20 = *(_QWORD*)(v1 + 16);
					v21 = sub_140062650(v1, v18, v19);
					*(_DWORD*)(v20 + 8) = 4;
					*(_QWORD*)v20 = v21;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
				}
				v22 = v66;
				*(_QWORD*)(v1 + 16) += 16i64;
				if (v22)
					sub_14018B900(v22, 0);
				v23 = *(_QWORD*)(v1 + 16);
				*(_DWORD*)(v23 + 8) = 3;
				*(double*)v23 = (double)v14;
				*(_QWORD*)(v1 + 16) += 16i64;
				v24 = (__int64*)sub_1400580E0(v1, -3);
				sub_14005EA50(v1, v24, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
				*(_QWORD*)(v1 + 16) -= 48i64;
				v25 = *(_DWORD*)(v9 + v10 + 8);
				v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v15);
				*(_QWORD*)v27 = *v26;
				*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				v28 = (unsigned __int64*)sub_14018F0E0(&v65, L"nMaxHealth")[1];
				if (v28)
				{
					v29 = -1i64;
					do
						++v29;
					while (*((_BYTE*)v28 + v29));
					if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
						sub_14005E2C0(v1);
					v30 = *(_QWORD*)(v1 + 16);
					v31 = sub_140062650(v1, v28, v29);
					*(_DWORD*)(v30 + 8) = 4;
					*(_QWORD*)v30 = v31;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
				}
				v32 = v66;
				*(_QWORD*)(v1 + 16) += 16i64;
				if (v32)
					sub_14018B900(v32, 0);
				v33 = *(_QWORD*)(v1 + 16);
				*(_DWORD*)(v33 + 8) = 3;
				*(double*)v33 = (double)v25;
				*(_QWORD*)(v1 + 16) += 16i64;
				v34 = (__int64*)sub_1400580E0(v1, -3);
				sub_14005EA50(v1, v34, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
				*(_QWORD*)(v1 + 16) -= 48i64;
				v35 = *(_DWORD*)(v9 + v10 + 4);
				v36 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v15);
				*(_QWORD*)v37 = *v36;
				*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				v38 = (unsigned __int64*)sub_14018F0E0(&v65, L"nCurrentHealth")[1];
				if (v38)
				{
					v39 = -1i64;
					do
						++v39;
					while (*((_BYTE*)v38 + v39));
					if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
						sub_14005E2C0(v1);
					v40 = *(_QWORD*)(v1 + 16);
					v41 = sub_140062650(v1, v38, v39);
					*(_DWORD*)(v40 + 8) = 4;
					*(_QWORD*)v40 = v41;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
				}
				v42 = v66;
				*(_QWORD*)(v1 + 16) += 16i64;
				if (v42)
					sub_14018B900(v42, 0);
				v43 = *(_QWORD*)(v1 + 16);
				*(_DWORD*)(v43 + 8) = 3;
				*(double*)v43 = (double)v35;
				*(_QWORD*)(v1 + 16) += 16i64;
				v44 = (__int64*)sub_1400580E0(v1, -3);
				sub_14005EA50(v1, v44, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
				*(_QWORD*)(v1 + 16) -= 48i64;
				v45 = *(_DWORD*)(v9 + v10 + 12);
				v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v15);
				*(_QWORD*)v47 = *v46;
				*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				v48 = (unsigned __int64*)sub_14018F0E0(&v65, L"nUpgradeTier")[1];
				if (v48)
				{
					v49 = -1i64;
					do
						++v49;
					while (*((_BYTE*)v48 + v49));
					if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
						sub_14005E2C0(v1);
					v50 = *(_QWORD*)(v1 + 16);
					v51 = sub_140062650(v1, v48, v49);
					*(_DWORD*)(v50 + 8) = 4;
					*(_QWORD*)v50 = v51;
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
				}
				v52 = v66;
				*(_QWORD*)(v1 + 16) += 16i64;
				if (v52)
					sub_14018B900(v52, 0);
				v53 = *(_QWORD*)(v1 + 16);
				*(_DWORD*)(v53 + 8) = 3;
				*(double*)v53 = (double)v45;
				*(_QWORD*)(v1 + 16) += 16i64;
				v54 = (__int64*)sub_1400580E0(v1, -3);
				sub_14005EA50(v1, v54, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
				*(_QWORD*)(v1 + 16) -= 48i64;
				sub_1400FB1D0((__int64)&v61);
				sub_1400579E0(v1, v55, v15);
				v7 = qword_140C65B98;
				v8 = v67;
			}
			v9 += 16i64;
			v67 = --v8;
		} while (v8);
		v1 = v63;
		v6 = v62;
	}
	v56 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
	if ((unsigned int)(v6 - 1) >= *(_DWORD*)(v56 + 56))
	{
		if ((double)v6 == 0.0)
		{
			v57 = *(_DWORD**)(v56 + 32);
		}
		else
		{
			v68 = (double)v6;
			v57 = (_DWORD*)(*(_QWORD*)(v56 + 32)
				+ 40 * ((unsigned int)(LODWORD(v68) + HIDWORD(v68)) % (((1i64 << *(_BYTE*)(v56 + 11)) - 1) | 1)));
		}
		while (v57[6] != 3 || (double)v6 != *((double*)v57 + 2))
		{
			v57 = (_DWORD*)*((_QWORD*)v57 + 4);
			if (!v57)
			{
				v57 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v57 = (_DWORD*)(*(_QWORD*)(v56 + 24) + 16i64 * (v6 - 1));
	}
	v58 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v58 = *(_QWORD*)v57;
	v59 = (unsigned int)v57[2];
	*(_DWORD*)(v58 + 8) = v59;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v59, v6);
	return 1i64;
}
// 14076A304: variable 'v27' is possibly undefined
// 14076A3F0: variable 'v37' is possibly undefined
// 14076A4DD: variable 'v47' is possibly undefined
// 14076A5BA: variable 'v55' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B4E7B0: using guessed type wchar_t aNupgradetier[13];
// 140B4E7D0: using guessed type wchar_t aNcurrenthealth[15];
// 140B4E7F0: using guessed type wchar_t aNmaxhealth_0[11];
// 140B4E808: using guessed type wchar_t aNplugindex[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65B98: using guessed type __int64 qword_140C65B98;

