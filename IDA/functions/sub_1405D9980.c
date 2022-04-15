#include "../winhttp.h"

//----- (00000001405D9980) ----------------------------------------------------
int __fastcall sub_1405D9980(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rdx

	v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
	v3 = v2;
	if (v2)
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
		LODWORD(v2) = sub_14046ACC0(v3, v4, *(_DWORD*)(*(_QWORD*)(a1 + 80) + 108i64));
	}
	return v2;
}
// 1405D99B9: variable 'v4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

