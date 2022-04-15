#include "../winhttp.h"

//----- (00000001405EF710) ----------------------------------------------------
void __fastcall sub_1405EF710(_QWORD* a1)
{
	int* v2; // rsi
	__int64 v3; // rax
	bool v4; // zf
	__int64 v5; // r14
	unsigned int v6; // ebx
	__int64 v7; // r9
	__int64 v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // rax
	int* v11; // r15
	int* v12; // rax
	__int64 v13; // rcx
	unsigned int i; // ebx
	_QWORD* v15; // rax
	unsigned int v16; // r14d
	__int64 v17; // r8
	__int64 v18; // rcx
	__int64 v19; // rsi
	__int64 v20; // r9
	__int64 v21; // r8
	_QWORD* v22; // rax
	unsigned int v23; // ebx
	__int64 v24; // r8
	_QWORD* v25; // rax
	int* v26; // rbx
	__int64 v27; // [rsp+20h] [rbp-60h]
	__int64 v28; // [rsp+20h] [rbp-60h]
	__int64 v29; // [rsp+28h] [rbp-58h]
	__int64 v30; // [rsp+40h] [rbp-40h] BYREF
	int* v31; // [rsp+48h] [rbp-38h]
	int* v32; // [rsp+50h] [rbp-30h]
	int* v33; // [rsp+58h] [rbp-28h]
	__int64 v34; // [rsp+60h] [rbp-20h] BYREF
	__int64 v35; // [rsp+68h] [rbp-18h]

	v2 = 0i64;
	v31 = 0i64;
	v33 = 0i64;
	v3 = 0i64;
	do
		v4 = asc_140B23D08[++v3] == 0;
	while (!v4);
	v5 = (2 * v3) >> 1;
	if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v2 = sub_14018B280(2 * (v5 + 1), 0);
		v31 = v2;
		v33 = (int*)((char*)v2 + 2 * v5 + 2);
	}
	sub_1407DB590(v2, (int*)L"\n---------------------", 2 * v5);
	v32 = (int*)((char*)v2 + 2 * v5);
	if (v32)
		*((_WORD*)v2 + v5) = 0;
	v6 = 0;
	if (a1[4043])
	{
		v7 = 0i64;
		do
		{
			v8 = a1[4042];
			++v6;
			LODWORD(v27) = *(_DWORD*)(v8 + 48 * v7);
			v9 = sub_14018EFA0(
				&v34,
				(__int64)L"\n%2d.    confidence: %3d%%    accountId: %6u    character:%s@%s",
				v6,
				*(unsigned __int8*)(v8 + 48 * v7 + 32),
				v27,
				*(_QWORD*)(a1[4040] + 32 * v7 + 8),
				*(_QWORD*)(a1[4038] + 32 * v7 + 8));
			sub_14001C310(&v30, (int*)v9[1], (int*)v9[2]);
			if (v35)
				sub_14018B900(v35, 0);
			v7 = v6;
		} while ((unsigned __int64)v6 < a1[4043]);
	}
	v10 = 0i64;
	do
		v4 = aDetailsCopiedT[++v10] == 0;
	while (!v4);
	sub_14001C310(&v30, (int*)L"\n---------------------\ndetails copied to clipboard.", (int*)&aDetailsCopiedT[v10]);
	v11 = v31;
	sub_140003890((__int64*)qword_140C658A0, 3u, 0i64, v31, 0, 0i64);
	v12 = sub_14018B280(16i64, 0);
	v31 = v12;
	v32 = v12;
	v33 = v12 + 4;
	if (v12)
		*(_WORD*)v12 = 0;
	v13 = 0i64;
	do
		v4 = aActualscoreExp[++v13] == 0;
	while (!v4);
	if ((2 * v13) >> 1)
		sub_14001C310(
			&v30,
			(int*)L"actualScore, expectedScore, confidence, accountId, character",
			(int*)&aActualscoreExp[v13]);
	else
		sub_1407DB590(v12, (int*)L"actualScore, expectedScore, confidence, accountId, character", 0i64);
	for (i = 0; i < 0x10; ++i)
	{
		v15 = sub_14018EFA0(&v34, (__int64)L", fails%d, tests%d", i, i);
		sub_14001C310(&v30, (int*)v15[1], (int*)v15[2]);
		if (v35)
			sub_14018B900(v35, 0);
	}
	v16 = 0;
	if (a1[4043])
	{
		v17 = 0i64;
		do
		{
			v18 = 32 * v17;
			v19 = 48 * v17;
			v20 = *(_QWORD*)(a1[4038] + 32 * v17 + 8);
			v21 = 48 * v17 + a1[4042];
			LODWORD(v29) = *(_DWORD*)v21;
			LODWORD(v28) = *(unsigned __int8*)(v21 + 32);
			v22 = sub_14018EFA0(
				&v34,
				(__int64)L"\r\n%u, %u, %d, %u, %s@%s",
				*(unsigned int*)(v21 + 24),
				*(unsigned int*)(v21 + 28),
				v28,
				v29,
				*(_QWORD*)(a1[4040] + v18 + 8),
				v20);
			sub_14001C310(&v30, (int*)v22[1], (int*)v22[2]);
			if (v35)
				sub_14018B900(v35, 0);
			v23 = 0;
			v24 = v19 + a1[4042];
			if (*(_BYTE*)(v24 + 33))
			{
				do
				{
					v25 = sub_14018EFA0(
						&v34,
						(__int64)L", %d, %d",
						*(unsigned int*)(*(_QWORD*)(v24 + 40) + 12i64 * v23 + 8),
						(unsigned int)(*(_DWORD*)(*(_QWORD*)(v24 + 40) + 12i64 * v23 + 8)
							+ *(_DWORD*)(*(_QWORD*)(v24 + 40) + 12i64 * v23 + 4)));
					sub_14001C310(&v30, (int*)v25[1], (int*)v25[2]);
					if (v35)
						sub_14018B900(v35, 0);
					++v23;
					v24 = v19 + a1[4042];
				} while (v23 < *(unsigned __int8*)(v24 + 33));
			}
			v17 = ++v16;
		} while ((unsigned __int64)v16 < a1[4043]);
	}
	v26 = v31;
	sub_14063AD00(v31);
	a1[4043] = 0i64;
	if (v26)
		sub_14018B900((__int64)v26, 0);
	if (v11)
		sub_14018B900((__int64)v11, 0);
}
// 1405EF824: variable 'v27' is possibly undefined
// 1405EF9EF: variable 'v28' is possibly undefined
// 1405EF9EF: variable 'v29' is possibly undefined
// 140B23C20: using guessed type wchar_t a2dConfidence3d[64];
// 140B23CA0: using guessed type wchar_t aDetailsCopiedT[52];
// 140B23D08: using guessed type wchar_t asc_140B23D08[23];
// 140B23D38: using guessed type wchar_t aUUDUSS[24];
// 140B23D68: using guessed type wchar_t aDD[9];
// 140B23D80: using guessed type wchar_t aActualscoreExp[61];
// 140B23E00: using guessed type wchar_t aFailsDTestsD[19];
// 140C658A0: using guessed type __int64 qword_140C658A0;

