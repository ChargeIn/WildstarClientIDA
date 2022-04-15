#include "../winhttp.h"

//----- (000000014057D0F0) ----------------------------------------------------
__int64 __fastcall sub_14057D0F0(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rbx

	v4 = 0i64;
	*(_QWORD*)(a1 + 656) = 0i64;
	sub_14004EED0((__int64*)(a1 + 648), *(unsigned int*)(a2 + 16));
	if (*(_DWORD*)(a2 + 16))
	{
		do
		{
			++v4;
			*(_QWORD*)(*(_QWORD*)(a1 + 648) + 8 * v4 - 8) = *(_QWORD*)(*(_QWORD*)(a2 + 24) + 8 * v4 - 8);
		} while (v4 < *(unsigned int*)(a2 + 16));
	}
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "WarPartyBossTokensUpdated", byte_1409EA85C, a1);
	return 0i64;
}
// 1409EA85C: using guessed type _BYTE byte_1409EA85C[24];
// 140C65898: using guessed type __int64 qword_140C65898;

