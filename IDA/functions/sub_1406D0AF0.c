#include "../winhttp.h"

//----- (00000001406D0AF0) ----------------------------------------------------
void __fastcall sub_1406D0AF0(__int64 a1)
{
	unsigned __int64 i; // rsi
	_QWORD* v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rcx
	int v6; // esi
	_QWORD* v7; // rdi
	int j; // ebp
	__int64 v9; // rcx
	__int64 v10; // rcx
	_QWORD* v11; // rdi
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rdx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rcx
	__int64 v34; // rdx
	__int64 v35; // rcx
	__int64 v36; // rcx
	__int64 v37; // rcx

	*(_QWORD*)a1 = off_140B71080;
	for (i = 0i64; i < *(_QWORD*)(a1 + 1120); ++i)
	{
		v3 = *(_QWORD**)(*(_QWORD*)(a1 + 1112) + 8 * i);
		if (v3)
		{
			sub_1405C72A0(v3 + 12);
			v4 = v3[5];
			if (v4)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
				v3[5] = 0i64;
			}
			v5 = v3[8];
			if (v5)
				sub_14018B900(v5, 0);
			sub_14018B900((__int64)v3, 0);
		}
	}
	v6 = 7;
	v7 = (_QWORD*)(a1 + 3328);
	for (j = 7; j >= 0; --j)
	{
		v9 = *(v7 - 6);
		v7 -= 6;
		if (v9)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			*v7 = 0i64;
		}
		v10 = v7[3];
		if (v10)
			sub_14018B900(v10, 0);
	}
	v11 = (_QWORD*)(a1 + 2944);
	do
	{
		v12 = *(v11 - 6);
		v11 -= 6;
		if (v12)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
			*v11 = 0i64;
		}
		v13 = v11[3];
		if (v13)
			sub_14018B900(v13, 0);
		--v6;
	} while (v6 >= 0);
	v14 = *(_QWORD*)(a1 + 2512);
	if (v14)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
		*(_QWORD*)(a1 + 2512) = 0i64;
	}
	v15 = *(_QWORD*)(a1 + 2536);
	if (v15)
		sub_14018B900(v15, 0);
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 2504));
	v17 = *(_QWORD*)(a1 + 2456);
	if (v17)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
		*(_QWORD*)(a1 + 2456) = 0i64;
	}
	v18 = *(_QWORD*)(a1 + 2480);
	if (v18)
		sub_14018B900(v18, 0);
	v19 = *(_QWORD*)(a1 + 2408);
	if (v19)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
		*(_QWORD*)(a1 + 2408) = 0i64;
	}
	v20 = *(_QWORD*)(a1 + 2432);
	if (v20)
		sub_14018B900(v20, 0);
	v21 = *(_QWORD*)(a1 + 2360);
	if (v21)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
		*(_QWORD*)(a1 + 2360) = 0i64;
	}
	v22 = *(_QWORD*)(a1 + 2384);
	if (v22)
		sub_14018B900(v22, 0);
	v23 = *(_QWORD*)(a1 + 2312);
	if (v23)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
		*(_QWORD*)(a1 + 2312) = 0i64;
	}
	v24 = *(_QWORD*)(a1 + 2336);
	if (v24)
		sub_14018B900(v24, 0);
	v25 = *(_QWORD*)(a1 + 2264);
	if (v25)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
		*(_QWORD*)(a1 + 2264) = 0i64;
	}
	v26 = *(_QWORD*)(a1 + 2288);
	if (v26)
		sub_14018B900(v26, 0);
	v27 = *(_QWORD*)(a1 + 2216);
	if (v27)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
		*(_QWORD*)(a1 + 2216) = 0i64;
	}
	v28 = *(_QWORD*)(a1 + 2240);
	if (v28)
		sub_14018B900(v28, 0);
	v29 = *(_QWORD*)(a1 + 2168);
	if (v29)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
		*(_QWORD*)(a1 + 2168) = 0i64;
	}
	v30 = *(_QWORD*)(a1 + 2192);
	if (v30)
		sub_14018B900(v30, 0);
	v31 = *(_QWORD*)(a1 + 2120);
	if (v31)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
		*(_QWORD*)(a1 + 2120) = 0i64;
	}
	v32 = *(_QWORD*)(a1 + 2144);
	if (v32)
		sub_14018B900(v32, 0);
	v33 = *(_QWORD*)(a1 + 2072);
	*(_QWORD*)(a1 + 2056) = off_140B56A08;
	if (v33)
		sub_1400579E0(v33, v16, *(_DWORD*)(a1 + 2064));
	sub_140140120(a1 + 1136);
	v35 = *(_QWORD*)(a1 + 1112);
	if (v35)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v35 - 16) + 8i64))(v35 - 16);
	v36 = *(_QWORD*)(a1 + 1072);
	if (v36)
		sub_14018B900(v36, 0);
	v37 = *(_QWORD*)(a1 + 1040);
	if (v37)
		sub_14018B900(v37, 0);
	sub_1400C6030(a1, v34);
}
// 1406D0DAA: variable 'v16' is possibly undefined
// 1406D0E15: variable 'v34' is possibly undefined
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140B71080: using guessed type __int64 (__fastcall *off_140B71080[25])();
// 140C63678: using guessed type __int64 qword_140C63678;

