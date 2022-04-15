#include "../winhttp.h"

//----- (0000000140584240) ----------------------------------------------------
__int64 __fastcall sub_140584240(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rax
	__int64 v4; // r8
	int* v5; // rdx

	v3 = sub_1403D90D0(qword_140C65898, *a2);
	if (v3)
	{
		v4 = *((unsigned __int8*)a2 + 4);
		v5 = (int*)*((_QWORD*)a2 + 1);
		*(_QWORD*)(v3 + 168) = 0i64;
		if (v4 && v5)
			sub_1403705B0((__int64*)(v3 + 160), v5, v4);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "UnitMemberOfGuildChange", byte_1409EDCA4, *a2);
	}
	return 0i64;
}
// 1409EDCA4: using guessed type _BYTE byte_1409EDCA4[4];
// 140C65898: using guessed type __int64 qword_140C65898;

