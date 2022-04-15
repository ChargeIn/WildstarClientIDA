#include "../winhttp.h"

//----- (000000014015EA50) ----------------------------------------------------
void __fastcall sub_14015EA50(__int64 a1)
{
	int v2; // esi
	__int64 v3; // r14
	__int64 v4; // rax
	__int64 v5; // rdi
	unsigned int v6; // esi
	__int64 v7; // rcx
	__int64 v8; // rdi
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	int v20; // esi
	_QWORD* v21; // rdi
	int i; // ebp
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	_QWORD* v26; // rdi
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rsi
	__int64 v30; // rdi
	__int64 v31; // rdx
	__int64 v32; // rcx
	__int64 v33; // rcx
	__int64 v34; // rcx

	*(_QWORD*)a1 = off_140B5CAF0;
	v2 = 0;
	if (*(int*)(a1 + 1160) > 0)
	{
		v3 = 0i64;
		do
		{
			v4 = *(_QWORD*)(a1 + 1152);
			v5 = *(_QWORD*)(v3 + v4);
			if (v5)
			{
				sub_14015D320(*(_QWORD*)(v3 + v4));
				sub_14018B900(v5, 0);
			}
			++v2;
			v3 += 8i64;
		} while (v2 < *(_DWORD*)(a1 + 1160));
	}
	v6 = 0;
	if (*(_QWORD*)(a1 + 1144))
	{
		v7 = 0i64;
		do
		{
			v8 = *(_QWORD*)(*(_QWORD*)(a1 + 1136) + 8 * v7);
			if (v8)
			{
				v9 = *(_QWORD*)(v8 + 16);
				if (v9)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
					*(_QWORD*)(v8 + 16) = 0i64;
				}
				sub_1401429A0(qword_140C63678, *(_DWORD*)(v8 + 76));
				v10 = *(_QWORD*)(v8 + 24);
				if (v10)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
					*(_QWORD*)(v8 + 24) = 0i64;
				}
				v11 = *(_QWORD*)(v8 + 48);
				if (v11)
					sub_14018B900(v11, 0);
				sub_14018B900(v8, 0);
			}
			v7 = ++v6;
		} while ((unsigned __int64)v6 < *(_QWORD*)(a1 + 1144));
	}
	v12 = *(_QWORD*)(a1 + 1112);
	if (v12)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		*(_QWORD*)(a1 + 1112) = 0i64;
	}
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 2224));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 2220));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 2216));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 2212));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 2208));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 2204));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 2200));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 2196));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 2192));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 2188));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 2184));
	v13 = *(_QWORD*)(a1 + 2136);
	if (v13)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
		*(_QWORD*)(a1 + 2136) = 0i64;
	}
	v14 = *(_QWORD*)(a1 + 2160);
	if (v14)
		sub_14018B900(v14, 0);
	v15 = *(_QWORD*)(a1 + 2088);
	if (v15)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
		*(_QWORD*)(a1 + 2088) = 0i64;
	}
	v16 = *(_QWORD*)(a1 + 2112);
	if (v16)
		sub_14018B900(v16, 0);
	v17 = *(_QWORD*)(a1 + 2040);
	if (v17)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
		*(_QWORD*)(a1 + 2040) = 0i64;
	}
	v18 = *(_QWORD*)(a1 + 2064);
	if (v18)
		sub_14018B900(v18, 0);
	v19 = *(_QWORD*)(a1 + 1936);
	if (v19)
		sub_14018B900(v19, 0);
	v20 = 5;
	v21 = (_QWORD*)(a1 + 1912);
	for (i = 5; i >= 0; --i)
	{
		v23 = *(v21 - 6);
		v21 -= 6;
		if (v23)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
			*v21 = 0i64;
		}
		v24 = v21[3];
		if (v24)
			sub_14018B900(v24, 0);
	}
	v25 = *(_QWORD*)(a1 + 1520);
	if (v25)
		sub_14018B900(v25, 0);
	v26 = (_QWORD*)(a1 + 1496);
	do
	{
		v27 = *(v26 - 6);
		v26 -= 6;
		if (v27)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
			*v26 = 0i64;
		}
		v28 = v26[3];
		if (v28)
			sub_14018B900(v28, 0);
		--v20;
	} while (v20 >= 0);
	if (*(_QWORD*)(a1 + 1184))
	{
		v29 = *(_QWORD*)(*(_QWORD*)(a1 + 1176) + 8i64);
		if (v29)
		{
			do
			{
				sub_1400083B0(a1 + 1168, *(_QWORD*)(v29 + 24));
				v30 = *(_QWORD*)(v29 + 16);
				sub_14018B900(v29, 0);
				v29 = v30;
			} while (v30);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 1176) + 16i64) = *(_QWORD*)(a1 + 1176);
		*(_QWORD*)(*(_QWORD*)(a1 + 1176) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 1176) + 24i64) = *(_QWORD*)(a1 + 1176);
		*(_QWORD*)(a1 + 1184) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 1176), 0);
	v32 = *(_QWORD*)(a1 + 1152);
	if (v32)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v32 - 16) + 8i64))(v32 - 16);
	v33 = *(_QWORD*)(a1 + 1136);
	if (v33)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v33 - 16) + 8i64))(v33 - 16);
	v34 = *(_QWORD*)(a1 + 1120);
	if (v34)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v34 - 16) + 8i64))(v34 - 16);
	sub_1400C6030(a1, v31);
}
// 14015EE0E: variable 'v31' is possibly undefined
// 140B5CAF0: using guessed type __int64 (__fastcall *off_140B5CAF0[25])();
// 140C63678: using guessed type __int64 qword_140C63678;

