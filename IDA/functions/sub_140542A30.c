#include "../winhttp.h"

//----- (0000000140542A30) ----------------------------------------------------
void __fastcall sub_140542A30(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
	int* v9; // rax
	int* v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rcx
	int v13; // r8d
	int v14; // eax
	__int64 v15; // rcx
	int v16; // r14d
	__int64 v17; // rcx
	__int64 v18; // rdx
	int* v19; // rax
	int* v20; // rbx
	int v21; // eax
	int v22; // edi
	__int64 v23; // rax
	__int64 v24; // rsi
	int* v25; // rax
	int* v26; // rcx
	int** v27; // rdx
	__int64 v28; // rax
	__int64 v29; // rdx
	bool v30; // zf
	__int64 v31; // rcx

	v9 = sub_14018B280(192i64, 0);
	v10 = v9;
	if (v9)
	{
		sub_1407E4830(v9, 0i64, 0xC0ui64);
		v10[38] = a3;
	}
	else
	{
		v10 = 0i64;
	}
	v11 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 340));
	if (a3 == *(_DWORD*)(a1 + 340) && (*(_DWORD*)(a1 + 192) || *(_DWORD*)(v11 + 3416)))
		v10[44] = 4;
	else
		v10[44] = 5;
	v12 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 8i64);
	if (a3 == *(_DWORD*)(a1 + 340))
		v13 = *(_DWORD*)(v12 + 20);
	else
		v13 = *(_DWORD*)(v12 + 24);
	v10[45] = (a3 == *(_DWORD*)(a1 + 340)) + 2 * (dword_140C38AE4 + 2 * v13 + v13);
	v10[46] = *(_DWORD*)(a1 + 84);
	v10[41] = 156;
	v14 = sub_140542E70(a1, a6, 5u, 0);
	v15 = qword_140C63628;
	v10[47] = 1;
	*v10 = v14;
	v10[21] = sub_1400518A0(v15, 88, 1, 0);
	v16 = *v10;
	sub_140578460(v17, 0, a3, v10, 0, 0i64, 0i64);
	v18 = *(_QWORD*)(qword_140C65898 + 120);
	if (v18
		&& (a3 == *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64) || *(_DWORD*)(a1 + 340) == *(_DWORD*)(v18 + 8)))
	{
		v19 = sub_14018B280(176i64, 0);
		v20 = v19;
		if (v19)
			sub_1407E4830(v19, 0i64, 0xB0ui64);
		else
			v20 = 0i64;
		sub_1407E4830(v20, 0i64, 0xB0ui64);
		*v20 = v16;
		v20[38] = a4;
		v20[39] = a3;
		v21 = *(_DWORD*)(a1 + 340);
		v20[41] = 12336;
		v20[40] = v21;
		v20[42] = *(_DWORD*)(a1 + 304);
		v22 = *(_DWORD*)(a1 + 340);
		sub_1400035B0();
		if (v22 && (v23 = sub_1403D90D0(qword_140C65898, v22), (v24 = v23) != 0) && !*(_QWORD*)(v23 + 5864))
		{
			v25 = sub_14018B280(64i64, 0);
			v26 = v25;
			if (v25)
			{
				*(_QWORD*)v25 = v20;
				v25[2] = 0;
				v25[3] = 9;
				*((_QWORD*)v25 + 2) = 0i64;
				*((_QWORD*)v25 + 3) = 0i64;
				*((_QWORD*)v25 + 4) = 0i64;
				*((_QWORD*)v25 + 5) = 0i64;
				*((_QWORD*)v25 + 6) = 0i64;
				*((_QWORD*)v25 + 7) = 0i64;
			}
			else
			{
				v26 = 0i64;
			}
			v27 = (int**)(v24 + 1464);
			if (!*((_QWORD*)v26 + 2))
			{
				*((_QWORD*)v26 + 2) = v27;
				*((_QWORD*)v26 + 3) = *v27;
				*v27 = v26;
				v28 = *((_QWORD*)v26 + 3);
				if (v28)
					*(_QWORD*)(v28 + 16) = v26 + 6;
			}
			sub_1400035B0();
		}
		else
		{
			sub_1400035B0();
			v30 = ((dword_140C8AF30 + 1) & 0x3FFFFFFF) == 0;
			v31 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
			dword_140C8AF30 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
			if (v30 || (_DWORD)v31 == 0x3FFFFFFF)
				dword_140C8AF30 = 1;
			sub_140577250(v31, v29, v20, 0i64);
			sub_14018B900((__int64)v20, 0);
		}
	}
}
// 140542B9B: conditional instruction was optimized away because rdx.8!=0
// 140542B72: variable 'v17' is possibly undefined
// 140542D5C: variable 'v29' is possibly undefined
// 140C38AE4: using guessed type int dword_140C38AE4;
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8AF30: using guessed type int dword_140C8AF30;

