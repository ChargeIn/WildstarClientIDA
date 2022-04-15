#include "../winhttp.h"

//----- (000000014074D930) ----------------------------------------------------
__int64 __fastcall sub_14074D930(__int64 a1)
{
	unsigned __int64 v1; // rdx
	unsigned int v3; // ecx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // eax
	__int64 v8; // rcx
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // eax
	__int64 v14; // r13
	__int64 v15; // r14
	unsigned __int64 v16; // rsi
	int v17; // r9d
	unsigned int v18; // ebx
	__int64 v19; // rax
	int* v20; // r15
	__int64 v21; // rbx
	__int64 v22; // rax
	int v23; // eax
	int v24; // ebx
	int v25; // r12d
	_QWORD* v26; // rax
	__int64 v27; // rcx
	unsigned __int64* v28; // rbp
	unsigned __int64 v29; // rsi
	__int64 v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rax
	__int64* v34; // rax
	__int64 v35; // rcx
	_QWORD* v36; // rax
	__int64 v37; // rcx
	__int64 v38; // rdx
	unsigned __int16* v39; // r11
	__int64 v40; // rdx
	__int64 v41; // r10
	_DWORD* v42; // rcx
	__int64 v43; // r8
	__int64 v44; // rdx
	__int64 v46; // [rsp+20h] [rbp-78h] BYREF
	unsigned __int64 v47; // [rsp+28h] [rbp-70h]
	__int64(__fastcall * *v48)(); // [rsp+30h] [rbp-68h] BYREF
	int v49; // [rsp+38h] [rbp-60h]
	__int64 v50; // [rsp+40h] [rbp-58h]
	int v51; // [rsp+48h] [rbp-50h]
	_QWORD v52[4]; // [rsp+50h] [rbp-48h] BYREF
	int v53; // [rsp+A0h] [rbp+8h]
	double v54; // [rsp+A0h] [rbp+8h]

	v1 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v1)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v1)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	v47 = 0i64;
	v46 = 0i64;
	sub_140644EE0(v8, v7, &v46);
	v9 = *(_QWORD*)(a1 + 32);
	v48 = off_140B569F0;
	v10 = *(_QWORD*)(v9 + 112);
	v50 = a1;
	v51 = 1;
	if (*(_QWORD*)(v9 + 120) >= v10)
		sub_14005E2C0(a1);
	v11 = *(_QWORD*)(a1 + 16);
	v12 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	*(_QWORD*)(a1 + 16) += 16i64;
	v13 = sub_1400578C0(a1);
	v14 = v46;
	v15 = 0i64;
	v16 = v47;
	v17 = v13;
	v49 = v13;
	if (v47)
	{
		while (1)
		{
			v18 = *(_DWORD*)(v14 + 4 * v15);
			if (qword_140C63840)
				break;
			if (!dword_140C638BC && (int)sub_1401E9680() >= 0)
			{
				v19 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64768 + 24i64))(qword_140C64768, v18);
			LABEL_15:
				v20 = (int*)v19;
				if (v19)
				{
					if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
						sub_14005E2C0(a1);
					v21 = *(_QWORD*)(a1 + 16);
					v22 = sub_14005C1B0(a1, 0, 0);
					*(_DWORD*)(v21 + 8) = 5;
					*(_QWORD*)v21 = v22;
					*(_QWORD*)(a1 + 16) += 16i64;
					v23 = sub_1400578C0(a1);
					v24 = *v20;
					v25 = v23;
					v53 = *v20;
					v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v23);
					v27 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v27 = *v26;
					*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					v28 = (unsigned __int64*)sub_14018F0E0(v52, L"nCategoryId")[1];
					if (v28)
					{
						v29 = -1i64;
						do
							++v29;
						while (*((_BYTE*)v28 + v29));
						if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
							sub_14005E2C0(a1);
						v30 = *(_QWORD*)(a1 + 16);
						v31 = sub_140062650(a1, v28, v29);
						v16 = v47;
						*(_DWORD*)(v30 + 8) = 4;
						*(_QWORD*)v30 = v31;
						v24 = v53;
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					}
					v32 = v52[1];
					*(_QWORD*)(a1 + 16) += 16i64;
					if (v32)
						sub_14018B900(v32, 0);
					v33 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(v33 + 8) = 3;
					*(double*)v33 = (double)v24;
					*(_QWORD*)(a1 + 16) += 16i64;
					v34 = (__int64*)sub_1400580E0(a1, -3);
					sub_14005EA50(a1, v34, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 48i64;
					sub_14034BDD0(v35, v20[1]);
					v36 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v25);
					v37 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v37 = *v36;
					*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F0870(a1, v38, L"strCategoryName", v39);
					*(_QWORD*)(a1 + 16) -= 16i64;
					sub_1400FB1D0((__int64)&v48);
					sub_1400579E0(a1, v40, v25);
				}
			}
			if (++v15 >= v16)
			{
				a1 = v50;
				v17 = v49;
				goto LABEL_30;
			}
		}
		v19 = qword_140C63840(off_140A69170, v18, qword_140C63858);
		goto LABEL_15;
	}
LABEL_30:
	v41 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v17 - 1) >= *(_DWORD*)(v41 + 56))
	{
		if ((double)v17 == 0.0)
		{
			v42 = *(_DWORD**)(v41 + 32);
		}
		else
		{
			v54 = (double)v17;
			v42 = (_DWORD*)(*(_QWORD*)(v41 + 32)
				+ 40 * ((unsigned int)(LODWORD(v54) + HIDWORD(v54)) % (((1i64 << *(_BYTE*)(v41 + 11)) - 1) | 1)));
		}
		while (v42[6] != 3 || (double)v17 != *((double*)v42 + 2))
		{
			v42 = (_DWORD*)*((_QWORD*)v42 + 4);
			if (!v42)
			{
				v42 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v42 = (_DWORD*)(*(_QWORD*)(v41 + 24) + 16i64 * (v17 - 1));
	}
	v43 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v43 = *(_QWORD*)v42;
	v44 = (unsigned int)v42[2];
	*(_DWORD*)(v43 + 8) = v44;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v44, v17);
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
	return 1i64;
}
// 14074D9B1: variable 'v8' is possibly undefined
// 14074DBE8: variable 'v35' is possibly undefined
// 14074DC29: variable 'v38' is possibly undefined
// 14074DC29: variable 'v39' is possibly undefined
// 14074DC46: variable 'v40' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A69170: using guessed type wchar_t *off_140A69170[2];
// 140B4AAE0: using guessed type wchar_t aNcategoryid_2[12];
// 140B4AC90: using guessed type wchar_t aStrcategorynam[16];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638BC: using guessed type int dword_140C638BC;
// 140C64768: using guessed type __int64 qword_140C64768;

