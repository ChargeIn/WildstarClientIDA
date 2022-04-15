#include "../winhttp.h"

//----- (00000001405432C0) ----------------------------------------------------
void __fastcall sub_1405432C0(__int64 a1)
{
	_QWORD* i; // rbx
	_QWORD* j; // rbx
	_QWORD* k; // rbx
	__int64 m; // rdi
	__int64 v6; // rcx
	float v7; // xmm6_4
	__int64 v8; // rcx
	__int64 v9; // rcx
	_QWORD* n; // rbx
	__int64 ii; // rbx

	for (i = *(_QWORD**)(a1 + 536); i; i = (_QWORD*)i[2])
	{
		if ((unsigned int)(*(_DWORD*)((*(__int64(__fastcall**)(_QWORD*))(*i + 16i64))(i) + 48) - 5) <= 1)
			(*(void(__fastcall**)(_QWORD*))(*i + 88i64))(i);
	}
	for (j = *(_QWORD**)(a1 + 552); j; j = (_QWORD*)j[2])
	{
		if ((unsigned int)(*(_DWORD*)((*(__int64(__fastcall**)(_QWORD*))(*j + 16i64))(j) + 48) - 5) <= 1)
			(*(void(__fastcall**)(_QWORD*))(*j + 88i64))(j);
	}
	for (k = *(_QWORD**)(a1 + 560); k; k = (_QWORD*)k[2])
	{
		if ((unsigned int)(*(_DWORD*)((*(__int64(__fastcall**)(_QWORD*))(*k + 16i64))(k) + 48) - 5) <= 1)
			(*(void(__fastcall**)(_QWORD*))(*k + 88i64))(k);
	}
	for (m = *(_QWORD*)(a1 + 456); m; m = *(_QWORD*)(m + 8))
	{
		v6 = *(_QWORD*)(m + 112);
		v7 = *(float*)(a1 + 420);
		*(float*)(m + 668) = v7;
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 152i64))(v6);
		v8 = *(_QWORD*)(m + 120);
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 152i64))(v8);
		v9 = *(_QWORD*)(m + 128);
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 152i64))(v9);
		for (n = *(_QWORD**)(m + 136); n; n = (_QWORD*)n[3])
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*n + 152i64))(*n);
		for (ii = *(_QWORD*)(m + 1472); ii; ii = *(_QWORD*)(ii + 40))
			sub_140625A10(ii, v7);
	}
}

