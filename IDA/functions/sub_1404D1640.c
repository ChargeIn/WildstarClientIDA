#include "../winhttp.h"

//----- (00000001404D1640) ----------------------------------------------------
__int64 __fastcall sub_1404D1640(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	__int64 i; // rbx

	v2 = qword_140C65A38;
	sub_1404D1570((_QWORD*)qword_140C65A38);
	for (i = 0i64; (unsigned int)i < *(_DWORD*)a2; i = (unsigned int)(i + 1))
		sub_1404D16D0(v2, (unsigned int*)(*(_QWORD*)(a2 + 8) + 40 * i), 1);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "RewardTracksLoaded", byte_1409D138F);
	return 0i64;
}
// 1409D138F: using guessed type _BYTE byte_1409D138F[10];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A38: using guessed type __int64 qword_140C65A38;

