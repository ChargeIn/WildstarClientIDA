#include "../winhttp.h"

//----- (0000000140010820) ----------------------------------------------------
__int64 __fastcall sub_140010820(__int64 a1)
{
	__int64 v1; // r15
	int v2; // esi
	__int64 v3; // rbx
	_QWORD* v4; // r14
	_QWORD* v5; // rdi
	int v6; // ecx
	const wchar_t* v7; // rbp
	unsigned int v8; // eax
	unsigned int v9; // r14d
	__int64 v10; // rsi
	unsigned int v12; // edi
	__int64 v13; // rax
	__int64 v14; // rbx
	unsigned __int64 v15; // rcx
	unsigned __int16* v16; // rdx
	__int64* v17; // rdi
	unsigned __int64 v18; // rcx
	__int64 v19; // rdx
	int v20; // eax
	int* v21; // rcx
	__int64(__fastcall * v22)(int**); // rax
	unsigned __int64 v23; // rcx
	const wchar_t* v24; // rax
	unsigned int v25; // ebp
	__int64 v26; // rax
	unsigned __int64 v27; // rcx
	unsigned __int64 v28; // r9
	__int64 v29; // rcx
	int v30; // eax
	int* v31; // rcx
	__int64* v32; // rbx
	int v33; // ebx
	const wchar_t* v34; // [rsp+20h] [rbp-268h]
	const wchar_t* v35; // [rsp+28h] [rbp-260h]
	__int64* v36[2]; // [rsp+30h] [rbp-258h] BYREF
	__m128i v37[33]; // [rsp+40h] [rbp-248h] BYREF

	v1 = *(int*)(a1 + 296);
	dword_140C1E48C = 0;
	dword_140C64D88 = 1;
	v2 = 0;
	v3 = 0i64;
	if ((int)v1 <= 0)
	{
	LABEL_7:
		v7 = L"en";
	}
	else
	{
		v4 = *(_QWORD**)(a1 + 288);
		v5 = v4;
		while (1)
		{
			v6 = *(unsigned __int16*)*v5;
			if ((((v6 - 45) & 0xFFFFFFFD) == 0 || (unsigned int)(v6 - 150) <= 1)
				&& !(unsigned int)sub_14018E2C0(*v5 + 2i64, L"Lang"))
			{
				break;
			}
			++v3;
			++v2;
			++v5;
			if (v3 >= v1)
				goto LABEL_7;
		}
		if (v2 + 1 >= (int)v1)
			v7 = 0i64;
		else
			v7 = (const wchar_t*)v4[v2 + 1];
	}
	if (qword_140C63838)
	{
		v8 = qword_140C63838(off_140A6B198, qword_140C63858);
	LABEL_18:
		v9 = v8;
		goto LABEL_19;
	}
	if (dword_140C639D0)
	{
		v9 = 0;
	}
	else
	{
		if ((int)sub_1402107A0() >= 0)
		{
			v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63B68 + 40i64))(qword_140C63B68);
			goto LABEL_18;
		}
		v9 = 0;
	}
LABEL_19:
	v10 = 0i64;
	if (!v9)
		return 2147500037i64;
	v12 = 0;
	while (1)
	{
		if (qword_140C63848)
		{
			v13 = qword_140C63848(off_140A6B198, v12, qword_140C63858);
		}
		else
		{
			if (dword_140C639D0)
			{
				v14 = 0i64;
				goto LABEL_30;
			}
			if ((int)sub_1402107A0() < 0)
			{
				v14 = 0i64;
				goto LABEL_30;
			}
			v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B68 + 32i64))(qword_140C63B68, v12);
		}
		v14 = v13;
	LABEL_30:
		v15 = *(_QWORD*)(v14 + 16);
		if (v15)
			v16 = v15 <= qword_140C3FE70 ? (unsigned __int16*)(v15 + qword_140C3FE68) : 0i64;
		else
			v16 = 0i64;
		if (!(unsigned int)sub_14018E2C0((__int64)v7, v16))
			break;
		if (++v12 >= v9)
			goto LABEL_39;
	}
	v10 = v14;
