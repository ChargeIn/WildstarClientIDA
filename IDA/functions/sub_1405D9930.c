#include "../winhttp.h"

//----- (00000001405D9930) ----------------------------------------------------
void __fastcall sub_1405D9930(__int64 a1)
{
	__int64 v2; // rdi

	v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
	if (v2)
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
		sub_14046B7F0(v2, *(_QWORD*)(a1 + 336), a1);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

