#include "../winhttp.h"

//----- (000000014042F470) ----------------------------------------------------
void __fastcall sub_14042F470(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rdi
	__int64 v3; // r8
	unsigned __int64 v4; // rax
	_QWORD* v5; // rsi
	__int64 v6; // rbx
	__int64 v7; // rax
	unsigned __int64 v8; // r13
	unsigned int v9; // ebx
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // eax
	unsigned int v13; // r12d
	int v14; // r15d
	__int64 v15; // r9
	int v16; // r14d
	_DWORD* v17; // rdx
	__int64 v18; // rcx
	unsigned __int64* v19; // rbp
	unsigned __int64 v20; // rsi
	__int64 v21; // rbx
	__int64 v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64* v25; // rax
	__int16* v26; // rax
	__int64 v27; // r9
	_DWORD* v28; // rdx
	__int64 v29; // rcx
	__int64 v30; // r10
	__int64 v31; // r9
	int v32; // r14d
	_DWORD* v33; // rcx
	unsigned __int64* v34; // rbp
	unsigned __int64 v35; // rsi
	__int64 v36; // rbx
	__int64 v37; // rax
	__int64 v38; // rcx
	__int64 v39; // rax
	__int64* v40; // rax
	__int64 v41; // rdx
	__int64 v42; // rdx
	__int64(__fastcall * *v43)(); // [rsp+20h] [rbp-88h] BYREF
	unsigned int v44; // [rsp+28h] [rbp-80h]
	__int64 v45; // [rsp+30h] [rbp-78h]
	int v46; // [rsp+38h] [rbp-70h]
	__int64 v47; // [rsp+40h] [rbp-68h] BYREF
	__int64 v48; // [rsp+48h] [rbp-60h]
	double v51; // [rsp+C0h] [rbp+18h]
	double v52; // [rsp+C0h] [rbp+18h]
	double v53; // [rsp+C0h] [rbp+18h]

	v2 = *(_QWORD*)(a1 + 400);
	v3 = *(_QWORD*)(v2 + 32);
	v43 = off_140B569F0;
	v45 = v2;
	v4 = *(_QWORD*)(v3 + 112);
	v5 = a2;
	v46 = 1;
	if (*(_QWORD*)(v3 + 120) >= v4)
		sub_14005E2C0(v2);
	v6 = *(_QWORD*)(v2 + 16);
	v7 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(v2 + 16) += 16i64;
	v8 = 0i64;
	v9 = sub_1400578C0(v2);
	v44 = v9;
	if (v5[1])
	{
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
				sub_14005E2C0(v2);
			v10 = *(_QWORD*)(v2 + 16);
			v11 = sub_14005C1B0(v2, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			*(_QWORD*)(v2 + 16) += 16i64;
			v12 = sub_1400578C0(v2);
			v13 = v12 - 1;
			v14 = v12;
			v15 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			v16 = **(_DWORD**)(*v5 + 8 * v8);
			if ((unsigned int)(v12 - 1) >= *(_DWORD*)(v15 + 56))
			{
				if ((double)v12 == 0.0)
				{
					v17 = *(_DWORD**)(v15 + 32);
				}
				else
				{
					v51 = (double)v12;
					v17 = (_DWORD*)(*(_QWORD*)(v15 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v51) + HIDWORD(v51)) % (((1i64 << *(_BYTE*)(v15 + 11)) - 1) | 1)));
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
				v17 = (_DWORD*)(*(_QWORD*)(v15 + 24) + 16i64 * (v12 - 1));
			}
			v18 = *(_QWORD*)(v2 + 16);
			*(_QWORD*)v18 = *(_QWORD*)v17;
			*(_DWORD*)(v18 + 8) = v17[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			v19 = (unsigned __int64*)sub_14018F0E0(&v47, L"idDestination")[1];
			if (v19)
			{
				v20 = -1i64;
				do
					++v20;
				while (*((_BYTE*)v19 + v20));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v21 = *(_QWORD*)(v2 + 16);
				v22 = sub_140062650(v2, v19, v20);
				v5 = a2;
				*(_DWORD*)(v21 + 8) = 4;
				*(_QWORD*)v21 = v22;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v23 = v48;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v23)
				sub_14018B900(v23, 0);
			v24 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v24 + 8) = 3;
			*(double*)v24 = (double)v16;
			*(_QWORD*)(v2 + 16) += 16i64;
			v25 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v25, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			*(_QWORD*)(v2 + 16) -= 48i64;
			v26 = sub_14034BDD0(*(_QWORD*)(*v5 + 8 * v8), *(_DWORD*)(*(_QWORD*)(*v5 + 8 * v8) + 8i64));
			v27 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			if (v13 >= *(_DWORD*)(v27 + 56))
			{
				if ((double)v14 == 0.0)
				{
					v28 = *(_DWORD**)(v27 + 32);
				}
				else
				{
					v52 = (double)v14;
					v28 = (_DWORD*)(*(_QWORD*)(v27 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v52) + HIDWORD(v52)) % (((1i64 << *(_BYTE*)(v27 + 11)) - 1) | 1)));
				}
				while (v28[6] != 3 || (double)v14 != *((double*)v28 + 2))
				{
					v28 = (_DWORD*)*((_QWORD*)v28 + 4);
					if (!v28)
					{
						v28 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v28 = (_DWORD*)(*(_QWORD*)(v27 + 24) + 16i64 * (v14 - 1));
			}
			v29 = *(_QWORD*)(v2 + 16);
			*(_QWORD*)v29 = *(_QWORD*)v28;
			*(_DWORD*)(v29 + 8) = v28[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			sub_1400F0870(v2, (__int64)v28, L"strName", (unsigned __int16*)v26);
			v30 = *(_QWORD*)(v2 + 16) - 16i64;
			*(_QWORD*)(v2 + 16) = v30;
			v31 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
			v32 = *(_DWORD*)(*(_QWORD*)(*v5 + 8 * v8) + 4i64);
			if (v13 >= *(_DWORD*)(v31 + 56))
			{
				if ((double)v14 == 0.0)
				{
					v33 = *(_DWORD**)(v31 + 32);
				}
				else
				{
					v53 = (double)v14;
					v33 = (_DWORD*)(*(_QWORD*)(v31 + 32)
						+ 40
						* ((unsigned int)(LODWORD(v53) + HIDWORD(v53)) % (((1i64 << *(_BYTE*)(v31 + 11)) - 1) | 1)));
				}
				while (v33[6] != 3 || (double)v14 != *((double*)v33 + 2))
				{
					v33 = (_DWORD*)*((_QWORD*)v33 + 4);
					if (!v33)
					{
						v33 = dword_140A12138;
						break;
					}
				}
			}
			else
			{
				v33 = (_DWORD*)(*(_QWORD*)(v31 + 24) + 16i64 * (v14 - 1));
			}
			*(_QWORD*)v30 = *(_QWORD*)v33;
			*(_DWORD*)(v30 + 8) = v33[2];
			*(_QWORD*)(v2 + 16) += 16i64;
			v34 = (unsigned __int64*)sub_14018F0E0(&v47, L"eType")[1];
			if (v34)
			{
				v35 = -1i64;
				do
					++v35;
				while (*((_BYTE*)v34 + v35));
				if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
					sub_14005E2C0(v2);
				v36 = *(_QWORD*)(v2 + 16);
				v37 = sub_140062650(v2, v34, v35);
				v5 = a2;
				*(_DWORD*)(v36 + 8) = 4;
				*(_QWORD*)v36 = v37;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
			}
			v38 = v48;
			*(_QWORD*)(v2 + 16) += 16i64;
			if (v38)
				sub_14018B900(v38, 0);
			v39 = *(_QWORD*)(v2 + 16);
			*(_DWORD*)(v39 + 8) = 3;
			*(double*)v39 = (double)v32;
			*(_QWORD*)(v2 + 16) += 16i64;
			v40 = (__int64*)sub_1400580E0(v2, -3);
			sub_14005EA50(v2, v40, (int*)(*(_QWORD*)(v2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
			*(_QWORD*)(v2 + 16) -= 48i64;
			sub_1400FB1D0((__int64)&v43);
			sub_1400579E0(v2, v41, v14);
			++v8;
		} while (v8 < v5[1]);
		v2 = v45;
		v9 = v44;
	}
	sub_1400EA3E0(a1, "CityDirectionsList", L"T", v9, v43);
	if (v2)
		sub_1400579E0(v2, v42, v9);
}
// 14042F942: variable 'v41' is possibly undefined
// 14042F9B5: variable 'v42' is possibly undefined
// 1409EE8B4: using guessed type wchar_t aT_8[2];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B012F0: using guessed type wchar_t aEtype_0[6];
// 140B01300: using guessed type wchar_t aStrname_16[8];
// 140B01310: using guessed type wchar_t aIddestination[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

