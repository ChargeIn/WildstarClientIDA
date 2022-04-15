#include "../winhttp.h"

//----- (000000014037C2E0) ----------------------------------------------------
void __fastcall sub_14037C2E0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rbp
	_QWORD* v4; // rdi
	__int64 v5; // rsi
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	_QWORD* v15; // rdi
	__int64 v16; // rsi
	_QWORD* v17; // rdi
	__int64 v18; // rsi
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	unsigned __int64 i; // rsi
	_DWORD* v23; // rdi
	bool v24; // zf
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	unsigned __int64 j; // rdi
	__int64 v29; // rax
	__int64 v30; // rcx
	_QWORD* v31; // rsi
	_QWORD* v32; // rdi
	__int64 v33; // rsi
	__int64 v34; // rcx
	__int64 v35; // rcx
	__int64 v36; // rcx
	_QWORD* v37; // rdi
	__int64 v38; // rcx
	__int64 v39; // rcx
	__int64 v40; // rbp
	__int64 k; // rdi
	__int64 v42; // rsi
	_QWORD* v43; // rcx
	__int64 v44; // rcx
	_QWORD* v45; // rcx
	__int64 v46; // rcx
	_QWORD* v47; // rcx
	__int64 v48; // rcx
	_QWORD* v49; // rcx
	__int64 v50; // rcx
	_QWORD* v51; // rcx
	__int64 v52; // rcx
	_QWORD* v53; // rcx
	__int64 v54; // rcx
	__int64 v55; // rcx
	__int64 v56; // rcx
	__int64 v57; // rbx
	_QWORD* v58; // rcx
	_QWORD* v59; // rcx

	sub_140383760((_QWORD*)a1);
	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 16) = 0i64;
	}
	v3 = 4i64;
	v4 = (_QWORD*)(a1 + 88);
	v5 = 4i64;
	do
	{
		v6 = *(v4 - 4);
		if (v6)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			*(v4 - 4) = 0i64;
		}
		if (*v4)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v4 + 8i64))(*v4);
			*v4 = 0i64;
		}
		v7 = v4[4];
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			v4[4] = 0i64;
		}
		++v4;
		--v5;
	} while (v5);
	v8 = *(_QWORD*)(a1 + 160);
	if (v8)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		*(_QWORD*)(a1 + 160) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 152), 0);
	v9 = *(_QWORD*)(a1 + 176);
	if (v9)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 176) = 0i64;
	}
	v10 = *(_QWORD*)(a1 + 384);
	if (v10)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
		*(_QWORD*)(a1 + 384) = 0i64;
	}
	v11 = *(_QWORD*)(a1 + 392);
	if (v11)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*(_QWORD*)(a1 + 392) = 0i64;
	}
	v12 = *(_QWORD*)(a1 + 400);
	if (v12)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		*(_QWORD*)(a1 + 400) = 0i64;
	}
	v13 = *(_QWORD*)(a1 + 408);
	if (v13)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
		*(_QWORD*)(a1 + 408) = 0i64;
	}
	v14 = *(_QWORD*)(a1 + 416);
	if (v14)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
		*(_QWORD*)(a1 + 416) = 0i64;
	}
	v15 = (_QWORD*)(a1 + 512);
	v16 = 16i64;
	do
	{
		if (*v15)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v15 + 8i64))(*v15);
			*v15 = 0i64;
		}
		++v15;
		--v16;
	} while (v16);
	v17 = (_QWORD*)(a1 + 672);
	v18 = 4i64;
	do
	{
		v19 = *(v17 - 4);
		if (v19)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
			*(v17 - 4) = 0i64;
		}
		if (*v17)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v17 + 8i64))(*v17);
			*v17 = 0i64;
		}
		++v17;
		--v18;
	} while (v18);
	v20 = *(_QWORD*)(a1 + 752);
	if (v20)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
		*(_QWORD*)(a1 + 752) = 0i64;
	}
	v21 = *(_QWORD*)(a1 + 776);
	if (v21)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
		*(_QWORD*)(a1 + 776) = 0i64;
	}
	for (i = 0i64; i < *(_QWORD*)(a1 + 888); ++i)
	{
		v23 = *(_DWORD**)(*(_QWORD*)(a1 + 896) + 8 * i);
		v24 = v23[263]-- == 1;
		if (v24)
			sub_140377FE0((__int64)v23);
		(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v23 + 8i64))(v23);
	}
	sub_14018B900(*(_QWORD*)(a1 + 896), 0);
	v25 = *(_QWORD*)(a1 + 976);
	if (v25)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
		*(_QWORD*)(a1 + 976) = 0i64;
	}
	v26 = *(_QWORD*)(a1 + 992);
	if (v26)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
		*(_QWORD*)(a1 + 992) = 0i64;
	}
	v27 = *(_QWORD*)(a1 + 1008);
	if (v27)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
		*(_QWORD*)(a1 + 1008) = 0i64;
	}
	for (j = 0i64; j < *(_QWORD*)(a1 + 1032); ++j)
	{
		v29 = *(_QWORD*)(a1 + 1040);
		v30 = *(_QWORD*)(v29 + 8 * j);
		v31 = (_QWORD*)(v29 + 8 * j);
		if (v30)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
			*v31 = 0i64;
		}
	}
	sub_14018B900(*(_QWORD*)(a1 + 1040), 0);
	v32 = (_QWORD*)(a1 + 1128);
	v33 = 4i64;
	do
	{
		if (*v32)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v32 + 8i64))(*v32);
			*v32 = 0i64;
		}
		++v32;
		--v33;
	} while (v33);
	v34 = *(_QWORD*)(a1 + 1160);
	if (v34)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 8i64))(v34);
		*(_QWORD*)(a1 + 1160) = 0i64;
	}
	v35 = *(_QWORD*)(a1 + 1168);
	if (v35)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
		*(_QWORD*)(a1 + 1168) = 0i64;
	}
	v36 = *(_QWORD*)(a1 + 1176);
	if (v36)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
		*(_QWORD*)(a1 + 1176) = 0i64;
	}
	v37 = (_QWORD*)(a1 + 1248);
	do
	{
		if (*v37)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v37 + 8i64))(*v37);
			*v37 = 0i64;
		}
		++v37;
		--v3;
	} while (v3);
	v38 = *(_QWORD*)(a1 + 1280);
	if (v38)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v38 + 8i64))(v38);
		*(_QWORD*)(a1 + 1280) = 0i64;
	}
	v39 = *(_QWORD*)(a1 + 1288);
	if (v39)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v39 + 8i64))(v39);
		*(_QWORD*)(a1 + 1288) = 0i64;
	}
	sub_140389C40((__int64*)a1);
	if (*(_QWORD*)(a1 + 1448))
		--* (_DWORD*)(*(_QWORD*)a1 + 2164i64);
	if (*(_QWORD*)(a1 + 1464))
		--* (_DWORD*)(*(_QWORD*)a1 + 2168i64);
	if (*(_QWORD*)(a1 + 1480))
		--* (_DWORD*)(*(_QWORD*)a1 + 2172i64);
	--* (_DWORD*)(*(_QWORD*)a1 + 2160i64);
	v40 = *(_QWORD*)(a1 + 24);
	if (v40)
	{
		if (*(_QWORD*)(v40 + 32))
		{
			for (k = *(_QWORD*)(v40 + 48); k; k = *(_QWORD*)(k + 24))
			{
				v42 = *(_QWORD*)(k + 8);
				v24 = (*(_DWORD*)(v42 + 1056))-- == 1;
				if (v24)
				{
					sub_140367760(*(_QWORD**)(v42 + 16), v42);
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v42 + 48) + 24i64))(*(_QWORD*)(v42 + 48));
				}
			}
		}
		*(_QWORD*)(v40 + 32) = 0i64;
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 8i64))(*(_QWORD*)(a1 + 24));
	}
	v43 = *(_QWORD**)(a1 + 1480);
	if (v43)
		*v43 = *(_QWORD*)(a1 + 1488);
	v44 = *(_QWORD*)(a1 + 1488);
	if (v44)
		*(_QWORD*)(v44 + 1480) = *(_QWORD*)(a1 + 1480);
	*(_QWORD*)(a1 + 1480) = 0i64;
	*(_QWORD*)(a1 + 1488) = 0i64;
	v45 = *(_QWORD**)(a1 + 1464);
	if (v45)
		*v45 = *(_QWORD*)(a1 + 1472);
	v46 = *(_QWORD*)(a1 + 1472);
	if (v46)
		*(_QWORD*)(v46 + 1464) = *(_QWORD*)(a1 + 1464);
	*(_QWORD*)(a1 + 1464) = 0i64;
	*(_QWORD*)(a1 + 1472) = 0i64;
	v47 = *(_QWORD**)(a1 + 1448);
	if (v47)
		*v47 = *(_QWORD*)(a1 + 1456);
	v48 = *(_QWORD*)(a1 + 1456);
	if (v48)
		*(_QWORD*)(v48 + 1448) = *(_QWORD*)(a1 + 1448);
	*(_QWORD*)(a1 + 1448) = 0i64;
	*(_QWORD*)(a1 + 1456) = 0i64;
	v49 = *(_QWORD**)(a1 + 1432);
	if (v49)
		*v49 = *(_QWORD*)(a1 + 1440);
	v50 = *(_QWORD*)(a1 + 1440);
	if (v50)
		*(_QWORD*)(v50 + 1432) = *(_QWORD*)(a1 + 1432);
	*(_QWORD*)(a1 + 1432) = 0i64;
	*(_QWORD*)(a1 + 1440) = 0i64;
	v51 = *(_QWORD**)(a1 + 1416);
	if (v51)
		*v51 = *(_QWORD*)(a1 + 1424);
	v52 = *(_QWORD*)(a1 + 1424);
	if (v52)
		*(_QWORD*)(v52 + 1416) = *(_QWORD*)(a1 + 1416);
	*(_QWORD*)(a1 + 1416) = 0i64;
	*(_QWORD*)(a1 + 1424) = 0i64;
	v53 = *(_QWORD**)(a1 + 1400);
	if (v53)
		*v53 = *(_QWORD*)(a1 + 1408);
	v54 = *(_QWORD*)(a1 + 1408);
	if (v54)
		*(_QWORD*)(v54 + 1400) = *(_QWORD*)(a1 + 1400);
	*(_QWORD*)(a1 + 1400) = 0i64;
	*(_QWORD*)(a1 + 1408) = 0i64;
	if (*(_QWORD*)(a1 + 1392))
		sub_1401A4A00((const void***)(a1 + 1392));
	v55 = *(_QWORD*)(a1 + 1376);
	if (v55)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v55 - 16) + 8i64))(v55 - 16);
	v56 = *(_QWORD*)(a1 + 1360);
	if (v56)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v56 - 16) + 8i64))(v56 - 16);
	v57 = a1 + 440;
	sub_140195D70(v57);
	*(_DWORD*)v57 = 0;
	v58 = *(_QWORD**)(v57 + 16);
	if (v58)
		*v58 = *(_QWORD*)(v57 + 24);
	v59 = *(_QWORD**)(v57 + 24);
	if (v59)
		*v59 = *(_QWORD*)(v57 + 16);
	*(_QWORD*)(v57 + 24) = 0i64;
	*(_QWORD*)(v57 + 16) = 0i64;
}

