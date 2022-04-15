#include "../winhttp.h"

//----- (0000000140654B50) ----------------------------------------------------
__int64 __fastcall sub_140654B50(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rdi
	int* v4; // rax
	__int64 v5; // rax
	int v6; // eax
	__int64 v7; // rcx

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2
		&& (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0
		&& (v4 = (int*)sub_1406622C0(a1, 2)) != 0i64
		&& (v5 = sub_1403D90D0(qword_140C65898, *v4)) != 0)
	{
		v6 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)qword_140C65A10 + 32i64))(
			qword_140C65A10,
			*(unsigned int*)(v3 + 8),
			*(unsigned int*)(v5 + 8),
			1i64);
		v7 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v7 + 8) = 3;
		*(double*)v7 = (double)v6;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A10: using guessed type __int64 qword_140C65A10;

