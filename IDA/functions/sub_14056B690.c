#include "../winhttp.h"

//----- (000000014056B690) ----------------------------------------------------
__int64 __fastcall sub_14056B690(__int64 a1, int a2, int a3)
{
	__int64 result; // rax

	if (((a3 ^ a2) & 0x40000000) != 0 && (a3 & 0x40000000) != 0)
		return sub_1400EA3E0(
			*(_QWORD*)(qword_140C65898 + 29504),
			"PlayerPathExplorerScavengerHuntStarted",
			byte_1409ED2E4,
			*(_QWORD*)(*(_QWORD*)(a1 + 8) + 48i64));
	return result;
}
// 1409ED2E4: using guessed type _BYTE byte_1409ED2E4[4];
// 140C65898: using guessed type __int64 qword_140C65898;

