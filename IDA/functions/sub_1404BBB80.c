#include "../winhttp.h"

//----- (00000001404BBB80) ----------------------------------------------------
__int64 __fastcall sub_1404BBB80(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // r12
	unsigned int v8; // ebx
	_QWORD* v9; // rdi
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // r14d
	unsigned int v13; // edx
	int* v14; // rax
	int v15; // r13d
	__int64 v16; // r9
	_DWORD* v17; // rdx
	__int64 v18; // rcx
	unsigned __int64* v19; // rbp
	unsigned __int64 v20; // rsi
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64* v25; // rax
	__int64 v26; // rdx
	__int64 v27; // rdx
	__int64(__fastcall * *v29)(); // [rsp+20h] [rbp-78h] BYREF
	unsigned int v30; // [rsp+28h] [rbp-70h]
	__int64 v31; // [rsp+30h] [rbp-68h]
	int v32; // [rsp+38h] [rbp-60h]
	__int64(__fastcall * *v33)(); // [rsp+40h] [rbp-58h] BYREF
	__int64 v34; // [rsp+48h] [rbp-50h]
	_QWORD* v35; // [rsp+50h] [rbp-48h]
	int v36; // [rsp+58h] [rbp-40h]
	double v37; // [rsp+A0h] [rbp+8h]

	v2 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v29 = off_140B569F0;
	v4 = *(_QWORD*)(v2 + 32);
	v31 = v2;
	v32 = 1;
	if (*(_QWORD*)(v4 + 120) >= *(_QWORD*)(v4 + 112))
		sub_14005E2C0(v2);
	v5 = *(_QWORD*)(v2 + 16);
	v6 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v2 + 16) += 16i64;
	v7 = 0i64;
	v8 = sub_1400578C0(v2);
	v30 = v8;
	if (*(_DWORD*)a2)
	{
		do
		{
			v33 = off_140B569F0;
			v36 = 1;
			v9 = *(_QWORD**)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
			v35 = v9;
			if (*(_QWORD*)(v9[4] + 120i64) >= *(_QWORD*)(v9[4] + 112i64))
				sub_14005E2C0((__int64)v9);
			v10 = v9[2];
			v11 = sub_14005C1B0((__int64)v9, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			v9[2] += 16i64;
			v12 = sub_1400578C0((__int64)v9);
			v13 = *(_DWORD*)(*(_QWORD*)(a2 + 8) + 4 * v7);
			LODWORD(v34) = v12;
			v14 = sub_1400B5DF0(qword_140C658F0, v13, 0i64);
			if ((unsigned int)sub_140415C70(v9, (__int64)v14))
			{
				sub_1400FB540((__int64)&v33);
				v9[2] -= 16i64;
			}
			v15 = *(_DWORD*)(*(_QWORD*)(a2 + 16) + 4 * v7);
			v16 = *(_QWORD*)(v9[4] + 160i64);
			if ((unsigned int)(v12 - 1) >= *(_DWORD*)(v16 + 56))
			{
				if ((double)v12 == 0.0)
				{
					v17 = *(_DWORD**)(v16 + 32);
				}
				else
				{
					v37 = (double)v12;
					v17 = (_DWORD*)(*(_QWORD*)(v16 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v37) + HIDWORD(v37)) % (((1i64 << *(_BYTE*)(v16 + 11)) - 1) | 1)));
				}
				while (v17[6] != 3 || (double)v12 != *((double*)v17 + 2))
				{
					v17 = (_DWORD*)*((_QWORD*)v17 + 4);
					if (!v17)
					{
						v17 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v17 = (_DWORD*)(*(_QWORD*)(v16 + 24) + 16i64 * (v12 - 1));
			}
			v18 = v9[2];
			*(_QWORD*)v18 = *(_QWORD*)v17;
			*(_DWORD*)(v18 + 8) = v17[2];
			v9[2] += 16i64;
			v19 = (unsigned __int64*)sub_14018F0E0(&v33, L"nCount")[1];
			if (v19)
			{
				v20 = -1i64;
				do
					++v20;
				while (*((_BYTE*)v19 + v20));
				if (*(_QWORD*)(v9[4] + 120i64) >= *(_QWORD*)(v9[4] + 112i64))
					sub_14005E2C0((__int64)v9);
				v21 = v9[2];
				v22 = sub_140062650((__int64)v9, v19, v20);
				*(_DWORD*)(v21 + 8) = 4;
				*(_QWORD*)v21 = v22;
			}
			else
			{
				*(_DWORD*)(v9[2] + 8i64) = 0;
			}
			v23 = v34;
			v9[2] += 16i64;
			if (v23)
				sub_14018B900(v23, 0);
			v24 = v9[2];
			*(_DWORD*)(v24 + 8) = 3;
			*(double*)v24 = (double)v15;
			v9[2] += 16i64;
			v25 = (__int64*)sub_1400580E0((__int64)v9, -3);
			sub_14005EA50((__int64)v9, v25, (int*)(v9[2] - 32i64), (unsigned int*)(v9[2] - 16i64));
			v9[2] -= 48i64;
			sub_1400FB1D0((__int64)&v29);
			sub_1400579E0((__int64)v9, v26, v12);
			v7 = (unsigned int)(v7 + 1);
		} while ((unsigned int)v7 < *(_DWORD*)a2);
		v2 = v31;
		v8 = v30;
	}
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "HarvestItemsSentToOwner", byte_1409EC24C, v8, v29);
	if (v2)
		sub_1400579E0(v2, v27, v8);
	return 0i64;
}
// 1404BBE72: variable 'v26' is possibly undefined
// 1404BBEEA: variable 'v27' is possibly undefined
// 1409EC24C: using guessed type _BYTE byte_1409EC24C[48];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B09850: using guessed type wchar_t aNcount_15[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