LABEL_39:
	v17 = 0i64;
	v36[0] = 0i64;
	if (v10)
	{
		v18 = *(_QWORD*)(v10 + 8);
		if (v18)
		{
			if (v18 <= qword_140C3FE70)
				v19 = v18 + qword_140C3FE68;
			else
				v19 = 0i64;
		}
		else
		{
			v19 = 0i64;
		}
		v20 = sub_14034BF10((__int64*)v36, v19);
		v17 = v36[0];
		if (v20 >= 0 && (int)sub_14034BC70(v21, v36[0]) >= 0)
		{
			dword_140C6586C = 1;
			goto LABEL_48;
		}
		v23 = *(_QWORD*)(v10 + 8);
		if (v23)
		{
			if (v23 <= qword_140C3FE70)
				v24 = (const wchar_t*)(v23 + qword_140C3FE68);
			else
				v24 = 0i64;
		}
		else
		{
			v24 = 0i64;
		}
	}
	else
	{
		v24 = L"unknown";
	}
	v35 = v24;
	v34 = v7;
	sub_1400035B0();
	v25 = 0;
	while (2)
	{
		if (qword_140C63848)
		{
			v26 = qword_140C63848(off_140A6B198, v25, qword_140C63858);
			goto LABEL_68;
		}
		if (dword_140C639D0)
		{
			v10 = 0i64;
		}
		else if ((int)sub_1402107A0() >= 0)
		{
			v26 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63B68 + 32i64))(qword_140C63B68, v25);
		LABEL_68:
			v10 = v26;
		}
		else
		{
			v10 = 0i64;
		}
		v27 = *(_QWORD*)(v10 + 8);
		v36[0] = 0i64;
		if (v27)
		{
			if (v27 <= qword_140C3FE70)
				v28 = v27 + qword_140C3FE68;
			else
				v28 = 0i64;
		}
		else
		{
			v28 = 0i64;
		}
		if ((int)sub_14001B370(v37, 260i64, L"%s.bin", v28, v34, v35) < 0)
		{
		LABEL_79:
			if (++v25 >= v9)
				goto LABEL_83;
			continue;
		}
		break;
	}
	v30 = sub_1401B6D00(v29, v37, (__int64*)v36);
	v32 = v36[0];
	if (v30 < 0 || (int)sub_14034BC70(v31, v36[0]) < 0)
	{
		if (v32)
			(*(void(__fastcall**)(__int64*))(*v32 + 8))(v32);
		goto LABEL_79;
	}
	dword_140C6586C = 1;
	sub_1400035B0();
	if (v32)
		(*(void(__fastcall**)(__int64*))(*v32 + 8))(v32);
LABEL_83:
	if (v25 == v9)
	{
		v33 = -1610350590;
		goto LABEL_93;
	}
LABEL_48:
	if (qword_140C63648)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C63648 + 16i64))(qword_140C63648, 1i64);
	qword_140C63648 = 0i64;
	switch (*(_DWORD*)(qword_140C7AAC0 + 8))
	{
	case 2:
		v22 = sub_1400BFD20;
		break;
	case 3:
		v22 = sub_1400BEFF0;
		break;
	case 5:
		v22 = sub_1400C1240;
		break;
	default:
		v22 = sub_1400C2AC0;
		break;
	}
	if (v22)
	{
		v33 = v22((int**)&qword_140C63648);
		if (v33 >= 0)
		{
			v33 = 537133059;
			if (*(_DWORD*)(qword_140C7AAC0 + 8) == *(_DWORD*)v10)
				v33 = 0;
		}
	}
	else
	{
		v33 = -2147023728;
	}
LABEL_93:
	if (v17)
		(*(void(__fastcall**)(__int64*))(*v17 + 8))(v17);
	return (unsigned int)v33;
}
// 140010945: conditional instruction was optimized away because r14d.4!=0
// 140010AE5: conditional instruction was optimized away because r14d.4!=0
// 140010A2C: variable 'v21' is possibly undefined
// 140010B7A: variable 'v34' is possibly undefined
// 140010B7A: variable 'v35' is possibly undefined
// 140010B8D: variable 'v29' is possibly undefined
// 140010B9E: variable 'v31' is possibly undefined
// 1409D1AD4: using guessed type wchar_t aEn_1[3];
// 1409DF908: using guessed type wchar_t aUnknown[8];
// 1409DFAB8: using guessed type wchar_t aLang_0[5];
// 140A6B198: using guessed type wchar_t *off_140A6B198[2];
// 140AF4830: using guessed type wchar_t aSBin[7];
// 140C1E48C: using guessed type int dword_140C1E48C;
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63648: using guessed type __int64 qword_140C63648;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C639D0: using guessed type int dword_140C639D0;
// 140C63B68: using guessed type __int64 qword_140C63B68;
// 140C64D88: using guessed type int dword_140C64D88;
// 140C6586C: using guessed type int dword_140C6586C;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;
// 140010820: using guessed type __m128i var_248[33];

