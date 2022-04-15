#include "../winhttp.h"

//----- (000000014053C8E0) ----------------------------------------------------
void __fastcall sub_14053C8E0(__int64 a1)
{
	int v1; // edx
	__int64 v3; // rax
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64* i; // r14
	_QWORD* v7; // rcx
	_QWORD* v8; // rdx
	_QWORD* v9; // rdx
	__int64 v10; // rbx
	__int64 v11; // rcx
	int v12; // eax
	__int64 v13; // rcx
	unsigned __int64 j; // rsi
	__int64 v15; // rbp
	_QWORD* v16; // rcx
	_QWORD* v17; // rcx
	unsigned __int64 k; // rsi
	__int64 v19; // rax
	__int64 v20; // rbx
	_QWORD* v21; // rcx
	_QWORD* v22; // rcx
	void(__fastcall * **v23)(_QWORD, __int64); // rcx
	unsigned __int64 m; // rsi
	__int64 v25; // rbp
	_QWORD* v26; // rcx
	_QWORD* v27; // rcx
	_QWORD* v28; // rcx
	__int64 v29; // rcx
	_QWORD* v30; // rcx
	__int64 v31; // rcx
	_QWORD* v32; // rcx
	__int64 v33; // rcx
	_QWORD* v34; // rcx
	__int64 v35; // rcx
	__int64 v36; // rbp
	__int64 v37; // rbx
	__int64 v38; // rbp
	__int64 v39; // rbx
	_QWORD* v40; // rcx
	_QWORD* v41; // rcx
	__int64 v42; // rbp
	__int64 v43; // rbx
	__int64 v44; // rbp
	__int64 v45; // rbx
	__int64 v46; // rbp
	__int64 v47; // rbx
	__int64 v48; // rbp
	__int64 v49; // rbx
	__int64 v50; // rbp
	__int64 v51; // rbx
	__int64 v52; // rbp
	__int64 v53; // rbx
	__int64 v54; // rcx
	__int64 v55; // rcx
	__int64 v56; // rcx
	_QWORD* v57; // rcx
	__int64 v58; // rcx
	_QWORD* v59; // rcx
	__int64 v60; // rcx
	_QWORD* v61; // rcx
	__int64 v62; // rcx
	_QWORD* v63; // rcx
	__int64 v64; // rcx

	v1 = *(_DWORD*)(a1 + 344);
	*(_QWORD*)a1 = off_140B6C608;
	v3 = sub_1403D90D0(qword_140C65898, v1);
	if (v3)
	{
		v4 = qword_140C65898;
		*(_DWORD*)(v3 + 6312) = 1;
		v5 = *(_QWORD*)(v4 + 120);
		if (v5)
		{
			if (*(_DWORD*)(v3 + 8) == *(_DWORD*)(v5 + 8))
				*(_DWORD*)(v4 + 28568) = 1;
		}
	}
	sub_14053FF40(a1, 0);
	for (i = (__int64*)(a1 + 456); *i; v7[1] = 0i64)
	{
		sub_140624200(*i);
		v7 = (_QWORD*)*i;
		v8 = *(_QWORD**)*i;
		if (v8)
			*v8 = v7[1];
		v9 = (_QWORD*)v7[1];
		if (v9)
			*v9 = *v7;
		*v7 = 0i64;
	}
	if (*(_QWORD*)(a1 + 528))
	{
		v10 = qword_140C65898;
		if (*(_QWORD*)(qword_140C65898 + 29064))
		{
			v11 = *(_QWORD*)(qword_140C65898 + 29064);
			if (v11)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
				*(_QWORD*)(v10 + 29064) = 0i64;
			}
			v12 = dword_140C636A8;
			*(_QWORD*)(v10 + 29064) = 0i64;
			*(_DWORD*)(v10 + 29072) = v12;
		}
		v13 = *(_QWORD*)(a1 + 528);
		if (v13)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
			*(_QWORD*)(a1 + 528) = 0i64;
		}
	}
	for (j = 0i64; j < *(_QWORD*)(a1 + 472); ++j)
	{
		v15 = *(_QWORD*)(*(_QWORD*)(a1 + 464) + 8 * j);
		if (v15)
		{
			sub_140195D70(v15 + 8);
			*(_DWORD*)(v15 + 8) = 0;
			v16 = *(_QWORD**)(v15 + 24);
			if (v16)
				*v16 = *(_QWORD*)(v15 + 32);
			v17 = *(_QWORD**)(v15 + 32);
			if (v17)
				*v17 = *(_QWORD*)(v15 + 24);
			*(_QWORD*)(v15 + 24) = 0i64;
			*(_QWORD*)(v15 + 32) = 0i64;
			sub_14018B900(v15, 0);
		}
	}
	for (k = 0i64; k < *(_QWORD*)(a1 + 488); ++k)
	{
		v19 = *(_QWORD*)(a1 + 480);
		v20 = *(_QWORD*)(v19 + 8 * k);
		if (v20)
		{
			sub_140195D70(*(_QWORD*)(v19 + 8 * k));
			*(_DWORD*)v20 = 0;
			v21 = *(_QWORD**)(v20 + 16);
			if (v21)
				*v21 = *(_QWORD*)(v20 + 24);
			v22 = *(_QWORD**)(v20 + 24);
			if (v22)
				*v22 = *(_QWORD*)(v20 + 16);
			*(_QWORD*)(v20 + 16) = 0i64;
			*(_QWORD*)(v20 + 24) = 0i64;
			sub_14018B900(v20, 0);
		}
	}
	if (*(_DWORD*)(a1 + 320))
	{
		v23 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 312);
		if (v23)
			(**v23)(v23, 1i64);
	}
	for (m = 0i64; m < *(_QWORD*)(a1 + 448); ++m)
	{
		v25 = *(_QWORD*)(*(_QWORD*)(a1 + 440) + 8 * m);
		if (v25)
		{
			sub_140195D70(v25 + 16);
			*(_DWORD*)(v25 + 16) = 0;
			v26 = *(_QWORD**)(v25 + 32);
			if (v26)
				*v26 = *(_QWORD*)(v25 + 40);
			v27 = *(_QWORD**)(v25 + 40);
			if (v27)
				*v27 = *(_QWORD*)(v25 + 32);
			*(_QWORD*)(v25 + 32) = 0i64;
			*(_QWORD*)(v25 + 40) = 0i64;
			sub_14018B900(v25, 0);
		}
	}
	*(_QWORD*)(a1 + 448) = 0i64;
	v28 = *(_QWORD**)(a1 + 8);
	if (v28)
		*v28 = *(_QWORD*)(a1 + 16);
	v29 = *(_QWORD*)(a1 + 16);
	if (v29)
		*(_QWORD*)(v29 + 8) = *(_QWORD*)(a1 + 8);
	v30 = *(_QWORD**)(a1 + 24);
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	if (v30)
		*v30 = *(_QWORD*)(a1 + 32);
	v31 = *(_QWORD*)(a1 + 32);
	if (v31)
		*(_QWORD*)(v31 + 24) = *(_QWORD*)(a1 + 24);
	v32 = *(_QWORD**)(a1 + 40);
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	if (v32)
		*v32 = *(_QWORD*)(a1 + 48);
	v33 = *(_QWORD*)(a1 + 48);
	if (v33)
		*(_QWORD*)(v33 + 40) = *(_QWORD*)(a1 + 40);
	v34 = *(_QWORD**)(a1 + 56);
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	if (v34)
		*v34 = *(_QWORD*)(a1 + 64);
	v35 = *(_QWORD*)(a1 + 64);
	if (v35)
		*(_QWORD*)(v35 + 56) = *(_QWORD*)(a1 + 56);
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	if (*(_QWORD*)(a1 + 896))
	{
		v36 = *(_QWORD*)(*(_QWORD*)(a1 + 888) + 8i64);
		if (v36)
		{
			do
			{
				sub_1400083B0(a1 + 880, *(_QWORD*)(v36 + 24));
				v37 = *(_QWORD*)(v36 + 16);
				sub_14018B900(v36, 0);
				v36 = v37;
			} while (v37);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 888) + 16i64) = *(_QWORD*)(a1 + 888);
		*(_QWORD*)(*(_QWORD*)(a1 + 888) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 888) + 24i64) = *(_QWORD*)(a1 + 888);
		*(_QWORD*)(a1 + 896) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 888), 0);
	if (*(_QWORD*)(a1 + 864))
	{
		v38 = *(_QWORD*)(*(_QWORD*)(a1 + 856) + 8i64);
		if (v38)
		{
			do
			{
				sub_1400083B0(a1 + 848, *(_QWORD*)(v38 + 24));
				v39 = *(_QWORD*)(v38 + 16);
				sub_14018B900(v38, 0);
				v38 = v39;
			} while (v39);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 856) + 16i64) = *(_QWORD*)(a1 + 856);
		*(_QWORD*)(*(_QWORD*)(a1 + 856) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 856) + 24i64) = *(_QWORD*)(a1 + 856);
		*(_QWORD*)(a1 + 864) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 856), 0);
	sub_140195D70(a1 + 768);
	*(_DWORD*)(a1 + 768) = 0;
	v40 = *(_QWORD**)(a1 + 784);
	if (v40)
		*v40 = *(_QWORD*)(a1 + 792);
	v41 = *(_QWORD**)(a1 + 792);
	if (v41)
		*v41 = *(_QWORD*)(a1 + 784);
	*(_QWORD*)(a1 + 784) = 0i64;
	*(_QWORD*)(a1 + 792) = 0i64;
	if (*(_QWORD*)(a1 + 744))
	{
		v42 = *(_QWORD*)(*(_QWORD*)(a1 + 736) + 8i64);
		if (v42)
		{
			do
			{
				sub_1400083B0(a1 + 728, *(_QWORD*)(v42 + 24));
				v43 = *(_QWORD*)(v42 + 16);
				sub_14018B900(v42, 0);
				v42 = v43;
			} while (v43);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 736) + 16i64) = *(_QWORD*)(a1 + 736);
		*(_QWORD*)(*(_QWORD*)(a1 + 736) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 736) + 24i64) = *(_QWORD*)(a1 + 736);
		*(_QWORD*)(a1 + 744) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 736), 0);
	if (*(_QWORD*)(a1 + 712))
	{
		v44 = *(_QWORD*)(*(_QWORD*)(a1 + 704) + 8i64);
		if (v44)
		{
			do
			{
				sub_1400083B0(a1 + 696, *(_QWORD*)(v44 + 24));
				v45 = *(_QWORD*)(v44 + 16);
				sub_14018B900(v44, 0);
				v44 = v45;
			} while (v45);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 704) + 16i64) = *(_QWORD*)(a1 + 704);
		*(_QWORD*)(*(_QWORD*)(a1 + 704) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 704) + 24i64) = *(_QWORD*)(a1 + 704);
		*(_QWORD*)(a1 + 712) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 704), 0);
	if (*(_QWORD*)(a1 + 680))
	{
		v46 = *(_QWORD*)(*(_QWORD*)(a1 + 672) + 8i64);
		if (v46)
		{
			do
			{
				sub_1400083B0(a1 + 664, *(_QWORD*)(v46 + 24));
				v47 = *(_QWORD*)(v46 + 16);
				sub_14018B900(v46, 0);
				v46 = v47;
			} while (v47);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 672) + 16i64) = *(_QWORD*)(a1 + 672);
		*(_QWORD*)(*(_QWORD*)(a1 + 672) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 672) + 24i64) = *(_QWORD*)(a1 + 672);
		*(_QWORD*)(a1 + 680) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 672), 0);
	if (*(_QWORD*)(a1 + 648))
	{
		v48 = *(_QWORD*)(*(_QWORD*)(a1 + 640) + 8i64);
		if (v48)
		{
			do
			{
				sub_1400083B0(a1 + 632, *(_QWORD*)(v48 + 24));
				v49 = *(_QWORD*)(v48 + 16);
				sub_14018B900(v48, 0);
				v48 = v49;
			} while (v49);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 640) + 16i64) = *(_QWORD*)(a1 + 640);
		*(_QWORD*)(*(_QWORD*)(a1 + 640) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 640) + 24i64) = *(_QWORD*)(a1 + 640);
		*(_QWORD*)(a1 + 648) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 640), 0);
	if (*(_QWORD*)(a1 + 624))
		sub_1401A4A00((const void***)(a1 + 624));
	if (*(_QWORD*)(a1 + 616))
		sub_1401A4A00((const void***)(a1 + 616));
	if (*(_QWORD*)(a1 + 608))
		sub_1401A4A00((const void***)(a1 + 608));
	if (*(_QWORD*)(a1 + 592))
	{
		v50 = *(_QWORD*)(*(_QWORD*)(a1 + 584) + 8i64);
		if (v50)
		{
			do
			{
				sub_1400083B0(a1 + 576, *(_QWORD*)(v50 + 24));
				v51 = *(_QWORD*)(v50 + 16);
				sub_14018B900(v50, 0);
				v50 = v51;
			} while (v51);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 584) + 16i64) = *(_QWORD*)(a1 + 584);
		*(_QWORD*)(*(_QWORD*)(a1 + 584) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 584) + 24i64) = *(_QWORD*)(a1 + 584);
		*(_QWORD*)(a1 + 592) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 584), 0);
	if (*(_QWORD*)(a1 + 568))
		sub_1401A4A00((const void***)(a1 + 568));
	if (*(_QWORD*)(a1 + 560))
		sub_1401A4A00((const void***)(a1 + 560));
	if (*(_QWORD*)(a1 + 552))
		sub_1401A4A00((const void***)(a1 + 552));
	if (*(_QWORD*)(a1 + 544))
		sub_1401A4A00((const void***)(a1 + 544));
	if (*(_QWORD*)(a1 + 536))
		sub_1401A4A00((const void***)(a1 + 536));
	if (*(_QWORD*)(a1 + 512))
	{
		v52 = *(_QWORD*)(*(_QWORD*)(a1 + 504) + 8i64);
		if (v52)
		{
			do
			{
				sub_1400083B0(a1 + 496, *(_QWORD*)(v52 + 24));
				v53 = *(_QWORD*)(v52 + 16);
				sub_14018B900(v52, 0);
				v52 = v53;
			} while (v53);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 504) + 16i64) = *(_QWORD*)(a1 + 504);
		*(_QWORD*)(*(_QWORD*)(a1 + 504) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 504) + 24i64) = *(_QWORD*)(a1 + 504);
		*(_QWORD*)(a1 + 512) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 504), 0);
	v54 = *(_QWORD*)(a1 + 480);
	if (v54)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v54 - 16) + 8i64))(v54 - 16);
	v55 = *(_QWORD*)(a1 + 464);
	if (v55)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v55 - 16) + 8i64))(v55 - 16);
	if (*i)
		sub_1401A4A00((const void***)(a1 + 456));
	v56 = *(_QWORD*)(a1 + 440);
	if (v56)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v56 - 16) + 8i64))(v56 - 16);
	if (*(_QWORD*)(a1 + 72))
		sub_1401A4A00((const void***)(a1 + 72));
	v57 = *(_QWORD**)(a1 + 56);
	if (v57)
		*v57 = *(_QWORD*)(a1 + 64);
	v58 = *(_QWORD*)(a1 + 64);
	if (v58)
		*(_QWORD*)(v58 + 56) = *(_QWORD*)(a1 + 56);
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	v59 = *(_QWORD**)(a1 + 40);
	if (v59)
		*v59 = *(_QWORD*)(a1 + 48);
	v60 = *(_QWORD*)(a1 + 48);
	if (v60)
		*(_QWORD*)(v60 + 40) = *(_QWORD*)(a1 + 40);
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	v61 = *(_QWORD**)(a1 + 24);
	if (v61)
		*v61 = *(_QWORD*)(a1 + 32);
	v62 = *(_QWORD*)(a1 + 32);
	if (v62)
		*(_QWORD*)(v62 + 24) = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	v63 = *(_QWORD**)(a1 + 8);
	if (v63)
		*v63 = *(_QWORD*)(a1 + 16);
	v64 = *(_QWORD*)(a1 + 16);
	if (v64)
		*(_QWORD*)(v64 + 8) = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 8) = 0i64;
}
// 140B6C608: using guessed type __int64 (__fastcall *off_140B6C608[2])();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

