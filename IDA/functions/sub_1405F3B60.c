#include "../winhttp.h"

//----- (00000001405F3B60) ----------------------------------------------------
__int64 __fastcall sub_1405F3B60(__int64 a1, __int64 a2)
{
	__int64 v3; // rbx
	__int64 v4; // rax

	sub_1405F8C40(a1 + 236, a2);
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 176i64))(a1))
	{
		v3 = *(_QWORD*)(qword_140C65898 + 29504);
		v4 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
		Apollo_LUAEvent(v3, "PublicEventStatsUpdate", byte_1409ECEAC, v4);
	}
	return 0i64;
}
// 1409ECEAC: using guessed type _BYTE byte_1409ECEAC[4];
// 140C65898: using guessed type __int64 qword_140C65898;

