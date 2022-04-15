#include "../winhttp.h"

//----- (0000000140659EB0) ----------------------------------------------------
void __fastcall sub_140659EB0(__int64 a1, __int64 a2, __int64* a3)
{
	_QWORD* v3; // rdi
	__int64 v4; // r15
	__int64 v5; // r13
	__int64 v6; // rcx
	__int64 v7; // r14
	__int64 v8; // r12
	__int64 v9; // rax
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // esi
	__int64 v14; // rcx
	_QWORD* v15; // rax
	__int64 v16; // rdx
	unsigned __int64 v17; // rbx
	unsigned __int64* v18; // rdx
	unsigned __int64 v19; // r8
	__int64 v20; // rax
	__int64* v21; // rax
	int* v22; // rax
	_QWORD* v23; // rax
	__int64 v24; // rdx
	int v25; // r10d
	__int64 v26; // r11
	__int64 v27; // rcx
	int v28; // r9d
	unsigned __int16* v29; // r8
	_QWORD* v30; // rax
	__int64 v31; // r10
	_QWORD* v32; // rax
	__int64 v33; // rdx
	unsigned __int64* v34; // rdx
	__int64 v35; // rax
	__int64* v36; // rax
	int* v37; // rax
	_QWORD* v38; // rax
	__int64 v39; // rdx
	int v40; // r10d
	__int64 v41; // r11
	__int64 v42; // rcx
	int v43; // r9d
	unsigned __int16* v44; // r8
	_QWORD* v45; // rax
	__int64 v46; // r10
	__int64 v47; // rdx
	__int64(__fastcall * *v48)(); // [rsp+28h] [rbp-69h] BYREF
	int v49; // [rsp+30h] [rbp-61h]
	_QWORD* v50; // [rsp+38h] [rbp-59h]
	int v51; // [rsp+40h] [rbp-51h]
	__int64 v52; // [rsp+48h] [rbp-49h] BYREF
	__int64 v53; // [rsp+50h] [rbp-41h]
	__int64 v54; // [rsp+68h] [rbp-29h] BYREF
	__int64 v55; // [rsp+70h] [rbp-21h]
	__int64 v56; // [rsp+78h] [rbp-19h]
	__int64 v57; // [rsp+80h] [rbp-11h] BYREF
	__int64 v58; // [rsp+88h] [rbp-9h]
	__int128 v59; // [rsp+90h] [rbp-1h]
	__int64 v62; // [rsp+108h] [rbp+77h]
	int v63; // [rsp+110h] [rbp+7Fh]

	v3 = *(_QWORD**)(a1 + 16);
	v4 = *a3;
	v5 = a3[1];
	v6 = v3[4];
	v7 = a3[2];
	v8 = a3[5];
	v62 = a3[3];
	v57 = v62;
	v9 = a3[4];
	v54 = v4;
	v55 = v5;
	v63 = v9;
	v58 = v9;
	v48 = off_140B569F0;
	v10 = *(_QWORD*)(v6 + 112);
	v56 = v7;
	*(_QWORD*)&v59 = v8;
	v50 = v3;
	v51 = 1;
	if (*(_QWORD*)(v6 + 120) >= v10)
		sub_14005E2C0((__int64)v3);
	v11 = v3[2];
	v12 = sub_14005C1B0((__int64)v3, 0, 0);
	*(_DWORD*)(v11 + 8) = 5;
	*(_QWORD*)v11 = v12;
	v3[2] += 16i64;
	v13 = sub_1400578C0((__int64)v3);
	v14 = *(_QWORD*)(v3[4] + 160i64);
	v49 = v13;
	v15 = sub_14005C3C0(v14, v13);
	v16 = v3[2];
	*(_QWORD*)v16 = *v15;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v15 + 2);
	v3[2] += 16i64;
	v17 = -1i64;
	v18 = (unsigned __int64*)sub_14018F0E0(&v52, L"nAmount1")[1];
	if (v18)
	{
		v19 = -1i64;
		do
			++v19;
		while (*((_BYTE*)v18 + v19));
		sub_140058710((__int64)v3, v18, v19);
	}
	else
	{
		*(_DWORD*)(v3[2] + 8i64) = 0;
		v3[2] += 16i64;
	}
	if (v53)
		sub_14018B900(v53, 0);
	v20 = v3[2];
	*(_DWORD*)(v20 + 8) = 3;
	*(double*)v20 = (double)(int)v4;
	v3[2] += 16i64;
	v21 = (__int64*)sub_1400580E0((__int64)v3, -3);
	sub_14005EA50((__int64)v3, v21, (int*)(v3[2] - 32i64), (unsigned int*)(v3[2] - 16i64));
	v3[2] -= 48i64;
	if ((_DWORD)v7)
	{
		v22 = sub_1400B5DF0(qword_140C658F0, v7, 0i64);
		if (!(unsigned int)sub_140415C70(v3, (__int64)v22))
			goto LABEL_18;
		sub_1400FB540((__int64)&v48);
	}
	else
	{
		v23 = sub_14005C3C0(*(_QWORD*)(v3[4] + 160i64), v13);
		*(_QWORD*)v26 = *v23;
		v27 = (__int64)v3;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v23 + 2);
		v3[2] += 16i64;
		if (v25)
		{
			v28 = v25;
			v29 = L"eAccountCurrencyType1";
		}
		else
		{
			sub_1400F06F0((__int64)v3, v24, L"eCurrencyType1", v5);
			v3[2] -= 16i64;
			v30 = sub_14005C3C0(*(_QWORD*)(v3[4] + 160i64), v13);
			v28 = HIDWORD(v55);
			v29 = L"eAltType1";
			*(_QWORD*)v31 = *v30;
			v27 = (__int64)v3;
			*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
			v3[2] += 16i64;
		}
		sub_1400F06F0(v27, v24, v29, v28);
	}
	v3[2] -= 16i64;
