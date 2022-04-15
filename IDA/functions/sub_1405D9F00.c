#include "../winhttp.h"

//----- (00000001405D9F00) ----------------------------------------------------
__int64 __fastcall sub_1405D9F00(__int64 a1, char a2)
{
	int v3; // edx
	__int64 v5; // rax
	__int64 v6; // rcx

	v3 = *(_DWORD*)(a1 + 88);
	*(_QWORD*)a1 = off_140B6DFB0;
	v5 = sub_1403D90D0(qword_140C65898, v3);
	if (v5)
		sub_14045B030(v5, *(int**)(a1 + 336));
	v6 = *(_QWORD*)(a1 + 336);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	sub_1405D6680(a1);
	if ((a2 & 1) != 0)
		sub_14018B900(a1, 0);
	return a1;
}
// 140B6DFB0: using guessed type __int64 (__fastcall *off_140B6DFB0[61])();
// 140C65898: using guessed type __int64 qword_140C65898;

