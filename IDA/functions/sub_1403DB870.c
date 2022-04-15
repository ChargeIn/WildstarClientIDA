#include "../winhttp.h"

//----- (00000001403DB870) ----------------------------------------------------
__int64 __fastcall sub_1403DB870(__int64 a1, int* a2, double a3, double a4)
{
	__int64 v6; // rax
	__int64 v7; // rdi
	__int64 v8; // rax
	_QWORD* v9; // rcx

	v6 = sub_1403D90D0(a1, *a2);
	v7 = v6;
	if (v6)
	{
		if (v6 == *(_QWORD*)(a1 + 120) && !a2[1])
		{
			v8 = *(_QWORD*)(a1 + 29088);
			*(_DWORD*)(a1 + 7040) = 0;
			*(_DWORD*)(v8 + 84) = 0;
		}
		sub_14045E740(v7, a2[1], a3, a4);
		if (*(_DWORD*)(v7 + 3408))
		{
			if (a2[1])
				return 0i64;
			if (a2[3])
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C65898 + 25744) + 80i64))(*(_QWORD*)(qword_140C65898 + 25744));
		}
		if (!a2[1])
		{
			v9 = *(_QWORD**)(qword_140C65898 + 27728);
			if (v9)
				sub_1406015C0(v9, v7);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

