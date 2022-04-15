#include "../winhttp.h"

//----- (000000014011D810) ----------------------------------------------------
_QWORD* __fastcall sub_14011D810(_QWORD* a1, _QWORD* a2, int a3, char* a4)
{
	_QWORD* v5; // rsi
	char* v7; // rax
	_DWORD* v8; // rax
	_DWORD* v9; // rax
	unsigned int v10; // r10d
	int v11; // ecx
	_DWORD* v12; // rax
	char v13; // r10
	int* v14; // rax
	__int64 v15; // r10
	int* v16; // r11
	__int64 v17; // rax
	char* v18; // rdx
	__int64 v19; // r8
	_DWORD* v20; // rax
	_DWORD* v21; // r11
	int* v22; // rax
	__int64 v23; // r10
	int* v24; // r11
	__int64 v25; // rax
	_DWORD* v26; // rax
	_DWORD* v27; // r11
	int* v28; // rax
	__int64 v29; // r10
	int* v30; // r11
	__int64 v31; // rax
	_DWORD* v32; // rax
	int v33; // r10d
	_DWORD* v34; // r11
	int* v35; // rax
	__int64 v36; // r10
	int* v37; // r11
	__int64 v38; // rax
	double v39; // xmm0_8
	_DWORD* v40; // rax
	const char* v41; // rcx
	_DWORD* v42; // rax
	unsigned __int64 v43; // rax
	unsigned __int64 v44; // rcx
	unsigned __int64 v45; // r8
	_QWORD* v46; // rdx
	__int64 v47; // rax
	__int64 v48; // rax
	char v49; // si
	const char* v50; // r8
	_QWORD* v51; // rax
	__int64 v52; // rcx
	_DWORD* v53; // rax
	_DWORD* v54; // r10
	int* v55; // rax
	int* v56; // r10
	__int64 v57; // rax
	int v58; // ecx
	int* v59; // rax
	int* v60; // r10
	__int64 v61; // rax
	int* v62; // rax
	int* v63; // r10
	__int64 v64; // rax
	char v66[8]; // [rsp+30h] [rbp-69h] BYREF
	int* v67; // [rsp+38h] [rbp-61h]
	__int64 v68; // [rsp+40h] [rbp-59h]
	__int64 v69; // [rsp+50h] [rbp-49h] BYREF
	_QWORD v70[4]; // [rsp+58h] [rbp-41h] BYREF
	char v71[8]; // [rsp+78h] [rbp-21h] BYREF
	__int64 v72; // [rsp+80h] [rbp-19h]
	char v73[8]; // [rsp+98h] [rbp-1h] BYREF
	__int64 v74; // [rsp+A0h] [rbp+7h]
	__int64 v75; // [rsp+B8h] [rbp+1Fh] BYREF
	__int64 v76; // [rsp+C0h] [rbp+27h]
	__int64 v79; // [rsp+118h] [rbp+7Fh]

	v5 = a1;
	v67 = sub_14018B280(40i64, 0);
	v68 = 0i64;
	*(_BYTE*)v67 = 0;
	*((_QWORD*)v67 + 1) = 0i64;
	*((_QWORD*)v67 + 2) = v67;
	*((_QWORD*)v67 + 3) = v67;
	v7 = v66;
	if (a4)
		v7 = a4;
	v79 = (__int64)v7;
	v8 = sub_1400580E0((__int64)a2, a3);
	if (v8 != dword_140A12138 && v8[2] == 1)
	{
		v9 = sub_1400580E0((__int64)a2, a3);
		v11 = v9[2];
		if (v11 && (v11 != 1 || *v9 != v10))
			v10 = 1;
		sub_14018EE90(v5, (__int64)"%d", v10);
		goto LABEL_109;
	}
	v12 = sub_1400580E0((__int64)a2, a3);
	if (v12[2] == 6 && *(_BYTE*)(*(_QWORD*)v12 + 10i64) != v13)
	{
		v14 = (int*)sub_1400580E0((__int64)a2, a3);
		if (v14 == v16 || (v17 = v14[2], (_DWORD)v17 == -1))
			v18 = aNoValue;
		else
			v18 = off_140A123B0[v17];
		v5[1] = v15;
		v5[2] = v15;
		v5[3] = v15;
		v19 = -1i64;
		do
			++v19;
		while (v18[v19] != (_BYTE)v15);
	LABEL_108:
		sub_14001B240(v5, (int*)v18, (__int64)&v18[v19]);
		goto LABEL_109;
	}
	v20 = sub_1400580E0((__int64)a2, a3);
	if (v20 != v21 && v20[2] == 6)
	{
		v22 = (int*)sub_1400580E0((__int64)a2, a3);
		if (v22 == v24 || (v25 = v22[2], (_DWORD)v25 == -1))
			v18 = aNoValue;
		else
			v18 = off_140A123B0[v25];
		v5[1] = v23;
		v5[2] = v23;
		v5[3] = v23;
		v19 = -1i64;
		do
			++v19;
		while (v18[v19] != (_BYTE)v23);
		goto LABEL_108;
	}
	v26 = sub_1400580E0((__int64)a2, a3);
	if (v26 != v27 && v26[2] == 2)
	{
		v28 = (int*)sub_1400580E0((__int64)a2, a3);
		if (v28 == v30 || (v31 = v28[2], (_DWORD)v31 == -1))
			v18 = aNoValue;
		else
			v18 = off_140A123B0[v31];
		v5[1] = v29;
		v5[2] = v29;
		v5[3] = v29;
		v19 = -1i64;
		do
			++v19;
		while (v18[v19] != (_BYTE)v29);
		goto LABEL_108;
	}
	v32 = sub_1400580E0((__int64)a2, a3);
	if (v32 != v34 && v32[2] == v33)
	{
		v35 = (int*)sub_1400580E0((__int64)a2, a3);
		if (v35 == v37 || (v38 = v35[2], (_DWORD)v38 == -1))
			v18 = aNoValue;
		else
			v18 = off_140A123B0[v38];
		v5[1] = v36;
		v5[2] = v36;
		v5[3] = v36;
		v19 = -1i64;
		do
			++v19;
		while (v18[v19] != (_BYTE)v36);
		goto LABEL_108;
	}
	if (sub_1400583A0((__int64)a2, a3))
	{
		v39 = sub_140058480((__int64)a2, a3);
		sub_14018EE90(v5, (__int64)"%f", v39);
		goto LABEL_109;
	}
	if (sub_1400583E0((__int64)a2, a3))
	{
		v40 = sub_1400580E0((__int64)a2, a3);
		if (v40[2] != 4)
		{
			if (!(unsigned int)sub_14005E620((__int64)a2, (__int64)v40))
			{
				v41 = 0i64;
			LABEL_56:
				sub_14018EE90(v5, (__int64)"\"%s\"", v41);
				goto LABEL_109;
			}
			if (*(_QWORD*)(a2[4] + 120i64) >= *(_QWORD*)(a2[4] + 112i64))
				sub_14005E2C0((__int64)a2);
			v40 = sub_1400580E0((__int64)a2, a3);
		}
		v41 = (const char*)(*(_QWORD*)v40 + 32i64);
		goto LABEL_56;
	}
	v42 = sub_1400580E0((__int64)a2, a3);
	if (v42 == dword_140A12138 || v42[2] != 5)
	{
		v53 = sub_1400580E0((__int64)a2, a3);
		if (v53 == v54 || v53[2] != 8)
		{
			v58 = *((_DWORD*)sub_1400580E0((__int64)a2, a3) + 2);
			if (v58 == 7 || v58 == 2)
			{
				v62 = (int*)sub_1400580E0((__int64)a2, a3);
				if (v62 == v63 || (v64 = v62[2], (_DWORD)v64 == -1))
					v18 = aNoValue;
				else
					v18 = off_140A123B0[v64];
				v19 = -1i64;
				v5[1] = 0i64;
				v5[2] = 0i64;
				v5[3] = 0i64;
				do
					++v19;
				while (v18[v19]);
			}
			else
			{
				v59 = (int*)sub_1400580E0((__int64)a2, a3);
				if (v59 == v60 || (v61 = v59[2], (_DWORD)v61 == -1))
					v18 = aNoValue;
				else
					v18 = off_140A123B0[v61];
				v19 = -1i64;
				v5[1] = 0i64;
				v5[2] = 0i64;
				v5[3] = 0i64;
				do
					++v19;
				while (v18[v19]);
			}
		}
		else
		{
			v55 = (int*)sub_1400580E0((__int64)a2, a3);
			if (v55 == v56 || (v57 = v55[2], (_DWORD)v57 == -1))
				v18 = aNoValue;
			else
				v18 = off_140A123B0[v57];
			v19 = -1i64;
			v5[1] = 0i64;
			v5[2] = 0i64;
			v5[3] = 0i64;
			do
				++v19;
			while (v18[v19]);
		}
		goto LABEL_108;
	}
	if (v79)
	{
		v43 = sub_1400586A0((__int64)a2, a3);
		v44 = *(_QWORD*)(v79 + 8);
		v45 = v44;
		v46 = *(_QWORD**)(v44 + 8);
		while (v46)
		{
			if (v46[4] < v43)
			{
				v46 = (_QWORD*)v46[3];
			}
			else
			{
				v45 = (unsigned __int64)v46;
				v46 = (_QWORD*)v46[2];
			}
		}
		if (v45 == v44 || (v69 = v45, v43 < *(_QWORD*)(v45 + 32)))
			v69 = v44;
		if (v69 != v44)
		{
			v47 = sub_1400586A0((__int64)a2, a3);
			sub_14018EE90(v5, (__int64)"<recursed table 0x%x>", v47);
			goto LABEL_109;
		}
		v69 = sub_1400586A0((__int64)a2, a3);
		sub_140007810(v79, (__int64)v70, (unsigned __int64*)&v69);
	}
	v48 = sub_1400586A0((__int64)a2, a3);
	sub_14018EE90(v70, (__int64)"table 0x%x [ ", v48);
	*(_DWORD*)(a2[2] + 8i64) = 0;
	a2[2] += 16i64;
	if ((unsigned int)sub_1400590A0((__int64)a2, a3))
	{
		v49 = 1;
		do
		{
			sub_14011D810(v73, a2, (unsigned int)((__int64)(a2[2] - a2[3]) >> 4) - 1, v79);
			sub_14011D810(v71, a2, (__int64)(a2[2] - a2[3]) >> 4, v79);
			v50 = ", ";
			if (v49)
				v50 = (const char*)&unk_1409D050A;
			v51 = sub_14018EE90(&v75, (__int64)"%s%s = %s", v50, v74, v72);
			sub_14001B050(v70, (int*)v51[1], (int*)v51[2]);
			if (v76)
				sub_14018B900(v76, 0);
			v52 = v72;
			a2[2] -= 16i64;
			v49 = 0;
			if (v52)
				sub_14018B900(v52, 0);
			if (v74)
				sub_14018B900(v74, 0);
		} while ((unsigned int)sub_1400590A0((__int64)a2, a3));
		v5 = a1;
	}
	sub_14001B050(v70, (int*)" ]", (int*)"");
	v5[1] = v70[1];
	v5[2] = v70[2];
	v5[3] = v70[3];
LABEL_109:
	sub_140008410((__int64)v66);
	sub_14018B900((__int64)v67, 0);
	return v5;
}
// 14011D8AE: variable 'v10' is possibly undefined
// 14011D8E4: variable 'v13' is possibly undefined
// 14011D8F3: variable 'v16' is possibly undefined
// 14011D912: variable 'v15' is possibly undefined
// 14011D93D: variable 'v21' is possibly undefined
// 14011D952: variable 'v24' is possibly undefined
// 14011D971: variable 'v23' is possibly undefined
// 14011D99C: variable 'v27' is possibly undefined
// 14011D9B1: variable 'v30' is possibly undefined
// 14011D9D0: variable 'v29' is possibly undefined
// 14011D9FB: variable 'v34' is possibly undefined
// 14011DA01: variable 'v33' is possibly undefined
// 14011DA10: variable 'v37' is possibly undefined
// 14011DA2F: variable 'v36' is possibly undefined
// 14011DCFD: variable 'v54' is possibly undefined
// 14011DD12: variable 'v56' is possibly undefined
// 14011DD75: variable 'v60' is possibly undefined
// 14011DDBE: variable 'v63' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];
// 14011D810: using guessed type char var_C0[8];
// 14011D810: using guessed type char var_58[8];
// 14011D810: using guessed type char var_78[8];

