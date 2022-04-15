#include "../winhttp.h"

//----- (0000000140649DA0) ----------------------------------------------------
__int64 __fastcall sub_140649DA0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2 || !sub_1403D90D0(qword_140C65898, *v2))
		return 0i64;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v3 = *(_QWORD*)(a1 + 16);
	v4 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

