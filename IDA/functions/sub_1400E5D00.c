#include "../winhttp.h"

//----- (00000001400E5D00) ----------------------------------------------------
__int64 __fastcall sub_1400E5D00(__int64 a1)
{
	__int64 v2; // rdx
	_QWORD* v3; // rax
	_QWORD* v4; // rbx
	__int64 v5; // rbp
	__int64 v6; // rsi
	int v7; // r8d
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v14; // rbx
	__int64 v15; // rcx
	__int64 v16; // rbp
	_QWORD* v17; // rax
	_QWORD* v18; // rbx
	__int64 v19; // rbp
	_QWORD* v20; // rcx
	_QWORD* v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rax
	_QWORD* k; // rax
	__int64 m; // rax
	__int64 v27; // rbx
	__int64 v28; // rcx
	__int64 v29; // rbp
	_QWORD* v30; // rax
	_QWORD* v31; // rbx
	__int64 v32; // rcx
	_QWORD** v33; // rax
	_QWORD* v34; // rbx
	__int64 v35; // rcx
	_QWORD* v36; // rax
	_QWORD* v37; // rbx
	__int64 v38; // rcx
	__int64 v39; // rsi
	_QWORD** v40; // rax
	_QWORD* v41; // rbx
	__int64 v42; // rcx
	__int64 v43; // rcx
	__int64 v44; // rcx
	__int64 v45; // rsi
	__int64 v46; // rbx
	__int64 v47; // rcx
	__int64 v48; // rcx
	__int64 v49; // rcx
	__int64 v50; // rcx
	__int64 v51; // rcx
	__int64 v52; // rbx
	__int64* v53; // rax
	__int64 v54; // rdx
	__int64 v55; // rbx
	__int64 v56; // rcx
	__int64 v57; // rbp
	__int64 result; // rax
	__int64 v59; // rcx

	sub_140132FC0(a1);
	v3 = *(_QWORD**)(a1 + 3296);
	v4 = (_QWORD*)v3[2];
	v5 = 0i64;
	if (v4 != v3)
	{
		do
		{
			if (v5 != v4[4])
			{
				v5 = v4[4];
				sub_1400035B0();
			}
			v6 = v4[5];
			if (v6)
			{
				v7 = *(_DWORD*)(v6 + 112);
				if (v7 != -2)
					sub_1400579E0(*(_QWORD*)(a1 + 400), v2, v7);
				if (*(_QWORD*)(v6 + 104))
					sub_1400035B0();
				v8 = *(_QWORD*)(v6 + 80);
				if (v8)
					sub_14018B900(v8, 0);
				v9 = *(_QWORD*)(v6 + 48);
				if (v9)
					sub_14018B900(v9, 0);
				v10 = *(_QWORD*)(v6 + 16);
				if (v10)
					sub_14018B900(v10, 0);
				sub_14018B900(v6, 0);
			}
			v11 = v4[3];
			if (v11)
			{
				v4 = (_QWORD*)v4[3];
				for (i = *(_QWORD**)(v11 + 16); i; i = (_QWORD*)i[2])
					v4 = i;
			}
			else
			{
				for (j = v4[1]; v4 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v4 = (_QWORD*)j;
				if (v4[3] != j)
					v4 = (_QWORD*)j;
			}
		} while (v4 != *(_QWORD**)(a1 + 3296));
	}
	sub_140008410(a1 + 3288);
	if (*(_QWORD*)(a1 + 3272))
	{
		v14 = *(_QWORD*)(*(_QWORD*)(a1 + 3264) + 8i64);
		if (v14)
		{
			do
			{
				sub_140044CA0(a1 + 3256, *(_QWORD**)(v14 + 24));
				v15 = *(_QWORD*)(v14 + 40);
				v16 = *(_QWORD*)(v14 + 16);
				if (v15)
					sub_14018B900(v15, 0);
				sub_14018B900(v14, 0);
				v14 = v16;
			} while (v16);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 3264) + 16i64) = *(_QWORD*)(a1 + 3264);
		*(_QWORD*)(*(_QWORD*)(a1 + 3264) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 3264) + 24i64) = *(_QWORD*)(a1 + 3264);
		*(_QWORD*)(a1 + 3272) = 0i64;
	}
	v17 = *(_QWORD**)(a1 + 216);
	v18 = (_QWORD*)v17[2];
	if (v18 != v17)
	{
		do
		{
			v19 = v18[8];
			if (v19)
			{
				sub_140195D70(v19 + 80);
				sub_140195D70(v19 + 80);
				*(_DWORD*)(v19 + 80) = 0;
				v20 = *(_QWORD**)(v19 + 96);
				if (v20)
					*v20 = *(_QWORD*)(v19 + 104);
				v21 = *(_QWORD**)(v19 + 104);
				if (v21)
					*v21 = *(_QWORD*)(v19 + 96);
				*(_QWORD*)(v19 + 96) = 0i64;
				*(_QWORD*)(v19 + 104) = 0i64;
				v22 = *(_QWORD*)(v19 + 48);
				if (v22)
					sub_14018B900(v22, 0);
				v23 = *(_QWORD*)(v19 + 16);
				if (v23)
					sub_14018B900(v23, 0);
				sub_14018B900(v19, 0);
			}
			v24 = v18[3];
			if (v24)
			{
				v18 = (_QWORD*)v18[3];
				for (k = *(_QWORD**)(v24 + 16); k; k = (_QWORD*)k[2])
					v18 = k;
			}
			else
			{
				for (m = v18[1]; v18 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v18 = (_QWORD*)m;
				if (v18[3] != m)
					v18 = (_QWORD*)m;
			}
		} while (v18 != *(_QWORD**)(a1 + 216));
	}
	if (*(_QWORD*)(a1 + 224))
	{
		v27 = *(_QWORD*)(*(_QWORD*)(a1 + 216) + 8i64);
		if (v27)
		{
			do
			{
				sub_140044CA0(a1 + 208, *(_QWORD**)(v27 + 24));
				v28 = *(_QWORD*)(v27 + 40);
				v29 = *(_QWORD*)(v27 + 16);
				if (v28)
					sub_14018B900(v28, 0);
				sub_14018B900(v27, 0);
				v27 = v29;
			} while (v29);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 216) + 16i64) = *(_QWORD*)(a1 + 216);
		*(_QWORD*)(*(_QWORD*)(a1 + 216) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 216) + 24i64) = *(_QWORD*)(a1 + 216);
		*(_QWORD*)(a1 + 224) = 0i64;
	}
	v30 = *(_QWORD**)(a1 + 120);
	v31 = (_QWORD*)*v30;
	if ((_QWORD*)*v30 != v30)
	{
		do
		{
			v32 = v31[2];
			if (v32)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
			v31 = (_QWORD*)*v31;
		} while (v31 != *(_QWORD**)(a1 + 120));
	}
	v33 = *(_QWORD***)(a1 + 120);
	v34 = *v33;
	if (*v33 != v33)
	{
		do
		{
			v35 = (__int64)v34;
			v34 = (_QWORD*)*v34;
			sub_14018B900(v35, 0);
		} while (v34 != *(_QWORD**)(a1 + 120));
	}
	**(_QWORD**)(a1 + 120) = *(_QWORD*)(a1 + 120);
	*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8i64) = *(_QWORD*)(a1 + 120);
	v36 = *(_QWORD**)(a1 + 136);
	v37 = (_QWORD*)*v36;
	if ((_QWORD*)*v36 != v36)
	{
		do
		{
			v38 = v37[2];
			v39 = v37[3];
			if (v38)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v38 + 8i64))(v38);
			if (v39)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v39 + 8i64))(v39);
			v37 = (_QWORD*)*v37;
		} while (v37 != *(_QWORD**)(a1 + 136));
	}
	v40 = *(_QWORD***)(a1 + 136);
	v41 = *v40;
	if (*v40 != v40)
	{
		do
		{
			v42 = (__int64)v41;
			v41 = (_QWORD*)*v41;
			sub_14018B900(v42, 0);
		} while (v41 != *(_QWORD**)(a1 + 136));
	}
	**(_QWORD**)(a1 + 136) = *(_QWORD*)(a1 + 136);
	*(_QWORD*)(*(_QWORD*)(a1 + 136) + 8i64) = *(_QWORD*)(a1 + 136);
	v43 = *(_QWORD*)(a1 + 2880);
	if (v43)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v43 + 416i64))(v43);
		sub_1400D4070(*(_QWORD*)(a1 + 2880), 0x10u, *(char**)(a1 + 2880), byte_1409D0333);
		v44 = *(_QWORD*)(a1 + 2880);
		if (v44)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v44 + 8i64))(v44);
			*(_QWORD*)(a1 + 2880) = 0i64;
		}
	}
	sub_1400E5C20((_QWORD*)a1);
	if (*(_QWORD*)(a1 + 3344))
	{
		v45 = *(_QWORD*)(*(_QWORD*)(a1 + 3336) + 8i64);
		if (v45)
		{
			do
			{
				sub_1400083B0(a1 + 3328, *(_QWORD*)(v45 + 24));
				v46 = *(_QWORD*)(v45 + 16);
				sub_14018B900(v45, 0);
				v45 = v46;
			} while (v46);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 3336) + 16i64) = *(_QWORD*)(a1 + 3336);
		*(_QWORD*)(*(_QWORD*)(a1 + 3336) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 3336) + 24i64) = *(_QWORD*)(a1 + 3336);
		*(_QWORD*)(a1 + 3344) = 0i64;
	}
	sub_1401518A0(a1 + 2584);
	sub_140137F70((_QWORD*)(a1 + 2496));
	v47 = *(_QWORD*)(a1 + 2888);
	if (v47)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v47 + 8i64))(v47);
		*(_QWORD*)(a1 + 2888) = 0i64;
	}
	v48 = *(_QWORD*)(a1 + 2912);
	if (v48)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v48 + 8i64))(v48);
		*(_QWORD*)(a1 + 2912) = 0i64;
	}
	v49 = *(_QWORD*)(a1 + 2848);
	if (v49)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v49 + 8i64))(v49);
		*(_QWORD*)(a1 + 2848) = 0i64;
	}
	v50 = *(_QWORD*)(a1 + 2896);
	if (v50)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v50 + 8i64))(v50);
		*(_QWORD*)(a1 + 2896) = 0i64;
	}
	v51 = *(_QWORD*)(a1 + 400);
	if (v51)
	{
		sub_140058F00(v51, 0, 0, *(_QWORD*)(v51 + 32), 2);
		if (*(_BYTE*)(a1 + 393))
		{
			v52 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 400) + 32i64) + 176i64);
			sub_140060CB0(v52, *(_QWORD*)(v52 + 64));
			sub_14005CB90(v52, 1);
			*(_QWORD*)(v52 + 176) = 0i64;
			do
			{
				v53 = *(__int64**)(v52 + 80);
				*(_QWORD*)(v52 + 40) = v53;
				v54 = *v53;
				*(_DWORD*)(v52 + 96) = 0;
				*(_QWORD*)(v52 + 16) = v54;
				*(_QWORD*)(v52 + 24) = v54;
			} while ((unsigned int)sub_1400610A0(v52, (void(__fastcall*)(__int64, __int64))sub_140059A50, 0i64));
			sub_1400596D0(v52);
		}
		*(_BYTE*)(a1 + 393) = 0;
		*(_QWORD*)(a1 + 400) = 0i64;
		*(_QWORD*)(a1 + 408) = 0i64;
		*(_QWORD*)(a1 + 416) = 0i64;
	}
	sub_1400ED790(a1);
	if (*(_QWORD*)(a1 + 3608))
	{
		v55 = *(_QWORD*)(*(_QWORD*)(a1 + 3600) + 8i64);
		if (v55)
		{
			do
			{
				sub_140044CA0(a1 + 3592, *(_QWORD**)(v55 + 24));
				v56 = *(_QWORD*)(v55 + 40);
				v57 = *(_QWORD*)(v55 + 16);
				if (v56)
					sub_14018B900(v56, 0);
				sub_14018B900(v55, 0);
				v55 = v57;
			} while (v57);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 3600) + 16i64) = *(_QWORD*)(a1 + 3600);
		*(_QWORD*)(*(_QWORD*)(a1 + 3600) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 3600) + 24i64) = *(_QWORD*)(a1 + 3600);
		*(_QWORD*)(a1 + 3608) = 0i64;
	}
	sub_140108C90((_QWORD*)(a1 + 240));
	sub_14010DB00(*(_QWORD**)(a1 + 368));
	result = sub_140154390(*(_QWORD*)(a1 + 360));
	v59 = *(_QWORD*)(a1 + 2488);
	if (v59)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v59 + 8i64))(v59);
		*(_QWORD*)(a1 + 2488) = 0i64;
	}
	return result;
}
// 1400E5D78: variable 'v2' is possibly undefined
// 1409D0333: using guessed type _BYTE byte_1409D0333[5];

