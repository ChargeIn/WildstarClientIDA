#include "../winhttp.h"

//----- (000000014044DCC0) ----------------------------------------------------
void __fastcall sub_14044DCC0(_QWORD* a1)
{
	unsigned __int64 i; // rsi
	_QWORD* v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	unsigned __int64 j; // r15
	__int64* v9; // rbp
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // r14
	__int64 v15; // rbx
	unsigned __int64 k; // rsi
	_QWORD* v17; // rbx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rcx
	unsigned __int64 v23; // rbx
	__int64 v24; // rsi
	__int64 v25; // rcx
	__int64 v26; // rsi
	__int64 v27; // rbx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // rcx
	__int64 v31; // rcx
	unsigned __int64 m; // rbx
	__int64 v33; // rax
	__int64 v34; // rsi
	unsigned __int64 v35; // rbx
	__int64 v36; // rax
	__int64 v37; // rsi
	int v38[10]; // [rsp+20h] [rbp-28h] BYREF

	for (i = 0i64; i < a1[10]; ++i)
	{
		v3 = *(_QWORD**)(a1[9] + 8 * i);
		if (v3)
		{
			v4 = v3[6];
			if (v4)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v4 - 16) + 8i64))(v4 - 16);
			v5 = v3[4];
			if (v5)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
			v6 = v3[3];
			if (v6)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
			v7 = v3[2];
			if (v7)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
			sub_14018B900((__int64)v3, 0);
		}
	}
	a1[10] = 0i64;
	for (j = 0i64; j < a1[12]; ++j)
	{
		v9 = *(__int64**)(a1[11] + 8 * j);
		if (v9)
		{
			v10 = v9[10];
			if (v10)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
			v11 = v9[8];
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
			v12 = v9[7];
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
			v13 = v9[6];
			if (v13)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
			if (v9[4])
			{
				v14 = *(_QWORD*)(v9[3] + 8);
				if (v14)
				{
					do
					{
						sub_1400083B0((__int64)(v9 + 2), *(_QWORD*)(v14 + 24));
						v15 = *(_QWORD*)(v14 + 16);
						sub_14018B900(v14, 0);
						v14 = v15;
					} while (v15);
				}
				*(_QWORD*)(v9[3] + 16) = v9[3];
				*(_QWORD*)(v9[3] + 8) = 0i64;
				*(_QWORD*)(v9[3] + 24) = v9[3];
				v9[4] = 0i64;
			}
			sub_14018B900(v9[3], 0);
			sub_14018B900((__int64)v9, 0);
		}
	}
	a1[12] = 0i64;
	for (k = 0i64; k < a1[14]; ++k)
	{
		v17 = *(_QWORD**)(a1[13] + 8 * k);
		if (v17)
		{
			v18 = v17[11];
			if (v18)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
			v19 = v17[10];
			if (v19)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
			v20 = v17[9];
			if (v20)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v20 - 16) + 8i64))(v20 - 16);
			v21 = v17[4];
			if (v21)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v21 - 16) + 8i64))(v21 - 16);
			v22 = v17[1];
			if (v22)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v22 - 16) + 8i64))(v22 - 16);
			sub_14018B900((__int64)v17, 0);
		}
	}
	v23 = 0i64;
	a1[14] = 0i64;
	if (a1[8])
	{
		v24 = 0i64;
		do
		{
			v25 = *(_QWORD*)(v24 + a1[7] + 16);
			if (v25)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v25 - 16) + 8i64))(v25 - 16);
			++v23;
			v24 += 32i64;
		} while (v23 < a1[8]);
	}
	a1[8] = 0i64;
	if (a1[36])
		sub_140195D70((__int64)(a1 + 34));
	if (a1[45])
	{
		v26 = *(_QWORD*)(a1[44] + 8i64);
		if (v26)
		{
			do
			{
				sub_1400083B0((__int64)(a1 + 43), *(_QWORD*)(v26 + 24));
				v27 = *(_QWORD*)(v26 + 16);
				sub_14018B900(v26, 0);
				v26 = v27;
			} while (v27);
		}
		*(_QWORD*)(a1[44] + 16i64) = a1[44];
		*(_QWORD*)(a1[44] + 8i64) = 0i64;
		*(_QWORD*)(a1[44] + 24i64) = a1[44];
		a1[45] = 0i64;
	}
	v28 = a1[51];
	if (v28)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 104i64))(v28);
		v29 = a1[51];
		v38[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v29 + 32i64))(v29, v38);
		v30 = a1[51];
		if (v30)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
			a1[51] = 0i64;
		}
		v31 = a1[52];
		if (v31)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
			a1[52] = 0i64;
		}
	}
	for (m = 0i64; m < a1[48]; ++m)
	{
		v33 = a1[47];
		v34 = *(_QWORD*)(v33 + 8 * m);
		if (v34)
		{
			sub_1404511E0(*(_QWORD*)(v33 + 8 * m));
			sub_14018B900(v34, 0);
		}
	}
	v35 = 0i64;
	for (a1[48] = 0i64; v35 < a1[50]; ++v35)
	{
		v36 = a1[49];
		v37 = *(_QWORD*)(v36 + 8 * v35);
		if (v37)
		{
			sub_1404511E0(*(_QWORD*)(v36 + 8 * v35));
			sub_14018B900(v37, 0);
		}
	}
	a1[50] = 0i64;
}
// 14044DCC0: using guessed type int var_28[10];

