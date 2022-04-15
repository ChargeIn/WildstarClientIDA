#include "../winhttp.h"

//----- (0000000140754600) ----------------------------------------------------
__int64 __fastcall sub_140754600(__int64 a1)
{
	unsigned int v2; // ecx
	unsigned __int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // r9d
	__int64 v10; // rbx
	__int64 v11; // r8
	unsigned int v12; // r14d
	__int64 v13; // rax
	__int64 v14; // r13
	__int64 v15; // rdx
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64* v18; // rax
	__int64 v19; // rax
	__int64 v20; // r15
	__int64 v21; // rcx
	unsigned __int64 v22; // rax
	__int64 v23; // rdi
	__int64 v24; // rax
	int v25; // eax
	__int64 v26; // rcx
	int v27; // r12d
	_QWORD* v28; // rax
	__int64 v29; // rdx
	int v30; // r10d
	_QWORD* v31; // rax
	__int64 v32; // r10
	__int64 v33; // rdx
	int v34; // r11d
	float v35; // xmm6_4
	_QWORD* v36; // rax
	__int64 v37; // r10
	unsigned __int64* v38; // rdx
	unsigned __int64 v39; // r8
	__int64 v40; // rax
	__int64* v41; // rax
	__int64 v42; // rdi
	__int64 v43; // rcx
	float v44; // xmm6_4
	_QWORD* v45; // rax
	unsigned __int64* v46; // rdx
	unsigned __int64 v47; // r8
	__int64 v48; // rax
	__int64* v49; // rax
	__int64 v50; // rcx
	int v51; // edx
	_QWORD* v52; // rax
	__int64 v53; // rdx
	unsigned __int16* v54; // r10
	__int64 v55; // rcx
	unsigned __int64 v56; // rax
	__int64 v57; // rdi
	__int64 v58; // rax
	float* v59; // rdi
	__int64 v60; // r14
	int v61; // edi
	__int64 v62; // rdx
	__int64 v63; // rdx
	__int64 v64; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v67; // r10
	_DWORD* v68; // rcx
	__int64 v69; // r8
	__int64 v70; // rdx
	__int64(__fastcall * *v72)(); // [rsp+28h] [rbp-69h] BYREF
	__int64 v73; // [rsp+30h] [rbp-61h]
	__int64 v74; // [rsp+38h] [rbp-59h]
	int v75; // [rsp+40h] [rbp-51h]
	__int64(__fastcall * *v76)(); // [rsp+48h] [rbp-49h] BYREF
	int v77; // [rsp+50h] [rbp-41h]
	__int64 v78; // [rsp+58h] [rbp-39h]
	int v79; // [rsp+60h] [rbp-31h]
	__int64(__fastcall * *v80)(); // [rsp+68h] [rbp-29h] BYREF
	int v81; // [rsp+70h] [rbp-21h]
	__int64 v82; // [rsp+78h] [rbp-19h]
	int v83; // [rsp+80h] [rbp-11h]
	char v84[8]; // [rsp+88h] [rbp-9h] BYREF
	__int64 v85; // [rsp+90h] [rbp-1h]
	__int64 v86; // [rsp+F8h] [rbp+67h]
	double v87; // [rsp+F8h] [rbp+67h]
	__int64 v88; // [rsp+100h] [rbp+6Fh] BYREF
	__int64 v89; // [rsp+108h] [rbp+77h] BYREF

	v2 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = 0i64;
		do
		{
			if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(qword_140C63650 + 760) + 8 * v4) + 400i64) == a1)
				break;
			v4 = ++v2;
		} while (v2 < v3);
	}
	sub_14048B2A0((__int64)v84, qword_140C659A8 + 48);
	v5 = *(_QWORD*)(a1 + 32);
	v6 = *(_QWORD*)(v5 + 112);
	v76 = off_140B569F0;
	v78 = a1;
	v79 = 1;
	if (*(_QWORD*)(v5 + 120) >= v6)
		sub_14005E2C0(a1);
	v7 = *(_QWORD*)(a1 + 16);
	v8 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	*(_QWORD*)(a1 + 16) += 16i64;
	v9 = sub_1400578C0(a1);
	v77 = v9;
	v10 = *(_QWORD*)(v85 + 16);
	if (v10 != v85)
	{
		while (1)
		{
			v11 = *(_QWORD*)(v10 + 40);
			v12 = *(_DWORD*)(v10 + 32);
			v86 = v11;
			if (qword_140C63840)
				break;
			if (!dword_140C63B5C)
			{
				if ((int)sub_140202E80() < 0)
				{
					v14 = 0i64;
				LABEL_16:
					v11 = v86;
					goto LABEL_17;
				}
				v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65030 + 24i64))(qword_140C65030, v12);
			LABEL_15:
				v14 = v13;
				goto LABEL_16;
			}
			v14 = 0i64;
		LABEL_17:
			v15 = *(_QWORD*)(qword_140C659A8 + 16);
			v16 = v15;
			v17 = *(_QWORD*)(v15 + 8);
			while (v17)
			{
				if (*(_DWORD*)(v17 + 32) < v12)
				{
					v17 = *(_QWORD*)(v17 + 24);
				}
				else
				{
					v16 = v17;
					v17 = *(_QWORD*)(v17 + 16);
				}
			}
			if (v16 == v15 || v12 < *(_DWORD*)(v16 + 32))
			{
				v89 = *(_QWORD*)(qword_140C659A8 + 16);
				v18 = &v89;
			}
			else
			{
				v88 = v16;
				v18 = &v88;
			}
			v19 = *v18;
			if (v19 == *(_QWORD*)(qword_140C659A8 + 16))
				v20 = 0i64;
			else
				v20 = *(_QWORD*)(v19 + 40);
			if (v11 && v20 && v14)
			{
				v21 = *(_QWORD*)(a1 + 32);
				v80 = off_140B569F0;
				v82 = a1;
				v22 = *(_QWORD*)(v21 + 112);
				v83 = 1;
				if (*(_QWORD*)(v21 + 120) >= v22)
					sub_14005E2C0(a1);
				v23 = *(_QWORD*)(a1 + 16);
				v24 = sub_14005C1B0(a1, 0, 0);
				*(_DWORD*)(v23 + 8) = 5;
				*(_QWORD*)v23 = v24;
				*(_QWORD*)(a1 + 16) += 16i64;
				v25 = sub_1400578C0(a1);
				v26 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
				v27 = v25;
				v81 = v25;
				v28 = sub_14005C3C0(v26, v25);
				v29 = *(_QWORD*)(a1 + 16);
				*(_QWORD*)v29 = *v28;
				*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				sub_1400F06F0(a1, v29, L"nId", v30);
				*(_QWORD*)(a1 + 16) -= 16i64;
				v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v27);
				*(_QWORD*)v32 = *v31;
				*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				sub_1400F06F0(a1, v33, L"eHazardType", v34);
				*(_QWORD*)(a1 + 16) -= 16i64;
				v35 = *(float*)(v86 + 8);
				v36 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v27);
				*(_QWORD*)v37 = *v36;
				*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				v38 = (unsigned __int64*)sub_14018F0E0(&v72, L"fMeterValue")[1];
				if (v38)
				{
					v39 = -1i64;
					do
						++v39;
					while (*((_BYTE*)v38 + v39));
					sub_140058710(a1, v38, v39);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					*(_QWORD*)(a1 + 16) += 16i64;
				}
				if (v73)
					sub_14018B900(v73, 0);
				v40 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(v40 + 8) = 3;
				*(double*)v40 = v35;
				*(_QWORD*)(a1 + 16) += 16i64;
				v41 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v41, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 48i64;
				v42 = *(_QWORD*)(a1 + 16);
				v44 = sub_1404A60E0(v43, v12);
				v45 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v27);
				*(_QWORD*)v42 = *v45;
				*(_DWORD*)(v42 + 8) = *((_DWORD*)v45 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				v46 = (unsigned __int64*)sub_14018F0E0(&v72, L"fMaxValue")[1];
				if (v46)
				{
					v47 = -1i64;
					do
						++v47;
					while (*((_BYTE*)v46 + v47));
					sub_140058710(a1, v46, v47);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
					*(_QWORD*)(a1 + 16) += 16i64;
				}
				if (v73)
					sub_14018B900(v73, 0);
				v48 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(v48 + 8) = 3;
				*(double*)v48 = v44;
				*(_QWORD*)(a1 + 16) += 16i64;
				v49 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v49, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 48i64;
				v51 = *(_DWORD*)(v14 + 8);
				if (v51)
					sub_14034BDD0(v50, v51);
				v52 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v27);
				v53 = *(_QWORD*)(a1 + 16);
				*(_QWORD*)v53 = *v52;
				*(_DWORD*)(v53 + 8) = *((_DWORD*)v52 + 2);
				*(_QWORD*)(a1 + 16) += 16i64;
				sub_1400F0870(a1, v53, L"strTooltip", v54);
				*(_QWORD*)(a1 + 16) -= 16i64;
				if (*(char*)(v20 + 12) < 0)
				{
					v55 = *(_QWORD*)(a1 + 32);
					v74 = a1;
					v72 = off_140B569F0;
					v56 = *(_QWORD*)(v55 + 112);
					v75 = 1;
					if (*(_QWORD*)(v55 + 120) >= v56)
						sub_14005E2C0(a1);
					v57 = *(_QWORD*)(a1 + 16);
					v58 = sub_14005C1B0(a1, 0, 0);
					*(_DWORD*)(v57 + 8) = 5;
					*(_QWORD*)v57 = v58;
					*(_QWORD*)(a1 + 16) += 16i64;
					LODWORD(v73) = sub_1400578C0(a1);
					v59 = (float*)(v20 + 28);
					v60 = 3i64;
					do
					{
						sub_1400FAF20((__int64)&v72, *v59++);
						--v60;
					} while (v60);
					v61 = v73;
					sub_1400FB2A0((__int64)&v80, (__int64)L"tMeterThresholds", v73);
					if (v74)
						sub_1400579E0(v74, v62, v61);
				}
				sub_1400FB1D0((__int64)&v76);
				sub_1400579E0(a1, v63, v27);
			}
			v64 = *(_QWORD*)(v10 + 24);
			if (v64)
			{
				v10 = *(_QWORD*)(v10 + 24);
				for (i = *(_QWORD*)(v64 + 16); i; i = *(_QWORD*)(i + 16))
					v10 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v10 + 8); v10 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v10 = j;
				if (*(_QWORD*)(v10 + 24) != j)
					v10 = j;
			}
			if (v10 == v85)
			{
				a1 = v78;
				v9 = v77;
				goto LABEL_68;
			}
		}
		v13 = qword_140C63840(off_140A6A670, v12, qword_140C63858);
		goto LABEL_15;
	}
