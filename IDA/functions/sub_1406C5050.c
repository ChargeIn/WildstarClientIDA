#include "../winhttp.h"

//----- (00000001406C5050) ----------------------------------------------------
void __fastcall sub_1406C5050(__int64 a1)
{
	int v2; // ebp
	_QWORD* v3; // rdi
	int i; // esi
	__int64 v5; // rcx
	__int64 v6; // rcx
	_QWORD* v7; // rdi
	int j; // esi
	__int64 v9; // rcx
	__int64 v10; // rcx
	_QWORD* v11; // rdi
	int k; // esi
	__int64 v13; // rcx
	__int64 v14; // rcx
	_QWORD* v15; // rdi
	int m; // esi
	__int64 v17; // rcx
	__int64 v18; // rcx
	_QWORD* v19; // rdi
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
	__int64 v34; // rcx
	__int64 v35; // rcx
	__int64 v36; // rcx
	__int64 v37; // rcx
	__int64 v38; // rcx
	__int64 v39; // rcx
	__int64 v40; // rcx
	__int64 v41; // rcx
	__int64 v42; // rcx
	__int64 v43; // rcx
	__int64 v44; // rcx
	__int64 v45; // rcx
	__int64 v46; // rcx
	__int64 v47; // rcx
	__int64 v48; // rcx
	__int64 v49; // rcx

	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 2956));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 2952));
	v2 = 1;
	v3 = (_QWORD*)(a1 + 2952);
	for (i = 1; i >= 0; --i)
	{
		v5 = *(v3 - 6);
		v3 -= 6;
		if (v5)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			*v3 = 0i64;
		}
		v6 = v3[3];
		if (v6)
			sub_14018B900(v6, 0);
	}
	v7 = (_QWORD*)(a1 + 2856);
	for (j = 1; j >= 0; --j)
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
	v11 = (_QWORD*)(a1 + 2760);
	for (k = 1; k >= 0; --k)
	{
		v13 = *(v11 - 6);
		v11 -= 6;
		if (v13)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
			*v11 = 0i64;
		}
		v14 = v11[3];
		if (v14)
			sub_14018B900(v14, 0);
	}
	v15 = (_QWORD*)(a1 + 2664);
	for (m = 1; m >= 0; --m)
	{
		v17 = *(v15 - 6);
		v15 -= 6;
		if (v17)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
			*v15 = 0i64;
		}
		v18 = v15[3];
		if (v18)
			sub_14018B900(v18, 0);
	}
	v19 = (_QWORD*)(a1 + 2568);
	do
	{
		v20 = *(v19 - 6);
		v19 -= 6;
		if (v20)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
			*v19 = 0i64;
		}
		v21 = v19[3];
		if (v21)
			sub_14018B900(v21, 0);
		--v2;
	} while (v2 >= 0);
	v22 = *(_QWORD*)(a1 + 2424);
	if (v22)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
		*(_QWORD*)(a1 + 2424) = 0i64;
	}
	v23 = *(_QWORD*)(a1 + 2448);
	if (v23)
		sub_14018B900(v23, 0);
	v24 = *(_QWORD*)(a1 + 2376);
	if (v24)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
		*(_QWORD*)(a1 + 2376) = 0i64;
	}
	v25 = *(_QWORD*)(a1 + 2400);
	if (v25)
		sub_14018B900(v25, 0);
	v26 = *(_QWORD*)(a1 + 2328);
	if (v26)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
		*(_QWORD*)(a1 + 2328) = 0i64;
	}
	v27 = *(_QWORD*)(a1 + 2352);
	if (v27)
		sub_14018B900(v27, 0);
	v28 = *(_QWORD*)(a1 + 2280);
	if (v28)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28);
		*(_QWORD*)(a1 + 2280) = 0i64;
	}
	v29 = *(_QWORD*)(a1 + 2304);
	if (v29)
		sub_14018B900(v29, 0);
	v30 = *(_QWORD*)(a1 + 2232);
	if (v30)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
		*(_QWORD*)(a1 + 2232) = 0i64;
	}
	v31 = *(_QWORD*)(a1 + 2256);
	if (v31)
		sub_14018B900(v31, 0);
	v32 = *(_QWORD*)(a1 + 2184);
	if (v32)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
		*(_QWORD*)(a1 + 2184) = 0i64;
	}
	v33 = *(_QWORD*)(a1 + 2208);
	if (v33)
		sub_14018B900(v33, 0);
	v34 = *(_QWORD*)(a1 + 2136);
	if (v34)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 8i64))(v34);
		*(_QWORD*)(a1 + 2136) = 0i64;
	}
	v35 = *(_QWORD*)(a1 + 2160);
	if (v35)
		sub_14018B900(v35, 0);
	v36 = *(_QWORD*)(a1 + 2088);
	if (v36)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
		*(_QWORD*)(a1 + 2088) = 0i64;
	}
	v37 = *(_QWORD*)(a1 + 2112);
	if (v37)
		sub_14018B900(v37, 0);
	v38 = *(_QWORD*)(a1 + 2040);
	if (v38)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v38 + 8i64))(v38);
		*(_QWORD*)(a1 + 2040) = 0i64;
	}
	v39 = *(_QWORD*)(a1 + 2064);
	if (v39)
		sub_14018B900(v39, 0);
	v40 = *(_QWORD*)(a1 + 1992);
	if (v40)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v40 + 8i64))(v40);
		*(_QWORD*)(a1 + 1992) = 0i64;
	}
	v41 = *(_QWORD*)(a1 + 2016);
	if (v41)
		sub_14018B900(v41, 0);
	v42 = *(_QWORD*)(a1 + 1944);
	if (v42)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v42 + 8i64))(v42);
		*(_QWORD*)(a1 + 1944) = 0i64;
	}
	v43 = *(_QWORD*)(a1 + 1968);
	if (v43)
		sub_14018B900(v43, 0);
	v44 = *(_QWORD*)(a1 + 1896);
	if (v44)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v44 + 8i64))(v44);
		*(_QWORD*)(a1 + 1896) = 0i64;
	}
	v45 = *(_QWORD*)(a1 + 1920);
	if (v45)
		sub_14018B900(v45, 0);
	v46 = *(_QWORD*)(a1 + 1848);
	if (v46)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
		*(_QWORD*)(a1 + 1848) = 0i64;
	}
	v47 = *(_QWORD*)(a1 + 1872);
	if (v47)
		sub_14018B900(v47, 0);
	v48 = *(_QWORD*)(a1 + 1800);
	if (v48)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v48 + 8i64))(v48);
		*(_QWORD*)(a1 + 1800) = 0i64;
	}
	v49 = *(_QWORD*)(a1 + 1824);
	if (v49)
		sub_14018B900(v49, 0);
	sub_14012FDA0((_QWORD*)a1);
}
// 140C63678: using guessed type __int64 qword_140C63678;

