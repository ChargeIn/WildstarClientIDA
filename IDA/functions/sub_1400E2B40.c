#include "../winhttp.h"

//----- (00000001400E2B40) ----------------------------------------------------
int __fastcall sub_1400E2B40(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx

	LODWORD(v2) = sub_1401981B0((__int64**)(a1 + 1992));
	v3 = a1 + 1960;
	if (*(_QWORD*)(v3 + 16))
	{
		sub_140044CA0(v3, *(_QWORD**)(*(_QWORD*)(v3 + 8) + 8i64));
		*(_QWORD*)(*(_QWORD*)(v3 + 8) + 16i64) = *(_QWORD*)(v3 + 8);
		*(_QWORD*)(*(_QWORD*)(v3 + 8) + 8i64) = 0i64;
		v2 = *(_QWORD*)(v3 + 8);
		*(_QWORD*)(v2 + 24) = v2;
		*(_QWORD*)(v3 + 16) = 0i64;
	}
	return v2;
}

