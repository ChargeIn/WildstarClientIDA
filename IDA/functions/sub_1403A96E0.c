#include "../winhttp.h"

//----- (00000001403A96E0) ----------------------------------------------------
__int64 __fastcall sub_1403A96E0(__int64 a1)
{
	__int64 v1; // rbx

	v1 = a1 + 32360;
	if (*(_QWORD*)(a1 + 32376))
	{
		sub_14001A270(a1 + 32360, *(_QWORD**)(*(_QWORD*)(a1 + 32368) + 8i64));
		*(_QWORD*)(*(_QWORD*)(v1 + 8) + 16i64) = *(_QWORD*)(v1 + 8);
		*(_QWORD*)(*(_QWORD*)(v1 + 8) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24i64) = *(_QWORD*)(v1 + 8);
		*(_QWORD*)(v1 + 16) = 0i64;
	}
	sub_140008410(a1 + 32424);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PetFlairCleared", byte_1409D1037);
	return 0i64;
}
// 1409D1037: using guessed type _BYTE byte_1409D1037[48];
// 140C65898: using guessed type __int64 qword_140C65898;

