#include "../winhttp.h"

//----- (00000001405CCB20) ----------------------------------------------------
void __fastcall sub_1405CCB20(unsigned __int64 a1, __int64 a2, double a3, double a4)
{
	unsigned __int64 v4; // rbx
	unsigned __int64 i; // rdi
	__int64 v6; // rax
	int v7; // ecx
	__int64 v8; // rdi
	__int64 v9; // rsi
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rdi
	_QWORD* v13; // rdi
	_QWORD* v14; // rcx
	__int64 v15; // rcx
	unsigned __int64 j; // rsi
	int v17; // edi
	unsigned __int64 v18; // rdx
	_DWORD* v19; // rax
	_QWORD* v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rbx
	__int64 v23; // rcx

	v4 = a1;
	for (i = 0i64; i < *(_QWORD*)(v4 + 624); ++i)
	{
		v6 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(*(_QWORD*)(v4 + 616) + 4 * i));
		if (v6)
		{
			v7 = *(_DWORD*)(v6 + 4920);
			if (v7)
				*(_DWORD*)(v6 + 4920) = v7 - 1;
			a1 = *(_QWORD*)(v6 + 5864);
			if (a1)
				(*(void(__fastcall**)(unsigned __int64, bool))(*(_QWORD*)a1 + 392i64))(a1, *(_DWORD*)(v6 + 4920) != 0);
		}
	}
	*(_QWORD*)(v4 + 624) = 0i64;
	*(_DWORD*)(v4 + 124) = 0;
	while (*(_QWORD*)(v4 + 560))
	{
		v8 = *(_QWORD*)(v4 + 560);
		if (v8)
		{
			sub_1405CAE70(*(_QWORD*)(v4 + 560), a2, a3, a4);
			sub_14018B900(v8, 0);
		}
	}
	while (*(_QWORD*)(v4 + 632))
	{
		v9 = *(_QWORD*)(v4 + 632);
		if (v9)
		{
			sub_1400B6120(*(_QWORD*)v9 + 640i64, v9 + 8);
			sub_140578050((__int64*)qword_140C65B78, *(_DWORD*)(v9 + 8), 0);
			v10 = *(_QWORD**)(v9 + 16);
			if (v10)
				*v10 = *(_QWORD*)(v9 + 24);
			v11 = *(_QWORD*)(v9 + 24);
			if (v11)
				*(_QWORD*)(v11 + 16) = *(_QWORD*)(v9 + 16);
			*(_QWORD*)(v9 + 16) = 0i64;
			*(_QWORD*)(v9 + 24) = 0i64;
			sub_14018B900(v9, 0);
		}
	}
	while (*(_QWORD*)(v4 + 680))
	{
		v12 = *(_QWORD*)(v4 + 680);
		if (v12)
		{
			sub_1405CB900(*(_QWORD*)(v4 + 680));
			sub_14018B900(v12, 0);
		}
	}
	while (*(_QWORD*)(v4 + 776))
	{
		v13 = *(_QWORD**)(v4 + 776);
		if (v13)
		{
			v14 = (_QWORD*)v13[2];
			if (v14)
				*v14 = v13[3];
			v15 = v13[3];
			if (v15)
				*(_QWORD*)(v15 + 16) = v13[2];
			v13[2] = 0i64;
			v13[3] = 0i64;
			if (*v13)
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v13 + 8i64))(*v13);
			sub_14018B900((__int64)v13, 0);
		}
	}
	*(_QWORD*)(v4 + 784) = 0i64;
	for (j = 0i64; j < *(_QWORD*)(v4 + 104); ++j)
	{
		v17 = *(_DWORD*)(*(_QWORD*)(v4 + 96) + 4 * j);
		if (v17)
			sub_1403EB690(a1, v17, 0, 0);
		a1 = *(_QWORD*)(v4 + 104);
		v18 = 0i64;
		if (a1)
		{
			v19 = *(_DWORD**)(v4 + 96);
			while (*v19 != v17)
			{
				++v18;
				++v19;
				if (v18 >= a1)
					goto LABEL_43;
			}
			sub_1401C2F20(v4 + 96, v18);
		}
	LABEL_43:
		;
	}
	*(_QWORD*)(v4 + 104) = 0i64;
	v20 = *(_QWORD**)(v4 + 112);
	*(_DWORD*)(v4 + 52) = 0;
	*(_QWORD*)(v4 + 80) = 0i64;
	*(_DWORD*)(v4 + 88) = 0;
	if (v20)
	{
		sub_140712A40(v20, 0, 0i64, 0i64);
		v21 = *(_QWORD*)(v4 + 112);
		if (v21)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
			*(_QWORD*)(v4 + 112) = 0i64;
		}
	}
	v22 = qword_140C65898;
	if (qword_140C65898)
	{
		*(_DWORD*)(qword_140C65898 + 29848) = 0;
		v23 = *(_QWORD*)(v22 + 29832);
		if (v23)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
			*(_QWORD*)(v22 + 29832) = 0i64;
		}
	}
}
// 1405CCBCF: variable 'a2' is possibly undefined
// 1405CCD23: variable 'a1' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B78: using guessed type __int64 qword_140C65B78;

