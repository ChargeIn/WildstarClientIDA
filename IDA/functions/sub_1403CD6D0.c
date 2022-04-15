#include "../winhttp.h"

//----- (00000001403CD6D0) ----------------------------------------------------
__int64 __fastcall sub_1403CD6D0(__int64 a1, __int64 a2)
{
	int v2; // r8d
	int v3; // eax

	*(_QWORD*)(a1 + 29960) = *(_QWORD*)a2;
	*(_QWORD*)(a1 + 29968) = *(_QWORD*)(a2 + 8);
	v2 = *(_DWORD*)(a2 + 16);
	v3 = *(_DWORD*)(a1 + 29976) & 1;
	*(_DWORD*)(a1 + 29976) = v2;
	if (v3 != (v2 & 1))
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingPrivacyUpdated", byte_1409EC064);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "HousingBasicsUpdated", byte_1409D1067);
	return 0i64;
}
// 1409D1067: using guessed type _BYTE byte_1409D1067[24];
// 1409EC064: using guessed type _BYTE byte_1409EC064[24];
// 140C65898: using guessed type __int64 qword_140C65898;

