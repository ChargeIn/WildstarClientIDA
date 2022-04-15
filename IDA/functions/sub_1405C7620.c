#include "../winhttp.h"

//----- (00000001405C7620) ----------------------------------------------------
__int64 __fastcall sub_1405C7620(__int64* a1, __int64 a2)
{
	__int64 v3; // rcx
	_QWORD* v5; // r8
	__int64 v6; // rdx
	__int64 v7; // rcx
	_QWORD* v8; // rdx
	__int64 v9; // rdx
	__int64 v10; // rcx
	_QWORD* v11; // rdx
	__int64 v12; // rdx
	__int64 v13; // rcx
	_QWORD* v14; // rdx
	__int64 v15; // rdx
	__int64 v16; // rcx
	_QWORD* v17; // rdx
	__int64 v18; // rdx
	__int64 v19; // rax
	int* v21; // rax
	int* v22; // rcx
	__int64 v23; // r8
	int** v24; // r8
	__int64 v25; // rax
	int* v26; // rax
	int* v27; // rcx
	__int64 v28; // r8
	int** v29; // r8
	__int64 v30; // rax
	int* v31; // rax
	int* v32; // rcx
	__int64 v33; // r8
	int** v34; // r8
	__int64 v35; // rax

	v3 = a1[43];
	if (v3)
	{
		v5 = *(_QWORD**)(v3 + 32);
		if (v5)
			*v5 = *(_QWORD*)(v3 + 40);
		v6 = *(_QWORD*)(v3 + 40);
		if (v6)
			*(_QWORD*)(v6 + 32) = *(_QWORD*)(v3 + 32);
		*(_QWORD*)(v3 + 32) = 0i64;
		*(_QWORD*)(v3 + 40) = 0i64;
		sub_14018B900(v3, 0);
	}
	v7 = a1[44];
	a1[43] = 0i64;
	if (v7)
	{
		v8 = *(_QWORD**)(v7 + 32);
		if (v8)
			*v8 = *(_QWORD*)(v7 + 40);
		v9 = *(_QWORD*)(v7 + 40);
		if (v9)
			*(_QWORD*)(v9 + 32) = *(_QWORD*)(v7 + 32);
		*(_QWORD*)(v7 + 32) = 0i64;
		*(_QWORD*)(v7 + 40) = 0i64;
		sub_14018B900(v7, 0);
	}
	v10 = a1[45];
	a1[44] = 0i64;
	if (v10)
	{
		v11 = *(_QWORD**)(v10 + 32);
		if (v11)
			*v11 = *(_QWORD*)(v10 + 40);
		v12 = *(_QWORD*)(v10 + 40);
		if (v12)
			*(_QWORD*)(v12 + 32) = *(_QWORD*)(v10 + 32);
		*(_QWORD*)(v10 + 32) = 0i64;
		*(_QWORD*)(v10 + 40) = 0i64;
		sub_14018B900(v10, 0);
	}
	v13 = a1[46];
	a1[45] = 0i64;
	if (v13)
	{
		v14 = *(_QWORD**)(v13 + 32);
		if (v14)
			*v14 = *(_QWORD*)(v13 + 40);
		v15 = *(_QWORD*)(v13 + 40);
		if (v15)
			*(_QWORD*)(v15 + 32) = *(_QWORD*)(v13 + 32);
		*(_QWORD*)(v13 + 32) = 0i64;
		*(_QWORD*)(v13 + 40) = 0i64;
		sub_14018B900(v13, 0);
	}
	v16 = a1[47];
	a1[46] = 0i64;
	if (v16)
	{
		v17 = *(_QWORD**)(v16 + 32);
		if (v17)
			*v17 = *(_QWORD*)(v16 + 40);
		v18 = *(_QWORD*)(v16 + 40);
		if (v18)
			*(_QWORD*)(v18 + 32) = *(_QWORD*)(v16 + 32);
		*(_QWORD*)(v16 + 32) = 0i64;
		*(_QWORD*)(v16 + 40) = 0i64;
		sub_14018B900(v16, 0);
	}
	v19 = *a1;
	a1[47] = 0i64;
	(*(void(__fastcall**)(__int64*, __int64, __int64*))(v19 + 144))(a1, a2, a1 + 2);
	if (a2)
	{
		*((_DWORD*)a1 + 69) = **(_DWORD**)(a2 + 112);
		*((_DWORD*)a1 + 70) = *(_DWORD*)(*(_QWORD*)(a2 + 112) + 4i64);
		v21 = sub_14018B280(64i64, 0);
		v22 = v21;
		if (v21)
		{
			*((_QWORD*)v21 + 1) = 0i64;
			*((_QWORD*)v21 + 2) = 0i64;
			*((_QWORD*)v21 + 4) = 0i64;
			*((_QWORD*)v21 + 5) = 0i64;
			*v21 = 0;
			*((_QWORD*)v21 + 1) = a1;
			*((_QWORD*)v21 + 2) = sub_1405CAC9C;
			*((_QWORD*)v21 + 3) = 0i64;
			*((_QWORD*)v21 + 6) = 0i64;
			*((_QWORD*)v21 + 7) = 0i64;
		}
		else
		{
			v22 = 0i64;
		}
		v23 = qword_140C65898;
		a1[43] = (__int64)v22;
		v24 = (int**)(v23 + 27848);
		if (!*((_QWORD*)v22 + 4))
		{
			*((_QWORD*)v22 + 4) = v24;
			*((_QWORD*)v22 + 5) = *v24;
			*v24 = v22;
			v25 = *((_QWORD*)v22 + 5);
			if (v25)
				*(_QWORD*)(v25 + 32) = v22 + 10;
		}
		v26 = sub_14018B280(64i64, 0);
		v27 = v26;
		if (v26)
		{
			*((_QWORD*)v26 + 1) = 0i64;
			*((_QWORD*)v26 + 2) = 0i64;
			*((_QWORD*)v26 + 4) = 0i64;
			*((_QWORD*)v26 + 5) = 0i64;
			*v26 = 0;
			*((_QWORD*)v26 + 1) = a1;
			*((_QWORD*)v26 + 2) = sub_1405CAC94;
			*((_QWORD*)v26 + 3) = 0i64;
			*((_QWORD*)v26 + 6) = 0i64;
			*((_QWORD*)v26 + 7) = 0i64;
		}
		else
		{
			v27 = 0i64;
		}
		v28 = qword_140C65898;
		a1[44] = (__int64)v27;
		v29 = (int**)(v28 + 27856);
		if (!*((_QWORD*)v27 + 4))
		{
			*((_QWORD*)v27 + 4) = v29;
			*((_QWORD*)v27 + 5) = *v29;
			*v29 = v27;
			v30 = *((_QWORD*)v27 + 5);
			if (v30)
				*(_QWORD*)(v30 + 32) = v27 + 10;
		}
		v31 = sub_14018B280(64i64, 0);
		v32 = v31;
		if (v31)
		{
			*((_QWORD*)v31 + 1) = 0i64;
			*((_QWORD*)v31 + 2) = 0i64;
			*((_QWORD*)v31 + 4) = 0i64;
			*((_QWORD*)v31 + 5) = 0i64;
			*v31 = 0;
			*((_QWORD*)v31 + 1) = a1;
			*((_QWORD*)v31 + 2) = sub_1405CACA4;
			*((_QWORD*)v31 + 3) = 0i64;
			*((_QWORD*)v31 + 6) = 0i64;
			*((_QWORD*)v31 + 7) = 0i64;
		}
		else
		{
			v32 = 0i64;
		}
		v33 = qword_140C65898;
		a1[45] = (__int64)v32;
		v34 = (int**)(v33 + 27864);
		if (!*((_QWORD*)v32 + 4))
		{
			*((_QWORD*)v32 + 4) = v34;
			*((_QWORD*)v32 + 5) = *v34;
			*v34 = v32;
			v35 = *((_QWORD*)v32 + 5);
			if (v35)
				*(_QWORD*)(v35 + 32) = v32 + 10;
		}
		return 0i64;
	}
	else
	{
		*(__int64*)((char*)a1 + 276) = 0i64;
		return 2147500037i64;
	}
}
// 1405CAC9C: using guessed type __int64 __fastcall sub_1405CAC9C();
// 1405CACA4: using guessed type __int64 __fastcall sub_1405CACA4();
// 140C65898: using guessed type __int64 qword_140C65898;

