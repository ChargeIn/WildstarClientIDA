#include "../winhttp.h"

//----- (0000000140619BB0) ----------------------------------------------------
void __fastcall sub_140619BB0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	_QWORD* v14; // rdx
	__int64 v15; // rdx
	__int64 v16; // rbx
	_QWORD* v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	_QWORD* v26; // rcx
	_QWORD* v27; // rcx
	_QWORD* v28; // rcx
	_QWORD* v29; // rcx
	_QWORD* v30; // rcx
	_QWORD* v31; // rcx
	_QWORD* v32; // rcx
	_QWORD* v33; // rcx
	_QWORD* v34; // rcx
	_QWORD* v35; // rcx
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
	_QWORD* v47; // rcx
	__int64 v48; // rcx
	_QWORD* v49; // rcx
	__int64 v50; // rcx
	_QWORD* v51; // rcx
	int v52; // [rsp+40h] [rbp+8h] BYREF

	if (*(_QWORD*)(a1 + 1088))
		sub_140195D70(a1 + 1072);
	if (*(_QWORD*)(a1 + 1160))
		sub_140195D70(a1 + 1144);
	if (*(_QWORD*)(a1 + 1232))
		sub_140195D70(a1 + 1216);
	if (*(_QWORD*)(a1 + 1304))
		sub_140195D70(a1 + 1288);
	if (*(_QWORD*)(a1 + 1376))
		sub_140195D70(a1 + 1360);
	v2 = *(_QWORD*)(a1 + 128);
	if (v2)
	{
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v2 + 336i64))(v2, 0i64);
		v3 = *(_QWORD*)(a1 + 128);
		if (v3)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
			*(_QWORD*)(a1 + 128) = 0i64;
		}
	}
	v4 = *(_QWORD*)(a1 + 72);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 936i64))(v4);
		v5 = *(_QWORD*)(a1 + 72);
		if (v5)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
			*(_QWORD*)(a1 + 72) = 0i64;
		}
	}
	v6 = *(_QWORD*)(a1 + 88);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 936i64))(v6);
		v7 = *(_QWORD*)(a1 + 88);
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*(_QWORD*)(a1 + 88) = 0i64;
		}
	}
	v8 = *(_QWORD*)(a1 + 80);
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 936i64))(v8);
		v9 = *(_QWORD*)(a1 + 80);
		if (v9)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			*(_QWORD*)(a1 + 80) = 0i64;
		}
	}
	v10 = *(_QWORD*)(a1 + 1624);
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		*(_QWORD*)(a1 + 1624) = 0i64;
	}
	v11 = *(_QWORD*)(a1 + 1632);
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*(_QWORD*)(a1 + 1632) = 0i64;
	}
	v12 = *(_QWORD*)(a1 + 1640);
	if (v12)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		*(_QWORD*)(a1 + 1640) = 0i64;
	}
	for (; *(_QWORD*)(a1 + 1472); *(_QWORD*)(v13 + 40) = 0i64)
	{
		v13 = *(_QWORD*)(a1 + 1472);
		v14 = *(_QWORD**)(v13 + 32);
		if (v14)
			*v14 = *(_QWORD*)(v13 + 40);
		v15 = *(_QWORD*)(v13 + 40);
		if (v15)
			*(_QWORD*)(v15 + 32) = *(_QWORD*)(v13 + 32);
		*(_QWORD*)(v13 + 32) = 0i64;
	}
	while (*(_QWORD*)(a1 + 136))
	{
		v16 = *(_QWORD*)(a1 + 136);
		if (v16)
		{
			sub_140625C30(*(_QWORD**)(a1 + 136));
			sub_14018B900(v16, 0);
		}
	}
	v17 = *(_QWORD**)(a1 + 16);
	if (v17)
		*v17 = *(_QWORD*)(a1 + 24);
	v18 = *(_QWORD*)(a1 + 24);
	if (v18)
		*(_QWORD*)(v18 + 16) = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	sub_14061A140(a1, 1);
	if ((*(_DWORD*)(a1 + 984) & 0xC0000000) == 0x40000000)
	{
		v19 = *(_QWORD*)(qword_140C65898 + 29080);
		if (v19)
		{
			v52 = *(_DWORD*)(a1 + 984);
			sub_140003460((__int64*)(v19 + 760), &v52);
		}
	}
	v20 = *(_QWORD*)(a1 + 1640);
	if (v20)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
	v21 = *(_QWORD*)(a1 + 1632);
	if (v21)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
	v22 = *(_QWORD*)(a1 + 1624);
	if (v22)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
	v23 = *(_QWORD*)(a1 + 1616);
	if (v23)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v23 - 16) + 8i64))(v23 - 16);
	v24 = *(_QWORD*)(a1 + 1608);
	if (v24)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
	v25 = *(_QWORD*)(a1 + 1600);
	if (v25)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v25 - 16) + 8i64))(v25 - 16);
	sub_140008410(a1 + 1568);
	sub_14018B900(*(_QWORD*)(a1 + 1576), 0);
	sub_140008410(a1 + 1496);
	sub_14018B900(*(_QWORD*)(a1 + 1504), 0);
	if (*(_QWORD*)(a1 + 1472))
		sub_1401A4A00((const void***)(a1 + 1472));
	sub_140195D70(a1 + 1360);
	*(_DWORD*)(a1 + 1360) = 0;
	v26 = *(_QWORD**)(a1 + 1376);
	if (v26)
		*v26 = *(_QWORD*)(a1 + 1384);
	v27 = *(_QWORD**)(a1 + 1384);
	if (v27)
		*v27 = *(_QWORD*)(a1 + 1376);
	*(_QWORD*)(a1 + 1376) = 0i64;
	*(_QWORD*)(a1 + 1384) = 0i64;
	sub_140195D70(a1 + 1288);
	*(_DWORD*)(a1 + 1288) = 0;
	v28 = *(_QWORD**)(a1 + 1304);
	if (v28)
		*v28 = *(_QWORD*)(a1 + 1312);
	v29 = *(_QWORD**)(a1 + 1312);
	if (v29)
		*v29 = *(_QWORD*)(a1 + 1304);
	*(_QWORD*)(a1 + 1304) = 0i64;
	*(_QWORD*)(a1 + 1312) = 0i64;
	sub_140195D70(a1 + 1216);
	*(_DWORD*)(a1 + 1216) = 0;
	v30 = *(_QWORD**)(a1 + 1232);
	if (v30)
		*v30 = *(_QWORD*)(a1 + 1240);
	v31 = *(_QWORD**)(a1 + 1240);
	if (v31)
		*v31 = *(_QWORD*)(a1 + 1232);
	*(_QWORD*)(a1 + 1232) = 0i64;
	*(_QWORD*)(a1 + 1240) = 0i64;
	sub_140195D70(a1 + 1144);
	*(_DWORD*)(a1 + 1144) = 0;
	v32 = *(_QWORD**)(a1 + 1160);
	if (v32)
		*v32 = *(_QWORD*)(a1 + 1168);
	v33 = *(_QWORD**)(a1 + 1168);
	if (v33)
		*v33 = *(_QWORD*)(a1 + 1160);
	*(_QWORD*)(a1 + 1160) = 0i64;
	*(_QWORD*)(a1 + 1168) = 0i64;
	sub_140195D70(a1 + 1072);
	*(_DWORD*)(a1 + 1072) = 0;
	v34 = *(_QWORD**)(a1 + 1088);
	if (v34)
		*v34 = *(_QWORD*)(a1 + 1096);
	v35 = *(_QWORD**)(a1 + 1096);
	if (v35)
		*v35 = *(_QWORD*)(a1 + 1088);
	*(_QWORD*)(a1 + 1088) = 0i64;
	*(_QWORD*)(a1 + 1096) = 0i64;
	if (*(_QWORD*)(a1 + 136))
		sub_1401A4A00((const void***)(a1 + 136));
	v36 = *(_QWORD*)(a1 + 128);
	if (v36)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
	v37 = *(_QWORD*)(a1 + 120);
	if (v37)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v37 + 8i64))(v37);
	v38 = *(_QWORD*)(a1 + 112);
	if (v38)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v38 + 8i64))(v38);
	v39 = *(_QWORD*)(a1 + 104);
	if (v39)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v39 + 8i64))(v39);
	v40 = *(_QWORD*)(a1 + 96);
	if (v40)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v40 + 8i64))(v40);
	v41 = *(_QWORD*)(a1 + 88);
	if (v41)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v41 + 8i64))(v41);
	v42 = *(_QWORD*)(a1 + 80);
	if (v42)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v42 + 8i64))(v42);
	v43 = *(_QWORD*)(a1 + 72);
	if (v43)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v43 + 8i64))(v43);
	v44 = *(_QWORD*)(a1 + 64);
	if (v44)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v44 + 8i64))(v44);
	v45 = *(_QWORD*)(a1 + 56);
	if (v45)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v45 + 8i64))(v45);
	v46 = *(_QWORD*)(a1 + 48);
	if (v46)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v46 + 8i64))(v46);
	v47 = *(_QWORD**)(a1 + 32);
	if (v47)
		*v47 = *(_QWORD*)(a1 + 40);
	v48 = *(_QWORD*)(a1 + 40);
	if (v48)
		*(_QWORD*)(v48 + 32) = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v49 = *(_QWORD**)(a1 + 16);
	if (v49)
		*v49 = *(_QWORD*)(a1 + 24);
	v50 = *(_QWORD*)(a1 + 24);
	if (v50)
		*(_QWORD*)(v50 + 16) = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	if (*(_QWORD*)a1)
		**(_QWORD**)a1 = *(_QWORD*)(a1 + 8);
	v51 = *(_QWORD**)(a1 + 8);
	if (v51)
		*v51 = *(_QWORD*)a1;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)a1 = 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