LABEL_68:
	v67 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
	if ((unsigned int)(v9 - 1) >= *(_DWORD*)(v67 + 56))
	{
		if ((double)v9 == 0.0)
		{
			v68 = *(_DWORD**)(v67 + 32);
		}
		else
		{
			v87 = (double)v9;
			v68 = (_DWORD*)(*(_QWORD*)(v67 + 32)
				+ 40 * ((unsigned int)(LODWORD(v87) + HIDWORD(v87)) % (((1i64 << *(_BYTE*)(v67 + 11)) - 1) | 1)));
		}
		while (v68[6] != 3 || (double)v9 != *((double*)v68 + 2))
		{
			v68 = (_DWORD*)*((_QWORD*)v68 + 4);
			if (!v68)
			{
				v68 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v68 = (_DWORD*)(*(_QWORD*)(v67 + 24) + 16i64 * (v9 - 1));
	}
	v69 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v69 = *(_QWORD*)v68;
	v70 = (unsigned int)v68[2];
	*(_DWORD*)(v69 + 8) = v70;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v70, v9);
	sub_140008410((__int64)v84);
	sub_14018B900(v85, 0);
	return 1i64;
}
// 14075486E: variable 'v30' is possibly undefined
// 1407548A0: variable 'v32' is possibly undefined
// 1407548B2: variable 'v33' is possibly undefined
// 1407548B2: variable 'v34' is possibly undefined
// 1407548E2: variable 'v37' is possibly undefined
// 140754982: variable 'v43' is possibly undefined
// 140754A4E: variable 'v50' is possibly undefined
// 140754A94: variable 'v54' is possibly undefined
// 140754B48: variable 'v62' is possibly undefined
// 140754B5F: variable 'v63' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6A670: using guessed type wchar_t *off_140A6A670[2];
// 140B4BD38: using guessed type wchar_t aTmeterthreshol[17];
// 140B4BD60: using guessed type wchar_t aStrtooltip_4[11];
// 140B4BD78: using guessed type wchar_t aFmaxvalue[10];
// 140B4BD90: using guessed type wchar_t aFmetervalue[12];
// 140B4BDA8: using guessed type wchar_t aEhazardtype[12];
// 140B4BDC0: using guessed type wchar_t aNid_38[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63B5C: using guessed type int dword_140C63B5C;
// 140C65030: using guessed type __int64 qword_140C65030;
// 140C659A8: using guessed type __int64 qword_140C659A8;
// 140754600: using guessed type char var_60[8];