LABEL_18:
	if ((unsigned int)sub_140501210(v3, &v54))
	{
		sub_1400FB540((__int64)&v48);
		v3[2] -= 16i64;
	}
	v32 = sub_14005C3C0(*(_QWORD*)(v3[4] + 160i64), v13);
	v33 = v3[2];
	*(_QWORD*)v33 = *v32;
	*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
	v3[2] += 16i64;
	v34 = (unsigned __int64*)sub_14018F0E0(&v52, L"nAmount2")[1];
	if (v34)
	{
		do
			++v17;
		while (*((_BYTE*)v34 + v17));
		sub_140058710((__int64)v3, v34, v17);
	}
	else
	{
		*(_DWORD*)(v3[2] + 8i64) = 0;
		v3[2] += 16i64;
	}
	if (v53)
		sub_14018B900(v53, 0);
	v35 = v3[2];
	*(_DWORD*)(v35 + 8) = 3;
	*(double*)v35 = (double)(int)v62;
	v3[2] += 16i64;
	v36 = (__int64*)sub_1400580E0((__int64)v3, -3);
	sub_14005EA50((__int64)v3, v36, (int*)(v3[2] - 32i64), (unsigned int*)(v3[2] - 16i64));
	v3[2] -= 48i64;
	if ((_DWORD)v8)
	{
		v37 = sub_1400B5DF0(qword_140C658F0, v8, 0i64);
		if (!(unsigned int)sub_140415C70(v3, (__int64)v37))
			goto LABEL_34;
		sub_1400FB540((__int64)&v48);
	}
	else
	{
		v38 = sub_14005C3C0(*(_QWORD*)(v3[4] + 160i64), v13);
		*(_QWORD*)v41 = *v38;
		v42 = (__int64)v3;
		*(_DWORD*)(v41 + 8) = *((_DWORD*)v38 + 2);
		v3[2] += 16i64;
		if (v40)
		{
			v43 = v40;
			v44 = L"eAccountCurrencyType2";
		}
		else
		{
			sub_1400F06F0((__int64)v3, v39, L"eCurrencyType2", v63);
			v3[2] -= 16i64;
			v45 = sub_14005C3C0(*(_QWORD*)(v3[4] + 160i64), v13);
			v43 = HIDWORD(v58);
			v44 = L"eAltType2";
			*(_QWORD*)v46 = *v45;
			v42 = (__int64)v3;
			*(_DWORD*)(v46 + 8) = *((_DWORD*)v45 + 2);
			v3[2] += 16i64;
		}
		sub_1400F06F0(v42, v39, v44, v43);
	}
	v3[2] -= 16i64;
LABEL_34:
	if ((unsigned int)sub_140501210(v3, &v57))
	{
		sub_1400FB540((__int64)&v48);
		v3[2] -= 16i64;
	}
	sub_1400FB2A0(a1, a2, v13);
	sub_1400579E0((__int64)v3, v47, v13);
}
// 14065A08A: variable 'v26' is possibly undefined
// 14065A09F: variable 'v25' is possibly undefined
// 14065A0B7: variable 'v24' is possibly undefined
// 14065A0E5: variable 'v31' is possibly undefined
// 14065A23D: variable 'v41' is possibly undefined
// 14065A252: variable 'v40' is possibly undefined
// 14065A26B: variable 'v39' is possibly undefined
// 14065A299: variable 'v46' is possibly undefined
// 14065A30B: variable 'v47' is possibly undefined
// 140B2D180: using guessed type wchar_t aEaccountcurren_0[22];
// 140B2D1B0: using guessed type wchar_t aEcurrencytype2[15];
// 140B2D1D0: using guessed type wchar_t aNamount2[9];
// 140B2D208: using guessed type wchar_t aEalttype1[10];
// 140B2D238: using guessed type wchar_t aEaccountcurren[22];
// 140B2D268: using guessed type wchar_t aEcurrencytype1[15];
// 140B2D288: using guessed type wchar_t aNamount1[9];
// 140B2D460: using guessed type wchar_t aEalttype2[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C658F0: using guessed type __int64 qword_140C658F0;

