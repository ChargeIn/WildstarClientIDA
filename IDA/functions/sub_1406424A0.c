#include "../winhttp.h"

//----- (00000001406424A0) ----------------------------------------------------
__int64 __fastcall sub_1406424A0(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	int* v3; // rax
	int* v4; // r14
	int* v5; // rbx
	int** v6; // rax
	int** v7; // r12
	__int64 v8; // rsi
	__int64 v9; // rdi
	unsigned __int64 v10; // r12
	unsigned __int64 v11; // r13
	__int64 v12; // r14
	__int64 v13; // r11
	unsigned __int64 v14; // rdi
	unsigned __int64 v15; // r8
	unsigned __int64 v16; // rcx
	unsigned __int64 v17; // rcx
	int* v18; // rbp
	__int64 v19; // r12
	__int64 v20; // rdi
	unsigned int v21; // ecx
	unsigned int v22; // r8d
	double v23; // xmm0_8
	double v24; // xmm1_8
	int** v25; // rax
	int** v26; // r12
	int* v27; // rbp
	__int64 v28; // r14
	__int64 v29; // rdi
	__int64 v31; // [rsp+20h] [rbp-98h]
	__int64 v32; // [rsp+28h] [rbp-90h]
	__int64 v33; // [rsp+30h] [rbp-88h]
	__int64 v34; // [rsp+38h] [rbp-80h]
	__int64 v35[3]; // [rsp+60h] [rbp-58h] BYREF
	unsigned __int64 v36; // [rsp+C0h] [rbp+8h]
	__int64 v37; // [rsp+C8h] [rbp+10h] BYREF
	__int64 v38; // [rsp+D0h] [rbp+18h] BYREF
	int** v39; // [rsp+D8h] [rbp+20h]

	v37 = a2;
	v2 = a2;
	v3 = sub_14018B280(18i64, 0);
	if (v3)
	{
		*((_QWORD*)v3 + 1) = 0i64;
		*(_QWORD*)v3 = off_140B55060;
	}
	else
	{
		v3 = 0i64;
	}
	v4 = v3 + 4;
	*((_WORD*)v3 + 8) = 0;
	v5 = v3 + 4;
	v6 = (int**)sub_14018D540(
		&v38,
		(__int64)L"Ravel profile report by %s for %u ms\r\n"
		"%3s | %-40s | %10s | %7s | %8s | %7s | %7s | %7s\r\n",
		*(_QWORD*)v2,
		*(unsigned int*)(v2 + 8),
		L"idx",
		L"name",
		L"id",
		L"tot(ms)",
		L"calls",
		L"avg(us)",
		L"max(us)",
		L"ppa(us)");
	v7 = v6;
	if (*v6)
	{
		v8 = *((_QWORD*)v4 - 1);
		v9 = *((_QWORD*)*v6 - 1);
		v5 = (int*)sub_14018D140(v4, v9 + v8);
		sub_1407DB590((int*)((char*)v5 + 2 * v8), *v7, 2 * v9);
		*((_WORD*)v5 + v9 + v8) = 0;
		if (v4 != v5)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
		v2 = v37;
	}
	if (v38)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v38 - 16) + 8i64))(v38 - 16);
	v10 = *(unsigned int*)(v2 + 24);
	v11 = 0i64;
	v36 = v10;
	if (*(_DWORD*)(v2 + 24))
	{
		v12 = 0i64;
		do
		{
			v13 = *(_QWORD*)(v2 + 32);
			v14 = *(_QWORD*)(v12 + v13 + 24);
			if (v14)
				v15 = *(_QWORD*)(v12 + v13 + 16) / v14;
			else
				v15 = 0i64;
			v16 = *(_QWORD*)(v12 + v13 + 40);
			if (v16)
				v17 = *(_QWORD*)(v12 + v13 + 16) / v16;
			else
				v17 = 0i64;
			LODWORD(v32) = *(_QWORD*)(v12 + v13 + 16) / (unsigned __int64)qword_140C636B0;
			v39 = (int**)sub_14018D540(
				v35,
				(__int64)L"%3Iu | %-40s | %10I64u | %7u | %8I64u | %7I64u | %7I64u | %7I64u\r\n",
				v11,
				*(_QWORD*)(v12 + v13),
				*(_QWORD*)(v12 + v13 + 8),
				v32,
				v14,
				(int)(1000 * v15 / qword_140C636B0),
				(int)(1000i64 * *(_QWORD*)(v12 + v13 + 32) / (unsigned __int64)qword_140C636B0),
				(int)(1000 * v17 / qword_140C636B0));
			if (*v39)
			{
				v18 = v5;
				if (v5)
					v19 = *((_QWORD*)v5 - 1);
				else
					v19 = 0i64;
				v20 = *((_QWORD*)*v39 - 1);
				v5 = (int*)sub_14018D140(v5, v20 + v19);
				sub_1407DB590((int*)((char*)v5 + 2 * v19), *v39, 2 * v20);
				*((_WORD*)v5 + v20 + v19) = 0;
				if (v18 != v5 && v18)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v18 - 2) + 8i64))(v18 - 4);
				v2 = v37;
				v10 = v36;
			}
			if (v35[0])
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v35[0] - 16) + 8i64))(v35[0] - 16);
			++v11;
			v12 += 48i64;
		} while (v11 < v10);
	}
	v21 = *(_DWORD*)(v2 + 16);
	if (v21)
		v22 = 1000 * *(_DWORD*)(v2 + 12) / v21;
	else
		v22 = 0;
	v23 = 0.0;
	v24 = (double)*(int*)(v2 + 8);
	if (v24 > 0.0)
		v23 = (double)*(int*)(v2 + 12) * 100.0 / v24;
	LODWORD(v34) = v22;
	LODWORD(v33) = *(_DWORD*)(v2 + 16);
	LODWORD(v32) = *(_DWORD*)(v2 + 12);
	LODWORD(v31) = *(_DWORD*)(v2 + 20);
	v25 = (int**)sub_14018D540(
		&v37,
		(__int64)L"%3Iu | %-40s | %10u | %7u | %8u | %7u | %7u | %7u\r\n"
		"Ravel took %.2f%% of the total runtime\r\n",
		v10,
		L"TOTAL",
		v31,
		v32,
		v33,
		v34,
		0i64,
		0i64,
		v23);
	v26 = v25;
	if (*v25)
	{
		v27 = v5;
		v28 = v5 ? *((_QWORD*)v5 - 1) : 0i64;
		v29 = *((_QWORD*)*v25 - 1);
		v5 = (int*)sub_14018D140(v5, v29 + v28);
		sub_1407DB590((int*)((char*)v5 + 2 * v28), *v26, 2 * v29);
		*((_WORD*)v5 + v29 + v28) = 0;
		if (v27 != v5)
		{
			if (v27)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v27 - 2) + 8i64))(v27 - 4);
		}
	}
	if (v37)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v37 - 16) + 8i64))(v37 - 16);
	sub_14063AD00(v5);
	if (v5)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v5 - 2) + 8i64))(v5 - 4);
	return 0i64;
}
// 1406426CD: variable 'v32' is possibly undefined
// 1406427FF: variable 'v31' is possibly undefined
// 1406427FF: variable 'v33' is possibly undefined
// 1406427FF: variable 'v34' is possibly undefined
// 140B29AE0: using guessed type wchar_t aAvgUs[8];
// 140B29AF0: using guessed type wchar_t aCalls[6];
// 140B29B00: using guessed type wchar_t aPpaUs[8];
// 140B29B10: using guessed type wchar_t aMaxUs[8];
// 140B29B78: using guessed type wchar_t aTotal_1[6];
// 140B29B84: using guessed type wchar_t aId_21[3];
// 140B29B90: using guessed type wchar_t a3iu40s10u7u8u7[92];
// 140B29C48: using guessed type wchar_t aIdx[4];
// 140B29C50: using guessed type wchar_t aRavelProfileRe[89];
// 140B29D08: using guessed type wchar_t aTotMs[8];
// 140B29D50: using guessed type wchar_t a3iu40s10i64u7u[67];
// 140B29DD8: using guessed type wchar_t aName_31[5];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C636B0: using guessed type __int64 qword_140C636B0;
// 1406424A0: using guessed type __int64 var_58[3];

