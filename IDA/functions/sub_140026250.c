#include "../winhttp.h"

//----- (0000000140026250) ----------------------------------------------------
__int64 __fastcall sub_140026250(__int64 a1)
{
	__int64 v1; // rdx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // esi
	__int64 v7; // r13
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // eax
	unsigned int v11; // r12d
	int v12; // r15d
	__int64 v13; // r9
	_DWORD* v14; // rdx
	__int64 v15; // rcx
	unsigned __int64* v16; // r14
	unsigned __int64 v17; // rsi
	__int64 v18; // rbx
	__int64 v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rax
	__int64* v22; // rax
	int v23; // edx
	__int64 v24; // rcx
	__int16* v25; // rax
	__int64 v26; // r9
	_DWORD* v27; // rdx
	__int64 v28; // rcx
	__int64 v29; // rdx
	__int64 v30; // r10
	__int64 v31; // r9
	_DWORD* v32; // rcx
	__int64 v33; // r9
	int v34; // r8d
	__int64 v35; // rdx
	__int64 v37; // [rsp+28h] [rbp-69h]
	double v38; // [rsp+28h] [rbp-69h]
	double v39; // [rsp+30h] [rbp-61h]
	double v40; // [rsp+30h] [rbp-61h]
	int v41; // [rsp+38h] [rbp-59h]
	__int64(__fastcall * *v42)(); // [rsp+40h] [rbp-51h] BYREF
	int v43; // [rsp+48h] [rbp-49h]
	__int64 v44; // [rsp+50h] [rbp-41h]
	int v45; // [rsp+58h] [rbp-39h]
	_QWORD v46[4]; // [rsp+60h] [rbp-31h] BYREF
	int v47; // [rsp+80h] [rbp-11h]
	int v48[7]; // [rsp+84h] [rbp-Dh]
	__int64 v49; // [rsp+A0h] [rbp+Fh]

	v1 = *(_QWORD*)(a1 + 32);
	v42 = off_140B569F0;
	v3 = *(_QWORD*)(v1 + 112);
	v44 = a1;
	v45 = 1;
	if (*(_QWORD*)(v1 + 120) >= v3)
		sub_14005E2C0(a1);
	v4 = *(_QWORD*)(a1 + 16);
	v5 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a1 + 16) += 16i64;
	v43 = sub_1400578C0(a1);
	v48[0] = 110928;
	v48[1] = 1;
	v48[2] = 110929;
	v48[3] = 2;
	v47 = 0;
	v37 = 0i64;
	v6 = 0;
	v41 = 0;
	v7 = 0i64;
	v48[4] = 110930;
	v48[5] = 3;
	v48[6] = 110931;
	v49 = 4i64;
	do
	{
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v8 = *(_QWORD*)(a1 + 16);
		v9 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		*(_QWORD*)(a1 + 16) += 16i64;
		v10 = sub_1400578C0(a1);
		v11 = v10 - 1;
		v12 = v10;
		v13 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if ((unsigned int)(v10 - 1) >= *(_DWORD*)(v13 + 56))
		{
			if ((double)v10 == 0.0)
			{
				v14 = *(_DWORD**)(v13 + 32);
			}
			else
			{
				v39 = (double)v10;
				v14 = (_DWORD*)(*(_QWORD*)(v13 + 32)
					+ 40 * ((unsigned int)(LODWORD(v39) + HIDWORD(v39)) % (((1i64 << *(_BYTE*)(v13 + 11)) - 1) | 1)));
			}
			while (v14[6] != 3 || (double)v10 != *((double*)v14 + 2))
			{
				v14 = (_DWORD*)*((_QWORD*)v14 + 4);
				if (!v14)
				{
					v14 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v14 = (_DWORD*)(*(_QWORD*)(v13 + 24) + 16i64 * (v10 - 1));
		}
		v15 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v15 = *(_QWORD*)v14;
		*(_DWORD*)(v15 + 8) = v14[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		v16 = (unsigned __int64*)sub_14018F0E0(v46, L"path")[1];
		if (v16)
		{
			v17 = -1i64;
			do
				++v17;
			while (*((_BYTE*)v16 + v17));
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v18 = *(_QWORD*)(a1 + 16);
			v19 = sub_140062650(a1, v16, v17);
			v6 = v41;
			*(_DWORD*)(v18 + 8) = 4;
			*(_QWORD*)v18 = v19;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		}
		v20 = v46[1];
		*(_QWORD*)(a1 + 16) += 16i64;
		if (v20)
			sub_14018B900(v20, 0);
		v21 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v21 + 8) = 3;
		*(double*)v21 = (double)v6;
		*(_QWORD*)(a1 + 16) += 16i64;
		v22 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v22, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		v23 = v48[v7];
		*(_QWORD*)(a1 + 16) -= 48i64;
		v25 = sub_14034BDD0(v24, v23);
		v26 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
		if (v11 >= *(_DWORD*)(v26 + 56))
		{
			if ((double)v12 == 0.0)
			{
				v27 = *(_DWORD**)(v26 + 32);
			}
			else
			{
				v40 = (double)v12;
				v27 = (_DWORD*)(*(_QWORD*)(v26 + 32)
					+ 40 * ((unsigned int)(LODWORD(v40) + HIDWORD(v40)) % (((1i64 << *(_BYTE*)(v26 + 11)) - 1) | 1)));
			}
			while (v27[6] != 3 || (double)v12 != *((double*)v27 + 2))
			{
				v27 = (_DWORD*)*((_QWORD*)v27 + 4);
				if (!v27)
				{
					v27 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v27 = (_DWORD*)(*(_QWORD*)(v26 + 24) + 16i64 * (v12 - 1));
		}
		v28 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v28 = *(_QWORD*)v27;
		*(_DWORD*)(v28 + 8) = v27[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400F0870(a1, (__int64)v27, L"name", (unsigned __int16*)v25);
		*(_QWORD*)(a1 + 16) -= 16i64;
		sub_1400FB1D0((__int64)&v42);
		sub_1400579E0(a1, v29, v12);
		++v37;
		v7 = 2 * v37;
		v6 = v48[2 * v37 - 1];
		v41 = v6;
	} while (v6 != 4);
	v30 = v44;
	v31 = *(_QWORD*)(*(_QWORD*)(v44 + 32) + 160i64);
	if ((unsigned int)(v43 - 1) >= *(_DWORD*)(v31 + 56))
	{
		if ((double)v43 == 0.0)
		{
			v32 = *(_DWORD**)(v31 + 32);
		}
		else
		{
			v38 = (double)v43;
			v32 = (_DWORD*)(*(_QWORD*)(v31 + 32)
				+ 40 * ((unsigned int)(LODWORD(v38) + HIDWORD(v38)) % (((1i64 << *(_BYTE*)(v31 + 11)) - 1) | 1)));
		}
		while (v32[6] != 3 || (double)v43 != *((double*)v32 + 2))
		{
			v32 = (_DWORD*)*((_QWORD*)v32 + 4);
			if (!v32)
			{
				v32 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v32 = (_DWORD*)(*(_QWORD*)(v31 + 24) + 16i64 * (v43 - 1));
	}
	v33 = *(_QWORD*)(v44 + 16);
	v34 = v43;
	*(_QWORD*)v33 = *(_QWORD*)v32;
	v35 = (unsigned int)v32[2];
	*(_DWORD*)(v33 + 8) = v35;
	*(_QWORD*)(v30 + 16) += 16i64;
	sub_1400579E0(v30, v35, v34);
	return 1i64;
}
// 1400264DE: variable 'v24' is possibly undefined
// 1400265AB: variable 'v29' is possibly undefined
// 1409EE030: using guessed type wchar_t aPath[5];
// 1409EE040: using guessed type wchar_t aName[5];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

