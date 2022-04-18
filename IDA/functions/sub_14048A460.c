#include "../winhttp.h"

//----- (000000014048A460) ----------------------------------------------------
__int64 __fastcall sub_14048A460(__int64 a1, _DWORD* a2)
{
	__int64 v2; // rcx
	int v3; // eax
	int v5; // [rsp+20h] [rbp-18h]

	v2 = qword_140C65930;
	*(_DWORD*)(qword_140C65930 + 288) = *a2;
	*(_DWORD*)(v2 + 292) = a2[1];
	v3 = a2[2];
	*(_DWORD*)(v2 + 296) = v3;
	v5 = v3;
	Apollo_LUAEvent(
		*(_QWORD*)(qword_140C65898 + 29504),
		"ContractGoodQualityChanged",
		byte_1409E9234,
		*(unsigned int*)(v2 + 292),
		v5);
	return 0i64;
}
// 1409E9234: using guessed type _BYTE byte_1409E9234[32];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65930: using guessed type __int64 qword_140C65930;

