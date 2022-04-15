#include "../winhttp.h"

//----- (000000014043E900) ----------------------------------------------------
void __fastcall sub_14043E900(int a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax

	v3 = sub_1403D90D0(qword_140C65898, a1);
	v4 = v3;
	if (v3 && *(_QWORD*)(v3 + 5880) != a2)
	{
		*(_QWORD*)(v3 + 5880) = a2;
		if (a2)
			v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 336i64))(a2);
		else
			v5 = 0i64;
		sub_140467F50(v4, v5);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

